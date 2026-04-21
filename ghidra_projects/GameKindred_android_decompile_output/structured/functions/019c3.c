// functions/019c3 — 28 functions
#include "libGameKindred.h"




undefined8 FUN_019c3068(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_019ed208();
  if ((int)uVar2 == 0) {
    lVar1 = param_1 + (long)param_2 * 8;
    param_1 = param_1 + (long)param_2 * 0x28;
    *(undefined1 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined1 **)(lVar1 + 0x1e8) = &LAB_019ca4c4;
    *(code **)(lVar1 + 0x1f8) = FUN_019ca3d8;
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}




undefined8 FUN_019c30d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x8958) == 0) {
    lVar2 = (*(code *)PTR_calloc_02bf74c8)(param_2,0xb0);
    if (lVar2 == 0) {
      uVar1 = 0x1b;
    }
    else {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x480) = param_2;
      *(long *)(param_1 + 0x8958) = lVar2;
      *(undefined8 *)(param_1 + 0x8960) = 1;
    }
  }
  return uVar1;
}




void FUN_019c3158(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  
  piVar1 = (int *)(param_1 + 0x8c30);
  if (*piVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x8c38);
    if (0 < *piVar1) {
      lVar3 = 0;
      do {
        FUN_019c1dcc(*(undefined8 *)(*plVar2 + lVar3 * 8));
        *(undefined8 *)(*plVar2 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *piVar1);
    }
    (*(code *)PTR_free_02bf74b0)(*plVar2);
    *plVar2 = 0;
    *piVar1 = 0;
  }
  return;
}




bool FUN_019c31dc(long param_1,int param_2)

{
  long lVar1;
  
  FUN_019c3158();
  *(int *)(param_1 + 0x8c30) = param_2;
  lVar1 = (*(code *)PTR_calloc_02bf74c8)((long)param_2,8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x8c38) = lVar1;
  }
  return lVar1 == 0;
}




undefined8 FUN_019c323c(long param_1,int param_2,char *param_3,void *param_4,size_t param_5)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  sVar3 = strlen(param_3);
  lVar1 = sVar3 + 1 + param_5;
  lVar5 = lVar1 + 1;
  lVar4 = (*(code *)PTR_malloc_02bf74a8)(lVar5);
  if (lVar4 == 0) {
    uVar6 = 0x1b;
  }
  else {
    FUN_019d5bc0(lVar4,lVar5,&DAT_01e21a26,param_3);
    memcpy((void *)(lVar4 + sVar3 + 1),param_4,param_5);
    *(undefined1 *)(lVar4 + lVar1) = 0;
    plVar2 = (long *)(param_1 + 0x8c38);
    lVar5 = FUN_019c1c48(*(undefined8 *)(*plVar2 + (long)param_2 * 8),lVar4);
    uVar6 = 0;
    if (lVar5 == 0) {
      (*(code *)PTR_free_02bf74b0)(lVar4);
      FUN_019c1dcc(*(undefined8 *)(*plVar2 + (long)param_2 * 8));
      uVar6 = 0x1b;
    }
    *(long *)(*plVar2 + (long)param_2 * 8) = lVar5;
  }
  return uVar6;
}




void FUN_019c333c(undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  size_t sVar1;
  
  sVar1 = strlen(param_4);
  FUN_019c323c(param_1,param_2,param_3,param_4,sVar1);
  return;
}




undefined1  [16] FUN_019c338c(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  timespec local_30;
  timeval local_20;
  
  iVar1 = clock_gettime(1,&local_30);
  if (iVar1 == 0) {
    local_20.tv_usec = local_30.tv_nsec / 1000;
    local_20.tv_sec = local_30.tv_sec;
  }
  else {
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  }
  auVar2._8_8_ = local_20.tv_usec;
  auVar2._0_8_ = local_20.tv_sec;
  return auVar2;
}




long FUN_019c33ec(long param_1,long param_2,long param_3,long param_4)

{
  return (param_2 - param_4) / 1000 + (param_1 - param_3) * 1000;
}




undefined1  [16] FUN_019c341c(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 - param_3 == 0) {
    auVar1._0_8_ = (double)(param_2 - param_4) / 1000000.0;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  auVar2._0_8_ = (double)(param_2 - param_4) / 1000000.0 + (double)(param_1 - param_3);
  auVar2._8_8_ = 0;
  return auVar2;
}




