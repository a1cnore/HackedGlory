// functions/01a54 — 2 functions
#include "libGameKindred.h"




bool FUN_01a54514(int param_1,BIGNUM *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *buf;
  BIGNUM *pBVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  byte local_64 [4];
  time_t tStack_58;
  
  if ((param_3 < 0) || ((uVar8 = param_3 - 1, uVar8 == 0 && (0 < param_4)))) {
    iVar6 = 0x76;
    iVar4 = 0x7d;
LAB_01a54570:
    ERR_put_error(3,0x7f,iVar6,"bn_rand.c",iVar4);
    return false;
  }
  if (param_3 == 0) {
    BN_set_word(param_2,0);
    return true;
  }
  iVar6 = param_3 + 0xe;
  if (-1 < param_3 + 7) {
    iVar6 = param_3 + 7;
  }
  iVar6 = iVar6 >> 3;
  uVar1 = param_3 + 6;
  if (-1 < (int)uVar8) {
    uVar1 = uVar8;
  }
  buf = CRYPTO_malloc(iVar6,"bn_rand.c",0x8a);
  if (buf == (byte *)0x0) {
    iVar6 = 0x41;
    iVar4 = 0x8c;
    goto LAB_01a54570;
  }
  time(&tStack_58);
  RAND_add(&tStack_58,8,0.0);
  if (param_1 == 0) {
    iVar4 = RAND_bytes(buf,iVar6);
    if (0 < iVar4) goto LAB_01a546b0;
  }
  else {
    iVar4 = RAND_pseudo_bytes(buf,iVar6);
    if (iVar4 != -1) {
      if (param_1 == 2) {
        lVar9 = 0;
        do {
          iVar4 = RAND_pseudo_bytes(local_64,1);
          if (iVar4 < 0) goto LAB_01a546e0;
          if ((lVar9 == 0) || (-1 < (char)local_64[0])) {
            bVar7 = 0;
            if (local_64[0] < 0x2a) goto LAB_01a54660;
            if (local_64[0] < 0x54) {
              bVar7 = 0xff;
              goto LAB_01a54660;
            }
          }
          else {
            bVar7 = buf[lVar9 + -1];
LAB_01a54660:
            buf[lVar9] = bVar7;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar6);
      }
LAB_01a546b0:
      uVar8 = uVar8 - (uVar1 & 0xfffffff8);
      bVar7 = (byte)(0xff << (ulong)(uVar8 + 1 & 0x1f));
      if (param_4 < 0) {
        *buf = *buf & (bVar7 ^ 0xff);
      }
      else {
        if (param_4 == 0) {
          bVar2 = *buf;
          iVar4 = 1;
        }
        else {
          if (uVar8 == 0) {
            *buf = 1;
            buf[1] = buf[1] | 0x80;
            *buf = 1;
            goto joined_r0x01a54778;
          }
          bVar2 = *buf;
          uVar8 = uVar8 - 1;
          iVar4 = 3;
        }
        bVar2 = bVar2 | (byte)(iVar4 << (ulong)(uVar8 & 0x1f));
        *buf = bVar2;
        *buf = bVar2 & (bVar7 ^ 0xff);
      }
joined_r0x01a54778:
      if (param_5 != 0) {
        buf[(long)iVar6 + -1] = buf[(long)iVar6 + -1] | 1;
      }
      pBVar5 = BN_bin2bn(buf,iVar6,param_2);
      bVar3 = pBVar5 != (BIGNUM *)0x0;
      goto LAB_01a54744;
    }
  }
LAB_01a546e0:
  bVar3 = false;
LAB_01a54744:
  OPENSSL_cleanse(buf,(long)iVar6);
  CRYPTO_free(buf);
  return bVar3;
}




undefined8 FUN_01a547c8(int param_1,BIGNUM *param_2,BIGNUM *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar1 = BN_rand;
  if (param_1 != 0) {
    pcVar1 = BN_pseudo_rand;
  }
  if ((param_3->neg == 0) && (param_3->top != 0)) {
    iVar2 = BN_num_bits(param_3);
    if (iVar2 == 1) {
      BN_set_word(param_2,0);
    }
    else {
      iVar3 = BN_is_bit_set(param_3,iVar2 + -2);
      if ((iVar3 == 0) && (iVar3 = BN_is_bit_set(param_3,iVar2 + -3), iVar3 == 0)) {
        iVar3 = -100;
        while( true ) {
          uVar5 = (*pcVar1)(param_2,iVar2 + 1,0xffffffff,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          iVar4 = BN_cmp(param_2,param_3);
          if (-1 < iVar4) {
            iVar4 = BN_sub(param_2,param_2,param_3);
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = BN_cmp(param_2,param_3);
            if (-1 < iVar4) {
              iVar4 = BN_sub(param_2,param_2,param_3);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 0) break;
          iVar4 = BN_cmp(param_2,param_3);
          if (iVar4 < 0) {
            return 1;
          }
        }
        iVar2 = 0x71;
        iVar3 = 0x107;
        goto LAB_01a54814;
      }
      iVar3 = -100;
      do {
        uVar5 = (*pcVar1)(param_2,iVar2,0xffffffff,0);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == 0) {
          iVar2 = 0x71;
          iVar3 = 0x114;
          goto LAB_01a54814;
        }
        iVar4 = BN_cmp(param_2,param_3);
      } while (-1 < iVar4);
    }
    uVar5 = 1;
  }
  else {
    iVar2 = 0x73;
    iVar3 = 0xe6;
LAB_01a54814:
    ERR_put_error(3,0x7a,iVar2,"bn_rand.c",iVar3);
    uVar5 = 0;
  }
  return uVar5;
}

