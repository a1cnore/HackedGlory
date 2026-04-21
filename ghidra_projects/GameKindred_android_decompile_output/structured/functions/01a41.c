// functions/01a41 — 2 functions
#include "libGameKindred.h"




void FUN_01a415f4(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x30);
  iVar2 = iVar1 + -1;
  *(int *)((long)param_1 + 0x30) = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    if (*(long *)((long)param_1 + 0x28) != 0) {
      FUN_01a415f4();
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}




long * FUN_01a4193c(long *param_1,long *param_2)

{
  uint uVar1;
  tm *ptVar2;
  size_t sVar3;
  ulong uVar4;
  size_t sVar6;
  size_t sVar7;
  CRYPTO_THREADID *src;
  size_t n;
  char *pcVar8;
  int iVar9;
  CRYPTO_THREADID CStack_478;
  char acStack_468 [1024];
  undefined1 auStack_68 [8];
  long *plVar5;
  
  plVar5 = param_1;
  if (*param_1 != *param_2) {
    pcVar8 = acStack_468;
    if (((byte)DAT_03215ad8 & 1) != 0) {
      ptVar2 = localtime(param_1 + 7);
      BIO_snprintf(acStack_468,0x400,"[%02d:%02d:%02d] ",(ulong)(uint)ptVar2->tm_hour,
                   (ulong)(uint)ptVar2->tm_min,(ulong)(uint)ptVar2->tm_sec);
      sVar3 = strlen(acStack_468);
      pcVar8 = acStack_468 + sVar3;
    }
    BIO_snprintf(pcVar8,(size_t)(auStack_68 + -(long)pcVar8),"%5lu file=%s, line=%d, ",param_1[6],
                 param_1[2],(ulong)*(uint *)(param_1 + 3));
    sVar3 = strlen(pcVar8);
    pcVar8 = pcVar8 + sVar3;
    if (((byte)DAT_03215ad8 >> 1 & 1) != 0) {
      uVar4 = CRYPTO_THREADID_hash((CRYPTO_THREADID *)(param_1 + 4));
      BIO_snprintf(pcVar8,(size_t)(auStack_68 + -(long)pcVar8),"thread=%lu, ",uVar4);
      sVar3 = strlen(pcVar8);
      pcVar8 = pcVar8 + sVar3;
    }
    BIO_snprintf(pcVar8,(size_t)(auStack_68 + -(long)pcVar8),"number=%d, address=%08lX\n",
                 (ulong)*(uint *)(param_1 + 1),*param_1);
    uVar1 = BIO_puts((BIO *)*param_2,acStack_468);
    plVar5 = (long *)(ulong)uVar1;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    param_2[2] = param_2[2] + (long)(int)param_1[1];
    src = (CRYPTO_THREADID *)param_1[8];
    if (src != (CRYPTO_THREADID *)0x0) {
      CRYPTO_THREADID_cpy(&CStack_478,src);
      n = 0x3ff;
      sVar3 = 1;
      do {
        memset(acStack_468,0x3e,sVar3);
        uVar4 = CRYPTO_THREADID_hash(src);
        BIO_snprintf(acStack_468 + sVar3,n," thread=%lu, file=%s, line=%d, info=\"",uVar4,src[1].ptr
                     ,(ulong)(uint)src[1].val);
        sVar6 = strlen(acStack_468);
        pcVar8 = src[2].ptr;
        sVar7 = strlen(pcVar8);
        iVar9 = (int)sVar6;
        if (0x7d - iVar9 < (int)sVar7) {
          memcpy(acStack_468 + iVar9,pcVar8,(long)(0x7d - iVar9));
          iVar9 = 0x7d;
        }
        else {
          BUF_strlcpy(acStack_468 + iVar9,pcVar8,0x400 - (long)iVar9);
          sVar6 = strlen(acStack_468);
          iVar9 = (int)sVar6;
        }
        BIO_snprintf(acStack_468 + iVar9,0x400 - (long)iVar9,"\"\n");
        uVar1 = BIO_puts((BIO *)*param_2,acStack_468);
        src = (CRYPTO_THREADID *)src[2].val;
        if (src == (CRYPTO_THREADID *)0x0) {
          return (long *)(ulong)uVar1;
        }
        uVar1 = CRYPTO_THREADID_cmp(src,&CStack_478);
        plVar5 = (long *)(ulong)uVar1;
        n = n - 1;
        sVar3 = sVar3 + 1;
      } while (uVar1 == 0);
    }
  }
  return plVar5;
}