void FUN_019c345c(void)

{
  return;
}




undefined * FUN_019c3460(void)

{
  int iVar1;
  
  if ((DAT_03215820 & 1) == 0) {
    iVar1 = FUN_019da630(&DAT_03215828,7,&LAB_019dac34,&LAB_019dac6c,&LAB_019c34c8);
    if (iVar1 != 0) {
      return (undefined *)0x0;
    }
    DAT_03215820 = 1;
  }
  return &DAT_03215828;
}




void FUN_019c350c(void)

{
  if (DAT_03215820 == '\x01') {
    FUN_019dab50(&DAT_03215828,0,&DAT_019c3d0c);
    FUN_019daad8(&DAT_03215828);
    DAT_03215820 = '\0';
  }
  return;
}




void FUN_019c355c(undefined8 param_1,undefined8 param_2)

{
  FUN_019dab50(param_2,param_1,&DAT_019c3d0c);
  return;
}




int FUN_019c3574(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      param_1 = *(long *)(param_1 + 0x28);
      iVar1 = iVar1 + 1;
    } while (param_1 != 0);
  }
  return iVar1;
}




char * FUN_019c3598(long param_1,char *param_2,socklen_t param_3)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 4) == 10) {
    pcVar1 = inet_ntop(10,(void *)(*(long *)(param_1 + 0x20) + 8),param_2,param_3);
    return pcVar1;
  }
  if (*(int *)(param_1 + 4) == 2) {
    pcVar1 = inet_ntop(2,(void *)(*(long *)(param_1 + 0x20) + 4),param_2,param_3);
    return pcVar1;
  }
  return (char *)0x0;
}




void FUN_019c35dc(long param_1)

{
  undefined8 local_30;
  time_t tStack_28;
  time_t local_18;
  
  if ((*(long *)(param_1 + 0x4c0) != -1) && (*(long *)(param_1 + 0x50) != 0)) {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_019c1238(param_1,3,2);
    }
    time(&local_18);
    local_30 = *(undefined8 *)(param_1 + 0x4c0);
    tStack_28 = local_18;
    FUN_019dab50(*(undefined8 *)(param_1 + 0x50),&local_30,&LAB_019c3ec0);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_019c1288(param_1,3);
    }
  }
  return;
}




long FUN_019c3668(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char *__s;
  size_t sVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar4 = *param_1;
  __s = (char *)FUN_019c3760(param_2,param_3);
  if (__s == (char *)0x0) {
    return 0;
  }
  sVar1 = strlen(__s);
  lVar2 = FUN_019daa50(*(undefined8 *)(lVar4 + 0x50),__s,sVar1 + 1);
  (*(code *)PTR_free_02bf74b0)(__s);
  if ((((lVar2 != 0) && (*(long *)(lVar4 + 0x4c0) != -1)) && (*(long *)(lVar4 + 0x50) != 0)) &&
     (*(long *)(lVar2 + 0x10) == 0)) {
    time(&local_38);
    local_40 = *(long *)(lVar4 + 0x4c0);
    if ((*(long *)(lVar2 + 0x10) == 0) && (local_40 <= local_38 - *(long *)(lVar2 + 8))) {
      FUN_019dab50(*(undefined8 *)(lVar4 + 0x50),&local_40,&LAB_019c3ec0);
      lVar2 = 0;
      uVar3 = 1;
      goto LAB_019c371c;
    }
  }
  uVar3 = 0;
LAB_019c371c:
  *param_4 = uVar3;
  return lVar2;
}




byte * FUN_019c3760(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  uint __c;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)FUN_019d5c34("%s:%d",param_1,param_2);
  pbVar3 = pbVar2;
  if (pbVar2 != (byte *)0x0) {
    for (; (__c = (uint)*pbVar3, __c != 0 && (__c != 0x3a)); pbVar3 = pbVar3 + 1) {
      iVar1 = tolower(__c);
      *pbVar3 = (byte)iVar1;
    }
  }
  return pbVar2;
}




