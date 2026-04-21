// functions/01aa5 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01aa5104(_STACK *param_1,char *param_2,long *param_3,_STACK *param_4)

{
  int iVar1;
  int iVar2;
  PKCS12_SAFEBAG *bag;
  ASN1_TYPE *pAVar3;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pEVar4;
  X509 *x;
  undefined8 uVar5;
  ASN1_STRING *in;
  ASN1_STRING *pAVar6;
  uchar *local_58;
  
  iVar1 = sk_num(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      bag = sk_value(param_1,iVar1);
      pAVar3 = PKCS12_get_attr_gen(bag->attrib,0x9c);
      if (pAVar3 == (ASN1_TYPE *)0x0) {
        in = (ASN1_STRING *)0x0;
        pAVar3 = PKCS12_get_attr_gen(bag->attrib,0x9d);
        if (pAVar3 == (ASN1_TYPE *)0x0) goto LAB_01aa5198;
LAB_01aa517c:
        pAVar6 = (pAVar3->value).asn1_string;
      }
      else {
        in = (pAVar3->value).asn1_string;
        pAVar3 = PKCS12_get_attr_gen(bag->attrib,0x9d);
        if (pAVar3 != (ASN1_TYPE *)0x0) goto LAB_01aa517c;
LAB_01aa5198:
        pAVar6 = (ASN1_STRING *)0x0;
      }
      iVar2 = OBJ_obj2nid(bag->type);
      switch(iVar2) {
      case 0x96:
        if ((param_3 != (long *)0x0) && (*param_3 == 0)) {
          pEVar4 = EVP_PKCS82PKEY((PKCS8_PRIV_KEY_INFO *)(bag->value).bag);
          *param_3 = (long)pEVar4;
          if (pEVar4 == (EVP_PKEY *)0x0) {
            return 0;
          }
        }
        break;
      case 0x97:
        if ((param_3 != (long *)0x0) && (*param_3 == 0)) {
          p8 = PKCS12_decrypt_skey(bag,param_2,-1);
          if (p8 == (PKCS8_PRIV_KEY_INFO *)0x0) {
            return 0;
          }
          pEVar4 = EVP_PKCS82PKEY(p8);
          *param_3 = (long)pEVar4;
          PKCS8_PRIV_KEY_INFO_free(p8);
          if (*param_3 == 0) {
            return 0;
          }
        }
        break;
      case 0x98:
        iVar2 = OBJ_obj2nid(((bag->value).bag)->type);
        if (iVar2 == 0x9e) {
          x = PKCS12_certbag2x509(bag);
          if (x == (X509 *)0x0) {
            return 0;
          }
          if ((pAVar6 != (ASN1_STRING *)0x0) &&
             (iVar2 = X509_keyid_set1(x,pAVar6->data,pAVar6->length), iVar2 == 0)) {
LAB_01aa52f0:
            X509_free(x);
            return 0;
          }
          if ((in != (ASN1_STRING *)0x0) && (iVar2 = ASN1_STRING_to_UTF8(&local_58,in), -1 < iVar2))
          {
            iVar2 = X509_alias_set1(x,local_58,iVar2);
            CRYPTO_free(local_58);
            if (iVar2 == 0) goto LAB_01aa52f0;
          }
          iVar2 = sk_push(param_4,x);
          if (iVar2 == 0) goto LAB_01aa52f0;
        }
        break;
      case 0x9b:
        uVar5 = FUN_01aa5104((bag->value).bag,param_2,param_3,param_4);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = sk_num(param_1);
    } while (iVar1 < iVar2);
  }
  return 1;
}

