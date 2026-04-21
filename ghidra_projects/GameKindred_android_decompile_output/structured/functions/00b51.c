// functions/00b51 — 17 functions
#include "libGameKindred.h"




void FUN_00b51068(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00b510e8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  code *local_98;
  long *plStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00b79680();
  FUN_00948cd8(param_1 + 0x58d);
  *param_1 = (long)&PTR_FUN_027e2ab8;
  param_1[0x58d] = (long)&PTR_FUN_027e2d00;
  param_1[0x590] = (long)&PTR_FUN_027e3098;
  plVar2 = param_1 + 0x594;
  param_1[0x591] = 0;
  param_1[0x593] = (long)&PTR_FUN_027e3138;
  param_1[0x592] = (long)&PTR_FUN_027e30e0;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x5b2;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x5d0;
  FUN_00f0c714(plVar4);
  plVar5 = param_1 + 0x5eb;
  FUN_00f0e4a8(plVar5);
  FUN_00b56670(param_1 + 0x609);
  FUN_00b55634(param_1 + 0x830,param_1);
  plVar6 = param_1 + 0x9ec;
  FUN_00af772c(plVar6);
  plVar7 = param_1 + 0x12c1;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x12df;
  FUN_00b15e58(plVar8,0);
  memset(param_1 + 0x138e,0,0x49);
  FUN_008fa54c(&local_98,"MARKET");
  FUN_008fce60(param_1 + 0x589,&local_98);
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  plVar1 = param_1 + 0x17;
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(param_1 + 0x62,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuBackground_HeroHub_p_02be3558,"full_splash_64");
  FUN_00f0e670(plVar2,&DAT_01bb4864,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_shadow");
  local_98._0_4_ = 0xffd27a91;
  FUN_00f0e670(plVar3,&local_98,2);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff1a0a12);
  FUN_00f0c774(plVar4,&local_98);
  *(uint *)((long)param_1 + 0x4204) = *(uint *)((long)param_1 + 0x4204) & 0xfffffffb;
  FUN_00f023ec(plVar7,plVar8,1);
  *(uint *)((long)param_1 + 0x509c) = *(uint *)((long)param_1 + 0x509c) | 4;
  FUN_00af7d24(plVar6);
  FUN_00af7ba0(plVar6,0);
  FUN_00f01a4c(param_1 + 0x567,1);
  local_70 = FUN_00f048a4("UI::EVENT_IAP_PROCESSING");
  local_98 = FUN_00b514a0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar9 = (uint *)((long)param_1 + 0x968c);
  uVar12 = *puVar9;
  if ((uVar12 & 0x7f80) != 0x3f80) {
    *puVar9 = uVar12 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar7);
    uVar12 = *puVar9;
  }
  *puVar9 = uVar12 & 0xfffffffb | 0x10;
  if ((*(float *)(param_1 + 0x12e8) != 3.0) || (*(float *)((long)param_1 + 0x9744) != 3.0)) {
    lVar13 = NEON_fmov(0x40400000,4);
    param_1[0x12e8] = lVar13;
    FUN_0091ada4(plVar8);
  }
  iVar11 = FUN_0092ec00();
  if (iVar11 == 0xe) {
    FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  }
  FUN_009307c8(param_1 + 0x590);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b514a0(long param_1)

{
  *(uint *)(param_1 + 0x968c) = *(uint *)(param_1 + 0x968c) | 4;
  FUN_00b16058(param_1 + 0x96f8);
  return;
}




