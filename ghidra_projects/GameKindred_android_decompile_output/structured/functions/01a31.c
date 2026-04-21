// functions/01a31 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a31018(BUF_MEM *param_1,long *param_2,X509 *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uchar *local_38;
  
  iVar1 = i2d_X509(param_3,(uchar **)0x0);
  if ((iVar1 < 0) ||
     (iVar2 = BUF_MEM_grow_clean(param_1,(long)(iVar1 + (int)*param_2 + 3)), iVar2 == 0)) {
    iVar1 = 0x427;
  }
  else {
    pcVar3 = param_1->data;
    lVar4 = *param_2;
    pcVar3[lVar4] = (char)((uint)iVar1 >> 0x10);
    pcVar3[lVar4 + 1] = (char)((uint)iVar1 >> 8);
    pcVar3[lVar4 + 2] = (char)iVar1;
    local_38 = (uchar *)(pcVar3 + lVar4 + 3);
    iVar1 = i2d_X509(param_3,&local_38);
    if (-1 < iVar1) {
      *param_2 = *param_2 + (long)(iVar1 + 3);
      return 1;
    }
    iVar1 = 0x42f;
  }
  ERR_put_error(0x14,0x13f,7,"ssl_cert.c",iVar1);
  return 0;
}

