// functions/00c1e — 17 functions
#include "libGameKindred.h"




void FUN_00c1e310(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9b8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1e32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1 + 0x2cb0);
    return;
  }
  return;
}




void FUN_00c1e334(long param_1)

{
  if (*(long **)(param_1 + 0x9b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1e344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x9b8) + 8))();
    return;
  }
  return;
}




void FUN_00c1e34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f83d0;
  if ((*(byte *)(param_1 + 0x596) & 1) != 0) {
    operator_delete((void *)param_1[0x598]);
  }
  FUN_00ca47c0(param_1 + 0x553);
  param_1[0x40a] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x52b);
  FUN_00c925cc(param_1 + 0x40a);
  FUN_00f13d08(param_1 + 0x3f3);
  FUN_00c1d3c8(param_1 + 0x1e7);
  FUN_00f0d3a4(param_1 + 0x1c1);
  FUN_00f0d3a4(param_1 + 0x19b);
  FUN_00f0d3a4(param_1 + 0x175);
  param_1[0x149] = &PTR_FUN_027d3cc8;
  param_1[0x160] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x172] != (void *)0x0) {
    operator_delete__((void *)param_1[0x172]);
    param_1[0x172] = 0;
    param_1[0x171] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x149);
  FUN_00f01868(param_1 + 0x138);
  *param_1 = &PTR_FUN_02808130;
  FUN_00ca3c60(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_02826f38;
  param_1[0x4c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1e4d8(void *param_1)

{
  FUN_00c1e34c();
  operator_delete(param_1);
  return;
}




void FUN_00c1e4fc(long param_1,int *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined *puVar3;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f0d75c(param_1 + 0xcd8,param_2 + 0x1e);
  FUN_00f0d75c(param_1 + 0xe08,param_2 + 0x26);
  FUN_00ca3280((float)param_2[0x35],param_1 + 0xf38);
  if (*(char *)(param_1 + 0x2cc8) == '\0') {
    if ((*param_2 != 0) && (*(char *)((long)param_2 + 0xd9) == '\0')) {
      FUN_00caa8c8(local_60,param_2);
      puVar3 = PTR_s_build___Chests_tga_02be35c0;
      FUN_009697c8(local_78,local_60,"_tight");
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
      FUN_00ca4448(param_1,puVar3,pvVar1,&DAT_03210450);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    *(char *)(param_1 + 0x2cc8) = '\x01';
  }
  FUN_00c1e644(param_1,param_2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1e628(long param_1)

{
  FUN_00f0d75c(param_1 + 0xcd8);
  return;
}




void FUN_00c1e630(long param_1)

{
  FUN_00f0d75c(param_1 + 0xe08);
  return;
}




void FUN_00c1e638(long param_1,int param_2)

{
  FUN_00ca3280((float)param_2,param_1 + 0xf38);
  return;
}




void FUN_00c1e644(long *param_1,long param_2)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  char *__s2;
  undefined8 *puVar12;
  uint uVar13;
  char *pcVar14;
  void *__s1;
  undefined4 uVar15;
  undefined8 local_60;
  long local_58;
  
  puVar12 = &local_60;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_2 == 0) goto LAB_00c1e914;
  cVar3 = *(char *)(param_2 + 0xd8);
  cVar4 = *(char *)(param_2 + 0xd9);
  FUN_00ca442c(param_1,cVar3 != '\0' && cVar4 == '\0');
  *(uint *)((long)param_1 + 0xa44) =
       *(uint *)((long)param_1 + 0xa44) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xa44) & 3 | (uint)(cVar3 != '\0' && cVar4 != '\0') << 2;
  FUN_00ca4450(param_1);
  if (cVar4 == '\0') {
    FUN_00f0d75c(param_1 + 0x19b,param_2 + 0x78);
    piVar9 = (int *)FUN_009f6560(param_2,"displayProgressCur");
    piVar10 = (int *)FUN_009f6560(param_2,"displayProgressMax");
    if (((piVar9 == (int *)0x0) || (piVar10 == (int *)0x0)) || (*piVar10 < 2)) {
      *(uint *)((long)param_1 + 0xfbc) = *(uint *)((long)param_1 + 0xfbc) & 0xfffffffb;
    }
    else {
      FUN_00ca3130(0,(float)*piVar10,param_1 + 0x1e7);
      FUN_00ca3280((float)*piVar9,param_1 + 0x1e7);
      *(uint *)((long)param_1 + 0xfbc) =
           *(uint *)((long)param_1 + 0xfbc) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0xfbc) & 3 | (uint)(cVar3 == '\0') << 2;
      *(uint *)((long)param_1 + 0x2b1c) =
           *(uint *)((long)param_1 + 0x2b1c) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0x2b1c) & 3 | (uint)(cVar3 == '\0') << 2;
    }
    uVar11 = FUN_009f652c(param_2);
    FUN_00c1eb1c(param_1,uVar11);
    FUN_009f5e94(param_2 + 0x60,param_1 + 0x596,1);
    plVar1 = param_1 + 0x40a;
    if (cVar3 == '\0') {
      bVar5 = *(byte *)(param_1 + 0x596);
      __n = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        __n = param_1[0x597];
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = (void *)param_1[0x598];
        if ((bVar5 & 1) == 0) {
          __s1 = (void *)((long)param_1 + 0x2cb1);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar5 & 1) == 0) {
          if (__n != 0) {
            pcVar14 = (char *)((long)param_1 + 0x2cb1);
            lVar8 = -(ulong)(bVar5 >> 1);
            do {
              if (*pcVar14 != *__s2) goto LAB_00c1e8b4;
              pcVar14 = pcVar14 + 1;
              lVar8 = lVar8 + 1;
              __s2 = __s2 + 1;
            } while (lVar8 != 0);
          }
        }
        else if (__n != 0) {
          iVar7 = memcmp(__s1,__s2,__n);
          uVar13 = (uint)(iVar7 != 0) << 2;
          goto LAB_00c1e8d8;
        }
        uVar13 = 0;
      }
      else {
LAB_00c1e8b4:
        uVar13 = 4;
      }
LAB_00c1e8d8:
      *(uint *)((long)param_1 + 0x20d4) = *(uint *)((long)param_1 + 0x20d4) & 0xfffffffb | uVar13;
      FUN_00c938d4(plVar1,param_2 + 0xb8);
      puVar12 = (undefined8 *)&DAT_01bee7f6;
    }
    else {
      *(uint *)((long)param_1 + 0x20d4) = *(uint *)((long)param_1 + 0x20d4) | 4;
      uVar11 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
      FUN_00c938d4(plVar1,uVar11);
      local_60 = CONCAT44(local_60._4_4_,0xff5ac8f4);
    }
    FUN_00c927dc(plVar1,puVar12);
    FUN_00c93928(plVar1);
  }
  else {
    lVar8 = FUN_009f652c(param_2);
    if (lVar8 < 1) {
      uVar13 = *(uint *)((long)param_1 + 0xacc) & 0xfffffffb;
    }
    else {
      local_60 = FUN_009f652c(param_2);
      FUN_00b25438(param_1 + 0x149,&local_60);
      uVar15 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f0db64(uVar15,0,0x3f800000,param_1 + 0x149);
      uVar13 = *(uint *)((long)param_1 + 0xacc) | 4;
    }
    *(uint *)((long)param_1 + 0xacc) = uVar13;
  }
  FUN_00c1eba8(param_1);
