// functions/01ad2 — 3 functions
#include "libGameKindred.h"




int FUN_01ad22fc(EC_GROUP *param_1,EC_POINT *param_2,long *param_3,EC_POINT *param_4,BN_CTX *param_5
                )

{
  BIGNUM *b;
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  BIGNUM *a_00;
  BIGNUM *a_01;
  ulong uVar11;
  
  if (param_2 == param_4) {
    ERR_put_error(0x10,0xd0,0x70,"ec2_mult.c",0x112);
    return 0;
  }
  if ((((param_3 == (long *)0x0) || (param_4 == (EC_POINT *)0x0)) || ((int)param_3[1] == 0)) ||
     (iVar1 = EC_POINT_is_at_infinity(param_1,param_4), iVar1 != 0)) {
    iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar1;
  }
  if (*(int *)(param_4 + 0x50) == 0) {
    return 0;
  }
  BN_CTX_start(param_5);
  pBVar3 = BN_CTX_get(param_5);
  a = BN_CTX_get(param_5);
  if (a != (BIGNUM *)0x0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (pBVar3->dmax < iVar1) {
      bn_expand2(pBVar3,iVar1);
      iVar1 = *(int *)(param_1 + 0x70);
      if (a->dmax < iVar1) goto LAB_01ad2458;
LAB_01ad241c:
      if (iVar1 <= *(int *)(param_2 + 0x14)) goto LAB_01ad2474;
LAB_01ad242c:
      bn_expand2((BIGNUM *)(param_2 + 8),iVar1);
      iVar1 = *(int *)(param_1 + 0x70);
      if (*(int *)(param_2 + 0x2c) < iVar1) {
LAB_01ad2480:
        bn_expand2((BIGNUM *)(param_2 + 0x20),iVar1);
      }
    }
    else {
      if (iVar1 <= a->dmax) goto LAB_01ad241c;
LAB_01ad2458:
      bn_expand2(a,iVar1);
      iVar1 = *(int *)(param_1 + 0x70);
      if (*(int *)(param_2 + 0x14) < iVar1) goto LAB_01ad242c;
LAB_01ad2474:
      if (*(int *)(param_2 + 0x2c) < iVar1) goto LAB_01ad2480;
    }
    a_01 = (BIGNUM *)(param_2 + 0x20);
    a_00 = (BIGNUM *)(param_2 + 8);
    b = (BIGNUM *)(param_4 + 8);
    iVar1 = BN_GF2m_mod_arr(pBVar3,b,param_1 + 0x80);
    if (((iVar1 != 0) && (iVar1 = BN_set_word(a,1), iVar1 != 0)) &&
       ((iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_01,pBVar3,param_5), iVar1 != 0 &&
        (iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_00,a_01,param_5), iVar1 != 0))))
    {
      iVar1 = BN_GF2m_add(a_00,a_00);
      if (iVar1 != 0) {
        lVar7 = *param_3;
        uVar8 = 0x8000000000000000;
        iVar1 = (int)param_3[1] + -1;
        do {
          uVar10 = uVar8 & *(ulong *)(lVar7 + (long)iVar1 * 8);
          uVar8 = uVar8 >> 1;
        } while (uVar10 == 0);
        iVar2 = (int)param_3[1] + -2;
        if (uVar8 != 0) {
          iVar2 = iVar1;
        }
        if (-1 < iVar2) {
          uVar10 = 0x8000000000000000;
          if (uVar8 != 0) {
            uVar10 = uVar8;
          }
          lVar9 = (long)iVar2;
          do {
            uVar8 = *(ulong *)(lVar7 + lVar9 * 8);
            do {
              uVar11 = uVar10 & uVar8;
              BN_consttime_swap(uVar11,pBVar3,a_00,*(undefined4 *)(param_1 + 0x70));
              BN_consttime_swap(uVar11,a,a_01,*(undefined4 *)(param_1 + 0x70));
              BN_CTX_start(param_5);
              pBVar4 = BN_CTX_get(param_5);
              pBVar5 = BN_CTX_get(param_5);
              if (((pBVar5 == (BIGNUM *)0x0) ||
                  (pBVar6 = BN_copy(pBVar4,b), pBVar6 == (BIGNUM *)0x0)) ||
                 (((iVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,a_00,a_00,a,param_5),
                   iVar1 == 0 ||
                   (((iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                        (param_1,a_01,a_01,pBVar3,param_5), iVar1 == 0 ||
                     (iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                        (param_1,pBVar5,a_00,a_01,param_5), iVar1 == 0)) ||
                    (iVar1 = BN_GF2m_add(a_01,a_01,a_00), iVar1 == 0)))) ||
                  ((iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,a_01,a_01,param_5),
                   iVar1 == 0 ||
                   (iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                      (param_1,a_00,a_01,pBVar4,param_5), iVar1 == 0)))))) {
LAB_01ad2a84:
                BN_CTX_end(param_5);
                iVar1 = 0;
                goto LAB_01ad2b64;
              }
              iVar1 = BN_GF2m_add(a_00,a_00,pBVar5);
              BN_CTX_end(param_5);
              if (iVar1 == 0) goto LAB_01ad2b60;
              BN_CTX_start(param_5);
              pBVar4 = BN_CTX_get(param_5);
              if ((((pBVar4 == (BIGNUM *)0x0) ||
                   (iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar3,pBVar3,param_5),
                   iVar1 == 0)) ||
                  ((iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar4,a,param_5),
                   iVar1 == 0 ||
                   (((iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                        (param_1,a,pBVar3,pBVar4,param_5), iVar1 == 0 ||
                     (iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar3,pBVar3,param_5)
                     , iVar1 == 0)) ||
                    (iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar4,pBVar4,param_5),
                    iVar1 == 0)))))) ||
                 (iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                    (param_1,pBVar4,param_1 + 0xb0,pBVar4,param_5), iVar1 == 0))
              goto LAB_01ad2a84;
              iVar1 = BN_GF2m_add(pBVar3,pBVar3,pBVar4);
              BN_CTX_end(param_5);
              if (iVar1 == 0) goto LAB_01ad2b60;
              BN_consttime_swap(uVar11,pBVar3,a_00,*(undefined4 *)(param_1 + 0x70));
              BN_consttime_swap(uVar11,a,a_01,*(undefined4 *)(param_1 + 0x70));
              uVar10 = uVar10 >> 1;
            } while (uVar10 != 0);
            if (lVar9 < 1) break;
            lVar7 = *param_3;
            uVar10 = 0x8000000000000000;
            lVar9 = lVar9 + -1;
          } while( true );
        }
        if (a->top == 0) {
          BN_set_word(a_00,0);
          BN_set_word(a_01,0);
          iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
joined_r0x01ad2ab8:
          if (iVar1 != 0) {
LAB_01ad2b40:
            BN_set_negative(a_00,0);
            BN_set_negative(a_01,0);
            iVar1 = 1;
            goto LAB_01ad2b64;
          }
        }
        else {
          param_4 = param_4 + 0x20;
          if (*(int *)(param_2 + 0x28) != 0) {
            BN_CTX_start(param_5);
            pBVar4 = BN_CTX_get(param_5);
            pBVar5 = BN_CTX_get(param_5);
            pBVar6 = BN_CTX_get(param_5);
            if (((pBVar6 != (BIGNUM *)0x0) && (iVar1 = BN_set_word(pBVar6,1), iVar1 != 0)) &&
               ((iVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,pBVar4,a,a_01,param_5),
                iVar1 != 0 &&
                (iVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,a,a,b,param_5), iVar1 != 0)
                ))) {
              iVar1 = BN_GF2m_add(a,a,pBVar3);
              if (iVar1 == 0) {
                iVar1 = 0;
                BN_CTX_end(param_5);
                goto LAB_01ad2b64;
              }
              iVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,a_01,a_01,b,param_5);
              if (((((iVar1 != 0) &&
                    (iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                       (param_1,pBVar3,a_01,pBVar3,param_5), iVar1 != 0)) &&
                   ((iVar1 = BN_GF2m_add(a_01,a_01,a_00), iVar1 != 0 &&
                    ((((iVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,a_01,a_01,a,param_5)
                       , iVar1 != 0 &&
                       (iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar5,b,param_5),
                       iVar1 != 0)) && (iVar1 = BN_GF2m_add(pBVar5,pBVar5,param_4), iVar1 != 0)) &&
                     ((iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                         (param_1,pBVar5,pBVar5,pBVar4,param_5), iVar1 != 0 &&
                      (iVar1 = BN_GF2m_add(pBVar5,pBVar5,a_01), iVar1 != 0)))))))) &&
                  ((iVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,pBVar4,pBVar4,b,param_5)
                   , iVar1 != 0 &&
                   ((iVar1 = (**(code **)(*(long *)param_1 + 0x110))
                                       (param_1,pBVar4,pBVar6,pBVar4,param_5), iVar1 != 0 &&
                    (iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                       (param_1,pBVar5,pBVar4,pBVar5,param_5), iVar1 != 0)))))) &&
                 ((iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                     (param_1,a_00,pBVar3,pBVar4,param_5), iVar1 != 0 &&
                  ((iVar1 = BN_GF2m_add(a_01,a_00,b), iVar1 != 0 &&
                   (iVar1 = (**(code **)(*(long *)param_1 + 0x100))
                                      (param_1,a_01,a_01,pBVar5,param_5), iVar1 != 0)))))) {
                iVar2 = BN_GF2m_add(a_01,a_01,param_4);
                iVar1 = 0;
                if (iVar2 != 0) {
                  iVar1 = 2;
                }
                BN_CTX_end(param_5);
                if (iVar1 == 0) {
                  iVar1 = 0;
                  goto LAB_01ad2b64;
                }
                goto LAB_01ad2b0c;
              }
            }
            iVar1 = 0;
            BN_CTX_end(param_5);
            goto LAB_01ad2b64;
          }
          pBVar3 = BN_copy(a_00,b);
          if (pBVar3 != (BIGNUM *)0x0) {
            iVar2 = BN_GF2m_add(a_01,b,param_4);
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = 2;
            }
            if (iVar1 == 0) {
              iVar1 = 0;
              goto LAB_01ad2b64;
            }
