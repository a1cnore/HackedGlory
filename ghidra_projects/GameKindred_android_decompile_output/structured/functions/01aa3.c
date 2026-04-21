// functions/01aa3 — 2 functions
#include "libGameKindred.h"




BIO * FUN_01aa368c(undefined8 *param_1,BIO *param_2,int param_3)

{
  int iVar1;
  BIO *pBVar2;
  EVP_MD *md;
  int line;
  
  pBVar2 = BIO_find_type(param_2,0x208);
  do {
    if (pBVar2 == (BIO *)0x0) {
      iVar1 = 0x6c;
      line = 699;
LAB_01aa3734:
      ERR_put_error(0x21,0x7f,iVar1,"pk7_doit.c",line);
      return (BIO *)0x0;
    }
    BIO_ctrl(pBVar2,0x78,0,param_1);
    if ((EVP_MD_CTX *)*param_1 == (EVP_MD_CTX *)0x0) {
      iVar1 = 0x44;
      line = 0x2c0;
      goto LAB_01aa3734;
    }
    md = EVP_MD_CTX_md((EVP_MD_CTX *)*param_1);
    iVar1 = EVP_MD_type(md);
    if (iVar1 == param_3) {
      return pBVar2;
    }
    pBVar2 = BIO_next(pBVar2);
    pBVar2 = BIO_find_type(pBVar2,0x208);
  } while( true );
}




void * FUN_01aa3e34(_STACK *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *b;
  undefined8 *puVar3;
  void *pvVar4;
  
  b = OBJ_nid2obj(param_2);
  if ((param_1 != (_STACK *)0x0) && (b != (ASN1_OBJECT *)0x0)) {
    iVar1 = sk_num(param_1);
    if (iVar1 < 1) {
      return (void *)0x0;
    }
    iVar1 = 0;
    while( true ) {
      puVar3 = sk_value(param_1,iVar1);
      iVar2 = OBJ_cmp((ASN1_OBJECT *)*puVar3,b);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      iVar2 = sk_num(param_1);
      if (iVar2 <= iVar1) {
        return (void *)0x0;
      }
    }
    if (*(int *)(puVar3 + 1) == 0) {
      iVar1 = sk_num((_STACK *)puVar3[2]);
      if (iVar1 != 0) {
        pvVar4 = sk_value((_STACK *)puVar3[2],0);
        return pvVar4;
      }
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

