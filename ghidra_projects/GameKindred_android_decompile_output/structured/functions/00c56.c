// functions/00c56 — 13 functions
#include "libGameKindred.h"




void FUN_00c56048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c56054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x270))();
  return;
}




void FUN_00c56058(long param_1,long param_2,byte param_3)

{
  ulong uVar1;
  
  *(long *)(param_1 + 0xe08) = param_2;
  *(byte *)(param_1 + 0xe10) = param_3 & 1;
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe11) = 1;
  }
  FUN_00cb0394(*(undefined8 *)(param_1 + 0xe08),param_1 + 0xe24);
  FUN_00f0e670(param_1 + 0x518,&DAT_01bee7f6,2);
  if (*(long *)(param_1 + 0x6d8) != 0) {
    FUN_00f0e628(param_1 + 0x608);
  }
  *(undefined8 *)(param_1 + 0xe18) = *(undefined8 *)(param_2 + 0x28);
  FUN_00c560d0(param_1);
  return;
}




void FUN_00c560d0(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  char *__s2;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint local_90 [2];
  size_t local_88;
  char *local_80;
  int local_78;
  int local_70;
  long local_48;
  
  puVar9 = local_90;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar12 = 0xff;
  uVar2 = *(uint *)(param_1 + 0x68c);
  *(uint *)(param_1 + 0x95c) =
       *(uint *)(param_1 + 0x95c) & 0xfffffffb | (uint)*(byte *)(param_1 + 0xe10) << 2;
  bVar4 = (*(byte *)(param_1 + 0xe10) != 0) == (*(char *)(param_1 + 0xe11) != '\0');
  uVar11 = uVar12;
  if (bVar4) {
    uVar11 = 0xb2;
  }
  if ((uVar2 >> 7 & 0xff) != uVar11) {
    *(uint *)(param_1 + 0x68c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar11 << 7;
    FUN_0091ada4(param_1 + 0x608);
  }
  FUN_00f0e6bc(0x3f800000,param_1 + 0x608);
  uVar11 = *(uint *)(param_1 + 0x59c);
  if (bVar4) {
    uVar12 = 0x4c;
  }
  if ((uVar11 >> 7 & 0xff) != uVar12) {
    *(uint *)(param_1 + 0x59c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | uVar12 << 7;
    FUN_0091ada4(param_1 + 0x518);
  }
  *(uint *)(param_1 + 0x77c) =
       *(uint *)(param_1 + 0x77c) & 0xfffffff8 | *(uint *)(param_1 + 0x77c) & 3 | (uint)bVar4 << 2;
  if ((*(char *)(param_1 + 0xe10) != '\0') &&
     (*(undefined8 **)(param_1 + 0xe08) != (undefined8 *)0x0)) {
    FUN_008fa54c(local_90,**(undefined8 **)(param_1 + 0xe08));
    lVar6 = FUN_00cc8184(local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (lVar6 == 0) goto LAB_00c56288;
    if (*(char *)(param_1 + 0xe11) == '\0') {
      uVar8 = FUN_00cc851c(lVar6);
      if ((uVar8 & 1) == 0) {
        FUN_00cc7e2c(local_90,lVar6);
        uVar11 = local_90[0];
        __n = (ulong)((byte)local_90[0] >> 1);
        if ((local_90[0] & 1) != 0) {
          __n = local_88;
        }
        sVar1 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar1 = DAT_0320ffb0;
        }
        if (__n == sVar1) {
          pcVar10 = (char *)((ulong)local_90 | 1);
          __s1 = pcVar10;
          if ((local_90[0] & 1) != 0) {
            __s1 = local_80;
          }
          __s2 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            __s2 = &DAT_0320ffa9;
          }
          if ((local_90[0] & 1) == 0) {
            if (__n != 0) {
              lVar6 = -(ulong)((byte)local_90[0] >> 1);
              do {
                if (*pcVar10 != *__s2) goto LAB_00c56350;
                pcVar10 = pcVar10 + 1;
                lVar6 = lVar6 + 1;
                __s2 = __s2 + 1;
              } while (lVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00c56350;
          *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) & 0xfffffffb;
          *(uint *)(param_1 + 0xc6c) = *(uint *)(param_1 + 0xc6c) & 0xfffffffb;
          *(uint *)(param_1 + 0xd5c) = *(uint *)(param_1 + 0xd5c) & 0xfffffffb;
        }
        else {
LAB_00c56350:
          *(uint *)(param_1 + 0xc6c) = *(uint *)(param_1 + 0xc6c) | 4;
          *(uint *)(param_1 + 0xd5c) = *(uint *)(param_1 + 0xd5c) | 4;
          if (((DAT_0313bb98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0313bb98), iVar5 != 0))
          {
            FUN_00e70510(&DAT_0313bb88);
            __cxa_atexit(FUN_0090e338,&DAT_0313bb88,&PTR_LOOP_02be3000);
            __cxa_guard_release(&DAT_0313bb98);
          }
          if (local_78 == 0) {
            if (local_70 != 0) {
              FUN_00e70e18(&DAT_0313bb88,&DAT_01bb6d43);
              FUN_00f0d75c(param_1 + 0xcd8,&DAT_0313bb88);
              pcVar10 = "opal_icon_small";
              goto LAB_00c56418;
            }
          }
          else {
            FUN_00e70e18(&DAT_0313bb88,&DAT_01bb6d43);
            FUN_00f0d75c(param_1 + 0xcd8,&DAT_0313bb88);
            pcVar10 = "ice_icon_small";
LAB_00c56418:
            FUN_00f0e578(param_1 + 0xbe8,pcVar10);
          }
          *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) & 0xfffffffb;
          uVar11 = local_90[0];
        }
        if ((uVar11 & 1) != 0) {
          operator_delete(local_80);
        }
        goto LAB_00c56280;
      }
      *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) | 4;
      uVar7 = FUN_00e6ce7c("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
      FUN_00f0d75c(param_1 + 0x960,uVar7);
      puVar9 = (uint *)(param_1 + 0xe24);
    }
    else {
      *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) | 4;
      uVar7 = FUN_00e6ce7c("MENU_MARKET_CTA_OWNED",0);
      FUN_00f0d75c(param_1 + 0x960,uVar7);
      local_90[0] = 0xffa0a0a0;
    }
    FUN_00f0d7fc(param_1 + 0x960,puVar9);
    *(uint *)(param_1 + 0xc6c) = *(uint *)(param_1 + 0xc6c) & 0xfffffffb;
    *(uint *)(param_1 + 0xd5c) = *(uint *)(param_1 + 0xd5c) & 0xfffffffb;
  }
LAB_00c56280:
  FUN_00c56518(param_1);
LAB_00c56288:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c56490(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe20) = param_1;
  return;
}




void FUN_00c56498(long param_1)

{
  if (*(long *)(param_1 + 0x6d8) != 0) {
    FUN_00f0e628(param_1 + 0x608);
  }
  FUN_00f0e670(param_1 + 0x518,&DAT_01bee7f6,2);
  return;
}




void FUN_00c564d4(long param_1)

{
  if (*(long *)(param_1 + 0x6d8) == 0) {
    FUN_00a9bc60(param_1 + 0x608,*(undefined8 *)(param_1 + 0xe18));
  }
  FUN_00f0e670(param_1 + 0x518,param_1 + 0xe24,2);
  FUN_00c56518(param_1);
  return;
}




void FUN_00c56518(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x608;
  fVar6 = *(float *)(param_1 + 0xe20) / 1.3333;
  *(uint *)(param_1 + 0x68c) = *(uint *)(param_1 + 0x68c) & 0xffffffbf;
  FUN_00f13f08(*(float *)(param_1 + 0xe20),fVar6,param_1 + 0x3d0);
  local_60 = *(float *)(param_1 + 0xe20);
  uVar5 = 0xc0c00000;
  fStack_64 = fVar6 + -6.0;
  local_68 = local_60 + -6.0;
  fStack_5c = fVar6;
  FUN_00f13f18(lVar1,&local_68);
  local_68 = (float)FUN_00f0e700(lVar1);
  fStack_64 = (float)uVar5;
  FUN_00f13f18(param_1 + 0x6f8,&local_68);
  lVar2 = param_1 + 0x518;
  FUN_00f13f18(lVar2,&local_60);
  FUN_00f07940(0,0,lVar2,8,param_1 + 0x3d0,8);
  FUN_00f07940(0,0,lVar1,8,lVar2,8);
  FUN_00f07940(0,0,param_1 + 0x6f8,8,lVar1,8);
  uVar5 = 0;
  FUN_00f07940(0,param_1 + 0x7e8,3,lVar1,3);
  *(uint *)(param_1 + 0x95c) =
       *(uint *)(param_1 + 0x95c) & 0xffffffbf | (uint)*(byte *)(param_1 + 0xe10) << 6;
  if (*(byte *)(param_1 + 0xe10) != 0) {
    lVar1 = param_1 + 0x960;
    FUN_00f07b18(0x41400000,lVar1,0,lVar2,2);
    FUN_00f07b18(0,lVar1,4,lVar2,4);
    FUN_00f07b18(0xc0c00000,param_1 + 0xbe8,1,param_1 + 0xcd8,3);
    FUN_00f07b18(0,param_1 + 0xbe8,5,param_1 + 0xcd8,5);
    lVar3 = param_1 + 0xa90;
    FUN_00f13238(lVar3);
    FUN_00f07b18(0,lVar3,4,lVar2,4);
    FUN_00f07b18(0,lVar3,5,lVar1,5);
    *(uint *)(param_1 + 0xb14) = *(uint *)(param_1 + 0xb14) & 0xffffffbf;
  }
  FUN_00f13238(param_1 + 0x278);
  local_68 = (float)FUN_00f13e54(param_1 + 0x278);
  fStack_64 = (float)uVar5;
  FUN_00f13f18(param_1,&local_68);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c56758(long param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) == 0) {
    if (*(byte *)(param_1 + 0xe11) != (param_2 & 1)) {
      *(byte *)(param_1 + 0xe11) = param_2 & 1;
      FUN_00c560d0(param_1);
      return;
    }
  }
  return;
}




