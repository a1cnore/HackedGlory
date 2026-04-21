// functions/00ebf — 21 functions
#include "libGameKindred.h"




int FUN_00ebf108(int *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  FUN_01b13ed8();
  *(undefined ***)param_1 = &PTR_FUN_02821a00;
  memset(param_1 + 10,0,0x78);
  FUN_00e77acc(param_1 + 0x28,0);
  lVar3 = -0x31;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 0x34;
    iVar1 = (int)lVar3;
    lVar3 = lVar3 + 1;
    *piVar4 = iVar1 + 0x32;
  } while (lVar3 != 0);
  param_1[0xa5e] = 0;
  param_1[0xa5c] = 0;
  param_1[0xa5d] = 0x31;
  FUN_00e77acc(param_1 + 0xa60,1);
  __mutex = (pthread_mutex_t *)(param_1 + 0xa70);
  param_1[0xa6e] = 0;
  param_1[0xa6c] = 0;
  param_1[0xa6d] = 0;
  param_1[0xa6a] = 0;
  param_1[0xa6b] = 0;
  FUN_00e77acc(__mutex,1);
  param_1[0xa7a] = 0;
  param_1[0xa7b] = 0;
  param_1[0xa7c] = 0;
  param_1[0xa7e] = 0;
  param_1[0xa7f] = 0;
  param_1[0xa84] = 0;
  param_1[0xa80] = 0x3d888889;
  *(undefined1 *)(param_1 + 0xa85) = 1;
  pthread_mutex_lock(__mutex);
  FUN_019bc1f4(3);
  uVar2 = FUN_019be0f4();
  *(undefined8 *)(param_1 + 0xa7a) = uVar2;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00ebf200(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  byte local_c0 [16];
  void *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00969b40(auStack_a8,"%s:%d",param_2,param_3);
  FUN_008fa54c(local_c0,auStack_a8);
  FUN_008fce60(param_1 + 0x28,local_c0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ebf284(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  
  *param_1 = &PTR_FUN_02821a00;
  if ((long *)param_1[0x53f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53f] + 0x38))();
    if ((long *)param_1[0x53f] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x53f] + 8))();
    }
    param_1[0x53f] = 0;
  }
  *(undefined1 *)(param_1 + 0x542) = 1;
  FUN_01b13f30(param_1);
  FUN_00ebf3ac(param_1);
  __mutex = (pthread_mutex_t *)(param_1 + 0x538);
  pthread_mutex_lock(__mutex);
  FUN_019c003c(param_1[0x53d]);
  FUN_019bc360();
  pthread_mutex_unlock(__mutex);
  pthread_mutex_destroy(__mutex);
  *(undefined4 *)(param_1 + 0x537) = 0;
  param_1[0x536] = 0;
  param_1[0x535] = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x530));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x14));
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_01b13ef0(param_1);
  return;
}




void FUN_00ebf39c(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a10) = 1;
  FUN_01b13f30();
  return;
}




int FUN_00ebf3ac(long param_1)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x29c0));
  plVar2 = (long *)FUN_00ec0270(param_1);
  if (plVar2 != (long *)0x0) {
    do {
      if (*plVar2 != 0) {
        FUN_019be4c8(*(undefined8 *)(param_1 + 0x29e8));
        FUN_019bc688(*plVar2);
      }
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
      FUN_00ec0140(param_1 + 0xd0,plVar2);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
      plVar2 = (long *)FUN_00ec0270(param_1);
    } while (plVar2 != (long *)0x0);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x29c0));
  return iVar1;
}




void FUN_00ebf448(void *param_1)

{
  FUN_00ebf284();
  operator_delete(param_1);
  return;
}




void FUN_00ebf46c(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a10) = 0;
  FUN_01b13f64(param_1,"JSONRpc");
  return;
}




void FUN_00ebf480(float param_1,long param_2)

{
  if (0.0 < param_1) {
    *(float *)(param_2 + 0x2a00) = param_1;
  }
  return;
}




void FUN_00ebf490(void)

{
  return;
}




void FUN_00ebf494(void)

{
  return;
}




void FUN_00ebf498(void)

{
  return;
}




void FUN_00ebf49c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2a10);
  while (cVar1 == '\0') {
    FUN_00ebf4f8(param_1);
    FUN_00e6b418((int)(*(float *)(param_1 + 0x2a00) * 1000.0));
    cVar1 = *(char *)(param_1 + 0x2a10);
  }
  return;
}




