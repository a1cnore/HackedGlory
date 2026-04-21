// functions/01adb — 5 functions
#include "libGameKindred.h"




int FUN_01adb244(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  RSA *rsa;
  BIGNUM *a;
  BN_GENCB *cb;
  int *piVar2;
  BN_GENCB BStack_58;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(long *)(piVar2 + 2) == 0) {
    a = BN_new();
    *(BIGNUM **)(piVar2 + 2) = a;
    if (a == (BIGNUM *)0x0) {
      return 0;
    }
    iVar1 = BN_set_word(a,0x10001);
    if (iVar1 == 0) {
      return 0;
    }
  }
  rsa = RSA_new();
  if (rsa == (RSA *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    cb = (BN_GENCB *)0x0;
  }
  else {
    cb = &BStack_58;
    evp_pkey_set_cb_translate(&BStack_58,param_1);
  }
  iVar1 = RSA_generate_key_ex(rsa,*piVar2,*(BIGNUM **)(piVar2 + 2),cb);
  if (iVar1 < 1) {
    RSA_free(rsa);
    return iVar1;
  }
  EVP_PKEY_assign(param_2,6,rsa);
  return iVar1;
}




/* WARNING: Type propagation algorithm not settling */

uint FUN_01adb314(long param_1,uchar *param_2,long *param_3,uchar *param_4,size_t param_5)

{
  uint m_length;
  int iVar1;
  void *__dest;
  uchar *EM;
  int line;
  RSA *rsa;
  long lVar2;
  uint local_58;
  uint local_54;
  
  lVar2 = *(long *)(param_1 + 0x28);
  rsa = *(RSA **)(*(long *)(param_1 + 0x10) + 0x20);
  m_length = (uint)param_5;
  if (*(EVP_MD **)(lVar2 + 0x20) == (EVP_MD *)0x0) {
    local_54 = RSA_private_encrypt(m_length,param_4,param_2,rsa,*(int *)(lVar2 + 0x18));
  }
  else {
    iVar1 = EVP_MD_size(*(EVP_MD **)(lVar2 + 0x20));
    if ((long)iVar1 != param_5) {
      iVar1 = 0x8f;
      line = 0xe4;
      goto LAB_01adb3f8;
    }
    iVar1 = EVP_MD_type(*(EVP_MD **)(lVar2 + 0x20));
    if (iVar1 == 0x5f) {
      if (*(int *)(lVar2 + 0x18) != 1) {
        return -1;
      }
      iVar1 = RSA_sign_ASN1_OCTET_STRING(0x5f,param_4,m_length,param_2,&local_54,rsa);
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x18);
      if (iVar1 != 1) {
        if (iVar1 == 6) {
          EM = *(uchar **)(lVar2 + 0x38);
          if (EM == (uchar *)0x0) {
            iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
            EM = CRYPTO_malloc(iVar1,"rsa_pmeth.c",0x9c);
            *(uchar **)(lVar2 + 0x38) = EM;
            if (EM == (uchar *)0x0) {
              return -1;
            }
          }
          iVar1 = RSA_padding_add_PKCS1_PSS_mgf1
                            (rsa,EM,param_4,*(EVP_MD **)(lVar2 + 0x20),*(EVP_MD **)(lVar2 + 0x28),
                             *(int *)(lVar2 + 0x30));
          if (iVar1 == 0) {
            return -1;
          }
          iVar1 = RSA_size(rsa);
          local_54 = RSA_private_encrypt(iVar1,*(uchar **)(lVar2 + 0x38),param_2,rsa,3);
          goto joined_r0x01adb4fc;
        }
        if (iVar1 != 5) {
          return -1;
        }
        iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
        if ((ulong)(long)iVar1 < param_5 + 1) {
          iVar1 = 0x78;
          line = 0x102;
LAB_01adb3f8:
          ERR_put_error(4,0x8e,iVar1,"rsa_pmeth.c",line);
          return -1;
        }
        __dest = *(void **)(lVar2 + 0x38);
        if (__dest == (void *)0x0) {
          iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
          __dest = CRYPTO_malloc(iVar1,"rsa_pmeth.c",0x9c);
          *(void **)(lVar2 + 0x38) = __dest;
          if (__dest == (void *)0x0) {
            iVar1 = 0x41;
            line = 0x106;
            goto LAB_01adb3f8;
          }
        }
        memcpy(__dest,param_4,param_5);
        iVar1 = EVP_MD_type(*(EVP_MD **)(lVar2 + 0x20));
        iVar1 = RSA_X931_hash_id(iVar1);
        *(char *)(*(long *)(lVar2 + 0x38) + param_5) = (char)iVar1;
        local_54 = RSA_private_encrypt((int)(param_5 + 1),*(uchar **)(lVar2 + 0x38),param_2,rsa,5);
        goto joined_r0x01adb4fc;
      }
      iVar1 = EVP_MD_type(*(EVP_MD **)(lVar2 + 0x20));
      iVar1 = RSA_sign(iVar1,param_4,m_length,param_2,&local_58,rsa);
      local_54 = local_58;
    }
    if (iVar1 < 1) {
      return iVar1;
    }
  }