void FUN_00c567a4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x86c) =
       *(uint *)(param_1 + 0x86c) & 0xfffffff8 | *(uint *)(param_1 + 0x86c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c567b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c567c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x270))();
  return;
}




void FUN_00c567c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe0a8;
  FUN_00f0d3a4(param_1 + 0x19b);
  param_1[0x17d] = &PTR_FUN_028266f0;
  param_1[0x194] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x197);
  FUN_00f13d08(param_1 + 0x17d);
  param_1[0x152] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x169);
  FUN_00f13d08(param_1 + 0x152);
  FUN_00f0d3a4(param_1 + 300);
  FUN_00f01868(param_1 + 0x11b);
  param_1[0xfd] = &PTR_FUN_028266f0;
  param_1[0x114] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x117);
  FUN_00f13d08(param_1 + 0xfd);
  param_1[0xdf] = &PTR_FUN_028266f0;
  param_1[0xf6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf9);
  FUN_00f13d08(param_1 + 0xdf);
  param_1[0xc1] = &PTR_FUN_028266f0;
  param_1[0xd8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdb);
  FUN_00f13d08(param_1 + 0xc1);
  param_1[0xa3] = &PTR_FUN_028266f0;
  param_1[0xba] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbd);
  FUN_00f13d08(param_1 + 0xa3);
  param_1[0x7a] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x7a);
  param_1[0x4f] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4f);
  FUN_009c825c(param_1);
  return;
}