void FUN_00ebf4f8(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00ec0014(param_1,0);
  if (lVar3 != 0) {
    do {
      uVar4 = FUN_00ebfb58(param_1,lVar3,0);
      if ((uVar4 & 1) == 0) {
        pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
        FUN_00ec0140(param_1 + 0xd0,lVar3);
        pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
      }
      else {
        FUN_00ebf8b4(param_1,lVar3);
      }
      lVar3 = FUN_00ec0014(param_1,0);
    } while (lVar3 != 0);
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x29c0));
  do {
    iVar2 = FUN_019befa4(*(undefined8 *)(param_1 + 0x29e8),auStack_6c);
  } while (iVar2 == -1);
  piVar5 = (int *)FUN_019c01d8(*(undefined8 *)(param_1 + 0x29e8),param_1 + 0x29f0);
  if (piVar5 != (int *)0x0) {
    do {
      if (*piVar5 == 1) {
        uVar7 = *(undefined8 *)(piVar5 + 2);
        iVar2 = piVar5[4];
        uVar6 = FUN_00ec0014(param_1,uVar7);
        local_78 = 0;
        FUN_019bc74c(uVar7,0x200002,&local_78);
        FUN_019be4c8(*(undefined8 *)(param_1 + 0x29e8),uVar7);
        FUN_019bc688(uVar7);
        FUN_00ebfddc(param_1,uVar6,iVar2,local_78);
        pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
        FUN_00ec0140(param_1 + 0xd0,uVar6);
        pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
      }
      piVar5 = (int *)FUN_019c01d8(*(undefined8 *)(param_1 + 0x29e8),param_1 + 0x29f0);
    } while (piVar5 != (int *)0x0);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x29c0));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




undefined8
FUN_00ebf6a4(long *param_1,byte *param_2,byte *param_3,undefined4 *param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  FUN_00e83330();
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x14));
  lVar6 = FUN_00ec0088(param_1 + 0x1a);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x14));
  if (lVar6 == 0) {
    FUN_00e83324(0xfffffff8);
    if (param_4 != (undefined4 *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,*param_4);
    }
    return 0xfffffff8;
  }
  bVar4 = *param_3;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (uVar1 != 0) {
    bVar5 = *param_2;
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (uVar1 != 0) {
      if ((*(char *)((long)param_1 + 0x2a12) == '\0') || (*(char *)((long)param_1 + 0x2a13) == '\0')
         ) {
        pbVar8 = (byte *)(param_1 + 0xe);
        if ((*pbVar8 & 1) == 0) goto LAB_00ebf7e4;
        pbVar8 = (byte *)param_1[0x10];
      }
      else {
        pbVar8 = (byte *)(param_1 + 0x11);
        if ((*pbVar8 & 1) == 0) {
LAB_00ebf7e4:
          pbVar8 = pbVar8 + 1;
        }
        else {
          pbVar8 = (byte *)param_1[0x13];
        }
      }
      pbVar9 = *(byte **)(param_3 + 0x10);
      pbVar10 = *(byte **)(param_2 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar9 = param_3 + 1;
      }
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_2 + 1;
      }
      FUN_00969b40(lVar6 + 0xc,"%s?time=%s&tag=%s",pbVar8,pbVar9,pbVar10);
      goto LAB_00ebf828;
    }
  }
  if ((*(char *)((long)param_1 + 0x2a12) == '\0') || (*(char *)((long)param_1 + 0x2a13) == '\0')) {
    pbVar8 = (byte *)(param_1 + 0xe);
    if ((*pbVar8 & 1) == 0) goto LAB_00ebf7cc;
    pbVar8 = (byte *)param_1[0x10];
  }
  else {
    pbVar8 = (byte *)(param_1 + 0x11);
    if ((*pbVar8 & 1) == 0) {
LAB_00ebf7cc:
      pbVar8 = pbVar8 + 1;
    }
    else {
      pbVar8 = (byte *)param_1[0x13];
    }
  }
  FUN_00e6a50c(lVar6 + 0xc,0x80,pbVar8);
LAB_00ebf828:
  if (*(long *)(lVar6 + 0xa0) != 0) {
    *(undefined4 *)(lVar6 + 0x98) = 0;
  }
  puVar2 = &DAT_02bf251c;
  if (param_4 != (undefined4 *)0x0) {
    puVar2 = param_4;
  }
  uVar3 = *puVar2;
  *(undefined4 *)(lVar6 + 0x8c) = param_5;
  *(undefined4 *)(lVar6 + 0x90) = 0;
  *(undefined4 *)(lVar6 + 8) = uVar3;
  FUN_00ebf8b4(param_1,lVar6);
  uVar7 = FUN_00e83340();
  return uVar7;
}