LAB_00c1e914:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c1e944(long param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_3 == 7) {
    uVar2 = FUN_00e6ce7c("QUEST_WIN_OF_THE_DAY_7TH_TITLE",0);
    FUN_00f0d75c(param_1 + 0xcd8,uVar2);
    pcVar1 = "QUEST_SINISTER_SEVEN_DESCRIPTION";
  }
  else {
    if (param_3 == 3) {
      pcVar1 = "QUEST_WIN_OF_THE_DAY_3RD_TITLE";
    }
    else {
      if (param_3 != 1) goto LAB_00c1e9e4;
      pcVar1 = "QUEST_WIN_OF_THE_DAY_1ST_TITLE";
    }
    uVar2 = FUN_00e6ce7c(pcVar1,0);
    FUN_00f0d75c(param_1 + 0xcd8,uVar2);
    pcVar1 = "QUEST_WIN_OF_THE_DAY_DESCRIPTION";
  }
  uVar2 = FUN_00e6ce7c(pcVar1,0);
  FUN_00f0d75c(param_1 + 0xe08,uVar2);
LAB_00c1e9e4:
  FUN_00ca3130(0,(float)param_3,param_1 + 0xf38);
  uVar2 = FUN_00e6ce7c("QUEST_TILE_COMPLETED",0);
  FUN_00f0d75c(param_1 + 0xba8,uVar2);
  *(uint *)(param_1 + 0x2b1c) = *(uint *)(param_1 + 0x2b1c) & 0xfffffffb;
  *(uint *)(param_1 + 0x20d4) = *(uint *)(param_1 + 0x20d4) & 0xfffffffb;
  FUN_00ca442c(param_1,0);
  *(uint *)(param_1 + 0xacc) = *(uint *)(param_1 + 0xacc) & 0xfffffffb;
  if (*(char *)(param_1 + 0x2cc8) == '\0') {
    FUN_00ca4448(param_1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_glory_icon",
                 &DAT_03210450);
    *(char *)(param_1 + 0x2cc8) = '\x01';
  }
  FUN_00c1ea9c(param_1,param_2,param_3);
  return;
}