long FUN_019c37b8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char *__s;
  size_t sVar1;
  undefined8 *puVar2;
  long lVar3;
  
  __s = (char *)FUN_019c3760(param_3,param_4);
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    puVar2 = (undefined8 *)(*(code *)PTR_calloc_02bf74c8)(1,0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
      puVar2[2] = 0;
      time(puVar2 + 1);
      if (puVar2[1] == 0) {
        puVar2[1] = 1;
      }
      lVar3 = FUN_019da86c(*(undefined8 *)(param_1 + 0x50),__s,sVar1 + 1,puVar2);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
        (*(code *)PTR_free_02bf74b0)(__s);
        return lVar3;
      }
      (*(code *)PTR_free_02bf74b0)(puVar2);
    }
    (*(code *)PTR_free_02bf74b0)(__s);
  }
  return 0;
}




undefined4 FUN_019c38c0(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_48;
  int local_44;
  
  lVar5 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar5 + 0x70) != 0) {
    FUN_019c1238(lVar5,3,2);
  }
  lVar2 = FUN_019c3668(param_1,param_2,param_3,&local_44);
  puVar1 = &DAT_01e277f2;
  if (local_44 == 0 && lVar2 == 0) {
    puVar1 = &DAT_01e21a5b;
  }
  FUN_019c9f64(lVar5,"Hostname was %sfound in DNS cache\n",puVar1);
  if (local_44 != 0) {
    FUN_019c9f64(lVar5,"Hostname in DNS cache was stale, zapped\n");
  }
  if (lVar2 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  if (*(long *)(lVar5 + 0x70) != 0) {
    FUN_019c1288(lVar5,3);
  }
  uVar7 = uVar6;
  if (lVar2 == 0) {
    uVar3 = FUN_019dc10c(param_1);
    if ((uVar3 & 1) == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_019dc124(param_1,param_2,param_3,&local_48);
    if (lVar4 == 0) {
      if (local_48 != 0) {
        return 0xffffffff;
      }
      lVar2 = 0;
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_019c1238(lVar5,3,2);
      }
      lVar2 = FUN_019c37b8(lVar5,lVar4,param_2,param_3);
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_019c1288(lVar5,3);
      }
      uVar7 = 0;
      if (lVar2 == 0) {
        FUN_019e2528(lVar4);
        uVar7 = uVar6;
      }
    }
  }
  *param_4 = lVar2;
  return uVar7;
}