void FUN_00b514c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027e2ab8;
  param_1[0x58d] = &PTR_FUN_027e2d00;
  param_1[0x590] = &PTR_FUN_027e3098;
  param_1[0x593] = &PTR_FUN_027e3138;
  param_1[0x592] = &PTR_FUN_027e30e0;
  FUN_00b51704();
  FUN_00930530(param_1 + 0x590);
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  if ((*(byte *)(param_1 + 0x1394) & 1) != 0) {
    operator_delete((void *)param_1[0x1396]);
  }
  if ((*(byte *)(param_1 + 0x1391) & 1) != 0) {
    operator_delete((void *)param_1[0x1393]);
  }
  if ((void *)param_1[0x138f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x138f]);
    param_1[0x138f] = 0;
    param_1[0x138e] = 0;
  }
  param_1[0x12df] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x136e;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x12df);
  param_1[0x12c1] = &PTR_FUN_028266f0;
  param_1[0x12d8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12db);
  FUN_00f13d08(param_1 + 0x12c1);
  FUN_00af7be4(param_1 + 0x9ec);
  FUN_00b557bc(param_1 + 0x830);
  FUN_00b517b0(param_1 + 0x609);
  param_1[0x5eb] = &PTR_FUN_028266f0;
  param_1[0x602] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x605);
  FUN_00f13d08(param_1 + 0x5eb);
  FUN_00f13d08(param_1 + 0x5d0);
  param_1[0x5b2] = &PTR_FUN_028266f0;
  param_1[0x5c9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5cc);
  FUN_00f13d08(param_1 + 0x5b2);
  param_1[0x594] = &PTR_FUN_028266f0;
  param_1[0x5ab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5ae);
  FUN_00f13d08(param_1 + 0x594);
  param_1[0x593] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x593);
  FUN_0093051c(param_1 + 0x590);
  FUN_00948d58(param_1 + 0x58d);
  FUN_00b796c4(param_1);
  return;
}




void FUN_00b51704(long param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_0096bd60(param_1 + 0x2c98);
  FUN_00b55880(param_1 + 0x4180);
  uVar1 = *(uint *)(param_1 + 0x9c70);
  puVar3 = *(undefined8 **)(param_1 + 0x9c78);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    do {
      pvVar2 = (void *)*puVar3;
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + 0x18));
        }
        operator_delete(pvVar2);
      }
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    puVar3 = *(undefined8 **)(param_1 + 0x9c78);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(uint *)(param_1 + 0x9c70) = 0;
  }
  FUN_00b79724(param_1);
  *(undefined8 *)(param_1 + 0x9c80) = 0;
  return;
}




