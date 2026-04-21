// functions/01a32 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01a32434(long param_1,SSL_SESSION *param_2,int param_3)

{
  undefined8 *puVar1;
  uchar *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  SSL_SESSION *ses;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == (SSL_SESSION *)0x0) {
    return 0;
  }
  if (param_2->session_id_length != 0) {
    if (param_3 != 0) {
      CRYPTO_lock(9,0xc,"ssl_sess.c",0x333);
    }
    ses = lh_retrieve(*(_LHASH **)(param_1 + 0x20),param_2);
    if (ses == param_2) {
      ses = lh_delete(*(_LHASH **)(param_1 + 0x20),param_2);
      puVar5 = *(undefined8 **)(param_2->krb5_client_princ + 0x80);
      if ((puVar5 != (undefined8 *)0x0) &&
         (puVar6 = *(undefined8 **)(param_2->krb5_client_princ + 0x78), puVar6 != (undefined8 *)0x0)
         ) {
        puVar1 = (undefined8 *)(param_1 + 0x38);
        puVar2 = param_2->krb5_client_princ + 0x78;
        puVar3 = (undefined8 *)(param_1 + 0x30);
        if (puVar5 == puVar1) {
          if (puVar6 == puVar3) {
            *puVar3 = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
          else {
            *puVar1 = puVar6;
            puVar6[0x22] = puVar1;
          }
        }
        else if (puVar6 == puVar3) {
          *puVar3 = puVar5;
          puVar5[0x21] = puVar3;
        }
        else {
          puVar5[0x21] = puVar6;
          *(undefined8 **)(*(long *)puVar2 + 0x110) = puVar5;
        }
        puVar2[0] = '\0';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
        puVar2[4] = '\0';
        puVar2[5] = '\0';
        puVar2[6] = '\0';
        puVar2[7] = '\0';
        param_2->krb5_client_princ[0x80] = '\0';
        param_2->krb5_client_princ[0x81] = '\0';
        param_2->krb5_client_princ[0x82] = '\0';
        param_2->krb5_client_princ[0x83] = '\0';
        param_2->krb5_client_princ[0x84] = '\0';
        param_2->krb5_client_princ[0x85] = '\0';
        param_2->krb5_client_princ[0x86] = '\0';
        param_2->krb5_client_princ[0x87] = '\0';
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (param_3 != 0) {
      CRYPTO_lock(10,0xc,"ssl_sess.c",0x33b);
    }
    if (bVar4) {
      ses->krb5_client_princ[0x10] = '\x01';
      ses->krb5_client_princ[0x11] = '\0';
      ses->krb5_client_princ[0x12] = '\0';
      ses->krb5_client_princ[0x13] = '\0';
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1,ses);
      }
      SSL_SESSION_free(ses);
      return 1;
    }
    return 0;
  }
  return 0;
}




void FUN_01a328e8(SSL_SESSION *param_1,long *param_2)

{
  undefined8 *puVar1;
  uchar *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((param_2[1] != 0) &&
     (param_2[1] <=
      *(long *)(param_1->krb5_client_princ + 0x38) + *(long *)(param_1->krb5_client_princ + 0x40)))
  {
    return;
  }
  lh_delete((_LHASH *)param_2[2],param_1);
  puVar6 = *(undefined8 **)(param_1->krb5_client_princ + 0x80);
  lVar4 = *param_2;
  if ((puVar6 != (undefined8 *)0x0) &&
     (puVar5 = *(undefined8 **)(param_1->krb5_client_princ + 0x78), puVar5 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
    puVar2 = param_1->krb5_client_princ + 0x78;
    puVar3 = (undefined8 *)(lVar4 + 0x30);
    if (puVar6 == puVar1) {
      if (puVar5 == puVar3) {
        *puVar3 = 0;
        *(undefined8 *)(lVar4 + 0x38) = 0;
      }
      else {
        *puVar1 = puVar5;
        puVar5[0x22] = puVar1;
      }
    }
    else if (puVar5 == puVar3) {
      *puVar3 = puVar6;
      puVar6[0x21] = puVar3;
    }
    else {
      puVar6[0x21] = puVar5;
      *(undefined8 **)(*(long *)puVar2 + 0x110) = puVar6;
    }
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    param_1->krb5_client_princ[0x80] = '\0';
    param_1->krb5_client_princ[0x81] = '\0';
    param_1->krb5_client_princ[0x82] = '\0';
    param_1->krb5_client_princ[0x83] = '\0';
    param_1->krb5_client_princ[0x84] = '\0';
    param_1->krb5_client_princ[0x85] = '\0';
    param_1->krb5_client_princ[0x86] = '\0';
    param_1->krb5_client_princ[0x87] = '\0';
    lVar4 = *param_2;
  }
  param_1->krb5_client_princ[0x10] = '\x01';
  param_1->krb5_client_princ[0x11] = '\0';
  param_1->krb5_client_princ[0x12] = '\0';
  param_1->krb5_client_princ[0x13] = '\0';
  if (*(code **)(lVar4 + 0x58) != (code *)0x0) {
    (**(code **)(lVar4 + 0x58))(lVar4,param_1);
  }
  SSL_SESSION_free(param_1);
  return;
}