void FUN_00c5691c(void *param_1)

{
  FUN_00c567c8();
  operator_delete(param_1);
  return;
}




void FUN_00c56940(long *param_1)

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
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint *puVar26;
  undefined4 uVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  code *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar28 = tpidr_el0;
  local_90 = *(long *)(lVar28 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2a;
  param_1[0x29] = 0;
  *param_1 = (long)&PTR_FUN_027fe228;
  FUN_00f0fe84(plVar1);
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x90;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0xae;
  FUN_00f1306c(plVar3);
  plVar4 = param_1 + 0xd9;
  FUN_00f017e8();
  plVar5 = param_1 + 0xea;
  param_1[0xd9] = (long)&PTR_FUN_027c1f80;
  FUN_00aba378(plVar5,0);
  plVar6 = param_1 + 0x578;
  FUN_00f1306c(plVar6);
  plVar7 = param_1 + 0x5a3;
  FUN_00f0d160();
  FUN_00f0e4a8();
  FUN_00f0d160();
  plVar8 = param_1 + 0x60d;
  FUN_00f11234();
  plVar9 = param_1 + 0x641;
  FUN_00f017e8(plVar9);
  plVar10 = param_1 + 0x652;
  param_1[0x641] = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar10,0);
  plVar11 = param_1 + 0x90a;
  FUN_00f0d160(plVar11);
  plVar12 = param_1 + 0x930;
  FUN_00f0e4a8();
  plVar13 = param_1 + 0x94e;
  FUN_00f0e4a8();
  plVar14 = param_1 + 0x96c;
  FUN_00f0d160();
  plVar15 = param_1 + 0x992;
  FUN_00ab9298(plVar15,0);
  plVar16 = param_1 + 0xd70;
  FUN_00f1306c(plVar16);
  plVar17 = param_1 + 0xd9b;
  FUN_00f0d160();
  plVar18 = param_1 + 0xdc1;
  FUN_00f0e4a8();
  plVar19 = param_1 + 0xddf;
  FUN_00f0d160();
  plVar20 = param_1 + 0xe05;
  FUN_00f1306c();
  plVar21 = param_1 + 0xe30;
  FUN_00f0e4a8();
  plVar22 = param_1 + 0xe4e;
  FUN_00f1306c(plVar22);
  plVar23 = param_1 + 0xe79;
  FUN_00afbfb0();
  plVar24 = param_1 + 0xeb5;
  FUN_00f0ac5c(plVar24);
  FUN_00f0e4a8();
  plVar25 = param_1 + 0xefc;
  FUN_00f0d160();
  FUN_00c38bc0();
  FUN_00f0e4a8();
  *(undefined8 *)((long)param_1 + 0x8077) = 0;
  param_1[0x100e] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f133a4(plVar3,plVar10,1);
  FUN_00f133a4(plVar3,plVar11,1);
  FUN_00f133a4(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f133a4(plVar6,plVar7,1);
  FUN_00f133a4(plVar6,param_1 + 0x5c9,1);
  FUN_00f133a4(plVar6,param_1 + 0x5e7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f023ec(plVar9,plVar13,1);
  FUN_00f023ec(plVar9,plVar12,1);
  FUN_00f023ec(plVar9,plVar14,1);
  FUN_00f023ec(plVar9,plVar15,1);
  FUN_00f023ec(plVar9,plVar16,1);
  FUN_00f133a4(plVar16,plVar17,1);
  FUN_00f133a4(plVar16,plVar18,1);
  FUN_00f133a4(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar20,1);
  FUN_00f133a4(plVar20,plVar21,1);
  FUN_00f133a4(plVar20,plVar22,1);
  FUN_00f133a4(plVar22,plVar24,1);
  FUN_00f0ad88(plVar24,plVar23,1);
  FUN_00f133a4(plVar22,plVar25,1);
  FUN_00f133a4(plVar20,param_1 + 0xff0,1);
  FUN_00f023ec(param_1 + 0xff0,param_1 + 0xf22,1);
  FUN_00f0e548(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0ff6c(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f10428(plVar1,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
               "tile_edge_gradient_vert",0,0,0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar31 = *(uint *)((long)param_1 + 0x504);
  if ((uVar31 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar2);
  }
  uVar29 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_00ab703c(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar29,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_98 = DAT_03210c64;
  local_c0 = thunk_FUN_00c57d20;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 0x653,&local_c0);
  FUN_00b09454(plVar10,1);
  FUN_00f0d378(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  uVar29 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_00f0d75c(plVar11,uVar29);
  *(uint *)((long)param_1 + 0x48d4) = *(uint *)((long)param_1 + 0x48d4) & 0xfffffffb;
  FUN_00ab75d0(0x42200000,0x42c80000,0x44228000,plVar5);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar27 = DAT_03210c90;
  local_c0 = FUN_00c57538;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0xeb,&local_c0);
  FUN_00b09144(0xbf800000,plVar5);
  FUN_00aba748(plVar5,"ice_icon_small");
  FUN_00f0d378(param_1 + 0x1ce,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0da30(param_1 + 0x1ce,1);
  FUN_00ab7638(0x4019999a,plVar5);
  FUN_00ab71fc(plVar5,1);
  *(uint *)((long)param_1 + 0x2c44) = *(uint *)((long)param_1 + 0x2c44) & 0xffffffbf;
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  uVar29 = FUN_00e6ce7c("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_00f0d75c(plVar7,uVar29);
  FUN_00f0e540(param_1 + 0x5c9,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0d378(param_1 + 0x5e7,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f112f0(plVar8,1);
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar12,&DAT_01bee7f6,2);
  puVar26 = (uint *)((long)param_1 + 0x4a04);
  uVar31 = *puVar26;
  if ((uVar31 & 0x7f80) != 0x5f80) {
    *puVar26 = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar12);
    uVar31 = *puVar26;
  }
  *puVar26 = uVar31 | 0x10;
  FUN_00f0e548(plVar13,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x969) = *(byte *)(param_1 + 0x969) | 2;
  FUN_00f0e670(plVar13,&DAT_01bee7f6,2);
  uVar31 = *(uint *)((long)param_1 + 0x4af4);
  if ((uVar31 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4af4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0d92c(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  FUN_00f0dac8(plVar14,3);
  FUN_00f0e548(plVar21,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_plus");
  FUN_00f13f08(0x42c80000,0x42c80000,plVar21);
  FUN_00f0e548(param_1 + 0xede,PTR_s_build___MenuPartsCommon_tga_02be3530,"essence_icon_small");
  FUN_00f13f08(0x43480000,0x43480000,param_1 + 0xede);
  uVar29 = FUN_00d6eb50();
  uVar29 = FUN_00d6eb5c(uVar29,"*PlayerEssenceEffects*");
  FUN_00afc274(plVar23,uVar29);
  FUN_00f13f08(0x43480000,0x43480000,plVar23);
  local_c0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0xe79] + 0x28))(plVar23,&local_c0);
  if ((*(float *)(param_1 + 0xe82) != 1.5) || (*(float *)((long)param_1 + 0x7414) != 1.5)) {
    lVar32 = NEON_fmov(0x3fc00000,4);
    param_1[0xe82] = lVar32;
    FUN_0091ada4(plVar23);
  }
  FUN_00afd0d4(plVar23);
  FUN_00afd018(plVar23,"ESSENCE_ICON");
  FUN_00f13f08(0x43480000,0x43480000,plVar24);
  FUN_00f0d92c(plVar25,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00e705c8(&local_c0,&DAT_01bbde01);
  FUN_00f0d75c(plVar25,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  FUN_00f1340c(plVar20,0);
  uVar29 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_00ab703c(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar29,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_c0 = FUN_00c57548;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0x993,&local_c0);
  FUN_00f0d378(param_1 + 0xa76,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00ab7628(0x430c0000,plVar15);
  FUN_00b09144(0xbf800000,plVar15);
  FUN_00f0d378(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  uVar29 = FUN_00e6ce7c("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_00f0d75c(plVar17,uVar29);
  FUN_00f0e548(plVar18,PTR_s_build___MenuPartsCommon_tga_02be3530,"essence_icon_small");
  FUN_00f13f08(0x42480000,0x42480000,plVar18);
  FUN_00f0d378(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00e705c8(&local_c0,"0");
  FUN_00f0d75c(plVar19,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
  }
  local_98 = DAT_03210f8c;
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  local_c0 = thunk_FUN_00c5802c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 0x73,&local_c0);
  local_c0 = thunk_FUN_00c5802c;
  local_98 = DAT_03210f60;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 0x73,&local_c0);
  *(uint *)((long)param_1 + 0x328c) = *(uint *)((long)param_1 + 0x328c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x70ac) = *(uint *)((long)param_1 + 0x70ac) & 0xfffffffb;
  uVar30 = FUN_0093dbe8();
  if ((uVar30 & 1) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  if (*(long *)(lVar28 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