LAB_01ad2b0c:
            if (iVar1 == 1) {
              iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
              goto joined_r0x01ad2ab8;
            }
            iVar1 = BN_set_word((BIGNUM *)(param_2 + 0x38),1);
            if (iVar1 != 0) {
              *(undefined4 *)(param_2 + 0x50) = 1;
              goto LAB_01ad2b40;
            }
          }
        }
      }
    }
  }
LAB_01ad2b60:
  iVar1 = 0;
LAB_01ad2b64:
  BN_CTX_end(param_5);
  return iVar1;
}




undefined8 FUN_01ad2c84(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  EC_KEY *key;
  ASN1_OBJECT *a;
  uchar *local_50;
  int local_44;
  ASN1_OBJECT *local_38;
  
  local_38 = (ASN1_OBJECT *)0x0;
  key = *(EC_KEY **)(param_2 + 0x20);
  iVar1 = FUN_01ad3b94(&local_44,&local_38,key);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xd8,0x10,"ec_ameth.c",0x72);
  }
  else {
    iVar1 = i2o_ECPublicKey(key,(uchar **)0x0);
    if (iVar1 < 1) {
      penc = (uchar *)0x0;
      a = local_38;
    }
    else {
      penc = CRYPTO_malloc(iVar1,"ec_ameth.c",0x78);
      a = local_38;
      if ((penc != (uchar *)0x0) &&
         (local_50 = penc, iVar1 = i2o_ECPublicKey(key,&local_50), a = local_38, 0 < iVar1)) {
        aobj = OBJ_nid2obj(0x198);
        a = local_38;
        iVar1 = X509_PUBKEY_set0_param(param_1,aobj,local_44,local_38,penc,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    if (local_44 == 6) {
      ASN1_OBJECT_free(a);
    }
    else {
      ASN1_STRING_free((ASN1_STRING *)a);
    }
    if (penc != (uchar *)0x0) {
      CRYPTO_free(penc);
    }
  }
  return 0;
}




undefined4 FUN_01ad2da8(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  EC_GROUP *group;
  EC_POINT *a;
  EC_POINT *b;
  
  group = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  a = EC_KEY_get0_public_key(*(EC_KEY **)(param_1 + 0x20));
  b = EC_KEY_get0_public_key(*(EC_KEY **)(param_2 + 0x20));
  iVar2 = EC_POINT_cmp(group,a,b,(BN_CTX *)0x0);
  uVar1 = 0;
  if (iVar2 != 1) {
    uVar1 = 0xfffffffe;
  }
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

