// functions/00e6b — 50 functions
#include "libGameKindred.h"




undefined8 FUN_00e6b070(void)

{
  return 0;
}




void FUN_00e6b080(FILE *param_1)

{
  ftell(param_1);
  return;
}




void FUN_00e6b098(void *param_1,ulong param_2,FILE *param_3,ulong param_4)

{
  int __fd;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 0;
  __fd = fileno(param_3);
  mmap(param_1,param_2 & 0xffffffff,1,2,__fd,param_4 & 0xffffffff);
  return;
}




int FUN_00e6b0f4(void *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = munmap(param_1,param_2 & 0xffffffff);
  return iVar1;
}




long FUN_00e6b0fc(void)

{
  int iVar1;
  
  iVar1 = getpagesize();
  return (long)iVar1;
}




int FUN_00e6b114(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  void *__addr;
  ulong uVar4;
  int iVar5;
  size_t __len;
  
  iVar5 = 0;
  if (param_3 - 1U < 4) {
    iVar5 = *(int *)(&DAT_01bee884 + (long)(int)(param_3 - 1U) * 4);
  }
  uVar2 = getpagesize();
  uVar4 = (ulong)uVar2;
  if (param_1 == 0) {
    __addr = (void *)0x0;
  }
  else {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (param_1 - 1U) / uVar4;
    }
    __addr = (void *)(uVar4 + uVar1 * uVar4);
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = (param_1 + (ulong)param_2) / uVar4;
  }
  __len = uVar1 * uVar4 - (long)__addr;
  if ((long)__len < 1) {
    iVar5 = 0;
  }
  else {
    iVar3 = mprotect(__addr,__len,iVar5);
    iVar5 = (int)__len;
    if (iVar3 != 0) {
      iVar5 = iVar3;
    }
  }
  return iVar5;
}




int FUN_00e6b1b4(void *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = mlock(param_1,param_2 & 0xffffffff);
  return iVar1;
}




int FUN_00e6b1bc(void *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = munlock(param_1,param_2 & 0xffffffff);
  return iVar1;
}




undefined8 FUN_00e6b1c4(ulong param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = getpagesize();
  uVar2 = (ulong)uVar1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_1 / uVar2;
  }
  for (uVar3 = uVar3 * uVar2 + (ulong)uVar1; uVar3 < param_1 + param_2; uVar3 = uVar3 + uVar2) {
  }
  return 0;
}




int FUN_00e6b218(undefined4 *param_1,uint param_2,FILE *param_3)

