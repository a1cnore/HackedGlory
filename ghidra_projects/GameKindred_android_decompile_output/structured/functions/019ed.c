// functions/019ed — 10 functions
#include "libGameKindred.h"




void thunk_FUN_019ed194(long param_1,int param_2)

{
  undefined8 *puVar1;
  SSL *s;
  SSL_CTX *pSVar2;
  long lVar3;
  
  lVar3 = param_1 + (long)param_2 * 0x28;
  s = *(SSL **)(lVar3 + 0x218);
  if (s != (SSL *)0x0) {
    puVar1 = (undefined8 *)(lVar3 + 0x218);
    SSL_shutdown(s);
    SSL_set_connect_state((SSL *)*puVar1);
    SSL_free((SSL *)*puVar1);
    *puVar1 = 0;
  }
  param_1 = param_1 + (long)param_2 * 0x28;
  pSVar2 = *(SSL_CTX **)(param_1 + 0x210);
  if (pSVar2 != (SSL_CTX *)0x0) {
    SSL_CTX_free(pSVar2);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  return;
}




void thunk_FUN_019ed0a0(void)

{
  FUN_019ed0a0();
  return;
}




long thunk_FUN_019ed11c(void)

{
  ENGINE *e;
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  e = ENGINE_get_first();
  if (e == (ENGINE *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      pcVar1 = ENGINE_get_id(e);
      lVar2 = FUN_019c1cb0(lVar3,pcVar1);
      if (lVar2 == 0) {
        FUN_019c1dcc(lVar3);
        return 0;
      }
      e = ENGINE_get_next(e);
      lVar3 = lVar2;
    } while (e != (ENGINE *)0x0);
  }
  return lVar2;
}




undefined8 FUN_019ed0a0(long param_1)

{
  int iVar1;
  ENGINE *e;
  char *pcVar2;
  undefined8 uVar3;
  
  e = *(ENGINE **)(param_1 + 0x8a70);
  uVar3 = 0;
  if (e != (ENGINE *)0x0) {
    iVar1 = ENGINE_set_default(e,0xffff);
    pcVar2 = ENGINE_get_id(*(ENGINE **)(param_1 + 0x8a70));
    if (iVar1 < 1) {
      FUN_019ca0fc(param_1,"set default crypto engine \'%s\' failed",pcVar2);
      uVar3 = 0x36;
    }
    else {
      FUN_019c9f64(param_1,"set default crypto engine \'%s\'\n");
      uVar3 = 0;
    }
  }
  return uVar3;
}




long FUN_019ed11c(void)

{
  ENGINE *e;
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  e = ENGINE_get_first();
  if (e == (ENGINE *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      pcVar1 = ENGINE_get_id(e);
      lVar2 = FUN_019c1cb0(lVar3,pcVar1);
      if (lVar2 == 0) {
        FUN_019c1dcc(lVar3);
        return 0;
      }
      e = ENGINE_get_next(e);
      lVar3 = lVar2;
    } while (e != (ENGINE *)0x0);
  }
  return lVar2;
}




void FUN_019ed194(long param_1,int param_2)

{
  undefined8 *puVar1;
  SSL *s;
  SSL_CTX *pSVar2;
  long lVar3;
  
  lVar3 = param_1 + (long)param_2 * 0x28;
  s = *(SSL **)(lVar3 + 0x218);
  if (s != (SSL *)0x0) {
    puVar1 = (undefined8 *)(lVar3 + 0x218);
    SSL_shutdown(s);
    SSL_set_connect_state((SSL *)*puVar1);
    SSL_free((SSL *)*puVar1);
    *puVar1 = 0;
  }
  param_1 = param_1 + (long)param_2 * 0x28;
  pSVar2 = *(SSL_CTX **)(param_1 + 0x210);
  if (pSVar2 != (SSL_CTX *)0x0) {
    SSL_CTX_free(pSVar2);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  return;
}




undefined4 FUN_019ed208(long *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong e;
  char *pcVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  char acStack_b8 [120];
  
  lVar5 = *param_1;
  plVar1 = param_1 + (long)param_2 * 5 + 0x43;
  if (*(int *)(lVar5 + 0x530) == 2) {
    SSL_shutdown((SSL *)*plVar1);
  }
  if (*plVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_019c14c8(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0),0xffffffff,
                       0xffffffff,10000);
  if (0 < iVar2) {
    do {
      ERR_clear_error();
      iVar2 = SSL_read((SSL *)*plVar1,acStack_b8,0x78);
      iVar2 = SSL_get_error((SSL *)*plVar1,iVar2);
      if (iVar2 != 2) {
        if ((iVar2 != 0) && (iVar2 != 6)) {
          if (iVar2 == 3) {
            FUN_019c9f64(lVar5,"SSL_ERROR_WANT_WRITE\n");
          }
          else {
            e = ERR_get_error();
            lVar7 = *param_1;
            pcVar4 = ERR_error_string(e,acStack_b8);
            puVar3 = (undefined4 *)__errno();
            FUN_019ca0fc(lVar7,"SSL read: %s, errno %d",pcVar4,*puVar3);
          }
        }
        goto LAB_019ed370;
      }
      FUN_019c9f64(lVar5,"SSL_ERROR_WANT_READ\n");
      iVar2 = FUN_019c14c8(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0),0xffffffff,
                           0xffffffff,10000);
    } while (0 < iVar2);
  }
  if (iVar2 == 0) {
    FUN_019ca0fc(lVar5,"SSL shutdown timeout");
LAB_019ed370:
    uVar6 = 0;
  }
  else {
    puVar3 = (undefined4 *)__errno();
    FUN_019ca0fc(lVar5,"select/poll on SSL socket, errno: %d",*puVar3);
    uVar6 = 0xffffffff;
  }
  if (*(char *)(lVar5 + 0x520) != '\0') {
    iVar2 = SSL_get_shutdown((SSL *)*plVar1);
    if (iVar2 == 3) {
      pcVar4 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN|SSL_RECEIVED__SHUTDOWN\n";
    }
    else if (iVar2 == 2) {
      pcVar4 = "SSL_get_shutdown() returned SSL_RECEIVED_SHUTDOWN\n";
    }
    else {
      if (iVar2 != 1) goto LAB_019ed3c4;
      pcVar4 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN\n";
    }
    FUN_019c9f64(lVar5,pcVar4);
  }
LAB_019ed3c4:
  SSL_free((SSL *)*plVar1);
  *plVar1 = 0;
  return uVar6;
}




undefined8 FUN_019ed3f0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x8a70);
  if ((ENGINE *)*puVar1 != (ENGINE *)0x0) {
    ENGINE_finish((ENGINE *)*puVar1);
    ENGINE_free((ENGINE *)*puVar1);
    *puVar1 = 0;
  }
  return 0;
}




