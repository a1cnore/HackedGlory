// functions/01a29 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a29334(SSL *param_1)

{
  int iVar1;
  BIO *pBVar2;
  long lVar3;
  long lVar4;
  dtls1_state_st *pdVar5;
  uint uVar6;
  
  iVar1 = *(int *)&param_1->d1->field_0x284;
  if (iVar1 == 0) {
    uVar6 = *(uint *)&param_1->d1->w_msg_hdr;
  }
  else {
    pBVar2 = SSL_get_wbio(param_1);
    lVar3 = BIO_ctrl(pBVar2,0x31,0,(void *)0x0);
    pdVar5 = param_1->d1;
    uVar6 = iVar1 - (int)lVar3;
    *(uint *)&pdVar5->w_msg_hdr = uVar6;
    *(undefined4 *)&pdVar5->field_0x284 = 0;
  }
  pBVar2 = SSL_get_wbio(param_1);
  lVar3 = BIO_ctrl(pBVar2,0x31,0,(void *)0x0);
  if (uVar6 < 0x100U - (int)lVar3) {
    lVar3 = SSL_ctrl(param_1,0x20,0,(void *)0x0);
    if (((uint)lVar3 >> 0xc & 1) != 0) {
      return 0;
    }
    pBVar2 = SSL_get_wbio(param_1);
    lVar3 = BIO_ctrl(pBVar2,0x28,0,(void *)0x0);
    *(uint *)&param_1->d1->w_msg_hdr = (uint)lVar3;
    pBVar2 = SSL_get_wbio(param_1);
    lVar4 = BIO_ctrl(pBVar2,0x31,0,(void *)0x0);
    if ((uint)lVar3 < 0x100U - (int)lVar4) {
      pBVar2 = SSL_get_wbio(param_1);
      lVar3 = BIO_ctrl(pBVar2,0x31,0,(void *)0x0);
      *(int *)&param_1->d1->w_msg_hdr = 0x100 - (int)lVar3;
      pBVar2 = SSL_get_wbio(param_1);
      BIO_ctrl(pBVar2,0x2a,(ulong)*(uint *)&param_1->d1->w_msg_hdr,(void *)0x0);
    }
  }
  return 1;
}