void FUN_00c1ea9c(long param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0xa44) =
       *(uint *)(param_1 + 0xa44) & 0xfffffff8 |
       *(uint *)(param_1 + 0xa44) & 3 | (uint)(param_3 <= param_2) << 2;
  *(uint *)(param_1 + 0xc2c) =
       *(uint *)(param_1 + 0xc2c) & 0xfffffff8 |
       *(uint *)(param_1 + 0xc2c) & 3 | (uint)(param_3 <= param_2) << 2;
  FUN_00ca4450();
  FUN_00ca3280((float)param_2,param_1 + 0xf38);
  *(uint *)(param_1 + 0xfbc) =
       *(uint *)(param_1 + 0xfbc) & 0xfffffff8 |
       *(uint *)(param_1 + 0xfbc) & 3 | (uint)(param_2 < param_3) << 2;
  return;
}




void FUN_00c1eb04(long param_1)

{
  if (*(long **)(param_1 + 0x9b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1eb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x9b8) + 8))();
    return;
  }
  return;
}




void FUN_00c1eb1c(long param_1,int param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    *(uint *)(param_1 + 0x2b1c) = *(uint *)(param_1 + 0x2b1c) & 0xfffffffb;
  }
  else {
    local_40 = (long)param_2;
    FUN_00ca49e4(param_1 + 0x2a98,&local_40);
    local_40 = (long)param_2;
    FUN_00b25438(param_1 + 0xa48,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1eba8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar1 = param_1 + 0x149;
  if ((*(float *)(param_1 + 0x151) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0xa8c) != _DAT_03218efc)) {
    param_1[0x151] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_1 + 0x175;
  if ((*(float *)(param_1 + 0x17d) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0xbec) != _DAT_03218efc)) {
    param_1[0x17d] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar2);
  }
  uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
  if (0.0 < (float)uVar10) {
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00ca4578(uVar10,param_1);
    plVar5 = param_1 + 0x40a;
    if ((*(byte *)((long)param_1 + 0x2b1c) >> 2 & 1) == 0) {
      uVar12 = 0;
      FUN_00f07940(0,plVar5,8,param_1 + 0x3f3,7);
    }
    else {
      fVar8 = (float)FUN_00f13e54(plVar5);
      uVar12 = 0xbf000000;
      FUN_00f07b18(0,plVar5,0,param_1 + 0x553,2);
      FUN_00f07b18(fVar8 * -0.5,plVar5,3,param_1 + 0x553,3);
    }
    plVar5 = param_1 + 0x3f3;
    local_70 = FUN_00f01c54(plVar5,1,0,0,1);
    uStack_6c = uVar12;
    FUN_00f13f18(plVar5,&local_70);
    fVar8 = (float)FUN_00f13e54(plVar5);
    FUN_00f07940(fVar8 * 0.5,0,plVar5,8,param_1 + 0x7d,8);
    plVar5 = param_1 + 0x94;
    plVar3 = param_1 + 0x1c1;
    fVar8 = (float)(**(code **)(param_1[0x94] + 0x48))(plVar5);
    FUN_00f0d5f8(plVar3,(int)fVar8);
    plVar4 = param_1 + 0x1e7;
    uVar11 = (**(code **)(param_1[0x94] + 0x48))(plVar5);
    FUN_00f13f08(uVar11,0x42960000,plVar4);
    plVar7 = param_1 + 0x19b;
    fVar8 = 0.0;
    FUN_00f07940(0,plVar7,0,plVar5,0);
    if ((*(byte *)((long)param_1 + 0xe8c) >> 2 & 1) != 0) {
      FUN_00f07b18(0,plVar3,0,plVar7,2);
      FUN_00f07b18(0,plVar3,3,plVar7,3);
      plVar7 = plVar3;
    }
    if ((*(byte *)((long)param_1 + 0xfbc) >> 2 & 1) != 0) {
      FUN_00f07b18(0,plVar4,0,plVar7,2);
      FUN_00f07b18(0,plVar4,3,plVar7,3);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar9 = (float)FUN_00ca4538(param_1);
    if (ABS(fVar8 - fVar9) <= 1.0) {
      uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f0db64(uVar10,0,0x3f800000,plVar1);
      FUN_00f07940(0,0,plVar1,8,param_1,8);
      uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f0db64(uVar10,0,0x3f800000,plVar2);
      FUN_00f07940(0,0,plVar2,8,param_1,8);
    }
    else {
      uVar11 = FUN_00ca4538(param_1);
      FUN_00f13f08(uVar10,uVar11,param_1);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1ef34(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9b8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1ef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1 + 0x2cb0);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00c1eba8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar6 = tpidr_el0;
  lStack_68 = *(long *)(lVar6 + 0x28);
  plVar1 = param_1 + 0x149;
  if ((*(float *)(param_1 + 0x151) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0xa8c) != _DAT_03218efc)) {
    param_1[0x151] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_1 + 0x175;
  if ((*(float *)(param_1 + 0x17d) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0xbec) != _DAT_03218efc)) {
    param_1[0x17d] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar2);
  }
  uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
  if (0.0 < (float)uVar10) {
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00ca4578(uVar10,param_1);
    plVar5 = param_1 + 0x40a;
    if ((*(byte *)((long)param_1 + 0x2b1c) >> 2 & 1) == 0) {
      uVar12 = 0;
      FUN_00f07940(0,plVar5,8,param_1 + 0x3f3,7);
    }
    else {
      fVar8 = (float)FUN_00f13e54(plVar5);
      uVar12 = 0xbf000000;
      FUN_00f07b18(0,plVar5,0,param_1 + 0x553,2);
      FUN_00f07b18(fVar8 * -0.5,plVar5,3,param_1 + 0x553,3);
    }
    plVar5 = param_1 + 0x3f3;
    uStack_70 = FUN_00f01c54(plVar5,1,0,0,1);
    uStack_6c = uVar12;
    FUN_00f13f18(plVar5,&uStack_70);
    fVar8 = (float)FUN_00f13e54(plVar5);
    FUN_00f07940(fVar8 * 0.5,0,plVar5,8,param_1 + 0x7d,8);
    plVar5 = param_1 + 0x94;
    plVar3 = param_1 + 0x1c1;
    fVar8 = (float)(**(code **)(param_1[0x94] + 0x48))(plVar5);
    FUN_00f0d5f8(plVar3,(int)fVar8);
    plVar4 = param_1 + 0x1e7;
    uVar11 = (**(code **)(param_1[0x94] + 0x48))(plVar5);
    FUN_00f13f08(uVar11,0x42960000,plVar4);
    plVar7 = param_1 + 0x19b;
    fVar8 = 0.0;
    FUN_00f07940(0,plVar7,0,plVar5,0);
    if ((*(byte *)((long)param_1 + 0xe8c) >> 2 & 1) != 0) {
      FUN_00f07b18(0,plVar3,0,plVar7,2);
      FUN_00f07b18(0,plVar3,3,plVar7,3);
      plVar7 = plVar3;
    }
    if ((*(byte *)((long)param_1 + 0xfbc) >> 2 & 1) != 0) {
      FUN_00f07b18(0,plVar4,0,plVar7,2);
      FUN_00f07b18(0,plVar4,3,plVar7,3);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar9 = (float)FUN_00ca4538(param_1);
    if (ABS(fVar8 - fVar9) <= 1.0) {
      uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f0db64(uVar10,0,0x3f800000,plVar1);
      FUN_00f07940(0,0,plVar1,8,param_1,8);
      uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00f0db64(uVar10,0,0x3f800000,plVar2);
      FUN_00f07940(0,0,plVar2,8,param_1,8);
    }
    else {
      uVar11 = FUN_00ca4538(param_1);
      FUN_00f13f08(uVar10,uVar11,param_1);
    }
  }
  if (*(long *)(lVar6 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1ef5c(long *param_1)

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
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  float *pfVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined4 uVar35;
  long lVar36;
  bool bVar37;
  ulong uVar38;
  undefined8 uVar39;
  uint uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  long lVar43;
  float fVar44;
  float fVar45;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar36 = tpidr_el0;
  local_b0 = *(long *)(lVar36 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f8518;
  FUN_00f017e8(param_1 + 0x18);
  param_1[0x18] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0x29);
  plVar1 = param_1 + 0x3a;
  param_1[0x29] = (long)&PTR_FUN_027c1f80;
  FUN_00ed66ec(plVar1);
  FUN_00f017e8(param_1 + 0x17f);
  plVar2 = param_1 + 400;
  param_1[0x17f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x1ae;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x1cc;
  FUN_00f0d160();
  plVar5 = param_1 + 0x1f2;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x210;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 0x221;
  param_1[0x210] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar8 = param_1 + 0x26d;
  FUN_00abbf0c();
  plVar9 = param_1 + 0x60c;
  FUN_00abbf0c();
  plVar10 = param_1 + 0x9ab;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar11 = param_1 + 0x9f7;
  FUN_00abbf0c();
  plVar12 = param_1 + 0xd96;
  FUN_00abbf0c();
  plVar13 = param_1 + 0x1135;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar14 = param_1 + 0x1181;
  FUN_00abbf0c();
  plVar15 = param_1 + 0x1520;
  FUN_00f0d160();
  FUN_00f0d160();
  plVar16 = param_1 + 0x156c;
  FUN_00f13ca4(plVar16);
  plVar17 = param_1 + 0x1583;
  FUN_00f0e4a8();
  plVar18 = param_1 + 0x15a1;
  FUN_00f0d160();
  plVar19 = param_1 + 0x15c7;
  FUN_00f13ca4(plVar19);
  plVar20 = param_1 + 0x15de;
  FUN_00f0e4a8();
  plVar21 = param_1 + 0x15fc;
  FUN_00f0d160();
  plVar22 = param_1 + 0x1622;
  FUN_00f017e8(plVar22);
  plVar23 = param_1 + 0x1633;
  *plVar22 = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar23,0);
  plVar24 = param_1 + 0x18eb;
  FUN_00ab6c24(plVar24,0);
  plVar25 = param_1 + 0x1ba3;
  FUN_00f13ca4(plVar25);
  plVar26 = param_1 + 0x1bba;
  FUN_00f0d160();
  plVar27 = param_1 + 0x1be0;
  FUN_00f0e4a8();
  plVar28 = param_1 + 0x1bfe;
  FUN_00ab6c24(plVar28,0);
  plVar29 = param_1 + 0x1eb6;
  FUN_00f13ca4(plVar29);
  plVar30 = param_1 + 0x1ecd;
  FUN_00f0d160();
  plVar31 = param_1 + 0x1ef3;
  FUN_00f0e4a8();
  FUN_00f13ca4();
  FUN_00e70510(param_1 + 0x1f28);
  param_1[0x1f2a] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ed5664(plVar1,plVar2,1);
  FUN_00ed5664(plVar1,plVar3,1);
  FUN_00ed5664(plVar1,plVar4,1);
  FUN_00ed5664(plVar1,plVar5,1);
  FUN_00ed5664(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,param_1 + 0x247,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f023ec(plVar6,plVar10,1);
  FUN_00f023ec(plVar6,param_1 + 0x9d1,1);
  FUN_00f023ec(plVar6,plVar11,1);
  FUN_00f023ec(plVar6,plVar12,1);
  FUN_00f023ec(plVar6,plVar13,1);
  FUN_00f023ec(plVar6,param_1 + 0x115b,1);
  FUN_00f023ec(plVar6,plVar14,1);
  FUN_00f023ec(plVar6,plVar15,1);
  FUN_00f023ec(plVar6,param_1 + 0x1546,1);
  FUN_00f023ec(plVar6,plVar16,1);
  FUN_00f023ec(plVar16,plVar17,1);
  FUN_00f023ec(plVar16,plVar18,1);
  FUN_00f023ec(plVar6,plVar19,1);
  FUN_00f023ec(plVar19,plVar20,1);
  FUN_00f023ec(plVar19,plVar21,1);
  FUN_00f023ec(plVar6,plVar22,1);
  FUN_00f023ec(plVar22,plVar23,1);
  FUN_00f023ec(plVar22,plVar24,1);
  FUN_00f023ec(plVar24,plVar25,1);
  FUN_00f023ec(plVar25,plVar27,1);
  FUN_00f023ec(plVar25,plVar26,1);
  FUN_00f023ec(plVar22,plVar28,1);
  FUN_00f023ec(plVar28,plVar29,1);
  FUN_00f023ec(plVar29,plVar31,1);
  FUN_00f023ec(plVar29,plVar30,1);
  FUN_00f023ec(plVar6,param_1 + 0x1f11,1);
  uVar38 = FUN_0092ea9c();
  local_e0 = (code *)CONCAT71(local_e0._1_7_,9);
  FUN_00ed5ab0(plVar1,&local_e0);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar40 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar40 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd04) = uVar40 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
    uVar40 = *(uint *)((long)param_1 + 0xd04);
  }
  *(uint *)((long)param_1 + 0xd04) = uVar40 | 0x10;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_guild_outline");
  fVar44 = *(float *)(param_1 + 0x1b7);
  if ((fVar44 != 1.5) || (fVar44 = *(float *)((long)param_1 + 0xdbc), fVar44 != 1.5)) {
    lVar43 = NEON_fmov(0x3fc00000,4);
    param_1[0x1b7] = lVar43;
    FUN_0091ada4(plVar3);
  }
  uVar40 = *(uint *)((long)param_1 + 0xdf4);
  if ((uVar40 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdf4) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x1980;
    FUN_0091ada4(plVar3);
  }
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_00f0d75c(plVar4,uVar39);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  }
  FUN_00f0d378(plVar4,*ppuVar34);
  if ((*(uint *)((long)param_1 + 0xee4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xee4) = *(uint *)((long)param_1 + 0xee4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar40 = *(uint *)((long)param_1 + 0x1014);
  if ((uVar40 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1014) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
    uVar40 = *(uint *)((long)param_1 + 0x1014);
  }
  *(uint *)((long)param_1 + 0x1014) = uVar40 | 0x10;
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0x247,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0x9d1,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0x115b,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_00f0d75c(param_1 + 0x1546,uVar39);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar7,*ppuVar34,&DAT_01bee7fa);
  uVar40 = *(uint *)((long)param_1 + 0x118c);
  if ((uVar40 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x118c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0xc80;
    FUN_0091ada4(plVar7);
  }
  FUN_00e705c8(&local_e0,"1");
  FUN_00f0d75c(plVar7,&local_e0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (void *)0x0;
  }
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_00abc73c(plVar8,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_00ce1e34(plVar8,uVar39,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar8,1);
  FUN_00abced0(plVar8,1,3);
  FUN_00abcee4(plVar8,1,0x10);
  FUN_00abcf28(plVar8,0);
  uVar41 = DAT_03210fac;
  local_e0 = thunk_FUN_00c216bc;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x26e,&local_e0);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_00abc73c(plVar9,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_00ce1e34(plVar9,uVar39,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar9,1);
  FUN_00abced0(plVar9,1,3);
  FUN_00abcee4(plVar9,1,0x10);
  FUN_00abcf28(plVar9,0);
  local_e0 = thunk_FUN_00c216bc;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x60d,&local_e0);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar10,*ppuVar34,&DAT_01bee7fa);
  uVar40 = *(uint *)((long)param_1 + 0x4ddc);
  if ((uVar40 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4ddc) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0xc80;
    FUN_0091ada4(plVar10);
  }
  FUN_00e705c8(&local_e0,"2");
  FUN_00f0d75c(plVar10,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_00abc73c(plVar11,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_00ce1e34(plVar11,uVar39,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar11,1);
  FUN_00abced0(plVar11,1,2);
  FUN_00abcee4(plVar11,1,4);
  FUN_00abcf28(plVar11,0);
  local_e0 = thunk_FUN_00c21720;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x9f8,&local_e0);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_00abc73c(plVar12,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_00ce1e34(plVar12,uVar39,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(plVar12,1);
  FUN_00abced0(plVar12,1,2);
  FUN_00abcee4(plVar12,1,4);
  FUN_00abcf28(plVar12,0);
  local_e0 = thunk_FUN_00c21720;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0xd97,&local_e0);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar13,*ppuVar34,&DAT_01bee7fa);
  uVar40 = *(uint *)((long)param_1 + 0x8a2c);
  if ((uVar40 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x8a2c) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0xc80;
    FUN_0091ada4(plVar13);
  }
  FUN_00e705c8(&local_e0,"3");
  FUN_00f0d75c(plVar13,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_00abc73c(plVar14,uVar39);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_00ce1e34(plVar14,uVar39,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcf28(plVar14,0);
  FUN_00b037f8(plVar14,0);
  FUN_00abcee4(plVar14,1,0x8c);
  FUN_00abcec0(plVar14,0);
  local_e0 = thunk_FUN_00c21784;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x1182,&local_e0);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
  }
  FUN_00f0d92c(plVar15,*ppuVar34,&DAT_01bee7fa);
  uVar40 = *(uint *)((long)param_1 + 0xa984);
  if ((uVar40 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xa984) = uVar40 & 0xffff8000 | uVar40 & 0x7f | 0xc80;
    FUN_0091ada4(plVar15);
  }
  FUN_00e705c8(&local_e0,"4");
  FUN_00f0d75c(plVar15,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  FUN_00f0e548(plVar17,PTR_s_build___MenuPartsCommon_tga_02be3530,"checkbox_filled");
  bVar37 = (uVar38 & 1) == 0;
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar37) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar37) {
    ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d92c(plVar18,*ppuVar34,&DAT_01bee7fa);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_00f0d75c(plVar18,uVar39);
  uVar41 = FUN_00f01c54(plVar16,0,0,1,1);
  local_e0 = (code *)CONCAT44(fVar44,uVar41);
  FUN_00f13f18(plVar16,&local_e0);
  uVar41 = DAT_03210f58;
  *(uint *)((long)param_1 + 0xabe4) = *(uint *)((long)param_1 + 0xabe4) | 0x10;
  local_e0 = FUN_00c20538;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x156d,&local_e0);
  local_e0 = FUN_00c20538;
  uVar35 = DAT_03210f84;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar35;
  FUN_009693a0(param_1 + 0x156d,&local_e0);
  FUN_00f0e548(plVar20,PTR_s_build___MenuPartsCommon_tga_02be3530,"checkbox_filled");
  FUN_00f0d92c(plVar21,*ppuVar34,&DAT_01bee7fa);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_00f0d75c(plVar21,uVar39);
  uVar42 = FUN_00f01c54(plVar19,0,0,1,1);
  local_e0 = (code *)CONCAT44(fVar44,uVar42);
  FUN_00f13f18(plVar19,&local_e0);
  *(uint *)((long)param_1 + 0xaebc) = *(uint *)((long)param_1 + 0xaebc) | 0x10;
  local_e0 = FUN_00c20538;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x15c8,&local_e0);
  local_e0 = FUN_00c20538;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar35;
  FUN_009693a0(param_1 + 0x15c8,&local_e0);
  uVar39 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x438c0000,plVar23,0,uVar39,&DAT_01bee7fa,&DAT_03218ef8,0);
  uVar41 = DAT_03210c64;
  local_e0 = FUN_00c20544;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x1634,&local_e0);
  FUN_00b0914c(plVar23,1);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_00ab703c(0x42480000,0x43480000,0x449c4000,plVar24,0,uVar39,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00c205ac;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x18ec,&local_e0);
  FUN_00f0d378(param_1 + 0x19cf,*ppuVar33);
  FUN_00b09144(0x3f000000,plVar24);
  if ((*(float *)(param_1 + 0x18f5) != 0.5) || (*(float *)((long)param_1 + 0xc7ac) != 0.5)) {
    param_1[0x18f5] = 0x3f0000003f000000;
    FUN_0091ada4(plVar24);
  }
  FUN_00ab74fc(0,0x41f00000,plVar24);
  FUN_00ab7628(0x43133333,plVar24);
  FUN_00b0914c(plVar24,1);
  FUN_00b09454(plVar24,0);
  FUN_00f0e548(plVar27,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  pfVar32 = (float *)(param_1 + 0x1be8);
  if ((*pfVar32 != 0.0) || (*(float *)((long)param_1 + 0xdf44) != 3.0)) {
    pfVar32[0] = 0.0;
    pfVar32[1] = 3.0;
    FUN_0091ada4(plVar27);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar27 + 0x28))(plVar27,&local_e0);
  pfVar32 = (float *)(param_1 + 0x1be9);
  if ((*pfVar32 != 0.9) || (*(float *)((long)param_1 + 0xdf4c) != 0.9)) {
    pfVar32[0] = 0.9;
    pfVar32[1] = 0.9;
    FUN_0091ada4(plVar27);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(plVar26,*ppuVar34);
  fVar44 = (float)FUN_00f0e700(plVar27);
  fVar45 = *(float *)((long)param_1 + 0xdf44) + -3.0;
  if ((*(float *)(param_1 + 0x1bc2) != fVar44) || (*(float *)((long)param_1 + 0xde14) != fVar45)) {
    *(float *)(param_1 + 0x1bc2) = fVar44;
    *(float *)((long)param_1 + 0xde14) = fVar45;
    FUN_0091ada4(plVar26);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar26 + 0x28))(plVar26,&local_e0);
  fVar44 = (float)FUN_00f01c54(plVar25,0,0,1,1);
  FUN_00f01c54(plVar25,0,0,1,1);
  fVar45 = fVar45 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1bab) != fVar44 * -0.5) ||
     (*(float *)((long)param_1 + 0xdd5c) != fVar45)) {
    *(float *)(param_1 + 0x1bab) = fVar44 * -0.5;
    *(float *)((long)param_1 + 0xdd5c) = fVar45;
    FUN_0091ada4(plVar25);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*plVar25 + 0x28))(plVar25,&local_e0);
  uVar39 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_00ab703c(0x42480000,0x43480000,0x449c4000,plVar28,0,uVar39,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00c205ac;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_d8 = param_1;
  local_b8 = uVar41;
  FUN_009693a0(param_1 + 0x1bff,&local_e0);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(param_1 + 0x1ce2,*ppuVar34);
  FUN_00b09144(0x3f000000,plVar28);
  if ((*(float *)(param_1 + 0x1c08) != 0.5) || (*(float *)((long)param_1 + 0xe044) != 0.5)) {
    param_1[0x1c08] = 0x3f0000003f000000;
    FUN_0091ada4(plVar28);
  }
  FUN_00ab74fc(0,0x41f00000,plVar28);
  FUN_00ab7628(0x43133333,plVar28);
  FUN_00b0914c(plVar28,1);
  FUN_00b09454(plVar28,0);
  FUN_00f0e548(plVar31,PTR_s_build___MenuPartsCommon_tga_02be3530,"ice_icon_small");
  pfVar32 = (float *)(param_1 + 0x1efb);
  if ((*pfVar32 != 0.0) || (*(float *)((long)param_1 + 0xf7dc) != 3.0)) {
    pfVar32[0] = 0.0;
    pfVar32[1] = 3.0;
    FUN_0091ada4(plVar31);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar31 + 0x28))(plVar31,&local_e0);
  pfVar32 = (float *)(param_1 + 0x1efc);
  if ((*pfVar32 != 0.9) || (*(float *)((long)param_1 + 0xf7e4) != 0.9)) {
    pfVar32[0] = 0.9;
    pfVar32[1] = 0.9;
    FUN_0091ada4(plVar31);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar38 & 1) == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(plVar30,*ppuVar34);
  fVar44 = (float)FUN_00f0e700(plVar31);
  fVar45 = *(float *)((long)param_1 + 0xf7dc) + -3.0;
  if ((*(float *)(param_1 + 0x1ed5) != fVar44) || (*(float *)((long)param_1 + 0xf6ac) != fVar45)) {
    *(float *)(param_1 + 0x1ed5) = fVar44;
    *(float *)((long)param_1 + 0xf6ac) = fVar45;
    FUN_0091ada4(plVar30);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(*plVar30 + 0x28))(plVar30,&local_e0);
  fVar44 = (float)FUN_00f01c54(plVar29,0,0,1,1);
  fVar45 = -0.5;
  FUN_00f01c54(plVar29,0,0,1,1);
  fVar45 = fVar45 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1ebe) != fVar44 * -0.5) ||
     (*(float *)((long)param_1 + 0xf5f4) != fVar45)) {
    *(float *)(param_1 + 0x1ebe) = fVar44 * -0.5;
    *(float *)((long)param_1 + 0xf5f4) = fVar45;
    FUN_0091ada4(plVar29);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*plVar29 + 0x28))(plVar29,&local_e0);
  FUN_00f0e578(plVar17,"checkbox_filled");
  FUN_00f0e578(plVar20,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x1f2b) = 0;
  if (*(long *)(lVar36 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

