// functions/019ee — 15 functions
#include "libGameKindred.h"




bool thunk_FUN_019ee4c4(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  SSL *s;
  
  s = *(SSL **)(param_1 + (long)param_2 * 0x28 + 0x218);
  bVar1 = false;
  if (s != (SSL *)0x0) {
    iVar2 = SSL_pending(s);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




int thunk_FUN_019ee714(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  MD5_CTX MStack_90;
  
  MD5_Init(&MStack_90);
  MD5_Update(&MStack_90,param_1,param_2);
  iVar1 = MD5_Final(param_3,&MStack_90);
  return iVar1;
}




void FUN_019ee49c(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = 0;
  FUN_019ed438(param_1,param_2,0,local_14);
  return;
}




bool FUN_019ee4c4(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  SSL *s;
  
  s = *(SSL **)(param_1 + (long)param_2 * 0x28 + 0x218);
  bVar1 = false;
  if (s != (SSL *)0x0) {
    iVar2 = SSL_pending(s);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




long FUN_019ee4f0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char local_24;
  undefined2 local_23;
  
  local_23 = 0;
  uVar3 = SSLeay();
  if (uVar3 < 0x906000) {
    local_24 = '\0';
    uVar3 = 0x1000208f;
  }
  else if ((uVar3 & 0xff0) == 0) {
    local_24 = '\0';
  }
  else {
    uVar1 = (uint)uVar3 >> 4 & 0xff;
    if (uVar1 < 0x1b) {
      local_24 = (char)(uVar3 >> 4) + '`';
    }
    else {
      iVar2 = uVar1 - 1;
      lVar4 = (long)iVar2 * 0x4ec4ec4f;
      local_23 = CONCAT11(local_23._1_1_,
                          (char)iVar2 +
                          ((char)(uint)((ulong)lVar4 >> 0x23) - (char)(lVar4 >> 0x3f)) * -0x1a + 'b'
                         );
      local_24 = 'z';
    }
  }
  iVar2 = FUN_019d5bc0(param_1,param_2,"%s/%lx.%lx.%lx%s","OpenSSL",uVar3 >> 0x1c & 0xf,
                       uVar3 >> 0x14 & 0xff,uVar3 >> 0xc & 0xff,&local_24);
  return (long)iVar2;
}




undefined8 FUN_019ee5c4(long param_1,uchar *param_2,undefined8 param_3)

{
  int num;
  
  if (param_1 != 0) {
    FUN_019ee604();
  }
  num = FUN_019c1e80(param_3);
  RAND_bytes(param_2,num);
  return 0;
}




void FUN_019ee604(long param_1)

{
  char *pcVar1;
  int iVar2;
  uchar auStack_70 [64];
  
  if (((DAT_03215858 == '\x01') && (*(long *)(param_1 + 0x628) == 0)) &&
     (*(long *)(param_1 + 0x620) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x468) != 0) {
    pcVar1 = "";
    if (*(char **)(param_1 + 0x628) != (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 0x628);
    }
    RAND_load_file(pcVar1,0x400);
    iVar2 = RAND_status();
    if (iVar2 != 0) {
      DAT_03215858 = 1;
      return;
    }
  }
  if (((*(char **)(param_1 + 0x620) == (char *)0x0) ||
      (iVar2 = RAND_egd(*(char **)(param_1 + 0x620)), iVar2 == -1)) ||
     (iVar2 = RAND_status(), iVar2 == 0)) {
    pcVar1 = (char *)(param_1 + 0x938);
    do {
      RAND_bytes(auStack_70,0x40);
      RAND_add(auStack_70,0x40,32.0);
      iVar2 = RAND_status();
    } while (iVar2 == 0);
    *pcVar1 = '\0';
    RAND_file_name(pcVar1,0x4000);
    if (*pcVar1 != '\0') {
      RAND_load_file(pcVar1,0x400);
      iVar2 = RAND_status();
      if (iVar2 != 0) {
        DAT_03215858 = 1;
        return;
      }
    }
    FUN_019c9f64(param_1,"libcurl is now using a weak random seed!\n");
  }
  DAT_03215858 = 1;
  return;
}




int FUN_019ee714(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  MD5_CTX MStack_90;
  
  MD5_Init(&MStack_90);
  MD5_Update(&MStack_90,param_1,param_2);
  iVar1 = MD5_Final(param_3,&MStack_90);
  return iVar1;
}




long FUN_019ee76c(undefined8 *param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulong e;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  char acStack_b8 [120];
  
  ERR_clear_error();
  iVar1 = (int)param_4;
  if (0x7ffffffe < param_4) {
    iVar1 = 0x7fffffff;
  }
  iVar1 = SSL_read((SSL *)param_1[(long)param_2 * 5 + 0x43],param_3,iVar1);
  lVar7 = (long)iVar1;
  if (iVar1 < 1) {
    iVar2 = SSL_get_error((SSL *)param_1[(long)param_2 * 5 + 0x43],iVar1);
    if (iVar2 - 2U < 2) {
      uVar5 = 0x51;
    }
    else {
      if (iVar2 == 0) {
        return lVar7;
      }
      if (iVar2 == 6) {
        return lVar7;
      }
      e = ERR_get_error();
      if ((-1 < iVar1) && (e == 0)) {
        return lVar7;
      }
      uVar6 = *param_1;
      pcVar3 = ERR_error_string(e,acStack_b8);
      puVar4 = (undefined4 *)__errno();
      FUN_019ca0fc(uVar6,"SSL read: %s, errno %d",pcVar3,*puVar4);
      uVar5 = 0x38;
    }
    lVar7 = -1;
    *param_5 = uVar5;
  }
  return lVar7;
}




long FUN_019ee858(undefined8 *param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  ulong e;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char acStack_b8 [120];
  
  ERR_clear_error();
  iVar1 = (int)param_4;
  if (0x7ffffffe < param_4) {
    iVar1 = 0x7fffffff;
  }
  iVar1 = SSL_write((SSL *)param_1[(long)param_2 * 5 + 0x43],param_3,iVar1);
  if (iVar1 < 1) {
    iVar1 = SSL_get_error((SSL *)param_1[(long)param_2 * 5 + 0x43],iVar1);
    if (iVar1 - 2U < 2) {
      uVar5 = 0x51;
    }
    else {
      if (iVar1 == 1) {
        e = ERR_get_error();
        uVar6 = *param_1;
        pcVar4 = ERR_error_string(e,acStack_b8);
        FUN_019ca0fc(uVar6,"SSL_write() error: %s",pcVar4);
      }
      else {
        if (iVar1 == 5) {
          uVar6 = *param_1;
          piVar3 = (int *)__errno();
          iVar1 = *piVar3;
          pcVar4 = "SSL_write() returned SYSCALL, errno = %d";
        }
        else {
          uVar6 = *param_1;
          pcVar4 = "SSL_write() return error %d";
        }
        FUN_019ca0fc(uVar6,pcVar4,iVar1);
      }
      uVar5 = 0x37;
    }
    *param_5 = uVar5;
    lVar2 = -1;
  }
  else {
    lVar2 = (long)iVar1;
    *param_5 = 0;
  }
  return lVar2;
}




undefined4 FUN_019eebbc(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = FUN_019e23a8(param_1,&DAT_01e28231), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_019e23a8(param_1,"DER");
    if (iVar1 == 0) {
      iVar1 = FUN_019e23a8(param_1,&DAT_01e2839a);
      if (iVar1 == 0) {
        iVar1 = FUN_019e23a8(param_1,&DAT_01e2839e);
        uVar2 = 0x2b;
        if (iVar1 == 0) {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0x2a;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}




int FUN_019eec54(void *param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 == 0) {
    strlen(param_4);
    iVar1 = FUN_019c1e80();
    iVar2 = 0;
    if (iVar1 < param_2) {
      memcpy(param_1,param_4,(long)(iVar1 + 1));
      iVar2 = iVar1;
    }
  }
  return iVar2;
}




undefined8 FUN_019eed4c(UI *param_1,UI_STRING *param_2)

{
  UI_string_types UVar1;
  uint uVar2;
  void *pvVar3;
  UI_METHOD *pUVar4;
  undefined8 uVar5;
  UI_STRING *extraout_x1;
  
  UVar1 = UI_get_string_type(param_2);
  if (((UVar1 - UIT_PROMPT < 2) && (pvVar3 = UI_get0_user_data(param_1), pvVar3 != (void *)0x0)) &&
     (uVar2 = UI_get_input_flags(param_2), (uVar2 >> 1 & 1) != 0)) {
    return 1;
  }
  pUVar4 = UI_OpenSSL();
  uVar2 = UI_method_get_writer((UI *)pUVar4,extraout_x1);
                    /* WARNING: Could not recover jumptable at 0x019eeda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)(ulong)uVar2)(param_1,param_2);
  return uVar5;
}




bool FUN_019eedbc(X509_NAME *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *out;
  ulong *local_38;
  
  type = BIO_s_mem();
  out = BIO_new(type);
  if (out == (BIO *)0x0) {
    bVar1 = true;
  }
  else {
    iVar2 = X509_NAME_print_ex(out,param_1,0,0x30000);
    BIO_ctrl(out,0x73,0,&local_38);
    __n = *local_38;
    if (param_3 <= *local_38) {
      __n = param_3 - 1;
    }
    memcpy(param_2,(void *)local_38[1],__n);
    *(undefined1 *)((long)param_2 + __n) = 0;
    BIO_free(out);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




int FUN_019eee64(long *param_1,long param_2,ulong param_3)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  _STACK *p_Var8;
  ASN1_INTEGER *a;
  EVP_PKEY *pkey;
  BIGNUM *pBVar9;
  X509_EXTENSION *ex;
  BIO_METHOD *pBVar10;
  BIO *pBVar11;
  ASN1_OBJECT *a_00;
  X509 *pXVar12;
  X509_NAME *pXVar13;
  int *piVar14;
  size_t sVar15;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *x;
  uchar *puVar16;
  FILE *fp;
  char *pcVar17;
  char *pcVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  _STACK *p_Var24;
  undefined8 **ppuVar25;
  long lVar26;
  ASN1_BIT_STRING *pAVar27;
  X509_CINF *pXVar28;
  uint uVar29;
  size_t __n;
  long lVar30;
  uchar *local_4f0 [16];
  ulong *local_470;
  undefined8 *local_468 [64];
  undefined1 auStack_268 [512];
  undefined1 auStack_68 [8];
  
  lVar26 = *param_1;
  if ((*(char *)(lVar26 + 0x499) != '\0') &&
     (puVar7 = (uchar *)(*(code *)PTR_malloc_02bf74a8)(0x2000), puVar7 != (uchar *)0x0)) {
    p_Var8 = &SSL_get_peer_cert_chain(*(SSL **)(param_2 + 0x10))->stack;
    if (p_Var8 != (_STACK *)0x0) {
      iVar2 = sk_num(p_Var8);
      iVar3 = FUN_019c31dc(lVar26,iVar2);
      if (iVar3 == 0) {
        FUN_019c9f64(lVar26,"--- Certificate chain\n");
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            pXVar12 = sk_value(p_Var8,iVar3);
            pXVar13 = X509_get_subject_name(pXVar12);
            FUN_019eedbc(pXVar13,puVar7,0x2000);
            FUN_019c9f64(lVar26,"%2d Subject: %s\n",iVar3,puVar7);
            FUN_019c333c(lVar26,iVar3,"Subject",puVar7);
            pXVar13 = X509_get_issuer_name(pXVar12);
            FUN_019eedbc(pXVar13,puVar7,0x2000);
            FUN_019c9f64(lVar26,"   Issuer: %s\n",puVar7);
            FUN_019c333c(lVar26,iVar3,"Issuer",puVar7);
            lVar30 = ASN1_INTEGER_get(pXVar12->cert_info->version);
            FUN_019c9f64(lVar26,"   Version: %lu (0x%lx)\n",lVar30 + 1,lVar30);
            FUN_019d5bc0(puVar7,0x2000,&DAT_01e286ba,lVar30);
            FUN_019c333c(lVar26,iVar3,"Version",puVar7);
            a = X509_get_serialNumber(pXVar12);
            if (a->length < 5) {
              lVar30 = ASN1_INTEGER_get(a);
              FUN_019c9f64(lVar26,"   Serial Number: %ld (0x%lx)\n",lVar30,lVar30);
              FUN_019d5bc0(puVar7,0x2000,&DAT_01e286ba,lVar30);
LAB_019ef13c:
              if (*puVar7 != '\0') {
                FUN_019c333c(lVar26,iVar3,"Serial Number",puVar7);
              }
            }
            else {
              *puVar7 = '\0';
              puVar16 = puVar7 + 1;
              if (a->type == 0x102) {
                puVar7[1] = '-';
                puVar16 = puVar7 + 2;
              }
              uVar20 = a->length;
              if (0 < (int)uVar20) {
                uVar22 = 0;
                uVar29 = 0x2000;
                do {
                  puVar1 = a->data + uVar22;
                  uVar22 = uVar22 + 1;
                  uVar19 = 10;
                  if (uVar22 != uVar20) {
                    uVar19 = 0x3a;
                  }
                  FUN_019d5bc0(puVar16,3,"%02x%c",*puVar1,uVar19);
                  uVar20 = a->length;
                  if (uVar29 < 8) break;
                  puVar16 = puVar16 + 3;
                  uVar29 = uVar29 - 4;
                } while ((long)uVar22 < (long)(int)uVar20);
              }
              if (uVar20 != 0) {
                FUN_019c9f64(lVar26,"   Serial Number: %s\n",puVar7);
                goto LAB_019ef13c;
              }
              *puVar7 = '\0';
            }
            pXVar28 = pXVar12->cert_info;
            iVar6 = i2t_ASN1_OBJECT((char *)puVar7,0x2000,pXVar28->signature->algorithm);
            if (iVar6 < 0x2000) {
              FUN_019c9f64(lVar26,"   Signature Algorithm: %s\n",puVar7);
              FUN_019c333c(lVar26,iVar3,"Signature Algorithm",puVar7);
            }
            FUN_019f02b4(pXVar12->cert_info->validity->notBefore,puVar7,0x2000);
            FUN_019c9f64(lVar26,"   Start date: %s\n",puVar7);
            FUN_019c333c(lVar26,iVar3,"Start date",puVar7);
            FUN_019f02b4(pXVar12->cert_info->validity->notAfter,puVar7,0x2000);
            FUN_019c9f64(lVar26,"   Expire date: %s\n",puVar7);
            FUN_019c333c(lVar26,iVar3,"Expire date",puVar7);
            iVar6 = i2t_ASN1_OBJECT((char *)puVar7,0x2000,pXVar28->key->algor->algorithm);
            if (iVar6 < 0x2000) {
              FUN_019c9f64(lVar26,"   Public Key Algorithm: %s\n",puVar7);
              FUN_019c333c(lVar26,iVar3,"Public Key Algorithm",puVar7);
            }
            pkey = X509_get_pubkey(pXVar12);
            if (pkey == (EVP_PKEY *)0x0) {
              FUN_019c9f64(lVar26,"   Unable to load public key\n");
            }
            else {
              iVar6 = pkey->type;
              if (iVar6 == 0x74) {
                pBVar9 = ((pkey->pkey).dsa)->p;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).dsa)->p,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"dsa",&DAT_01e664df,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->n;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->n,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"dsa","q",puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->e;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->e,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"dsa",&DAT_01bc2529,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->p;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->p,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"dsa","priv_key",puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->d;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    iVar6 = iVar6 >> 3;
                    BN_bn2bin(((pkey->pkey).rsa)->d,puVar7);
                    puVar7[iVar6] = '\0';
                    pcVar17 = "dsa";
LAB_019ef9e4:
                    pcVar18 = "pub_key";
LAB_019ef9ec:
                    FUN_019f03e4(lVar26,iVar3,pcVar17,pcVar18,puVar7,iVar6);
                  }
                }
              }
              else if (iVar6 == 0x1c) {
                pBVar9 = ((pkey->pkey).dh)->p;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).dh)->p,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,&DAT_01e58689,&DAT_01e664df,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).dh)->g;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).dh)->g,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,&DAT_01e58689,&DAT_01bc2529,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->e;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->e,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,&DAT_01e58689,"priv_key",puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->n;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    iVar6 = iVar6 >> 3;
                    BN_bn2bin(((pkey->pkey).rsa)->n,puVar7);
                    pcVar17 = "dh";
                    puVar7[iVar6] = '\0';
                    goto LAB_019ef9e4;
                  }
                }
              }
              else if (iVar6 == 6) {
                iVar6 = BN_num_bits(((pkey->pkey).rsa)->n);
                FUN_019c9f64(lVar26,"   RSA Public Key (%d bits)\n",iVar6);
                iVar6 = BN_num_bits(((pkey->pkey).rsa)->n);
                FUN_019d5bc0(puVar7,0x2000,&DAT_01bb6d43,iVar6);
                FUN_019c333c(lVar26,iVar3,"RSA Public Key",puVar7);
                pBVar9 = ((pkey->pkey).rsa)->n;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->n,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa",&DAT_01e63197,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->e;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->e,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa",&DAT_01e2453b,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->d;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->d,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa","d",puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->p;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->p,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa",&DAT_01e664df,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->q;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->q,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa","q",puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->dmp1;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->dmp1,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa",&DAT_01e287f2,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->dmq1;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    BN_bn2bin(((pkey->pkey).rsa)->dmq1,puVar7);
                    puVar7[iVar6 >> 3] = '\0';
                    FUN_019f03e4(lVar26,iVar3,"rsa",&DAT_01e287f7,puVar7,iVar6 >> 3);
                  }
                }
                pBVar9 = ((pkey->pkey).rsa)->iqmp;
                if (pBVar9 != (BIGNUM *)0x0) {
                  iVar4 = BN_num_bits(pBVar9);
                  iVar6 = iVar4 + 0xe;
                  if (-1 < iVar4 + 7) {
                    iVar6 = iVar4 + 7;
                  }
                  if (iVar4 < 0xfff9) {
                    iVar6 = iVar6 >> 3;
                    BN_bn2bin(((pkey->pkey).rsa)->iqmp,puVar7);
                    puVar7[iVar6] = '\0';
                    pcVar17 = "rsa";
                    pcVar18 = "iqmp";
                    goto LAB_019ef9ec;
                  }
                }
              }
              EVP_PKEY_free(pkey);
            }
            p_Var24 = &pXVar28->extensions->stack;
            iVar6 = sk_num(p_Var24);
            if ((0 < iVar6) && (iVar6 = sk_num(p_Var24), 0 < iVar6)) {
              iVar6 = 0;
              do {
                ex = sk_value(p_Var24,iVar6);
                pBVar10 = BIO_s_mem();
                pBVar11 = BIO_new(pBVar10);
                if (pBVar11 == (BIO *)0x0) break;
                a_00 = X509_EXTENSION_get_object(ex);
                i2t_ASN1_OBJECT((char *)local_4f0,0x80,a_00);
                iVar4 = X509_EXTENSION_get_critical(ex);
                pcVar17 = "";
                if (iVar4 != 0) {
                  pcVar17 = "(critical)";
                }
                FUN_019c9f64(lVar26,"%s: %s\n",local_4f0,pcVar17);
                iVar4 = X509V3_EXT_print(pBVar11,ex,0,0);
                if (iVar4 == 0) {
                  ASN1_STRING_print(pBVar11,ex->value);
                }
                BIO_ctrl(pBVar11,0x73,0,&local_470);
                uVar22 = *local_470;
                if (uVar22 != 0) {
                  uVar23 = 0;
                  ppuVar25 = local_468;
                  puVar21 = local_470;
                  do {
                    pcVar17 = "";
                    if (*(char *)(puVar21[1] + uVar23) == '\n') {
                      uVar23 = uVar23 + 1;
                      pcVar17 = ", ";
                    }
                    for (; uVar23 < uVar22; uVar23 = uVar23 + 1) {
                      if (*(char *)(puVar21[1] + uVar23) != ' ') {
                        iVar4 = FUN_019d5bc0(ppuVar25,auStack_268 + -(long)ppuVar25,&DAT_01e24bb9,
                                             pcVar17);
                        ppuVar25 = (undefined8 **)((long)ppuVar25 + (long)iVar4);
                        puVar21 = local_470;
                        break;
                      }
                    }
                    uVar22 = *puVar21;
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < uVar22);
                }
                FUN_019c9f64(lVar26,&DAT_01e28835,local_468);
                FUN_019c333c(lVar26,iVar3,local_4f0,local_468);
                BIO_free(pBVar11);
                iVar6 = iVar6 + 1;
                iVar4 = sk_num(p_Var24);
              } while (iVar6 < iVar4);
            }
            pAVar27 = pXVar12->signature;
            if (0 < pAVar27->length) {
              lVar30 = 0;
              ppuVar25 = local_468;
              do {
                iVar6 = FUN_019d5bc0(ppuVar25,auStack_68 + -(long)ppuVar25,"%02x:",
                                     pAVar27->data[lVar30]);
                lVar30 = lVar30 + 1;
                ppuVar25 = (undefined8 **)((long)ppuVar25 + (long)iVar6);
              } while (lVar30 < pAVar27->length);
            }
            FUN_019c9f64(lVar26," Signature: %s\n",local_468);
            FUN_019c333c(lVar26,iVar3,"Signature",local_468);
            pBVar10 = BIO_s_mem();
            pBVar11 = BIO_new(pBVar10);
            PEM_write_bio_X509(pBVar11,pXVar12);
            BIO_ctrl(pBVar11,0x73,0,local_468);
            FUN_019c323c(lVar26,iVar3,"Cert",local_468[0][1],*local_468[0]);
            BIO_free(pBVar11);
            iVar3 = iVar3 + 1;
          } while (iVar3 != iVar2);
        }
        (*(code *)PTR_free_02bf74b0)(puVar7);
        goto LAB_019efc78;
      }
    }
    (*(code *)PTR_free_02bf74b0)(puVar7);
  }
LAB_019efc78:
  pXVar12 = SSL_get_peer_certificate(*(SSL **)(param_2 + 0x10));
  *(X509 **)(param_2 + 0x18) = pXVar12;
  if (pXVar12 == (X509 *)0x0) {
    if ((param_3 & 1) != 0) {
      FUN_019ca0fc(lVar26,"SSL: couldn\'t get peer certificate!");
    }
    return 0x33;
  }
  pcVar17 = (char *)(lVar26 + 0x938);
  FUN_019c9f64(lVar26,"Server certificate:\n");
  pXVar13 = X509_get_subject_name(*(X509 **)(param_2 + 0x18));
  iVar2 = FUN_019eedbc(pXVar13,pcVar17,0x4000);
  pcVar18 = pcVar17;
  if (iVar2 != 0) {
    pcVar18 = "[NONE]";
  }
  FUN_019c9f64(lVar26,"\t subject: %s\n",pcVar18);
  FUN_019f02b4(**(undefined8 **)(**(long **)(param_2 + 0x18) + 0x20),pcVar17,0x4000);
  FUN_019c9f64(lVar26,"\t start date: %s\n",pcVar17);
  FUN_019f02b4(*(undefined8 *)(*(long *)(**(long **)(param_2 + 0x18) + 0x20) + 8),pcVar17,0x4000);
  FUN_019c9f64(lVar26,"\t expire date: %s\n",pcVar17);
  if (*(char *)(lVar26 + 0x441) != '\0') {
    pXVar12 = *(X509 **)(param_2 + 0x18);
    lVar30 = *param_1;
    if ((*(char *)((long)param_1 + 0x2e6) == '\0') ||
       (iVar2 = inet_pton(10,(char *)param_1[0x18],local_468), iVar2 == 0)) {
      iVar2 = inet_pton(2,(char *)param_1[0x18],local_468);
      __n = 0;
      if (iVar2 != 0) {
        __n = 4;
      }
      iVar3 = 2;
      if (iVar2 != 0) {
        iVar3 = 7;
      }
    }
    else {
      iVar3 = 7;
      __n = 0x10;
    }
    p_Var8 = X509_get_ext_d2i(pXVar12,0x55,(int *)0x0,(int *)0x0);
    if (p_Var8 != (_STACK *)0x0) {
      iVar2 = sk_num(p_Var8);
      if (iVar2 < 1) {
        GENERAL_NAMES_free((GENERAL_NAMES *)p_Var8);
      }
      else {
        iVar4 = -1;
        iVar6 = 1;
        do {
          piVar14 = sk_value(p_Var8,iVar6 + -1);
          if (*piVar14 == iVar3) {
            puVar7 = ASN1_STRING_data(*(ASN1_STRING **)(piVar14 + 2));
            iVar5 = ASN1_STRING_length(*(ASN1_STRING **)(piVar14 + 2));
            if (iVar3 == 7) {
              iVar4 = 0;
              if (__n == (long)iVar5) {
                iVar5 = memcmp(puVar7,local_468,__n);
                iVar4 = 0;
                if (iVar5 == 0) {
LAB_019f009c:
                  GENERAL_NAMES_free((GENERAL_NAMES *)p_Var8);
                  FUN_019c9f64(lVar30,"\t subjectAltName: %s matched\n",param_1[0x19]);
                  goto LAB_019f00c4;
                }
              }
            }
            else if (iVar3 == 2) {
              sVar15 = strlen((char *)puVar7);
              iVar4 = 0;
              if (sVar15 == (long)iVar5) {
                iVar5 = FUN_019f8be8(puVar7,param_1[0x18]);
                iVar4 = 0;
                if (iVar5 != 0) goto LAB_019f009c;
              }
            }
          }
        } while ((iVar6 < iVar2) && (iVar6 = iVar6 + 1, iVar4 != 1));
        GENERAL_NAMES_free((GENERAL_NAMES *)p_Var8);
        if (iVar4 == 0) {
          FUN_019c9f64(lVar30,"\t subjectAltName does not match %s\n",param_1[0x19]);
          FUN_019ca0fc(lVar30,
                       "SSL: no alternative certificate subject name matches target host name \'%s\'"
                       ,param_1[0x19]);
          iVar2 = 0x33;
          goto LAB_019f008c;
        }
      }
    }
    local_4f0[0] = "";
    pXVar13 = X509_get_subject_name(pXVar12);
    if (pXVar13 == (X509_NAME *)0x0) {
      iVar2 = 0;
LAB_019effbc:
      if (local_4f0[0] == "") {
        local_4f0[0] = (uchar *)0x0;
      }
      if (iVar2 == 0) {
        if (local_4f0[0] == (uchar *)0x0) goto LAB_019f0050;
        iVar2 = FUN_019f8be8(local_4f0[0],param_1[0x18]);
        if (iVar2 != 0) {
          FUN_019c9f64(lVar30,"\t common name: %s (matched)\n");
          iVar2 = 0;
          goto LAB_019f007c;
        }
        FUN_019ca0fc(lVar30,
                     "SSL: certificate subject name \'%s\' does not match target host name \'%s\'",
                     local_4f0[0],param_1[0x19]);
        goto LAB_019f0078;
      }
    }
    else {
      iVar2 = -1;
      do {
        iVar3 = iVar2;
        iVar2 = X509_NAME_get_index_by_NID(pXVar13,0xd,iVar3);
      } while (-1 < iVar2);
      if (iVar3 < 0) {
LAB_019effb0:
        iVar2 = 0;
        goto LAB_019effbc;
      }
      ne = X509_NAME_get_entry(pXVar13,iVar3);
      x = X509_NAME_ENTRY_get_data(ne);
      if (x == (ASN1_STRING *)0x0) goto LAB_019effb0;
      iVar2 = ASN1_STRING_type(x);
      if (iVar2 == 0xc) {
        iVar3 = ASN1_STRING_length(x);
        if (iVar3 < 0) goto LAB_019f001c;
        puVar7 = CRYPTO_malloc(iVar3 + 1,"vtls/openssl.c",0x4db);
        local_4f0[0] = puVar7;
        if (puVar7 != (uchar *)0x0) {
          puVar16 = ASN1_STRING_data(x);
          memcpy(puVar7,puVar16,(long)iVar3);
          local_4f0[0][iVar3] = '\0';
          goto LAB_019f001c;
        }
      }
      else {
        iVar3 = ASN1_STRING_to_UTF8(local_4f0,x);
LAB_019f001c:
        if (local_4f0[0] != (uchar *)0x0) {
          strlen((char *)local_4f0[0]);
          iVar6 = FUN_019c1e80();
          iVar2 = 0;
          if (iVar6 != iVar3) {
            FUN_019ca0fc(lVar30,"SSL: illegal cert name field");
            iVar2 = 0x33;
          }
          goto LAB_019effbc;
        }
      }
LAB_019f0050:
      FUN_019ca0fc(lVar30,"SSL: unable to obtain common name from peer certificate");
LAB_019f0078:
      iVar2 = 0x33;
    }
LAB_019f007c:
    if (local_4f0[0] != (uchar *)0x0) {
      CRYPTO_free(local_4f0[0]);
    }
    if (iVar2 != 0) {
LAB_019f008c:
      X509_free(*(X509 **)(param_2 + 0x18));
      *(undefined8 *)(param_2 + 0x18) = 0;
      return iVar2;
    }
  }
LAB_019f00c4:
  pXVar13 = X509_get_issuer_name(*(X509 **)(param_2 + 0x18));
  iVar2 = FUN_019eedbc(pXVar13,pcVar17,0x4000);
  if (iVar2 == 0) {
    FUN_019c9f64(lVar26,"\t issuer: %s\n",pcVar17);
    if (*(char **)(lVar26 + 0x640) != (char *)0x0) {
      fp = fopen(*(char **)(lVar26 + 0x640),"r");
      if (fp == (FILE *)0x0) {
        if ((param_3 & 1) != 0) {
          FUN_019ca0fc(lVar26,"SSL: Unable to open issuer cert (%s)",*(undefined8 *)(lVar26 + 0x640)
                      );
        }
        pXVar12 = *(X509 **)(param_2 + 0x18);
LAB_019f01d0:
        X509_free(pXVar12);
        *(undefined8 *)(param_2 + 0x18) = 0;
        return 0x53;
      }
      pXVar12 = PEM_read_X509(fp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (pXVar12 == (X509 *)0x0) {
        if ((param_3 & 1) != 0) {
          FUN_019ca0fc(lVar26,"SSL: Unable to read issuer cert (%s)",*(undefined8 *)(lVar26 + 0x640)
                      );
        }
        X509_free(*(X509 **)(param_2 + 0x18));
        X509_free((X509 *)0x0);
        fclose(fp);
        return 0x53;
      }
      fclose(fp);
      iVar2 = X509_check_issued(pXVar12,*(X509 **)(param_2 + 0x18));
      if (iVar2 != 0) {
        if ((param_3 & 1) != 0) {
          FUN_019ca0fc(lVar26,"SSL: Certificate issuer check failed (%s)",
                       *(undefined8 *)(lVar26 + 0x640));
        }
        X509_free(*(X509 **)(param_2 + 0x18));
        goto LAB_019f01d0;
      }
      FUN_019c9f64(lVar26,"\t SSL certificate issuer check ok (%s)\n",
                   *(undefined8 *)(lVar26 + 0x640));
      X509_free(pXVar12);
    }
    lVar30 = SSL_get_verify_result(*(SSL **)(param_2 + 0x10));
    *(long *)(lVar26 + 0x438) = lVar30;
    if (lVar30 == 0) {
      FUN_019c9f64(lVar26,"\t SSL certificate verify ok.\n");
    }
    else {
      if (*(char *)(lVar26 + 0x440) != '\0') {
        if ((param_3 & 1) != 0) {
          pcVar17 = X509_verify_cert_error_string(lVar30);
          FUN_019ca0fc(lVar26,"SSL certificate verify result: %s (%ld)",pcVar17,lVar30);
        }
        iVar2 = 0x33;
        goto LAB_019f00f4;
      }
      pcVar17 = X509_verify_cert_error_string(lVar30);
      FUN_019c9f64(lVar26,"\t SSL certificate verify result: %s (%ld), continuing anyway.\n",pcVar17
                   ,lVar30);
    }
    iVar2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      FUN_019ca0fc(lVar26,"SSL: couldn\'t get X509-issuer name!");
    }
    iVar2 = 0x23;
  }
LAB_019f00f4:
  X509_free(*(X509 **)(param_2 + 0x18));
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 5;
  return iVar2;
}