undefined4
FUN_019c3a58(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_88;
  _union_1457 local_80;
  code *pcStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  lVar5 = *param_1;
  *param_4 = 0;
  if (-1 < param_5) {
    local_88 = param_5;
    if (*(char *)(lVar5 + 0x534) != '\0') {
      local_88 = 0;
    }
    if (local_88 == 0) {
      uVar3 = FUN_019c38c0(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (999 < local_88) {
      sigaction(0xe,(sigaction *)0x0,(sigaction *)&local_80);
      uStack_58 = (ulong)pcStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      local_80._0_4_ = local_80._0_4_ & 0xefffffff;
      pcStack_78 = FUN_019c3c40;
      sigaction(0xe,(sigaction *)&local_80,(sigaction *)0x0);
      uVar1 = FUN_019c1e98(local_88 / 1000);
      uVar1 = alarm(uVar1);
      iVar2 = sigsetjmp(&DAT_0321a9b8,1);
      if (iVar2 == 0) {
        uVar3 = FUN_019c38c0(param_1,param_2,param_3,param_4);
      }
      else {
        FUN_019ca0fc(lVar5,"name lookup timed out");
        uVar3 = 0xffffffff;
      }
      if (uVar1 == 0) {
        alarm(0);
      }
      iVar2 = sigaction(0xe,(sigaction *)&stack0xffffffffffffffa0,(sigaction *)0x0);
      if (uVar1 == 0) {
        return uVar3;
      }
      auVar6 = FUN_019c338c(iVar2);
      uVar4 = FUN_019c33ec(auVar6._0_8_,auVar6._8_8_,param_1[0x38],param_1[0x39]);
      uVar4 = (ulong)uVar1 - uVar4 / 1000;
      if ((uVar4 != 0) && ((uVar4 >> 0x1f == 0 || ((int)uVar1 < 0)))) {
        alarm((uint)uVar4);
        return uVar3;
      }
      alarm(1);
      FUN_019ca0fc(lVar5,"Previous alarm fired off!");
    }
  }
  return 0xfffffffe;
}




void FUN_019c3c40(void)

{
                    /* WARNING: Subroutine does not return */
  siglongjmp((__jmp_buf_tag *)&DAT_0321a9b8,1);
}




void FUN_019c3c58(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    FUN_019c1238(param_1,3,2);
  }
  lVar1 = param_2[2];
  param_2[2] = lVar1 + -1;
  if ((lVar1 + -1 == 0) && (param_2[1] == 0)) {
    FUN_019e2528(*param_2);
    (*(code *)PTR_free_02bf74b0)(param_2);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    FUN_019c1288(param_1,3);
    return;
  }
  return;
}




void FUN_019c3cec(void)

{
  FUN_019da7cc(7,&LAB_019dac34,&LAB_019dac6c,&LAB_019c34c8);
  return;
}




undefined8 FUN_019c3d18(void)

{
  FUN_019c3c58();
  return 1;
}




undefined8 FUN_019c3d30(long param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_26c;
  undefined1 auStack_268 [256];
  undefined1 auStack_168 [264];
  
  puVar6 = *(undefined8 **)(param_1 + 0x790);
  do {
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x790) = 0;
      return 0;
    }
    pcVar2 = (char *)*puVar6;
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '-')) &&
       (iVar1 = sscanf(pcVar2,"%255[^:]:%d:%255s",auStack_168,&local_26c,auStack_268), iVar1 == 3))
    {
      lVar3 = FUN_019e29cc(auStack_268,local_26c);
      if (lVar3 == 0) {
        FUN_019c9f64(param_1,"Resolve %s found illegal!\n",*puVar6);
      }
      else {
        pcVar2 = (char *)FUN_019c3760(auStack_168,local_26c);
        if (pcVar2 == (char *)0x0) {
LAB_019c3eb0:
          FUN_019e2528(lVar3);
          return 0x1b;
        }
        sVar4 = strlen(pcVar2);
        if (*(long *)(param_1 + 0x70) != 0) {
          FUN_019c1238(param_1,3,2);
        }
        lVar5 = FUN_019daa50(*(undefined8 *)(param_1 + 0x50),pcVar2,sVar4 + 1);
        (*(code *)PTR_free_02bf74b0)(pcVar2);
        if (lVar5 == 0) {
          lVar5 = FUN_019c37b8(param_1,lVar3,auStack_168,local_26c);
        }
        else {
          FUN_019e2528(lVar3);
        }
        if (*(long *)(param_1 + 0x70) != 0) {
          FUN_019c1288(param_1,3);
        }
        if (lVar5 == 0) goto LAB_019c3eb0;
        FUN_019c9f64(param_1,"Added %s:%d:%s to DNS cache\n",auStack_168,local_26c,auStack_268);
      }
    }
    puVar6 = (undefined8 *)puVar6[1];
  } while( true );
}




undefined8 FUN_019c3ee8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x7a0) = 0;
  uVar1 = FUN_019c3f38();
  if ((int)uVar1 == 0) {
    if (((*(byte *)(lVar2 + 0x7d8) >> 4 & 1) == 0) && (*(char *)(lVar2 + 2000) == '\0')) {
      FUN_019d5ff8(*(undefined8 *)(lVar2 + 0x220),"\n");
    }
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0x8f8) = 0;
  }
  return uVar1;
}




