// functions/01a82 — 2 functions
#include "libGameKindred.h"




undefined8
FUN_01a82128(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *local_78;
  uchar *local_70;
  int local_68;
  int local_64;
  
  puVar3 = (uchar *)*param_6;
  local_78 = puVar3;
  if (param_11 == (char *)0x0) {
    uVar1 = ASN1_get_object(&local_78,(long *)&local_70,&local_64,&local_68,param_7);
  }
  else if (*param_11 == '\0') {
    uVar1 = ASN1_get_object(&local_78,(long *)&local_70,&local_64,&local_68,param_7);
    *(uint *)(param_11 + 4) = uVar1;
    *(uchar **)(param_11 + 8) = local_70;
    *(int *)(param_11 + 0x14) = local_68;
    *(int *)(param_11 + 0x10) = local_64;
    *param_11 = '\x01';
    iVar2 = (int)local_78 - (int)puVar3;
    *(int *)(param_11 + 0x18) = iVar2;
    if (((uVar1 & 0x81) == 0) && (param_7 < (long)(local_70 + iVar2))) {
      ERR_put_error(0xd,0x68,0x9b,"tasn_dec.c",0x499);
      goto LAB_01a822f4;
    }
  }
  else {
    local_70 = *(uchar **)(param_11 + 8);
    uVar1 = *(uint *)(param_11 + 4);
    local_68 = *(int *)(param_11 + 0x14);
    local_64 = *(int *)(param_11 + 0x10);
    local_78 = puVar3 + *(int *)(param_11 + 0x18);
  }
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < param_8) {
      if ((local_64 != param_8) || (local_68 != param_9)) {
        if (param_10 == '\0') {
          if (param_11 != (char *)0x0) {
            *param_11 = '\0';
          }
          ERR_put_error(0xd,0x68,0xa8,"tasn_dec.c",0x4ad);
          return 0;
        }
        return 0xffffffff;
      }
      if (param_11 != (char *)0x0) {
        *param_11 = '\0';
      }
    }
    if ((uVar1 & 1) != 0) {
      local_70 = puVar3 + (param_7 - (long)local_78);
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = (byte)uVar1 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = (byte)uVar1 & 0x20;
    }
    if (param_1 != (long *)0x0) {
      *param_1 = (long)local_70;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)local_68;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_64;
    }
    *param_6 = (long)local_78;
    return 1;
  }
  ERR_put_error(0xd,0x68,0x66,"tasn_dec.c",0x4a1);
  if (param_11 == (char *)0x0) {
    return 0;
  }
LAB_01a822f4:
  *param_11 = '\0';
  return 0;
}




undefined8
FUN_01a82688(ASN1_VALUE **param_1,long *param_2,uchar *param_3,ASN1_TEMPLATE *param_4,char param_5,
            ASN1_TLC *param_6)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  undefined8 uVar4;
  int line;
  uint aclass;
  _STACK *p_Var5;
  ASN1_VALUE *local_58;
  char local_4c [4];
  uchar *local_48;
  uchar *local_38;
  
  if (param_1 == (ASN1_VALUE **)0x0) {
    return 0;
  }
  uVar1 = (uint)param_4->flags;
  local_48 = (uchar *)*param_2;
  aclass = uVar1 & 0xc0;
  local_38 = param_3;
  if ((uVar1 & 6) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      iVar3 = ASN1_item_ex_d2i(param_1,&local_48,(long)param_3,param_4->item,-1,uVar1 & 0x400,
                               param_5,param_6);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (iVar3 != 0) {
LAB_01a8295c:
        *param_2 = (long)local_48;
        return 1;
      }
      iVar3 = 0x3a;
      line = 0x2b9;
    }
    else {
      iVar3 = ASN1_item_ex_d2i(param_1,&local_48,(long)param_3,param_4->item,(int)param_4->tag,
                               aclass,param_5,param_6);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (iVar3 != 0) goto LAB_01a8295c;
      iVar3 = 0x3a;
      line = 0x2b0;
    }
  }
  else {
    if ((uVar1 >> 3 & 1) == 0) {
      aclass = 0;
      uVar1 = uVar1 >> 1 & 1 | 0x10;
    }
    else {
      uVar1 = (uint)param_4->tag;
    }
    uVar4 = FUN_01a82128(&local_38,0,0,local_4c,0,&local_48,param_3,uVar1,aclass,param_5,param_6);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      ERR_put_error(0xd,0x83,0x3a,"tasn_dec.c",0x273);
      return 0;
    }
    p_Var5 = (_STACK *)*param_1;
    if (p_Var5 == (_STACK *)0x0) {
      p_Var5 = sk_new_null();
      *param_1 = (ASN1_VALUE *)p_Var5;
    }
    else {
      iVar3 = sk_num(p_Var5);
      while (0 < iVar3) {
        local_58 = sk_pop(p_Var5);
        ASN1_item_ex_free(&local_58,param_4->item);
        iVar3 = sk_num(p_Var5);
      }
      p_Var5 = (_STACK *)*param_1;
    }
    puVar2 = local_48;
    if (p_Var5 == (_STACK *)0x0) {
      iVar3 = 0x41;
      line = 0x286;
    }
    else {
      do {
        local_48 = puVar2;
        if ((long)local_38 < 1) {
          if (local_4c[0] == '\0') goto LAB_01a8295c;
          iVar3 = 0x89;
          line = 0x2a7;
          goto LAB_01a82924;
        }
        if (((local_38 != (uchar *)0x1) && (*puVar2 == '\0')) && (puVar2[1] == '\0')) {
          local_48 = puVar2 + 2;
          if (local_4c[0] != '\0') goto LAB_01a8295c;
          iVar3 = 0x9f;
          line = 0x292;
          goto LAB_01a82924;
        }
        local_58 = (ASN1_VALUE *)0x0;
        iVar3 = ASN1_item_ex_d2i(&local_58,&local_48,(long)local_38,param_4->item,-1,0,'\0',param_6)
        ;
        if (iVar3 == 0) {
          iVar3 = 0x3a;
          line = 0x29d;
          goto LAB_01a82924;
        }
        local_38 = puVar2 + ((long)local_38 - (long)local_48);
        iVar3 = sk_push((_STACK *)*param_1,local_58);
        puVar2 = local_48;
      } while (iVar3 != 0);
      iVar3 = 0x41;
      line = 0x2a2;
    }
  }
LAB_01a82924:
  ERR_put_error(0xd,0x83,iVar3,"tasn_dec.c",line);
  ASN1_template_free(param_1,param_4);
  return 0;
}