undefined8 FUN_00ebf874(long param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
  uVar1 = FUN_00ec0088(param_1 + 0xd0);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
  return uVar1;
}




int FUN_00ebf8b4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2980));
  lVar2 = *(long *)(param_1 + 0x29a8);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(long *)(param_2 + 200) = lVar2;
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x29a8) = param_2;
    plVar3 = (long *)(param_1 + 0x29b0);
  }
  else {
    plVar3 = (long *)(param_1 + 0x29a8);
    *(long *)(lVar2 + 0xc0) = param_2;
  }
  *plVar3 = param_2;
  *(int *)(param_1 + 0x29b8) = *(int *)(param_1 + 0x29b8) + 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2980));
  return iVar1;
}




undefined8
FUN_00ebf928(long *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  pthread_mutex_t *__mutex;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  FUN_00e83330();
  __mutex = (pthread_mutex_t *)(param_1 + 0x14);
  pthread_mutex_lock(__mutex);
  lVar4 = FUN_00ec0088(param_1 + 0x1a);
  pthread_mutex_unlock(__mutex);
  if (lVar4 != 0) {
    iVar2 = FUN_0090d610(param_2,0,7,"http://",7);
    if ((iVar2 == 0) || (iVar2 = FUN_0090d610(param_2,0,8,"https://",8), iVar2 == 0)) {
      pbVar8 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar8 = param_2 + 1;
      }
      pbVar9 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        pbVar9 = *(byte **)(param_3 + 0x10);
      }
      pcVar7 = "%s/JSONRpc/%s";
    }
    else {
      pbVar8 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar8 = param_2 + 1;
      }
      pbVar9 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        pbVar9 = *(byte **)(param_3 + 0x10);
      }
      pcVar7 = "https://%s/JSONRpc/%s";
    }
    FUN_00969b40(lVar4 + 0xc,pcVar7,pbVar8,pbVar9);
    FUN_0091aea8(lVar4 + 0x98,0x2000,0);
    pbVar9 = *(byte **)(param_4 + 0x10);
    pbVar8 = param_3 + 1;
    if ((*param_3 & 1) != 0) {
      pbVar8 = *(byte **)(param_3 + 0x10);
    }
    if ((*param_4 & 1) == 0) {
      pbVar9 = param_4 + 1;
    }
    FUN_00e6a93c(*(undefined8 *)(lVar4 + 0xa0),*(undefined4 *)(lVar4 + 0x9c),
                 "{\"method\" : \"%s\", \"params\":%s}",pbVar8,pbVar9);
    puVar1 = &DAT_02bf251c;
    if (param_6 != (undefined4 *)0x0) {
      puVar1 = param_6;
    }
    *(undefined4 *)(lVar4 + 8) = *puVar1;
    *(undefined4 *)(lVar4 + 0x8c) = param_7;
    *(undefined4 *)(lVar4 + 0x90) = param_8;
    if ((param_5 & 1) == 0) {
      uVar5 = FUN_00ebf8b4(param_1,lVar4);
    }
    else {
      FUN_00ebfb58(param_1,lVar4,1);
      pthread_mutex_lock(__mutex);
      FUN_00ec0140(param_1 + 0x1a,lVar4);
      uVar3 = pthread_mutex_unlock(__mutex);
      uVar5 = (ulong)uVar3;
    }
    uVar6 = FUN_00e83340(uVar5);
    return uVar6;
  }
  if (param_6 != (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,*param_6);
  }
  FUN_00e83324(0xfffffff8);
  return 0xfffffff8;
}