void FUN_00b517b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e3c30;
  param_1[0x199] = &PTR_FUN_027d8490;
  FUN_00f0d3a4(param_1 + 0x200);
  param_1[0x1e2] = &PTR_FUN_028266f0;
  param_1[0x1f9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1fc);
  FUN_00f13d08(param_1 + 0x1e2);
  param_1[0x1c4] = &PTR_FUN_028266f0;
  param_1[0x1db] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1de);
  FUN_00f13d08(param_1 + 0x1c4);
  param_1[0x199] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1b0);
  FUN_00f13d08(param_1 + 0x199);
  FUN_00ed1e14(param_1 + 0x16b);
  FUN_00ed00e0(param_1 + 0xc4);
  FUN_00f13d08(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_028266f0;
  param_1[0x89] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  FUN_00be189c(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}




void FUN_00b518b0(long param_1)

{
  FUN_00b514c0(param_1 + -0x2c68);
  return;
}




void FUN_00b518bc(long param_1)

{
  FUN_00b514c0(param_1 + -0x2c80);
  return;
}




void FUN_00b518c8(long param_1)

{
  FUN_00b514c0(param_1 + -0x2c98);
  return;
}




void FUN_00b518d4(void *param_1)

{
  FUN_00b514c0();
  operator_delete(param_1);
  return;
}




void FUN_00b518f8(long param_1)

{
  FUN_00b514c0((void *)(param_1 + -0x2c68));
  operator_delete((void *)(param_1 + -0x2c68));
  return;
}




void FUN_00b51924(long param_1)

{
  FUN_00b514c0((void *)(param_1 + -0x2c80));
  operator_delete((void *)(param_1 + -0x2c80));
  return;
}




void FUN_00b51950(long param_1)

{
  FUN_00b514c0((void *)(param_1 + -0x2c98));
  operator_delete((void *)(param_1 + -0x2c98));
  return;
}




void FUN_00b5197c(long param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*param_2 == 0) goto LAB_00b51b4c;
  FUN_008fcdb8(local_50,*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
  FUN_00aa23b8(param_2);
  FUN_008fcdb8(local_68,&DAT_0320ffa8);
  if (*param_2 != 0) {
    FUN_008fce60(local_68,*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
  }
  uVar6 = (ulong)(local_50[0] >> 1);
  uVar2 = uVar6;
  if ((local_50[0] & 1) != 0) {
    uVar2 = local_48;
  }
  if (uVar2 == 5) {
    iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"skins",5);
    if (iVar4 != 0) {
      uVar6 = (ulong)(local_50[0] >> 1);
      goto LAB_00b51a4c;
    }
    lVar5 = 0x3048;
LAB_00b51adc:
    plVar1 = (long *)(param_1 + lVar5);
    FUN_00a9f964(param_1,*(uint *)((long)plVar1 + 0x84) >> 0xf,&DAT_0320ffa8);
    uVar2 = (ulong)(local_68[0] >> 1);
    if ((local_68[0] & 1) != 0) {
      uVar2 = local_60;
    }
    if (uVar2 != 0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,local_68);
    }
  }
  else {
LAB_00b51a4c:
    uVar2 = uVar6;
    if ((local_50[0] & 1) != 0) {
      uVar2 = local_48;
    }
    if (uVar2 == 6) {
      iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"boosts",6);
      if (iVar4 == 0) {
        lVar5 = 0x4180;
        goto LAB_00b51adc;
      }
      uVar6 = (ulong)(local_50[0] >> 1);
    }
    if ((local_50[0] & 1) != 0) {
      uVar6 = local_48;
    }
    if ((uVar6 == 3) && (iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"ice",3), iVar4 == 0)) {
      FUN_00a9bda0();
    }
    else {
      FUN_00b51b74(param_1,local_50,local_68);
    }
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b51b4c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b51b74(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  ulong uVar3;
  size_t __n;
  byte *__s2;
  byte bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *__s1;
  undefined2 *puVar9;
  
  FUN_008fce60(param_1 + 0x9c88);
  pbVar1 = (byte *)(param_1 + 0x9ca0);
  FUN_008fce60(pbVar1,param_3);
  if (*(uint *)(param_1 + 0x2c38) != 0) {
    puVar9 = *(undefined2 **)(param_1 + 0x2c40);
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    puVar2 = puVar9 + (ulong)*(uint *)(param_1 + 0x2c38) * 8;
    do {
      lVar6 = *(long *)(puVar9 + 4);
      if (lVar6 != 0) {
        bVar4 = *(byte *)(lVar6 + 0x3a0);
        uVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar3 = *(ulong *)(lVar6 + 0x3a8);
        }
        if (uVar3 == __n) {
          __s1 = *(void **)(lVar6 + 0x3b0);
          if ((bVar4 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x3a1);
          }
          if ((bVar4 & 1) == 0) {
            if (__n == 0) {
LAB_00b51c74:
              FUN_008fce60(pbVar1,&DAT_0320ffa8);
              uVar3 = (ulong)(*pbVar1 >> 1);
              lVar6 = param_1 + 0x9ca1;
              if ((*pbVar1 & 1) != 0) {
                uVar3 = *(ulong *)(param_1 + 0x9ca8);
                lVar6 = *(long *)(param_1 + 0x9cb0);
              }
              FUN_008fcea8(param_1 + 0x9c88,lVar6,uVar3);
              FUN_00a9f964(param_1,*puVar9,&DAT_0320ffa8);
              uVar3 = (ulong)(*param_3 >> 1);
              if ((*param_3 & 1) != 0) {
                uVar3 = *(ulong *)(param_3 + 8);
              }
              if (uVar3 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00b51d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(**(long **)(puVar9 + 4) + 0x160))(*(long **)(puVar9 + 4),param_3);
              return;
            }
            pbVar7 = (byte *)(lVar6 + 0x3a1);
            lVar6 = -(ulong)(bVar4 >> 1);
            pbVar8 = __s2;
            while (*pbVar7 == *pbVar8) {
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              pbVar8 = pbVar8 + 1;
              if (lVar6 == 0) goto LAB_00b51c74;
            }
          }
          else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00b51c74;
        }
      }
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar2);
  }
  return;
}