joined_r0x01adb4fc:
  if (-1 < (int)local_54) {
    lVar2 = (long)(int)local_54;
    local_54 = 1;
    *param_3 = lVar2;
  }
  return local_54;
}




int FUN_01adb738(long param_1,uchar *param_2,size_t *param_3,uchar *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uchar *to;
  int line;
  size_t __n;
  long lVar4;
  int local_48 [2];
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(EVP_MD **)(lVar4 + 0x20) == (EVP_MD *)0x0) {
    local_48[0] = RSA_public_decrypt((int)param_5,param_4,param_2,
                                     *(RSA **)(*(long *)(param_1 + 0x10) + 0x20),
                                     *(int *)(lVar4 + 0x18));
joined_r0x01adb838:
    if (local_48[0] < 0) {
      return local_48[0];
    }
    __n = (size_t)local_48[0];
LAB_01adb884:
    iVar2 = 1;
    *param_3 = __n;
  }
  else {
    if (*(int *)(lVar4 + 0x18) == 1) {
      iVar2 = EVP_MD_type(*(EVP_MD **)(lVar4 + 0x20));
      iVar2 = int_rsa_verify(iVar2,0,0,param_2,local_48,param_4,param_5,
                             *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
      if (0 < iVar2) goto joined_r0x01adb838;
    }
    else {
      if (*(int *)(lVar4 + 0x18) != 5) {
        return -1;
      }
      to = *(uchar **)(lVar4 + 0x38);
      if (to == (uchar *)0x0) {
        iVar2 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
        to = CRYPTO_malloc(iVar2,"rsa_pmeth.c",0x9c);
        *(uchar **)(lVar4 + 0x38) = to;
        if (to == (uchar *)0x0) {
          return -1;
        }
      }
      iVar2 = RSA_public_decrypt((int)param_5,param_4,to,*(RSA **)(*(long *)(param_1 + 0x10) + 0x20)
                                 ,5);
      if (0 < iVar2) {
        __n = (long)iVar2 - 1;
        bVar1 = *(byte *)(*(long *)(lVar4 + 0x38) + __n);
        iVar2 = EVP_MD_type(*(EVP_MD **)(lVar4 + 0x20));
        uVar3 = RSA_X931_hash_id(iVar2);
        if (uVar3 == bVar1) {
          iVar2 = EVP_MD_size(*(EVP_MD **)(lVar4 + 0x20));
          if ((int)__n == iVar2) {
            if (param_2 != (uchar *)0x0) {
              memcpy(param_2,*(void **)(lVar4 + 0x38),__n);
            }
            goto LAB_01adb884;
          }
          iVar2 = 0x8f;
          line = 0x141;
        }
        else {
          iVar2 = 100;
          line = 0x13c;
        }
        ERR_put_error(4,0x8d,iVar2,"rsa_pmeth.c",line);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}




int FUN_01adb9ec(long param_1,uchar *param_2,long *param_3,uchar *param_4,int param_5)

{
  int iVar1;
  uchar *to;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(int *)(lVar3 + 0x18) == 4) {
    to = *(uchar **)(lVar3 + 0x38);
    if (to == (uchar *)0x0) {
      iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
      to = CRYPTO_malloc(iVar1,"rsa_pmeth.c",0x9c);
      *(uchar **)(lVar3 + 0x38) = to;
      if (to == (uchar *)0x0) {
        return -1;
      }
    }
    iVar1 = RSA_private_decrypt(param_5,param_4,to,*(RSA **)(*(long *)(param_1 + 0x10) + 0x20),3);
    if (iVar1 < 1) {
      return iVar1;
    }
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(lVar3 + 0x38) + uVar2) != '\0') break;
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)iVar1);
    iVar1 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,iVar1,*(long *)(lVar3 + 0x38) + (uVar2 & 0xffffffff),
                       iVar1 - (int)uVar2,iVar1,*(undefined8 *)(lVar3 + 0x40),
                       *(undefined4 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x20),
                       *(undefined8 *)(lVar3 + 0x28));
  }
  else {
    iVar1 = RSA_private_decrypt(param_5,param_4,param_2,*(RSA **)(*(long *)(param_1 + 0x10) + 0x20),
                                *(int *)(lVar3 + 0x18));
  }
  if (-1 < iVar1) {
    lVar3 = (long)iVar1;
    iVar1 = 1;
    *param_3 = lVar3;
  }
  return iVar1;
}