undefined4 FUN_00ebfb58(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x29c0));
  lVar4 = FUN_019bc3b0(iVar2);
  if (lVar4 != 0) {
    *param_2 = lVar4;
    FUN_019bc404(lVar4,0x2712,(long)param_2 + 0xc);
    FUN_019bc404(lVar4,0x4e2b,FUN_00ebfd58);
    FUN_019bc404(lVar4,0x2711,param_2);
    FUN_019bc404(lVar4,0x79,1);
    FUN_019bc404(lVar4,0xd,*(undefined4 *)((long)param_2 + 0x8c));
    FUN_019bc404(lVar4,0x2776,PTR_s_gzip_02bf2528);
    if ((int)param_2[0x13] != 0) {
      FUN_019bc404(lVar4,0x2f,1);
      FUN_019bc404(lVar4,0x271f,param_2[0x14]);
      uVar3 = FUN_00e6a474(param_2[0x14]);
      FUN_019bc404(lVar4,0x3c,uVar3);
    }
    FUN_019bc404(lVar4,99,1);
    if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
      FUN_019bc404(lVar4,0x4a,1);
    }
    FUN_019bc1ac(lVar4);
    if ((param_3 & 1) == 0) {
      FUN_019be100(*(undefined8 *)(param_1 + 0x29e8),lVar4);
      uVar3 = 1;
      goto LAB_00ebfcdc;
    }
    uVar3 = FUN_019bc484(lVar4);
    local_50 = 0;
    FUN_019bc74c(lVar4,0x200002,&local_50);
    FUN_019bc688(lVar4);
    FUN_00ebfddc(param_1,param_2,uVar3,local_50);
  }
  uVar3 = 0;
LAB_00ebfcdc:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x29c0));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




int FUN_00ebfd14(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
  FUN_00ec0140(param_1 + 0xd0,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
  return iVar1;
}




uint FUN_00ebfd58(void *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = param_3 * param_2;
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_4 + 0xb8);
    uVar1 = uVar2 + uVar3;
    FUN_0091aea8(param_4 + 0xa8,uVar1 + 1,0);
    lVar4 = *(long *)(param_4 + 0xb0);
    memmove((void *)(lVar4 + (ulong)uVar2),param_1,(ulong)uVar3);
    *(undefined1 *)(lVar4 + (ulong)uVar1) = 0;
    *(uint *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + uVar3;
  }
  return uVar3;
}




void FUN_00ebfddc(long *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_50;
  char *pcStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    if (param_4 == 200) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_90 = 0;
      local_88 = 0;
      pvStack_a0 = (void *)0x0;
      local_98 = (void *)0x0;
      local_a8 = 0;
      local_80 = 0x400;
      local_78 = 0;
      local_70 = 0;
      local_b8 = operator_new(0x28);
      local_b8[3] = 0;
      local_b8[4] = 0;
      local_b8[1] = 0x10000;
      local_b8[2] = 0;
      *local_b8 = 0;
      local_50 = *(char **)(param_2 + 0xb0);
      local_b0 = local_b8;
      pcStack_48 = local_50;
      while (*local_50 != '\0') {
        FUN_00e9b790(&local_d0,&local_50);
        if (local_78 == 0) {
          (**(code **)(*param_1 + 0x18))(param_1,&local_d0,*(undefined4 *)(param_2 + 8));
        }
        else {
          FUN_00e83324(0xfffffffa);
        }
      }
    }
    else {
      if (param_4 != 0x130) {
        FUN_019c12d8(0);
        goto LAB_00ebffd0;
      }
      uStack_90 = 0;
      local_98 = (void *)0x0;
      pvStack_a0 = (void *)0x0;
      local_a8 = 0;
      local_88 = 0;
      local_80 = 0x400;
      local_78 = 0;
      local_70 = 0;
      puVar3 = operator_new(0x28);
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0x10000;
      puVar3[2] = 0;
      *puVar3 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 3;
      local_b8 = puVar3;
      local_b0 = puVar3;
      FUN_00e8b800(&local_d0,"httpStatus",10,0x130,puVar3);
      local_50 = (char *)0x0;
      pcStack_48 = (char *)0x0;
      local_58 = 0x100005;
      local_68 = "code";
      local_60 = 4;
      local_40 = 0x3e06;
      FUN_00cb9d40(&local_d0,&local_68,&local_50,puVar3);
      (**(code **)(*param_1 + 0x18))(param_1,&local_d0,*(undefined4 *)(param_2 + 8));
    }
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(param_2 + 8));
    puVar3 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      FUN_008fd2c4(local_b0);
      operator_delete(puVar3);
    }
    free(local_98);
    if (pvStack_a0 != (void *)0x0) {
      operator_delete(pvStack_a0);
    }
  }
  else {
    FUN_019c12d8(param_3);
    if (param_3 == 7) {
      uVar2 = 0xfffffffb;
    }
    else {
LAB_00ebffd0:
      uVar2 = 0xfffffffc;
    }
    FUN_00e83324(uVar2);
    (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)(param_2 + 8));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