void FUN_019ed42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_019ed438(param_1,param_2,1,param_3);
  return;
}




int FUN_019ed438(long *param_1,int param_2,ulong param_3,undefined1 *param_4)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  SSL_SESSION *pSVar13;
  SSL_CIPHER *c;
  char *pcVar14;
  SSL_METHOD *meth;
  SSL_CTX *pSVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  X509_STORE *pXVar19;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  FILE *fp;
  PKCS12 *p12;
  X509 *x;
  long lVar20;
  SSL *pSVar21;
  ENGINE *e;
  EVP_PKEY *pEVar22;
  evp_pkey_st *from;
  UI_METHOD *method;
  UI_METHOD *pUVar23;
  undefined1 uVar24;
  ulong uVar25;
  SSL_SESSION *key_id;
  long lVar26;
  char *pcVar27;
  SSL_SESSION *pSVar28;
  long lVar29;
  long *plVar30;
  undefined1 auStack_190 [16];
  SSL_SESSION *local_180;
  _STACK *local_178;
  X509 *local_170;
  SSL_SESSION *local_168;
  X509 *local_160;
  
  if (*(int *)((long)param_1 + (long)param_2 * 0x28 + 0x20c) == 2) {
    *param_4 = 1;
    return 0;
  }
  lVar29 = (long)param_2;
  lVar26 = *param_1;
  uVar11 = *(uint *)(param_1 + lVar29 * 5 + 0x45);
  uVar5 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  puVar1 = (uint *)(param_1 + lVar29 * 5 + 0x45);
  if (uVar11 != 0) {
    plVar30 = param_1 + lVar29 * 5 + 0x43;
    goto LAB_019ed4c4;
  }
  lVar12 = FUN_019bccd8(lVar26,0,1);
  if (lVar12 < 0) {
LAB_019ed838:
    FUN_019ca0fc(lVar26,"SSL connection timeout");
    return 0x1c;
  }
  lVar12 = *param_1;
  local_180 = (SSL_SESSION *)0x0;
  iVar8 = *(int *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  FUN_019ee604(lVar12);
  *(undefined8 *)(lVar12 + 0x438) = 1;
  if (*(long *)(lVar12 + 0x430) == 2) {
    FUN_019ca0fc(lVar12,"OpenSSL was built without SSLv2 support");
    return 4;
  }
  if (*(long *)(lVar12 + 0x430) == 3) {
    if (*(int *)(lVar12 + 0x4b0) == 1) {
      return 0x23;
    }
    bVar7 = true;
    meth = SSLv3_client_method();
  }
  else {
    meth = SSLv23_client_method();
    bVar7 = false;
  }
  plVar2 = param_1 + lVar29 * 5 + 0x42;
  if ((SSL_CTX *)param_1[lVar29 * 5 + 0x42] != (SSL_CTX *)0x0) {
    SSL_CTX_free((SSL_CTX *)param_1[lVar29 * 5 + 0x42]);
  }
  pSVar15 = SSL_CTX_new(meth);
  *plVar2 = (long)pSVar15;
  if (pSVar15 == (SSL_CTX *)0x0) {
    uVar18 = ERR_peek_error();
    pcVar27 = ERR_error_string(uVar18,(char *)0x0);
    FUN_019ca0fc(lVar12,"SSL: couldn\'t create a context: %s",pcVar27);
    return 0x1b;
  }
  SSL_CTX_ctrl(pSVar15,0x21,0x10,(void *)0x0);
  if ((*(long *)(lVar12 + 0x2e8) != 0) && (*(char *)(lVar12 + 0x520) != '\0')) {
    lVar16 = SSL_CTX_callback_ctrl((SSL_CTX *)*plVar2,0xf,(_func_3378 *)&LAB_019ee96c);
    if (lVar16 == 0) {
      pcVar27 = "SSL: couldn\'t set callback!\n";
    }
    else {
      lVar16 = SSL_CTX_ctrl((SSL_CTX *)*plVar2,0x10,0,param_1);
      if (lVar16 != 0) goto LAB_019ed97c;
      pcVar27 = "SSL: couldn\'t set callback argument!\n";
    }
    FUN_019c9f64(lVar12,pcVar27);
  }
LAB_019ed97c:
  uVar18 = 0x810243f7;
  if (*(char *)(*param_1 + 0x53a) != '\0') {
    uVar18 = 0x81024bf7;
  }
  switch(*(undefined8 *)(lVar12 + 0x430)) {
  case 0:
    if (*(int *)(lVar12 + 0x4b0) == 1) {
      FUN_019c9f64(lVar12,"Set version TLSv1.x for SRP authorisation\n");
      goto switchD_019ed9b8_caseD_1;
    }
    break;
  case 1:
switchD_019ed9b8_caseD_1:
    uVar18 = uVar18 | 0x2000000;
    break;
  default:
    FUN_019ca0fc(lVar12,"Unsupported SSL protocol version");
    return 0x23;
  case 3:
    uVar18 = uVar18 | 0x1c000000;
    break;
  case 4:
    uVar25 = 0x1a000000;
    goto LAB_019eda10;
  case 5:
    uVar18 = uVar18 | 0xe000000;
    break;
  case 6:
    uVar25 = 0x16000000;
LAB_019eda10:
    uVar18 = uVar18 | uVar25;
  }
  SSL_CTX_ctrl((SSL_CTX *)*plVar2,0x20,uVar18,(void *)0x0);
  pSVar13 = *(SSL_SESSION **)(lVar12 + 0x568);
  pSVar28 = *(SSL_SESSION **)(lVar12 + 0x570);
  if (pSVar13 != (SSL_SESSION *)0x0 || pSVar28 != (SSL_SESSION *)0x0) {
    pSVar15 = (SSL_CTX *)*plVar2;
    key_id = *(SSL_SESSION **)(lVar12 + 0x5b8);
    pcVar27 = *(char **)(lVar12 + 0x5c8);
    lVar16 = *param_1;
    iVar9 = FUN_019eebbc(pSVar28);
    if ((pSVar13 != (SSL_SESSION *)0x0) || (iVar9 == 0x2a)) {
      if (*(void **)(lVar16 + 0x5c0) != (void *)0x0) {
        SSL_CTX_set_default_passwd_cb_userdata(pSVar15,*(void **)(lVar16 + 0x5c0));
        SSL_CTX_set_default_passwd_cb(pSVar15,FUN_019eec54);
      }
      if (iVar9 < 0x2a) {
        if (iVar9 == 1) {
          iVar9 = SSL_CTX_use_certificate_chain_file(pSVar15,(char *)pSVar13);
        }
        else {
          if (iVar9 != 2) goto LAB_019ee0c0;
          iVar9 = SSL_CTX_use_certificate_file(pSVar15,(char *)pSVar13,2);
        }
        bVar6 = false;
        if (iVar9 != 1) {
          pcVar27 = "unable to use client certificate (no key found or wrong pass phrase?)";
          goto LAB_019ee3c0;
        }
      }
      else {
        if (iVar9 != 0x2a) {
          if (iVar9 == 0x2b) {
            local_178 = (_STACK *)0x0;
            fp = fopen((char *)pSVar13,"rb");
            if (fp == (FILE *)0x0) {
              pcVar27 = "could not open PKCS12 file \'%s\'";
              goto LAB_019ee180;
            }
            p12 = d2i_PKCS12_fp(fp,(PKCS12 **)0x0);
            fclose(fp);
            if (p12 == (PKCS12 *)0x0) {
              pcVar27 = "error reading PKCS12 file \'%s\'";
              goto LAB_019ee180;
            }
            PKCS12_PBE_add();
            iVar9 = PKCS12_parse(p12,*(char **)(lVar16 + 0x5c0),(EVP_PKEY **)&local_168,&local_170,
                                 (stack_st_X509 **)&local_178);
            if (iVar9 == 0) {
              uVar18 = ERR_get_error();
              pcVar27 = ERR_error_string(uVar18,(char *)0x0);
              FUN_019ca0fc(lVar16,"could not parse PKCS12 file, check password, OpenSSL error %s",
                           pcVar27);
              PKCS12_free(p12);
              return 0x3a;
            }
            PKCS12_free(p12);
            iVar9 = SSL_CTX_use_certificate(pSVar15,local_170);
            if (iVar9 != 1) {
              pcVar27 = "unable to use client certificate (no key found or wrong pass phrase?)";
LAB_019ee390:
              FUN_019ca0fc(lVar16,pcVar27);
              goto LAB_019ee460;
            }
            iVar9 = SSL_CTX_use_PrivateKey(pSVar15,(EVP_PKEY *)local_168);
            if (iVar9 == 1) {
              iVar9 = SSL_CTX_check_private_key(pSVar15);
              if (iVar9 != 0) {
                if (((local_178 != (_STACK *)0x0) && (iVar9 = sk_num(local_178), iVar9 != 0)) &&
                   (iVar9 = sk_num(local_178), 0 < iVar9)) {
                  iVar9 = 0;
                  do {
                    x = sk_pop(local_178);
                    lVar20 = SSL_CTX_ctrl(pSVar15,0xe,0,x);
                    if (lVar20 == 0) {
                      pcVar27 = "cannot add certificate to certificate chain";
                      goto LAB_019ee390;
                    }
                    iVar10 = SSL_CTX_add_client_CA(pSVar15,x);
                    if (iVar10 == 0) {
                      pcVar27 = "cannot add certificate to client CA list";
                      goto LAB_019ee390;
                    }
                    iVar9 = iVar9 + 1;
                    iVar10 = sk_num(local_178);
                  } while (iVar9 < iVar10);
                }
                EVP_PKEY_free((EVP_PKEY *)local_168);
                X509_free(local_170);
                sk_pop_free(local_178,X509_free);
                bVar6 = true;
                goto LAB_019ee010;
              }
              pcVar27 = 
              "private key from PKCS12 file \'%s\' does not match certificate in same file";
            }
            else {
              pcVar27 = "unable to use private key from PKCS12 file \'%s\'";
            }
            FUN_019ca0fc(lVar16,pcVar27,pSVar13);
LAB_019ee460:
            EVP_PKEY_free((EVP_PKEY *)local_168);
            X509_free(local_170);
            sk_pop_free(local_178,X509_free);
            return 0x3a;
          }
LAB_019ee0c0:
          pcVar27 = "not supported file type \'%s\' for certificate";
          pSVar13 = pSVar28;
LAB_019ee180:
          FUN_019ca0fc(lVar16,pcVar27,pSVar13);
          return 0x3a;
        }
        e = *(ENGINE **)(lVar16 + 0x8a70);
        if (e == (ENGINE *)0x0) {
          pcVar27 = "crypto engine not set, can\'t load certificate";
          goto LAB_019ee3c0;
        }
        local_160 = (X509 *)0x0;
        local_168 = pSVar13;
        iVar9 = ENGINE_ctrl(e,0xd,0,"LOAD_CERT_CTRL",(f *)0x0);
        if (iVar9 == 0) {
          pcVar27 = "ssl engine does not support loading certificates";
          goto LAB_019ee3c0;
        }
        iVar9 = ENGINE_ctrl_cmd(*(ENGINE **)(lVar16 + 0x8a70),"LOAD_CERT_CTRL",0,&local_168,(f *)0x0
                                ,1);
        if (iVar9 == 0) {
          uVar18 = ERR_get_error();
          pcVar14 = ERR_error_string(uVar18,(char *)0x0);
          pcVar27 = "ssl engine cannot load client cert with id \'%s\' [%s]";
          goto LAB_019ee37c;
        }
        if (local_160 == (X509 *)0x0) {
          pcVar27 = "ssl engine didn\'t initialized the certificate properly.";
          goto LAB_019ee3c0;
        }
        iVar9 = SSL_CTX_use_certificate(pSVar15,local_160);
        if (iVar9 != 1) {
          FUN_019ca0fc(lVar16,"unable to set client certificate");
          X509_free(local_160);
          return 0x3a;
        }
        X509_free(local_160);
        bVar6 = false;
      }
LAB_019ee010:
      iVar9 = FUN_019eebbc(pcVar27);
      if (iVar9 < 0x2a) {
        if (iVar9 == 1) {
          if (bVar6) goto LAB_019ee1b8;
          if (key_id != (SSL_SESSION *)0x0) {
            pSVar13 = key_id;
          }
        }
        else {
          pSVar13 = key_id;
          if (iVar9 != 2) {
LAB_019ee2d4:
            pcVar27 = "not supported file type for private key";
            goto LAB_019ee3c0;
          }
        }
        iVar9 = SSL_CTX_use_PrivateKey_file(pSVar15,(char *)pSVar13,iVar9);
        if (iVar9 != 1) {
          pcVar14 = "PEM";
          if (pcVar27 != (char *)0x0) {
            pcVar14 = pcVar27;
          }
          pcVar27 = "unable to set private key file: \'%s\' type %s";
LAB_019ee37c:
          FUN_019ca0fc(lVar16,pcVar27,pSVar13,pcVar14);
          return 0x3a;
        }
      }
      else if (iVar9 == 0x2a) {
        if (*(long *)(lVar16 + 0x8a70) == 0) {
          pcVar27 = "crypto engine not set, can\'t load private key";
          goto LAB_019ee3c0;
        }
        method = UI_create_method("cURL user interface");
        if (method == (UI_METHOD *)0x0) {
          pcVar27 = "unable do create OpenSSL user-interface method";
          goto LAB_019ee3c0;
        }
        pUVar23 = UI_OpenSSL();
        uVar11 = UI_method_get_opener((UI *)pUVar23);
        UI_method_set_opener(method,(opener *)(ulong)uVar11);
        pUVar23 = UI_OpenSSL();
        uVar11 = UI_method_get_closer((UI *)pUVar23);
        UI_method_set_closer(method,(closer *)(ulong)uVar11);
        UI_method_set_reader(method,(reader *)&LAB_019eecbc);
        UI_method_set_writer(method,FUN_019eed4c);
        pEVar22 = ENGINE_load_private_key
                            (*(ENGINE **)(lVar16 + 0x8a70),(char *)key_id,method,
                             *(void **)(lVar16 + 0x5c0));
        UI_destroy_method(method);
        if (pEVar22 == (EVP_PKEY *)0x0) {
          pcVar27 = "failed to load private key from crypto engine";
          goto LAB_019ee3c0;
        }
        iVar9 = SSL_CTX_use_PrivateKey(pSVar15,pEVar22);
        if (iVar9 != 1) {
          FUN_019ca0fc(lVar16,"unable to set private key");
          EVP_PKEY_free(pEVar22);
          return 0x3a;
        }
        EVP_PKEY_free(pEVar22);
      }
      else {
        if (iVar9 != 0x2b) goto LAB_019ee2d4;
        if (!bVar6) {
          pcVar27 = "file type P12 for private key not supported";
          goto LAB_019ee3c0;
        }
      }
LAB_019ee1b8:
      pSVar21 = SSL_new(pSVar15);
      if (pSVar21 == (SSL *)0x0) {
        pcVar27 = "unable to create an SSL structure";
LAB_019ee3c0:
        FUN_019ca0fc(lVar16,pcVar27);
        return 0x3a;
      }
      local_170 = SSL_get_certificate(pSVar21);
      if (local_170 != (X509 *)0x0) {
        pEVar22 = X509_get_pubkey(local_170);
        from = SSL_get_privatekey(pSVar21);
        EVP_PKEY_copy_parameters(pEVar22,from);
        EVP_PKEY_free(pEVar22);
      }
      SSL_free(pSVar21);
      iVar9 = SSL_CTX_check_private_key(pSVar15);
      if (iVar9 == 0) {
        pcVar27 = "Private key does not match the certificate public key";
        goto LAB_019ee3c0;
      }
    }
  }
  pcVar27 = "ALL!EXPORT!EXPORT40!EXPORT56!aNULL!LOW!RC4";
  if (*(char **)(lVar12 + 0x618) != (char *)0x0) {
    pcVar27 = *(char **)(lVar12 + 0x618);
  }
  iVar9 = SSL_CTX_set_cipher_list((SSL_CTX *)*plVar2,pcVar27);
  if (iVar9 == 0) {
    FUN_019ca0fc(lVar12,"failed setting cipher list: %s",pcVar27);
    return 0x3b;
  }
  if (*(int *)(lVar12 + 0x4b0) == 1) {
    FUN_019c9f64(lVar12,"Using TLS-SRP username: %s\n",*(undefined8 *)(lVar12 + 0x4a0));
    iVar9 = SSL_CTX_set_srp_username(*plVar2,*(undefined8 *)(lVar12 + 0x4a0));
    if (iVar9 == 0) {
      pcVar27 = "Unable to set SRP user name";
LAB_019edfc4:
      FUN_019ca0fc(lVar12,pcVar27);
      return 0x2b;
    }
    iVar9 = SSL_CTX_set_srp_password(*plVar2,*(undefined8 *)(lVar12 + 0x4a8));
    if (iVar9 == 0) {
      pcVar27 = "failed setting SRP password";
      goto LAB_019edfc4;
    }
    if (*(long *)(lVar12 + 0x618) == 0) {
      FUN_019c9f64(lVar12,"Setting cipher list SRP\n");
      iVar9 = SSL_CTX_set_cipher_list((SSL_CTX *)*plVar2,"SRP");
      if (iVar9 == 0) {
        FUN_019ca0fc(lVar12,"failed setting SRP cipher list");
        return 0x3b;
      }
    }
  }
  if (*(char **)(lVar12 + 0x610) != (char *)0x0 || *(char **)(lVar12 + 0x608) != (char *)0x0) {
    iVar9 = SSL_CTX_load_verify_locations
                      ((SSL_CTX *)*plVar2,*(char **)(lVar12 + 0x610),*(char **)(lVar12 + 0x608));
    if (iVar9 == 0) {
      if (*(char *)(lVar12 + 0x440) != '\0') {
        pcVar27 = "none";
        if (*(char **)(lVar12 + 0x610) != (char *)0x0) {
          pcVar27 = *(char **)(lVar12 + 0x610);
        }
        pcVar14 = "none";
        if (*(char **)(lVar12 + 0x608) != (char *)0x0) {
          pcVar14 = *(char **)(lVar12 + 0x608);
        }
        FUN_019ca0fc(lVar12,
                     "error setting certificate verify locations:\n  CAfile: %s\n  CApath: %s",
                     pcVar27,pcVar14);
        return 0x4d;
      }
      pcVar27 = "error setting certificate verify locations, continuing anyway:\n";
    }
    else {
      pcVar27 = "successfully set certificate verify locations:\n";
    }
    FUN_019c9f64(lVar12,pcVar27);
    pcVar27 = "none";
    if (*(char **)(lVar12 + 0x610) != (char *)0x0) {
      pcVar27 = *(char **)(lVar12 + 0x610);
    }
    pcVar14 = "none";
    if (*(char **)(lVar12 + 0x608) != (char *)0x0) {
      pcVar14 = *(char **)(lVar12 + 0x608);
    }
    FUN_019c9f64(lVar12,"  CAfile: %s\n  CApath: %s\n",pcVar27,pcVar14);
  }
  if (*(long *)(lVar12 + 0x638) != 0) {
    pXVar19 = SSL_CTX_get_cert_store((SSL_CTX *)*plVar2);
    m = X509_LOOKUP_file();
    ctx = X509_STORE_add_lookup(pXVar19,m);
    if ((ctx == (X509_LOOKUP *)0x0) ||
       (iVar9 = X509_load_crl_file(ctx,*(char **)(lVar12 + 0x638),1), iVar9 == 0)) {
      FUN_019ca0fc(lVar12,"error loading CRL file: %s",*(undefined8 *)(lVar12 + 0x638));
      return 0x52;
    }
    FUN_019c9f64(lVar12,"successfully load CRL file:\n");
    pXVar19 = SSL_CTX_get_cert_store((SSL_CTX *)*plVar2);
    X509_STORE_set_flags(pXVar19,0xc);
    pcVar27 = "none";
    if (*(char **)(lVar12 + 0x638) != (char *)0x0) {
      pcVar27 = *(char **)(lVar12 + 0x638);
    }
    FUN_019c9f64(lVar12,"  CRLfile: %s\n",pcVar27);
  }
  SSL_CTX_set_verify((SSL_CTX *)*plVar2,(uint)*(byte *)(lVar12 + 0x440),(callback *)&LAB_019eeb7c);
  if ((*(code **)(lVar12 + 0x488) != (code *)0x0) &&
     (iVar9 = (**(code **)(lVar12 + 0x488))(lVar12,*plVar2,*(undefined8 *)(lVar12 + 0x490)),
     iVar9 != 0)) {
    pcVar27 = "error signaled by ssl ctx callback";
LAB_019ed930:
    FUN_019ca0fc(lVar12,pcVar27);
    return iVar9;
  }
  plVar30 = param_1 + lVar29 * 5 + 0x43;
  if ((SSL *)param_1[lVar29 * 5 + 0x43] != (SSL *)0x0) {
    SSL_free((SSL *)param_1[lVar29 * 5 + 0x43]);
  }
  pSVar21 = SSL_new((SSL_CTX *)*plVar2);
  *plVar30 = (long)pSVar21;
  if (pSVar21 == (SSL *)0x0) {
    FUN_019ca0fc(lVar12,"SSL: couldn\'t create a context (handle)!");
    return 0x1b;
  }
  SSL_set_connect_state(pSVar21);
  param_1[lVar29 * 5 + 0x44] = 0;
  iVar9 = inet_pton(2,(char *)param_1[0x18],auStack_190);
  if (((iVar9 == 0) &&
      (iVar9 = inet_pton(10,(char *)param_1[0x18],auStack_190), !bVar7 && iVar9 == 0)) &&
     (lVar16 = SSL_ctrl((SSL *)*plVar30,0x37,0,(void *)param_1[0x18]), lVar16 == 0)) {
    FUN_019c9f64(lVar12,"WARNING: failed to configure server name indication (SNI) TLS extension\n")
    ;
  }
  iVar9 = FUN_019c2bfc(param_1,&local_180,0);
  if (iVar9 == 0) {
    iVar9 = SSL_set_session((SSL *)*plVar30,local_180);
    if (iVar9 == 0) {
      uVar18 = ERR_get_error();
      pcVar14 = ERR_error_string(uVar18,(char *)0x0);
      pcVar27 = "SSL: SSL_set_session failed: %s";
      goto LAB_019ee2f8;
    }
    FUN_019c9f64(lVar12,"SSL re-using session ID\n");
  }
  iVar8 = SSL_set_fd((SSL *)*plVar30,iVar8);
  if (iVar8 == 0) {
    uVar18 = ERR_get_error();
    pcVar14 = ERR_error_string(uVar18,(char *)0x0);
    pcVar27 = "SSL: SSL_set_fd failed: %s";
LAB_019ee2f8:
    FUN_019ca0fc(lVar12,pcVar27,pcVar14);
    return 0x23;
  }
  uVar11 = 1;
  *puVar1 = 1;
LAB_019ed4c4:
  while (uVar11 - 1 < 3) {
    lVar12 = FUN_019bccd8(lVar26,0,1);
    if (lVar12 < 0) goto LAB_019ed838;
    uVar11 = *puVar1;
    if ((uVar11 & 0xfffffffe) == 2) {
      uVar3 = uVar5;
      if (uVar11 != 3) {
        uVar3 = 0xffffffff;
      }
      uVar4 = uVar5;
      if (uVar11 != 2) {
        uVar4 = 0xffffffff;
      }
      lVar16 = 0;
      if ((param_3 & 1) == 0) {
        lVar16 = lVar12;
      }
      iVar8 = FUN_019c14c8(uVar4,0xffffffff,uVar3,lVar16);
      if (iVar8 < 0) {
        puVar17 = (undefined4 *)__errno();
        FUN_019ca0fc(lVar26,"select/poll on SSL socket, errno: %d",*puVar17);
        return 0x23;
      }
      if (iVar8 == 0) {
        if ((param_3 & 1) != 0) {
          *param_4 = 0;
          return 0;
        }
        goto LAB_019ed838;
      }
    }
    lVar12 = *param_1;
    ERR_clear_error();
    iVar8 = SSL_connect((SSL *)*plVar30);
    if (iVar8 == 1) {
      *puVar1 = 4;
      pSVar13 = SSL_get_session((SSL *)*plVar30);
      if (pSVar13 == (SSL_SESSION *)0x0) {
        pcVar27 = "";
      }
      else {
        pcVar27 = "TLSv1.2";
        switch(pSVar13->ssl_version) {
        case 0x300:
          pcVar27 = "SSLv3";
          break;
        case 0x301:
          pcVar27 = "TLSv1.0";
          break;
        case 0x302:
          pcVar27 = "TLSv1.1";
          break;
        case 0x303:
          break;
        default:
          if (pSVar13->ssl_version == 2) {
            pcVar27 = "SSLv2";
          }
          else {
            pcVar27 = "unknown";
          }
        }
      }
      c = SSL_get_current_cipher((SSL *)*plVar30);
      pcVar14 = SSL_CIPHER_get_name(c);
      FUN_019c9f64(lVar12,"SSL connection using %s / %s\n",pcVar27,pcVar14);
    }
    else {
      iVar8 = SSL_get_error((SSL *)*plVar30,iVar8);
      if (iVar8 == 3) {
        uVar11 = 3;
      }
      else {
        if (iVar8 != 2) {
          *puVar1 = 1;
          uVar18 = ERR_get_error();
          if ((uVar18 == 0x14090086) || (uVar18 == 0x1407e086)) {
            lVar26 = SSL_get_verify_result((SSL *)*plVar30);
            if (lVar26 == 0) {
              iVar8 = 0x3c;
              pcVar27 = "SSL certificate problem, verify that the CA cert is OK.";
            }
            else {
              pcVar27 = X509_verify_cert_error_string(lVar26);
              FUN_019d5bc0(&local_168,0x100,"SSL certificate problem: %s",pcVar27);
              pcVar27 = (char *)0x0;
              iVar8 = 0x3c;
            }
          }
          else {
            ERR_error_string_n(uVar18,(char *)&local_168,0x100);
            if (uVar18 == 0) {
              FUN_019ca0fc(lVar12,"Unknown SSL protocol error in connection to %s:%ld ",
                           param_1[0x18],(int)param_1[0x1f]);
              return 0x23;
            }
            pcVar27 = (char *)0x0;
            iVar8 = 0x23;
          }
          pcVar14 = "";
          if (pcVar27 != (char *)0x0) {
            pcVar14 = pcVar27;
          }
          FUN_019ca0fc(lVar12,"%s%s",pcVar14,&local_168);
          return iVar8;
        }
        uVar11 = 2;
      }
      *puVar1 = uVar11;
    }
    uVar11 = *puVar1;
    if ((uVar11 - 1 < 3) && ((param_3 & 1) != 0)) {
      return 0;
    }
  }
  if (uVar11 == 4) {
    local_168 = (SSL_SESSION *)0x0;
    lVar12 = *param_1;
    pSVar13 = SSL_get1_session((SSL *)*plVar30);
    iVar8 = FUN_019c2bfc(param_1,&local_168,0);
    if (iVar8 == 0) {
      if (local_168 != pSVar13) {
        FUN_019c9f64(lVar12,"old SSL session ID is stale, removing\n");
        FUN_019c2da8(param_1,local_168);
        goto LAB_019ed90c;
      }
      SSL_SESSION_free(pSVar13);
    }
    else {
LAB_019ed90c:
      iVar9 = FUN_019c2e44(param_1,pSVar13,0);
      if (iVar9 != 0) {
        pcVar27 = "failed to store ssl session";
        goto LAB_019ed930;
      }
    }
    if ((*(char *)(lVar12 + 0x440) == '\0') && (*(char *)(lVar12 + 0x441) == '\0')) {
      FUN_019eee64(param_1,param_1 + lVar29 * 5 + 0x41,0);
    }
    else {
      iVar8 = FUN_019eee64(param_1,param_1 + lVar29 * 5 + 0x41,1);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    *puVar1 = 5;
  }
  else if (uVar11 != 5) {
    uVar24 = 0;
    goto LAB_019ed888;
  }
  *(undefined4 *)((long)param_1 + (long)param_2 * 0x28 + 0x20c) = 2;
  uVar24 = 1;
  param_1[lVar29 + 0x3d] = (long)FUN_019ee76c;
  param_1[lVar29 + 0x3f] = (long)FUN_019ee858;
LAB_019ed888:
  *param_4 = uVar24;
  *puVar1 = 0;
  return 0;
}