{
  long lVar1;
  size_t sVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0;
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    do {
      local_4c = (*(code *)PTR_FUN_02bf24b8)(*param_1);
      sVar2 = fwrite(&local_4c,4,1,param_3);
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + (int)sVar2;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e6b2b8(undefined2 *param_1,uint param_2,FILE *param_3)

{
  long lVar1;
  size_t sVar2;
  int iVar3;
  ulong uVar4;
  undefined2 local_4c [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0;
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    do {
      local_4c[0] = (*(code *)PTR_FUN_02bf24b0)(*param_1);
      sVar2 = fwrite(local_4c,2,1,param_3);
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + (int)sVar2;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6b358(void *param_1,ulong param_2,FILE *param_3)

{
  fwrite(param_1,1,param_2 & 0xffffffff,param_3);
  return;
}




int FUN_00e6b378(undefined4 *param_1,uint param_2,FILE *param_3)

{
  long lVar1;
  size_t sVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0;
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    do {
      local_4c = (*(code *)PTR_FUN_02bf24c8)(*param_1);
      sVar2 = fwrite(&local_4c,4,1,param_3);
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + (int)sVar2;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6b418(uint param_1)

{
  long lVar1;
  int iVar2;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38.tv_sec = (ulong)param_1 / 1000;
  local_38.tv_nsec = (long)((param_1 % 1000) * 1000000);
  iVar2 = nanosleep(&local_38,(timespec *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




int FUN_00e6b490(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = setenv(param_1,param_2,1);
  return iVar1;
}




void FUN_00e6b49c(void)

{
  getcwd(&DAT_0320eef8,0x1000);
  return;
}




void FUN_00e6b4ac(void)

{
  return;
}




bool FUN_00e6b4b0(char *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  char *__s;
  
  if (*param_1 == '\0') {
    iVar4 = FUN_00e6a50c(param_1,param_2,param_3);
    bVar3 = iVar4 != 0;
  }
  else {
    sVar5 = strlen(param_1);
    lVar6 = (long)(int)sVar5;
    lVar2 = sVar5 << 0x20;
    iVar4 = (int)sVar5 + 1;
    do {
      iVar8 = iVar4;
      lVar7 = lVar2;
      if (lVar6 < 1) break;
      lVar1 = lVar6 + -1;
      lVar6 = lVar6 + -1;
      lVar2 = lVar7 + -0x100000000;
      iVar4 = iVar8 + -1;
    } while (param_1[lVar1] == '/');
    __s = (char *)(param_3 + -1);
    do {
      __s = __s + 1;
    } while (*__s == '/');
    sVar5 = strlen(__s);
    bVar3 = false;
    if ((uint)((int)sVar5 + iVar8) < param_2) {
      param_1[lVar7 >> 0x20] = '/';
      strcpy(param_1 + iVar8,__s);
      bVar3 = true;
    }
  }
  return bVar3;
}




bool FUN_00e6b590(undefined1 *param_1,undefined4 param_2)

{
  __uid_t __uid;
  passwd *ppVar1;
  
  __uid = getuid();
  ppVar1 = getpwuid(__uid);
  if (ppVar1 == (passwd *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_00e6a50c(param_1,param_2,ppVar1->pw_dir);
  }
  return ppVar1 != (passwd *)0x0;
}




int FUN_00e6b5d8(char *param_1)

{
  int iVar1;
  
  iVar1 = mkdir(param_1,0x1f8);
  return iVar1;
}




void FUN_00e6b5e4(void)

{
  time((time_t *)0x0);
  return;
}




int FUN_00e6b5ec(uint param_1,uint param_2)

{
  long lVar1;
  tm *ptVar2;
  float fVar3;
  time_t tStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  time(&tStack_40);
  ptVar2 = localtime(&tStack_40);
  fVar3 = 0.0;
  if ((param_2 & 1) == 0) {
    fVar3 = (float)ptVar2->tm_gmtoff / 3600.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return ((int)(fVar3 + (float)param_1) + 0x18) % 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e6b698(uint param_1,uint param_2)

{
  long lVar1;
  tm *ptVar2;
  float fVar3;
  time_t tStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  time(&tStack_40);
  ptVar2 = localtime(&tStack_40);
  fVar3 = 0.0;
  if ((param_2 & 1) == 0) {
    fVar3 = (float)ptVar2->tm_gmtoff / 3600.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return ((int)((float)param_1 - fVar3) + 0x18) % 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6b744(void)

{
  long lVar1;
  int iVar2;
  sysinfo local_98;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = sysinfo(&local_98);
  if (iVar2 != 0) {
    local_98.uptime = -1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98.uptime);
}




void FUN_00e6b798(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  clock_t cVar4;
  time_t tVar5;
  
  cVar4 = clock();
  tVar5 = time((time_t *)0x0);
  uVar3 = getpid();
  uVar1 = ((int)cVar4 - (int)tVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = ((int)tVar5 - uVar3) - uVar1 ^ uVar1 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 10;
  srand((uVar3 - uVar1) - uVar2 ^ uVar2 >> 0xf);
  return;
}




bool FUN_00e6b838(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e7241c(param_2,param_3,param_4 & 1,param_1);
  return iVar1 != 0;
}




void FUN_00e6b86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_00e72308(param_2,param_3,(long)param_4,param_1);
  return;
}




void FUN_00e6b898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e723a0(param_2,param_3,param_1);
  return;
}




void FUN_00e6b8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00e71dd0(param_2,param_3,param_6,param_4,param_5,param_1);
  return;
}




void FUN_00e6b8c4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_00e724d8(param_2,param_3,param_4,param_1);
  return;
}




void FUN_00e6b8dc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  FUN_00e725a4(param_2,param_3,param_4,param_5,param_1);
  return;
}




bool FUN_00e6b8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e73350(param_2,param_3,param_4 & 1,param_1);
  return iVar1 != 0;
}




bool FUN_00e6b92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e73350(param_2,param_3,(long)param_4,param_1);
  return iVar1 != 0;
}




bool FUN_00e6b960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e73468(param_2,param_3,param_1);
  return iVar1 != 0;
}




bool FUN_00e6b98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e729e0(param_2,param_3,param_4,param_1);
  return iVar1 != 0;
}




bool FUN_00e6b9bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e729e0(param_2,0,0,param_1);
  return iVar1 != 0;
}




bool FUN_00e6b9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e729e0(param_2,param_3,0,param_1);
  return iVar1 != 0;
}




bool FUN_00e6ba14(undefined8 param_1,byte *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  iVar1 = FUN_00e7241c(pbVar2,pbVar3,param_4 & 1,param_1);
  return iVar1 != 0;
}




void FUN_00e6ba5c(undefined8 param_1,byte *param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  FUN_00e72308(pbVar1,pbVar2,(long)param_4,param_1);
  return;
}




void FUN_00e6ba9c(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  FUN_00e723a0(pbVar1,pbVar2,param_1);
  return;
}




void FUN_00e6bac8(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4,byte *param_5)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar2 = *(byte **)(param_3 + 0x10);
  pbVar4 = *(byte **)(param_4 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  pbVar3 = *(byte **)(param_5 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar4 = param_4 + 1;
  }
  if ((*param_5 & 1) == 0) {
    pbVar3 = param_5 + 1;
  }
  FUN_00e71dd0(pbVar2,pbVar4,pbVar3,auStack_438,0x400,param_2);
  FUN_008fa54c(param_1,auStack_438);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6bb60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e724d8(param_3,auStack_438,0x400,param_2);
  FUN_008fa54c(param_1,auStack_438);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6bbd0(undefined8 param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  long lVar1;
  byte *pbVar2;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  FUN_00e725a4(pbVar2,param_4,auStack_438,0x400,param_2);
  FUN_008fa54c(param_1,auStack_438);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00e6bc50(undefined8 param_1,byte *param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  iVar1 = FUN_00e73350(pbVar2,pbVar3,param_4 & 1,param_1);
  return iVar1 != 0;
}




bool FUN_00e6bc98(undefined8 param_1,byte *param_2,byte *param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  iVar1 = FUN_00e73350(pbVar2,pbVar3,(long)param_4,param_1);
  return iVar1 != 0;
}




bool FUN_00e6bce0(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  iVar1 = FUN_00e73468(pbVar2,pbVar3,param_1);
  return iVar1 != 0;
}




bool FUN_00e6bd24(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  pbVar3 = *(byte **)(param_4 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
  }
  if ((*param_4 & 1) == 0) {
    pbVar3 = param_4 + 1;
  }
  iVar1 = FUN_00e729e0(pbVar2,pbVar4,pbVar3,param_1);
  return iVar1 != 0;
}




bool FUN_00e6bd78(undefined8 param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  iVar1 = FUN_00e729e0(pbVar2,0,0,param_1);
  return iVar1 != 0;
}




bool FUN_00e6bdb0(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  iVar1 = FUN_00e729e0(pbVar2,pbVar3,0,param_1);
  return iVar1 != 0;
}




void FUN_00e6bdf4(char *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  time_t tVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  char local_194 [4];
  tm local_190;
  undefined1 auStack_158 [264];
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  if (((DAT_0320ff00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0320ff00), iVar2 != 0)) {
    DAT_0320fef8 = nan("");
    __cxa_guard_release(&DAT_0320ff00);
  }
  dVar10 = DAT_0320fef8;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_00e6c098;
  FUN_00e6a50c(auStack_158,0x100,param_1);
  local_190.tm_zone = (char *)0x0;
  local_190.tm_wday = 0;
  local_190.tm_yday = 0;
  local_190.tm_mon = 0;
  local_190.tm_year = 0;
  local_190.tm_gmtoff = 0;
  local_190.tm_isdst = 0;
  local_190._36_4_ = 0;
  local_190.tm_hour = 0;
  local_190.tm_mday = 0;
  local_190.tm_sec = 0;
  local_190.tm_min = 0;
  lVar3 = FUN_00e6c0c8(auStack_158,&DAT_01bee8b3);
  dVar10 = DAT_0320fef8;
  if ((lVar3 == 0) ||
     ((lVar4 = FUN_00e6c0c8(auStack_158,0x1e21c1a), dVar10 = DAT_0320fef8, lVar4 == 0 ||
      (lVar5 = FUN_00e6c0c8(lVar4,0x1e21c1a), dVar10 = DAT_0320fef8, lVar5 == 0))))
  goto LAB_00e6c098;
  local_194[0] = '\0';
  iVar2 = FUN_00e6ab4c(auStack_158,local_194);
  local_190.tm_year = iVar2;
  dVar10 = DAT_0320fef8;
  if (local_194[0] == '\0') goto LAB_00e6c098;
  local_190.tm_year = iVar2 + -0x76c;
  local_190.tm_mon = FUN_00e6ab4c(lVar4,local_194);
  dVar10 = DAT_0320fef8;
  if (local_194[0] == '\0') goto LAB_00e6c098;
  local_190.tm_mon = local_190.tm_mon + -1;
  iVar2 = FUN_00e6ab4c(lVar5,local_194);
  local_190.tm_mday = iVar2;
  dVar10 = DAT_0320fef8;
  if (local_194[0] == '\0') goto LAB_00e6c098;
  pcVar6 = (char *)FUN_00e6c0c8(lVar3,&DAT_01bee8b7);
  if (pcVar6 == (char *)0x0) {
    lVar4 = FUN_00e6c0c8(lVar3,&DAT_01b9f8c3);
    if (lVar4 == 0) {
      lVar4 = FUN_00e6c0c8(lVar3,0x1e21c1a);
      if (lVar4 == 0) goto LAB_00e6bf20;
      iVar2 = FUN_00e6c114();
      dVar11 = (double)iVar2;
    }
    else {
      iVar2 = FUN_00e6c114();
      dVar11 = -(double)iVar2;
    }
  }
  else {
    dVar10 = DAT_0320fef8;
    if (*pcVar6 != '\0') goto LAB_00e6c098;
LAB_00e6bf20:
    dVar11 = 0.0;
  }
  lVar4 = FUN_00e6c0c8(lVar3,":");
  dVar10 = DAT_0320fef8;
  if ((lVar4 != 0) && (lVar5 = FUN_00e6c0c8(lVar4,":"), dVar10 = DAT_0320fef8, lVar5 != 0)) {
    iVar2 = FUN_00e6ab4c(lVar3,local_194);
    local_190.tm_hour = iVar2;
    dVar10 = DAT_0320fef8;
    if (local_194[0] != '\0') {
      iVar2 = FUN_00e6ab4c(lVar4,local_194);
      local_190.tm_min = iVar2;
      dVar10 = DAT_0320fef8;
      if (local_194[0] != '\0') {
        fVar9 = (float)FUN_00e6ac94(lVar5);
        local_190.tm_sec = (int)fVar9;
        pcVar6 = getenv("TZ");
        setenv("TZ","",1);
        tzset();
        tVar7 = mktime(&local_190);
        if (pcVar6 == (char *)0x0) {
          unsetenv("TZ");
        }
        else {
          setenv("TZ",pcVar6,1);
        }
        tzset();
        dVar10 = dVar11 * 60.0 + ((double)fVar9 - (double)(int)fVar9) + (double)tVar7;
      }
    }
  }
LAB_00e6c098:
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar10);
}