int FUN_01adbb18(long param_1,int param_2,int param_3,EVP_MD *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  EVP_MD *pEVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = *(int **)(param_1 + 0x28);
  switch(param_2) {
  case 0x1001:
    if (param_3 - 1U < 6) {
      pEVar5 = *(EVP_MD **)(piVar6 + 8);
      if (pEVar5 == (EVP_MD *)0x0) {
        if (param_3 != 4) {
          if (param_3 != 6) goto switchD_01adbc70_default;
          goto switchD_01adbc70_caseD_6;
        }
switchD_01adbc70_caseD_4:
        bVar1 = *(byte *)(param_1 + 0x21) & 3;
      }
      else {
        switch(param_3) {
        case 3:
          goto switchD_01adbc70_caseD_3;
        case 4:
          goto switchD_01adbc70_caseD_4;
        case 5:
          iVar2 = EVP_MD_type(pEVar5);
          iVar2 = RSA_X931_hash_id(iVar2);
          if (iVar2 != -1) goto switchD_01adbc70_default;
LAB_01adbf14:
          iVar2 = 0x8e;
          iVar3 = 0x1e2;
          goto LAB_01adbf2c;
        case 6:
switchD_01adbc70_caseD_6:
          bVar1 = *(byte *)(param_1 + 0x20) & 0x18;
          break;
        default:
          goto switchD_01adbc70_default;
        }
      }
      if (bVar1 != 0) {
        if (pEVar5 == (EVP_MD *)0x0) {
          pEVar5 = EVP_sha1();
          *(EVP_MD **)(piVar6 + 8) = pEVar5;
        }
switchD_01adbc70_default:
        piVar6[6] = param_3;
        return 1;
      }
    }
    iVar2 = 0x90;
    iVar3 = 0x205;
    break;
  case 0x1002:
  case 0x1007:
    if (piVar6[6] == 6) {
      if (param_2 != 0x1007) {
        if (param_3 < -2) {
          return -2;
        }
        piVar6[0xc] = param_3;
        return 1;
      }
      iVar2 = piVar6[0xc];
      goto LAB_01adbcdc;
    }
    iVar2 = 0x92;
    iVar3 = 0x20f;
    break;
  case 0x1003:
    if (0xff < param_3) {
      *piVar6 = param_3;
      return 1;
    }
    iVar2 = 0x91;
    iVar3 = 0x21d;
    break;
  case 0x1004:
    if (param_4 == (EVP_MD *)0x0) {
      return -2;
    }
    BN_free(*(BIGNUM **)(piVar6 + 2));
    *(EVP_MD **)(piVar6 + 2) = param_4;
    return 1;
  case 0x1005:
  case 0x1008:
    if ((piVar6[6] | 2U) == 6) {
      if (param_2 != 0x1008) {
        *(EVP_MD **)(piVar6 + 10) = param_4;
        return 1;
      }
      lVar4 = *(long *)(piVar6 + 10);
      if (lVar4 != 0) goto LAB_01adbbf0;
switchD_01adbb98_caseD_d:
      lVar4 = *(long *)(piVar6 + 8);
LAB_01adbbf0:
      param_4->type = (int)lVar4;
      param_4->pkey_type = (int)((ulong)lVar4 >> 0x20);
      return 1;
    }
    iVar2 = 0x9c;
    iVar3 = 0x244;
    break;
  case 0x1006:
    iVar2 = piVar6[6];
LAB_01adbcdc:
    param_4->type = iVar2;
    return 1;
  case 0x1009:
  case 0x100b:
    if (piVar6[6] == 4) {
      if (param_2 != 0x100b) goto LAB_01adbe68;
      goto switchD_01adbb98_caseD_d;
    }
    iVar2 = 0x8d;
    iVar3 = 0x22d;
    break;
  case 0x100a:
    if (piVar6[6] == 4) {
      piVar7 = piVar6 + 0x10;
      if (*(void **)piVar7 != (void *)0x0) {
        CRYPTO_free(*(void **)piVar7);
      }
      if ((0 < param_3) && (param_4 != (EVP_MD *)0x0)) {
        *(EVP_MD **)(piVar6 + 0x10) = param_4;
        *(long *)(piVar6 + 0x12) = (long)param_3;
        return 1;
      }
      piVar7[0] = 0;
      piVar7[1] = 0;
      piVar6[0x12] = 0;
      piVar6[0x13] = 0;
      return 1;
    }
    iVar2 = 0x8d;
    iVar3 = 0x252;
    break;
  case 0x100c:
    if (piVar6[6] == 4) {
      iVar2 = piVar6[0x11];
      param_4->type = piVar6[0x10];
      param_4->pkey_type = iVar2;
      return piVar6[0x12];
    }
    iVar2 = 0x8d;
    iVar3 = 0x262;
    break;
  default:
    switch(param_2) {
    case 1:
      if (param_4 == (EVP_MD *)0x0) {
LAB_01adbe68:
        *(EVP_MD **)(piVar6 + 8) = param_4;
        return 1;
      }
      if (piVar6[6] == 5) {
        iVar2 = EVP_MD_type(param_4);
        iVar2 = RSA_X931_hash_id(iVar2);
        if (iVar2 != -1) goto LAB_01adbe68;
        goto LAB_01adbf14;
      }
      if (piVar6[6] != 3) goto LAB_01adbe68;
switchD_01adbc70_caseD_3:
      iVar2 = 0x8d;
      iVar3 = 0x1dc;
LAB_01adbf2c:
      ERR_put_error(4,0x8c,iVar2,"rsa_pmeth.c",iVar3);
      return 0;
    case 2:
      iVar2 = 0x94;
      iVar3 = 0x275;
      break;
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
    case 10:
    case 0xb:
      return 1;
    default:
      goto switchD_01adbb98_caseD_6;
    case 0xd:
      goto switchD_01adbb98_caseD_d;
    }
  }
  ERR_put_error(4,0x8f,iVar2,"rsa_pmeth.c",iVar3);
switchD_01adbb98_caseD_6:
  return -2;
}