undefined4 FUN_00b51d1c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long local_d8;
  ulong local_d0;
  int local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  byte *local_70;
  byte *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_88 = 0x400;
  local_80 = 0;
  local_78 = 0;
  local_c0 = operator_new(0x28);
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[1] = 0x10000;
  local_c0[2] = 0;
  *local_c0 = 0;
  local_70 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    local_70 = param_1 + 1;
  }
  local_b8 = local_c0;
  local_68 = local_70;
  FUN_008fd344(&local_d8,&local_70);
  uVar5 = 0;
  if (local_80 != 0) goto LAB_00b51ed4;
  uVar5 = 0;
  if (local_c8 != 3) goto LAB_00b51ed4;
  lVar2 = FUN_008fd190(&local_d8,"chestHashedSku");
  if (local_d8 + (local_d0 & 0xffffffff) * 0x30 != lVar2) {
    lVar2 = FUN_008fd190(&local_d8,"chestAwards");
    if (local_d8 + (local_d0 & 0xffffffff) * 0x30 != lVar2) {
      lVar2 = FUN_008fd190(&local_d8,"chestHashedSku");
      if (local_d8 + (local_d0 & 0xffffffff) * 0x30 == lVar2) {
LAB_00b51e78:
        puVar4 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_70 = (byte *)0x1bb489b;
        local_60 = 0x100005;
        local_68 = (byte *)0xe;
        lVar2 = FUN_008feca4(&local_d8,&local_70);
        if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00b51e78;
        local_70 = (byte *)0x1bb489b;
        local_60 = 0x100005;
        local_68 = (byte *)0xe;
        puVar4 = (undefined8 *)FUN_008feca4(&local_d8,&local_70);
        if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      FUN_008fa54c(&local_70,puVar4);
      FUN_008fce60(param_3,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_5c,local_60));
      }
      local_70 = (byte *)0x1bb48aa;
      local_60 = 0x100005;
      local_68 = (byte *)0xb;
      uVar3 = FUN_008feca4(&local_d8,&local_70);
      FUN_00cafac0(uVar3,param_2);
      uVar5 = 1;
      goto LAB_00b51ed4;
    }
  }
  uVar5 = 0;