int FUN_019c3f38(long *param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [10];
  undefined1 auStack_aa [10];
  undefined1 auStack_a0 [10];
  undefined1 auStack_96 [10];
  undefined1 auStack_8c [10];
  undefined1 auStack_82 [18];
  
  lVar16 = *param_1;
  iVar2 = *(int *)(lVar16 + 0x8f8);
  auVar23 = FUN_019c338c();
  lVar3 = auVar23._0_8_;
  dVar22 = (double)(auVar23._8_8_ - *(long *)(lVar16 + 0x830)) / 1000000.0 +
           (double)(lVar3 - *(long *)(lVar16 + 0x828));
  pauVar1 = (undefined1 (*) [16])(lVar16 + 0x7b8);
  *(double *)(lVar16 + 0x7e0) = dVar22;
  lVar11 = *(long *)*pauVar1;
  dVar20 = dVar22;
  if (dVar22 <= 0.0) {
    dVar20 = 1.0;
  }
  auVar21 = NEON_scvtf(*pauVar1,8);
  *(long *)(lVar16 + 0x7f0) = (long)(auVar21._8_8_ / dVar20);
  *(long *)(lVar16 + 0x7e8) = (long)(auVar21._0_8_ / dVar20);
  bVar10 = false;
  if (*(long *)(lVar16 + 0x7a0) != lVar3) {
    if (lVar11 <= *(long *)(lVar16 + 0x7c0)) {
      lVar11 = *(long *)(lVar16 + 0x7c0);
    }
    lVar13 = lVar16 + 0x7a0;
    iVar2 = iVar2 % 6;
    *(long *)(lVar16 + 0x7a0) = lVar3;
    plVar17 = (long *)(lVar13 + (long)iVar2 * 8 + 200);
    *plVar17 = lVar11;
    *(undefined1 (*) [16])(lVar13 + (long)iVar2 * 0x10 + 0xf8) = auVar23;
    iVar2 = *(int *)(lVar16 + 0x8f8);
    *(int *)(lVar16 + 0x8f8) = iVar2 + 1;
    if (iVar2 == 0) {
      lVar11 = *(long *)(lVar16 + 0x7f0);
      if (*(long *)(lVar16 + 0x7f0) <= *(long *)(lVar16 + 0x7e8)) {
        lVar11 = *(long *)(lVar16 + 0x7e8);
      }
    }
    else {
      lVar11 = (long)((iVar2 + 1) % 6);
      if (iVar2 < 5) {
        lVar11 = 0;
      }
      lVar18 = lVar13 + lVar11 * 0x10;
      lVar3 = FUN_019c33ec(lVar3,auVar23._8_8_,*(undefined8 *)(lVar18 + 0xf8),
                           *(undefined8 *)(lVar18 + 0x100));
      if (lVar3 == 0) {
        lVar3 = 1;
      }
      lVar13 = *plVar17 - *(long *)(lVar13 + lVar11 * 8 + 200);
      if (lVar13 < 0x418938) {
        lVar11 = 0;
        if (lVar3 != 0) {
          lVar11 = (lVar13 * 1000) / lVar3;
        }
      }
      else {
        lVar11 = (long)((double)lVar13 / ((double)lVar3 / 1000.0));
      }
    }
    *(long *)(lVar16 + 0x7c8) = lVar11;
    bVar10 = true;
  }
  uVar12 = *(uint *)(lVar16 + 0x7d8);
  if ((uVar12 >> 4 & 1) != 0) {
    return 0;
  }
  if (*(code **)(lVar16 + 0x2e0) != (code *)0x0) {
    iVar2 = (**(code **)(lVar16 + 0x2e0))
                      (*(undefined8 *)(lVar16 + 0x348),*(undefined8 *)(lVar16 + 0x7a8),
                       *(undefined8 *)(lVar16 + 0x7b8),*(undefined8 *)(lVar16 + 0x7b0),
                       *(undefined8 *)(lVar16 + 0x7c0));
LAB_019c4124:
    if (iVar2 != 0) {
      FUN_019ca0fc(lVar16,"Callback aborted");
    }
    return iVar2;
  }
  if (*(code **)(lVar16 + 0x2d8) != (code *)0x0) {
    auVar23._0_8_ = (double)*(long *)(lVar16 + 0x7b0);
    auVar23._8_8_ = 0;
    iVar2 = (**(code **)(lVar16 + 0x2d8))
                      ((double)*(long *)(lVar16 + 0x7a8),(double)*(long *)(lVar16 + 0x7b8),auVar23,
                       (double)*(long *)(lVar16 + 0x7c0),*(undefined8 *)(lVar16 + 0x348));
    goto LAB_019c4124;
  }
  if (!bVar10) {
    return 0;
  }
  if ((uVar12 >> 7 & 1) == 0) {
    if (*(long *)(lVar16 + 0x8b00) != 0) {
      FUN_019d5ff8(*(undefined8 *)(lVar16 + 0x220),"** Resuming transfer from byte position %ld\n");
    }
    FUN_019d5ff8(*(undefined8 *)(lVar16 + 0x220),
                 "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                );
    uVar12 = *(uint *)(lVar16 + 0x7d8) | 0x80;
    *(uint *)(lVar16 + 0x7d8) = uVar12;
  }
  lVar11 = 0;
  lVar3 = 0;
  if ((uVar12 >> 5 & 1) != 0) {
    lVar3 = *(long *)(lVar16 + 0x7f0);
    if (lVar3 < 1) {
      lVar11 = 0;
LAB_019c4220:
      lVar3 = 0;
    }
    else {
      uVar14 = *(ulong *)(lVar16 + 0x7b0);
      lVar11 = 0;
      if (lVar3 != 0) {
        lVar11 = (long)uVar14 / lVar3;
      }
      if ((long)uVar14 < 0x2711) {
        if ((long)uVar14 < 1) goto LAB_019c4220;
        lVar13 = *(long *)(lVar16 + 0x7c0) * 100;
      }
      else {
        lVar13 = *(long *)(lVar16 + 0x7c0);
        uVar14 = uVar14 / 100;
      }
      lVar3 = 0;
      if (uVar14 != 0) {
        lVar3 = lVar13 / (long)uVar14;
      }
    }
  }
  lVar13 = 0;
  lVar18 = 0;
  if ((uVar12 >> 6 & 1) == 0) goto LAB_019c429c;
  lVar18 = *(long *)(lVar16 + 0x7e8);
  if (lVar18 < 1) {
    lVar13 = 0;
LAB_019c4298:
    lVar18 = 0;
  }
  else {
    uVar14 = *(ulong *)(lVar16 + 0x7a8);
    lVar13 = 0;
    if (lVar18 != 0) {
      lVar13 = (long)uVar14 / lVar18;
    }
    if ((long)uVar14 < 0x2711) {
      if ((long)uVar14 < 1) goto LAB_019c4298;
      lVar15 = *(long *)*pauVar1 * 100;
    }
    else {
      lVar15 = *(long *)*pauVar1;
      uVar14 = uVar14 / 100;
    }
    lVar18 = 0;
    if (uVar14 != 0) {
      lVar18 = lVar15 / (long)uVar14;
    }
  }
LAB_019c429c:
  if (lVar11 <= lVar13) {
    lVar11 = lVar13;
  }
  lVar13 = lVar11 - (long)dVar22;
  if (lVar11 < 1) {
    lVar13 = 0;
  }
  FUN_019c45b4(auStack_c0,lVar13);
  FUN_019c45b4(auStack_cc,lVar11);
  FUN_019c45b4(auStack_d8,(long)dVar22);
  lVar11 = 0x7c0;
  if ((*(uint *)(lVar16 + 0x7d8) & 0x20) != 0) {
    lVar11 = 0x7b0;
  }
  lVar13 = 0x7b8;
  if ((*(uint *)(lVar16 + 0x7d8) & 0x40) != 0) {
    lVar13 = 0x7a8;
  }
  uVar14 = *(long *)(lVar16 + lVar13) + *(long *)(lVar16 + lVar11);
  lVar11 = *(long *)(lVar16 + 0x7c0) + *(long *)(lVar16 + 0x7b8);
  if ((long)uVar14 < 0x2711) {
    if ((long)uVar14 < 1) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      if (uVar14 != 0) {
        lVar13 = (lVar11 * 100) / (long)uVar14;
      }
    }
  }
  else {
    lVar13 = 0;
    if (uVar14 / 100 != 0) {
      lVar13 = lVar11 / (long)(uVar14 / 100);
    }
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x220);
  uVar4 = FUN_019c46a8(uVar14,auStack_a0);
  uVar5 = FUN_019c46a8(*(undefined8 *)(lVar16 + 0x7b8),auStack_b4);
  uVar6 = FUN_019c46a8(*(undefined8 *)(lVar16 + 0x7c0),auStack_aa);
  uVar7 = FUN_019c46a8(*(undefined8 *)(lVar16 + 0x7e8),auStack_96);
  uVar8 = FUN_019c46a8(*(undefined8 *)(lVar16 + 0x7f0),auStack_8c);
  uVar9 = FUN_019c46a8(*(undefined8 *)(lVar16 + 0x7c8),auStack_82);
  FUN_019d5ff8(uVar19,"\r%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s",lVar13,uVar4,lVar18,uVar5,
               lVar3,uVar6,uVar7,uVar8,auStack_cc,auStack_d8,auStack_c0,uVar9);
  fflush(*(FILE **)(lVar16 + 0x220));
  return 0;
}

