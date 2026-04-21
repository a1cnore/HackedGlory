// functions/01a66 — 3 functions
#include "libGameKindred.h"




size_t FUN_01a66928(long param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  size_t sVar1;
  char *__s;
  size_t sVar2;
  BUF_MEM *a;
  
  a = *(BUF_MEM **)(param_1 + 0x30);
  sVar1 = 0;
  if (param_2 < 0x72) {
    switch(param_2) {
    case 1:
      __s = a->data;
      if (__s != (char *)0x0) {
        sVar1 = a->max;
        if ((*(byte *)(param_1 + 0x21) >> 1 & 1) == 0) {
          memset(__s,0,sVar1);
          a->length = 0;
        }
        else {
          sVar2 = a->length;
          a->length = sVar1;
          a->data = __s + (sVar2 - sVar1);
        }
      }
      break;
    case 2:
      return (ulong)(a->length == 0);
    case 3:
      sVar1 = a->length;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = a->data;
      }
    default:
      return sVar1;
    case 8:
      return (long)*(int *)(param_1 + 0x1c);
    case 9:
      *(undefined4 *)(param_1 + 0x1c) = param_3;
      break;
    case 10:
      return a->length;
    case 0xb:
    case 0xc:
      break;
    }
  }
  else if (param_2 == 0x72) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (a != (BUF_MEM *)0x0)) &&
       (*(int *)(param_1 + 0x18) != 0)) {
      if ((*(byte *)(param_1 + 0x21) >> 1 & 1) != 0) {
        a->data = (char *)0x0;
      }
      BUF_MEM_free(a);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    *(undefined8 **)(param_1 + 0x30) = param_4;
  }
  else if (param_2 == 0x73) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = a;
    }
  }
  else {
    if (param_2 != 0x82) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = param_3;
  }
  return 1;
}




ulong FUN_01a66cdc(long param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  
  sVar3 = 0;
  if ((param_2 != (void *)0x0) && (*(int *)(param_1 + 0x18) != 0)) {
    sVar3 = fread(param_2,1,(long)param_3,*(FILE **)(param_1 + 0x30));
    iVar1 = ferror(*(FILE **)(param_1 + 0x30));
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
      ERR_put_error(2,0xb,*piVar2,"bss_file.c",0xfb);
      ERR_put_error(0x20,0x82,2,"bss_file.c",0xfc);
      sVar3 = 0xffffffff;
    }
  }
  return sVar3 & 0xffffffff;
}




long FUN_01a66e30(BIO *param_1,undefined4 param_2,long param_3,char *param_4)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *src;
  int line;
  uint uVar4;
  long lVar5;
  char acStack_34 [4];
  
  pFVar2 = param_1->ptr;
  uVar4 = (uint)param_3;
  lVar5 = 1;
  switch(param_2) {
  case 1:
switchD_01a66e70_caseD_1:
    iVar1 = fseek(pFVar2,param_3,0);
    lVar5 = (long)iVar1;
    break;
  case 2:
    iVar1 = feof(pFVar2);
    lVar5 = (long)iVar1;
    break;
  case 3:
switchD_01a66e70_caseD_3:
    lVar5 = ftell(pFVar2);
    break;
  case 8:
    lVar5 = (long)param_1->shutdown;
    break;
  case 9:
    param_1->shutdown = uVar4;
    goto LAB_01a66f1c;
  case 0xb:
    fflush(pFVar2);
LAB_01a66f1c:
    lVar5 = 1;
    break;
  case 0xc:
    break;
  default:
    switch(param_2) {
    case 0x6a:
      if (param_1->shutdown != 0) {
        if ((param_1->init != 0) && (pFVar2 != (FILE *)0x0)) {
          fclose(pFVar2);
          param_1->ptr = (void *)0x0;
          param_1->flags = 0;
        }
        param_1->init = 0;
      }
      param_1->init = 1;
      param_1->shutdown = uVar4 & 1;
      param_1->ptr = param_4;
      return 1;
    case 0x6b:
      if (param_4 != (char *)0x0) {
        *(FILE **)param_4 = pFVar2;
      }
      goto LAB_01a66f1c;
    case 0x6c:
      if (param_1->shutdown != 0) {
        if ((param_1->init != 0) && (pFVar2 != (FILE *)0x0)) {
          fclose(pFVar2);
          param_1->ptr = (void *)0x0;
          param_1->flags = 0;
        }
        param_1->init = 0;
      }
      param_1->shutdown = uVar4 & 1;
      if ((uVar4 >> 3 & 1) == 0) {
        if (((uVar4 >> 2 & 1) != 0) && ((uVar4 >> 1 & 1) != 0)) {
          src = "r+";
          goto LAB_01a66fa0;
        }
        if ((uVar4 >> 2 & 1) != 0) {
          src = "w";
          goto LAB_01a66fa0;
        }
        if ((uVar4 >> 1 & 1) != 0) {
          src = "r";
          goto LAB_01a66fa0;
        }
        iVar1 = 0x65;
        line = 0x17c;
      }
      else {
        if ((uVar4 >> 1 & 1) == 0) {
          src = "a";
        }
        else {
          src = "a+";
        }
LAB_01a66fa0:
        BUF_strlcpy(acStack_34,src,4);
        pFVar2 = fopen(param_4,acStack_34);
        if (pFVar2 != (FILE *)0x0) {
          param_1->ptr = pFVar2;
          param_1->init = 1;
          BIO_clear_flags(param_1,0);
          return 1;
        }
        piVar3 = (int *)__errno();
        ERR_put_error(2,1,*piVar3,"bss_file.c",0x18e);
        ERR_add_error_data(5,"fopen(\'",param_4,&DAT_01e442ab,acStack_34,&DAT_01e2fd75);
        iVar1 = 2;
        line = 400;
      }
      ERR_put_error(0x20,0x74,iVar1,"bss_file.c",line);
      break;
    case 0x80:
      goto switchD_01a66e70_caseD_1;
    case 0x85:
      goto switchD_01a66e70_caseD_3;
    }
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
    lVar5 = 0;
  }
  return lVar5;
}

