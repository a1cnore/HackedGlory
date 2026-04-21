// functions/01a81 — 1 functions
#include "libGameKindred.h"




undefined8
FUN_01a81a98(ASN1_VALUE **param_1,long *param_2,undefined8 param_3,ASN1_TEMPLATE *param_4,
            undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  int line;
  char local_50 [4];
  char local_4c [4];
  char *local_48;
  char *local_38;
  
  if (param_1 == (ASN1_VALUE **)0x0) {
    return 0;
  }
  uVar1 = (uint)param_4->flags;
  local_48 = (char *)*param_2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar4 = FUN_01a82688(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar4;
  }
  uVar4 = FUN_01a82128(&local_38,0,0,local_4c,local_50,&local_48,param_3,(int)param_4->tag,
                       uVar1 & 0xc0,(char)param_5,param_6);
  pcVar2 = local_48;
  if ((int)uVar4 == -1) {
    return uVar4;
  }
  if ((int)uVar4 == 0) {
    ERR_put_error(0xd,0x84,0x3a,"tasn_dec.c",0x224);
  }
  else if (local_50[0] == '\0') {
    ERR_put_error(0xd,0x84,0x78,"tasn_dec.c",0x22a);
  }
  else {
    iVar3 = FUN_01a82688(param_1,&local_48,local_38,param_4,0,param_6);
    if (iVar3 == 0) {
      ERR_put_error(0xd,0x84,0x3a,"tasn_dec.c",0x230);
    }
    else {
      local_38 = pcVar2 + ((long)local_38 - (long)local_48);
      if (local_4c[0] == '\0') {
        if (local_38 == (char *)0x0) goto LAB_01a81c5c;
        iVar3 = 0x77;
        line = 0x241;
      }
      else {
        if (((1 < (long)local_38) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
          local_48 = local_48 + 2;
LAB_01a81c5c:
          *param_2 = (long)local_48;
          return 1;
        }
        iVar3 = 0x89;
        line = 0x238;
      }
      ERR_put_error(0xd,0x84,iVar3,"tasn_dec.c",line);
      ASN1_template_free(param_1,param_4);
    }
  }
  return 0;
}

