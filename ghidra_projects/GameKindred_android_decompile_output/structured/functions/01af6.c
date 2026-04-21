// functions/01af6 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01af61ac(undefined8 *param_1)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_OBJECT *pAVar3;
  int reason;
  int line;
  
  if (param_1[1] == 0) {
    pAVar2 = ASN1_item_new((ASN1_ITEM *)CMS_SignedData_it);
    param_1[1] = pAVar2;
    if (pAVar2 != (ASN1_VALUE *)0x0) {
      *(undefined8 *)pAVar2 = 1;
      pAVar3 = OBJ_nid2obj(0x15);
      **(undefined8 **)(param_1[1] + 0x10) = pAVar3;
      *(undefined4 *)(*(long *)(param_1[1] + 0x10) + 0x10) = 1;
      ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
      pAVar3 = OBJ_nid2obj(0x16);
      *param_1 = pAVar3;
      return param_1[1];
    }
    iVar1 = 0x95;
    reason = 0x41;
    line = 0x53;
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
    if (iVar1 == 0x16) {
      return param_1[1];
    }
    iVar1 = 0x85;
    reason = 0x6c;
    line = 0x48;
  }
  ERR_put_error(0x2e,iVar1,reason,"cms_sd.c",line);
  return 0;
}