LAB_00b51ed4:
  puVar4 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_b8);
    operator_delete(puVar4);
  }
  free(local_a0);
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b51f60(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  byte local_228 [16];
  void *local_218;
  byte local_210 [16];
  void *local_200;
  ulong local_1f8;
  ulong local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined **local_1d0;
  undefined1 auStack_1c8 [16];
  byte local_1b8;
  void *local_1a8;
  undefined1 auStack_1a0 [48];
  byte local_170;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined1 auStack_130 [224];
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e84e5c(param_2);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00969254();
    bVar10 = false;
    if ((uVar3 & 1) != 0) {
      lVar9 = FUN_00969248();
      bVar10 = 0 < *(int *)(lVar9 + 0x38);
    }
    *(bool *)(param_1 + 0x9cb8) = bVar10;
    goto LAB_00b52320;
  }
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = (void *)0x0;
  FUN_00b51d1c(param_2 + 0x60,&local_1e0,&local_1f8);
  FUN_00976588(auStack_130);
  lVar9 = param_2 + 0x48;
  uVar3 = FUN_0096bf88(lVar9,auStack_130);
  if ((uVar3 & 1) == 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 < -0x16) {
      if (iVar1 == -0x18) {
        uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        pcVar6 = "MENU_DIALOG_SKU_UNAVAILABLE";
      }
      else if (iVar1 == -0x17) {
        uVar4 = FUN_00e6ce7c("MENU_DIALOG_ITEM_ALREADY_OWNED_TITLE",0);
        pcVar6 = "MENU_DIALOG_ITEM_ALREADY_OWNED";
      }
      else {
LAB_00b52288:
        uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        pcVar6 = "MENU_DIALOG_PURCHASE_FAILED";
      }
LAB_00b522a4:
      uVar7 = FUN_00e6ce7c(pcVar6,0);
      uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar7,uVar8,0,0);
    }
    else {
      if (iVar1 == -0x16) {
        uVar4 = FUN_00e6ce7c("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
        pcVar6 = "MENU_DIALOG_BOOST_CANT_AFFORD";
        goto LAB_00b522a4;
      }
      if (iVar1 != 0) goto LAB_00b52288;
      lVar9 = FUN_00969248();
      if (0 < *(int *)(lVar9 + 0x38)) {
        FUN_00b52dd4(param_1);
      }
      if ((int)local_1e0 != 0) {
        uVar3 = local_1f8 >> 1 & 0x7f;
        if ((local_1f8 & 1) != 0) {
          uVar3 = local_1f0;
        }
        if (uVar3 != 0) {
          FUN_008fcdb8(local_228,&local_1f8);
          FUN_00b5282c(param_1,param_2);
          if ((local_228[0] & 1) != 0) {
            operator_delete(local_218);
          }
        }
      }
      uVar11 = *(uint *)(param_1 + 0x2c38);
      if (uVar11 != 0) {
        lVar12 = *(long *)(param_1 + 0x2c40);
        lVar9 = lVar12;
        do {
          plVar5 = *(long **)(lVar9 + 8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 400))(plVar5,1);
            uVar11 = *(uint *)(param_1 + 0x2c38);
            lVar12 = *(long *)(param_1 + 0x2c40);
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar9 != lVar12 + (ulong)uVar11 * 0x10);
      }
    }
    uVar3 = FUN_00969254();
    bVar10 = false;
    if ((uVar3 & 1) != 0) {
      lVar9 = FUN_00969248();
      bVar10 = 0 < *(int *)(lVar9 + 0x38);
    }
    *(bool *)(param_1 + 0x9cb8) = bVar10;
  }
  else {
    switch(local_50) {
    case 0:
      FUN_00b52358(param_1,param_2,auStack_130);
      break;
    case 1:
      FUN_00b5262c(param_1,param_2,auStack_130);
      break;
    case 2:
      FUN_00975578(&local_1d0);
      uVar3 = FUN_0096bf40(lVar9,&local_1d0);
      if (((uVar3 & 1) != 0) && (lVar9 = FUN_00cc8270(lVar9,auStack_1a0), lVar9 != 0)) {
        FUN_00b52b80(param_1,param_2,lVar9);
      }
      local_1d0 = &PTR_FUN_027bca90;
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
        local_148 = 0;
        local_140 = (void *)0x0;
      }
      if (local_150 != (void *)0x0) {
        operator_delete__(local_150);
        local_158 = 0;
        local_150 = (void *)0x0;
      }
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      if ((local_1b8 & 1) != 0) {
        operator_delete(local_1a8);
      }
      FUN_00977ea0(auStack_1c8,1);
      break;
    case 3:
      FUN_008fcdb8(local_210,&local_1f8);
      FUN_00b5282c(param_1,param_2);
      if ((local_210[0] & 1) != 0) {
        operator_delete(local_200);
      }
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x2c38);
    if (*(uint *)(param_1 + 0x2c38) != 0) {
      lVar12 = *(long *)(param_1 + 0x2c40);
      lVar9 = lVar12;
      do {
        plVar5 = *(long **)(lVar9 + 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 400))(plVar5,1);
          uVar3 = (ulong)*(uint *)(param_1 + 0x2c38);
          lVar12 = *(long *)(param_1 + 0x2c40);
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != lVar12 + uVar3 * 0x10);
    }
  }
  FUN_009767f4(auStack_130);
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  FUN_008fefd4(&local_1e0,1);
LAB_00b52320:
  lVar9 = FUN_009580b8();
  FUN_009658c8(lVar9 + 0x18);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

