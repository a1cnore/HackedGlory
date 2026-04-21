// functions/01acf — 2 functions
#include "libGameKindred.h"




EC_GROUP * FUN_01acf280(int *param_1)

{
  int iVar1;
  EC_GROUP *pEVar2;
  BIGNUM *a;
  BIGNUM *b;
  ASN1_INTEGER *ai;
  BIGNUM *a_00;
  long lVar3;
  void *__dest;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  EC_GROUP *group;
  long lVar8;
  long *plVar9;
  EC_POINT *p;
  long local_50;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0x7c;
    iVar4 = 0x3a9;
    goto LAB_01acf444;
  }
  iVar1 = *param_1;
  if (iVar1 == 2) {
    return (EC_GROUP *)0x0;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 2));
      pEVar2 = EC_GROUP_new_by_curve_name(iVar1);
      if (pEVar2 == (EC_GROUP *)0x0) {
        ERR_put_error(0x10,0x9e,0x77,"ec_asn1.c",0x3b1);
        return (EC_GROUP *)0x0;
      }
      EC_GROUP_set_asn1_flag(pEVar2,1);
      return pEVar2;
    }
    iVar1 = 0x73;
    iVar4 = 0x3c0;
    goto LAB_01acf444;
  }
  lVar8 = *(long *)(param_1 + 2);
  plVar5 = *(long **)(lVar8 + 8);
  if (((plVar5 == (long *)0x0) || (*plVar5 == 0)) || (plVar5[1] == 0)) {
    iVar1 = 0x73;
    iVar4 = 700;
LAB_01acf428:
    ERR_put_error(0x10,0x9d,iVar1,"ec_asn1.c",iVar4);
  }
  else {
    puVar7 = *(undefined8 **)(lVar8 + 0x10);
    if (((puVar7 == (undefined8 *)0x0) || (piVar6 = (int *)*puVar7, piVar6 == (int *)0x0)) ||
       ((*(uchar **)(piVar6 + 2) == (uchar *)0x0 ||
        ((puVar7[1] == 0 || (*(long *)(puVar7[1] + 8) == 0)))))) {
      iVar1 = 0x73;
      iVar4 = 0x2c4;
      goto LAB_01acf428;
    }
    a = BN_bin2bn(*(uchar **)(piVar6 + 2),*piVar6,(BIGNUM *)0x0);
    if (a == (BIGNUM *)0x0) {
      iVar1 = 3;
      iVar4 = 0x2c9;
      goto LAB_01acf428;
    }
    piVar6 = *(int **)(*(long *)(lVar8 + 0x10) + 8);
    b = BN_bin2bn(*(uchar **)(piVar6 + 2),*piVar6,(BIGNUM *)0x0);
    if (b == (BIGNUM *)0x0) {
      iVar1 = 3;
      iVar4 = 0x2ce;
      goto LAB_01acf608;
    }
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(lVar8 + 8));
    if (iVar1 == 0x196) {
      ai = *(ASN1_INTEGER **)(*(long *)(lVar8 + 8) + 8);
      if (ai == (ASN1_INTEGER *)0x0) {
        iVar1 = 0x73;
        iVar4 = 0x332;
        goto LAB_01acf608;
      }
      a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
      if (a_00 == (BIGNUM *)0x0) {
        iVar1 = 0xd;
        iVar4 = 0x337;
        goto LAB_01acf608;
      }
      if ((a_00->neg != 0) || (a_00->top == 0)) {
        iVar1 = 0x67;
        iVar4 = 0x33c;
LAB_01acf8e0:
        ERR_put_error(0x10,0x9d,iVar1,"ec_asn1.c",iVar4);
        goto LAB_01acf8e4;
      }
      iVar1 = BN_num_bits(a_00);
      if (0x295 < iVar1) {
        iVar1 = 0x8f;
        iVar4 = 0x342;
        goto LAB_01acf8e0;
      }
      local_50 = (long)iVar1;
      pEVar2 = EC_GROUP_new_curve_GFp(a_00,a,b,(BN_CTX *)0x0);
      if (pEVar2 == (EC_GROUP *)0x0) {
LAB_01acf598:
        ERR_put_error(0x10,0x9d,0x10,"ec_asn1.c",0x34e);
        goto LAB_01acf8e8;
      }
LAB_01acf758:
      piVar6 = *(int **)(*(long *)(lVar8 + 0x10) + 0x10);
      if (piVar6 == (int *)0x0) {
LAB_01acf7c4:
        if (((*(long *)(lVar8 + 0x20) == 0) || (*(long *)(lVar8 + 0x18) == 0)) ||
           (*(long *)(*(long *)(lVar8 + 0x18) + 8) == 0)) {
          iVar1 = 0x73;
          iVar4 = 0x360;
          goto LAB_01acf92c;
        }
        p = EC_POINT_new(pEVar2);
        if (p == (EC_POINT *)0x0) goto LAB_01acf934;
        EC_GROUP_set_point_conversion_form(pEVar2,**(byte **)(*(long *)(lVar8 + 0x18) + 8) & 0xfe);
        iVar1 = EC_POINT_oct2point(pEVar2,p,*(uchar **)(*(int **)(lVar8 + 0x18) + 2),
                                   (long)**(int **)(lVar8 + 0x18),(BN_CTX *)0x0);
        if (iVar1 == 0) {
          iVar1 = 0x10;
          iVar4 = 0x36e;
LAB_01acf988:
          ERR_put_error(0x10,0x9d,iVar1,"ec_asn1.c",iVar4);
          goto LAB_01acf934;
        }
        a = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(lVar8 + 0x20),a);
        if (a == (BIGNUM *)0x0) {
          iVar1 = 0xd;
          iVar4 = 0x374;
          goto LAB_01acf988;
        }
        if ((a->neg != 0) || (a->top == 0)) {
          iVar1 = 0x7a;
          iVar4 = 0x378;
          goto LAB_01acf988;
        }
        iVar1 = BN_num_bits(a);
        if ((int)local_50 + 1 < iVar1) {
          iVar1 = 0x7a;
          iVar4 = 0x37c;
          goto LAB_01acf988;
        }
        if (*(ASN1_INTEGER **)(lVar8 + 0x28) == (ASN1_INTEGER *)0x0) {
          BN_free(b);
          b = (BIGNUM *)0x0;
        }
        else {
          b = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(lVar8 + 0x28),b);
          if (b == (BIGNUM *)0x0) {
            iVar1 = 0xd;
            iVar4 = 0x387;
            goto LAB_01acf988;
          }
        }
        iVar1 = EC_GROUP_set_generator(pEVar2,p,a,b);
        if (iVar1 == 0) {
          iVar1 = 0x10;
          iVar4 = 0x38c;
          goto LAB_01acf988;
        }
        goto LAB_01acf8ec;
      }
      if (*(void **)(pEVar2 + 0x50) != (void *)0x0) {
        CRYPTO_free(*(void **)(pEVar2 + 0x50));
        piVar6 = *(int **)(*(long *)(lVar8 + 0x10) + 0x10);
      }
      __dest = CRYPTO_malloc(*piVar6,"ec_asn1.c",0x356);
      *(void **)(pEVar2 + 0x50) = __dest;
      if (__dest != (void *)0x0) {
        piVar6 = *(int **)(*(long *)(lVar8 + 0x10) + 0x10);
        memcpy(__dest,*(void **)(piVar6 + 2),(long)*piVar6);
        *(long *)(pEVar2 + 0x58) = (long)**(int **)(*(long *)(lVar8 + 0x10) + 0x10);
        goto LAB_01acf7c4;
      }
      iVar1 = 0x41;
      iVar4 = 0x357;
LAB_01acf92c:
      ERR_put_error(0x10,0x9d,iVar1,"ec_asn1.c",iVar4);
      p = (EC_POINT *)0x0;
LAB_01acf934:
      EC_GROUP_clear_free(pEVar2);
      BN_free(a_00);
      group = (EC_GROUP *)0x0;
      pEVar2 = (EC_GROUP *)0x0;
      if (a != (BIGNUM *)0x0) goto LAB_01acf614;
    }
    else {
      if (iVar1 == 0x197) {
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 8);
        local_50 = *plVar5;
        if (0x295 < local_50) {
          iVar1 = 0x8f;
          iVar4 = 0x2e2;
          goto LAB_01acf608;
        }
        a_00 = BN_new();
        if (a_00 == (BIGNUM *)0x0) {
          iVar1 = 0x41;
          iVar4 = 0x2e7;
          goto LAB_01acf608;
        }
        iVar1 = OBJ_obj2nid((ASN1_OBJECT *)plVar5[1]);
        if (iVar1 == 0x2a9) {
          iVar1 = 0x7e;
          iVar4 = 0x322;
          goto LAB_01acf8e0;
        }
        if (iVar1 != 0x2ab) {
          if (iVar1 == 0x2aa) {
            if ((ASN1_INTEGER *)plVar5[2] == (ASN1_INTEGER *)0x0) {
              iVar1 = 0x73;
              iVar4 = 0x2f2;
            }
            else {
              lVar3 = ASN1_INTEGER_get((ASN1_INTEGER *)plVar5[2]);
              if ((0 < lVar3) && (lVar3 < *plVar5)) {
                iVar1 = BN_set_bit(a_00,(int)*plVar5);
                if (iVar1 != 0) {
                  iVar1 = BN_set_bit(a_00,(int)lVar3);
                  goto joined_r0x01acf568;
                }
                goto LAB_01acf8e4;
              }
              iVar1 = 0x89;
              iVar4 = 0x2fa;
            }
          }
          else {
            iVar1 = 0x73;
            iVar4 = 0x326;
          }
          goto LAB_01acf8e0;
        }
        plVar9 = (long *)plVar5[2];
        if (plVar9 == (long *)0x0) {
          ERR_put_error(0x10,0x9d,0x73,"ec_asn1.c",0x30a);
          pEVar2 = (EC_GROUP *)0x0;
          goto LAB_01acf8e8;
        }
        if ((((*plVar5 <= plVar9[2]) || (plVar9[2] <= plVar9[1])) || (plVar9[1] <= *plVar9)) ||
           (*plVar9 < 1)) {
          iVar1 = 0x84;
          iVar4 = 0x312;
          goto LAB_01acf8e0;
        }
        iVar1 = BN_set_bit(a_00,(int)*plVar5);
        if (((iVar1 != 0) && (iVar1 = BN_set_bit(a_00,(int)*plVar9), iVar1 != 0)) &&
           (iVar1 = BN_set_bit(a_00,(int)plVar9[1]), iVar1 != 0)) {
          iVar1 = BN_set_bit(a_00,(int)plVar9[2]);
joined_r0x01acf568:
          if ((iVar1 != 0) && (iVar1 = BN_set_bit(a_00,0), iVar1 != 0)) {
            pEVar2 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a_00,a,b,0);
            if (pEVar2 != (EC_GROUP *)0x0) goto LAB_01acf758;
            goto LAB_01acf598;
          }
        }
LAB_01acf8e4:
        pEVar2 = (EC_GROUP *)0x0;
LAB_01acf8e8:
        p = (EC_POINT *)0x0;
LAB_01acf8ec:
        BN_free(a_00);
      }
      else {
        iVar1 = 0x67;
        iVar4 = 0x349;
LAB_01acf608:
        ERR_put_error(0x10,0x9d,iVar1,"ec_asn1.c",iVar4);
        p = (EC_POINT *)0x0;
        pEVar2 = (EC_GROUP *)0x0;
      }
LAB_01acf614:
      group = pEVar2;
      BN_free(a);
    }
    if (b != (BIGNUM *)0x0) {
      BN_free(b);
    }
    if (p != (EC_POINT *)0x0) {
      EC_POINT_free(p);
    }
    if (group != (EC_GROUP *)0x0) {
      EC_GROUP_set_asn1_flag(group,0);
      return group;
    }
  }
  iVar1 = 0x10;
  iVar4 = 0x3b9;
LAB_01acf444:
  ERR_put_error(0x10,0x9e,iVar1,"ec_asn1.c",iVar4);
  return (EC_GROUP *)0x0;
}




ASN1_VALUE * FUN_01acfae8(EC_GROUP *param_1,ASN1_VALUE *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  point_conversion_form_t form;
  BIGNUM *a;
  ASN1_OBJECT *val;
  EC_METHOD *pEVar8;
  ASN1_OBJECT *pAVar9;
  BIGNUM *pBVar10;
  ASN1_INTEGER *pAVar11;
  BIGNUM *b;
  ASN1_VALUE *pAVar12;
  ASN1_VALUE *pAVar13;
  EC_POINT *p;
  size_t len;
  uchar *puVar14;
  size_t sVar15;
  ASN1_STRING *pAVar16;
  void *data;
  int line;
  long lVar17;
  char **ppcVar18;
  uchar *to;
  long *plVar19;
  uchar *local_70;
  uchar local_64 [4];
  
  if (param_2 == (ASN1_VALUE *)0x0) {
    param_2 = ASN1_item_new((ASN1_ITEM *)ECPKPARAMETERS_it);
    if (param_2 == (ASN1_VALUE *)0x0) {
      ERR_put_error(0x10,0x9c,0x41,"ec_asn1.c",0x28d);
      return (ASN1_VALUE *)0x0;
    }
LAB_01acfcc0:
    iVar6 = EC_GROUP_get_asn1_flag(param_1);
    if (iVar6 == 0) goto LAB_01acfb3c;
LAB_01acfccc:
    iVar6 = EC_GROUP_get_curve_name(param_1);
    if (iVar6 == 0) goto LAB_01acfe8c;
    *(int *)param_2 = 0;
    val = OBJ_nid2obj(iVar6);
    *(ASN1_OBJECT **)(param_2 + 8) = val;
joined_r0x01acfce4:
    if (val != (ASN1_OBJECT *)0x0) {
      return param_2;
    }
    goto LAB_01acfe8c;
  }
  if (*(int *)param_2 == 1) {
    if (*(ASN1_VALUE **)(param_2 + 8) != (ASN1_VALUE *)0x0) {
      ASN1_item_free(*(ASN1_VALUE **)(param_2 + 8),(ASN1_ITEM *)ECPARAMETERS_it);
    }
    goto LAB_01acfcc0;
  }
  if ((*(int *)param_2 != 0) || (*(ASN1_OBJECT **)(param_2 + 8) == (ASN1_OBJECT *)0x0))
  goto LAB_01acfcc0;
  ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_2 + 8));
  iVar6 = EC_GROUP_get_asn1_flag(param_1);
  if (iVar6 != 0) goto LAB_01acfccc;
LAB_01acfb3c:
  *(int *)param_2 = 1;
  a = BN_new();
  if (a == (BIGNUM *)0x0) {
    ERR_put_error(0x10,0x9b,0x41,"ec_asn1.c",0x22a);
  }
  else {
    val = (ASN1_OBJECT *)ASN1_item_new((ASN1_ITEM *)ECPARAMETERS_it);
    if (val == (ASN1_OBJECT *)0x0) {
      ERR_put_error(0x10,0x9b,0x41,"ec_asn1.c",0x230);
      BN_free(a);
    }
    else {
      val->sn = (char *)0x1;
      if ((param_1 == (EC_GROUP *)0x0) || (ppcVar18 = val->ln, ppcVar18 == (char **)0x0)) {
LAB_01acfe34:
        iVar6 = 0x10;
        iVar7 = 0x23b;
LAB_01acfe4c:
        ERR_put_error(0x10,0x9b,iVar6,"ec_asn1.c",iVar7);
        puVar14 = (uchar *)0x0;
      }
      else {
        if ((ASN1_OBJECT *)*ppcVar18 != (ASN1_OBJECT *)0x0) {
          ASN1_OBJECT_free((ASN1_OBJECT *)*ppcVar18);
        }
        if ((ASN1_TYPE *)ppcVar18[1] != (ASN1_TYPE *)0x0) {
          ASN1_TYPE_free((ASN1_TYPE *)ppcVar18[1]);
        }
        pEVar8 = EC_GROUP_method_of(param_1);
        iVar6 = EC_METHOD_get_field_type(pEVar8);
        pAVar9 = OBJ_nid2obj(iVar6);
        *ppcVar18 = (char *)pAVar9;
        if (pAVar9 == (ASN1_OBJECT *)0x0) {
          iVar6 = 0x9a;
          iVar7 = 8;
          line = 0x148;
LAB_01acfe30:
          ERR_put_error(0x10,iVar6,iVar7,"ec_asn1.c",line);
          goto LAB_01acfe34;
        }
        if (iVar6 != 0x196) {
          pAVar12 = ASN1_item_new((ASN1_ITEM *)X9_62_CHARACTERISTIC_TWO_it);
          ppcVar18[1] = (char *)pAVar12;
          if (pAVar12 == (ASN1_VALUE *)0x0) {
            iVar6 = 0x9a;
            iVar7 = 0x41;
            line = 0x16b;
          }
          else {
            iVar6 = EC_GROUP_get_degree(param_1);
            *(long *)pAVar12 = (long)iVar6;
            pEVar8 = EC_GROUP_method_of(param_1);
            iVar6 = EC_METHOD_get_field_type(pEVar8);
            if (iVar6 == 0x197) {
              lVar17 = 0x20;
              do {
                lVar1 = lVar17 * 4;
                lVar17 = lVar17 + 1;
              } while (*(int *)(param_1 + lVar1) != 0);
              if ((int)lVar17 == 0x23) {
                iVar6 = 0x2aa;
                pAVar9 = OBJ_nid2obj(0x2aa);
                *(ASN1_OBJECT **)(pAVar12 + 8) = pAVar9;
              }
              else {
                if ((int)lVar17 != 0x25) goto LAB_01acfde0;
                iVar6 = 0x2ab;
                pAVar9 = OBJ_nid2obj(0x2ab);
                *(ASN1_OBJECT **)(pAVar12 + 8) = pAVar9;
              }
              if (pAVar9 == (ASN1_OBJECT *)0x0) {
                iVar6 = 0x9a;
                iVar7 = 8;
                line = 0x179;
              }
              else {
                pEVar8 = EC_GROUP_method_of(param_1);
                iVar7 = EC_METHOD_get_field_type(pEVar8);
                if (iVar6 == 0x2ab) {
                  if ((((iVar7 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) &&
                      ((uVar2 = *(uint *)(param_1 + 0x84), uVar2 != 0 &&
                       ((uVar3 = *(uint *)(param_1 + 0x88), uVar3 != 0 &&
                        (uVar4 = *(uint *)(param_1 + 0x8c), uVar4 != 0)))))) &&
                     (*(int *)(param_1 + 0x90) == 0)) {
                    pAVar13 = ASN1_item_new((ASN1_ITEM *)X9_62_PENTANOMIAL_it);
                    *(ASN1_VALUE **)(pAVar12 + 0x10) = pAVar13;
                    if (pAVar13 != (ASN1_VALUE *)0x0) {
                      *(ulong *)pAVar13 = (ulong)uVar4;
                      *(ulong *)(*(long *)(pAVar12 + 0x10) + 8) = (ulong)uVar3;
                      *(ulong *)(*(long *)(pAVar12 + 0x10) + 0x10) = (ulong)uVar2;
                      plVar19 = *(long **)&val->nid;
                      local_64[0] = '\0';
                      if (plVar19 != (long *)0x0) goto LAB_01acfc04;
                      goto LAB_01ad0450;
                    }
                    iVar6 = 0x9a;
                    iVar7 = 0x41;
                    line = 0x194;
                  }
                  else {
                    iVar6 = 0xc1;
                    iVar7 = 0x42;
                    line = 0x77;
                  }
                }
                else if ((((iVar7 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) &&
                         (uVar2 = *(uint *)(param_1 + 0x84), uVar2 != 0)) &&
                        (*(int *)(param_1 + 0x88) == 0)) {
                  pAVar11 = ASN1_INTEGER_new();
                  *(ASN1_INTEGER **)(pAVar12 + 0x10) = pAVar11;
                  if (pAVar11 == (ASN1_INTEGER *)0x0) {
                    iVar6 = 0x9a;
                    iVar7 = 0x41;
                    line = 0x185;
                  }
                  else {
                    iVar6 = ASN1_INTEGER_set(pAVar11,(ulong)uVar2);
                    if (iVar6 != 0) goto LAB_01acfbf8;
                    iVar6 = 0x9a;
                    iVar7 = 0xd;
                    line = 0x189;
                  }
                }
                else {
                  iVar6 = 0xc2;
                  iVar7 = 0x42;
                  line = 0x61;
                }
              }
            }
            else {
LAB_01acfde0:
              iVar6 = 0x9a;
              iVar7 = 0x10;
              line = 0x174;
            }
          }
          goto LAB_01acfe30;
        }
        pBVar10 = BN_new();
        if (pBVar10 == (BIGNUM *)0x0) {
          iVar6 = 0x9a;
          iVar7 = 0x41;
          line = 0x14e;
          goto LAB_01acfe30;
        }
        iVar6 = EC_GROUP_get_curve_GFp(param_1,pBVar10,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_CTX *)0x0);
        if (iVar6 == 0) {
          iVar6 = 0x10;
          iVar7 = 0x153;
LAB_01acfef8:
          ERR_put_error(0x10,0x9a,iVar6,"ec_asn1.c",iVar7);
          BN_free(pBVar10);
          goto LAB_01acfe34;
        }
        pAVar11 = BN_to_ASN1_INTEGER(pBVar10,(ASN1_INTEGER *)0x0);
        ppcVar18[1] = (char *)pAVar11;
        if (pAVar11 == (ASN1_INTEGER *)0x0) {
          iVar6 = 0xd;
          iVar7 = 0x159;
          goto LAB_01acfef8;
        }
        BN_free(pBVar10);
LAB_01acfbf8:
        plVar19 = *(long **)&val->nid;
        local_64[0] = '\0';
        if (plVar19 == (long *)0x0) {
LAB_01ad0450:
          iVar6 = 0x10;
          iVar7 = 0x241;
          goto LAB_01acfe4c;
        }
LAB_01acfc04:
        local_64[0] = '\0';
        if ((*plVar19 == 0) || (plVar19[1] == 0)) goto LAB_01ad0450;
        pBVar10 = BN_new();
        if (pBVar10 == (BIGNUM *)0x0) {
          ERR_put_error(0x10,0x99,0x41,"ec_asn1.c",0x1bc);
          goto LAB_01ad0450;
        }
        b = BN_new();
        if (b == (BIGNUM *)0x0) {
          ERR_put_error(0x10,0x99,0x41,"ec_asn1.c",0x1bc);
          BN_free(pBVar10);
          goto LAB_01ad0450;
        }
        pEVar8 = EC_GROUP_method_of(param_1);
        iVar6 = EC_METHOD_get_field_type(pEVar8);
        if (iVar6 == 0x196) {
          iVar6 = EC_GROUP_get_curve_GFp(param_1,(BIGNUM *)0x0,pBVar10,b,(BN_CTX *)0x0);
          if (iVar6 == 0) {
            iVar6 = 0x10;
            iVar7 = 0x1c5;
            goto LAB_01ad0228;
          }
LAB_01ad001c:
          iVar6 = BN_num_bits(pBVar10);
          iVar7 = BN_num_bits(b);
          uVar2 = iVar7 + 0xeU;
          if (-1 < (int)(iVar7 + 7U)) {
            uVar2 = iVar7 + 7U;
          }
          if (iVar6 + 0xeU < 0xf) {
            local_70 = (uchar *)0x0;
            iVar6 = 1;
            puVar14 = local_64;
joined_r0x01ad00c4:
            if (iVar7 + 0xeU < 0xf) {
              to = (uchar *)0x0;
              iVar7 = 1;
              iVar6 = ASN1_STRING_set((ASN1_STRING *)*plVar19,puVar14,iVar6);
              puVar14 = local_64;
joined_r0x01ad0074:
              if ((iVar6 == 0) ||
                 (iVar6 = ASN1_STRING_set((ASN1_STRING *)plVar19[1],puVar14,iVar7), iVar6 == 0)) {
                ERR_put_error(0x10,0x99,0xd,"ec_asn1.c",0x1f8);
joined_r0x01ad058c:
                bVar5 = false;
              }
              else {
                data = *(void **)(param_1 + 0x50);
                pAVar16 = (ASN1_STRING *)plVar19[2];
                if (data == (void *)0x0) {
                  if (pAVar16 != (ASN1_BIT_STRING *)0x0) {
                    ASN1_BIT_STRING_free(pAVar16);
                    plVar19[2] = 0;
                  }
                }
                else {
                  if (pAVar16 == (ASN1_BIT_STRING *)0x0) {
                    pAVar16 = ASN1_BIT_STRING_new();
                    plVar19[2] = (long)pAVar16;
                    if (pAVar16 == (ASN1_BIT_STRING *)0x0) {
                      ERR_put_error(0x10,0x99,0x41,"ec_asn1.c",0x200);
                      goto joined_r0x01ad058c;
                    }
                    data = *(void **)(param_1 + 0x50);
                  }
                  pAVar16->flags = pAVar16->flags & 0xfffffffffffffff0U | 8;
                  iVar6 = ASN1_BIT_STRING_set(pAVar16,data,*(int *)(param_1 + 0x58));
                  if (iVar6 == 0) {
                    ERR_put_error(0x10,0x99,0xd,"ec_asn1.c",0x207);
                    bVar5 = false;
                    goto joined_r0x01ad018c;
                  }
                }
                bVar5 = true;
              }
            }
            else {
              to = CRYPTO_malloc((int)uVar2 >> 3,"ec_asn1.c",0x1ea);
              if (to == (uchar *)0x0) {
                ERR_put_error(0x10,0x99,0x41,"ec_asn1.c",0x1eb);
              }
              else {
                iVar7 = BN_bn2bin(b,to);
                if (iVar7 != 0) {
                  iVar6 = ASN1_STRING_set((ASN1_STRING *)*plVar19,puVar14,iVar6);
                  puVar14 = to;
                  goto joined_r0x01ad0074;
                }
                ERR_put_error(0x10,0x99,3,"ec_asn1.c",0x1ef);
              }
              bVar5 = false;
            }
joined_r0x01ad018c:
            if (local_70 != (uchar *)0x0) goto LAB_01ad0324;
          }
          else {
            uVar3 = iVar6 + 0xeU;
            if (-1 < (int)(iVar6 + 7U)) {
              uVar3 = iVar6 + 7U;
            }
            local_70 = CRYPTO_malloc((int)uVar3 >> 3,"ec_asn1.c",0x1da);
            if (local_70 == (uchar *)0x0) {
              iVar6 = 0x41;
              iVar7 = 0x1db;
              goto LAB_01ad0228;
            }
            iVar6 = BN_bn2bin(pBVar10,local_70);
            puVar14 = local_70;
            if (iVar6 != 0) goto joined_r0x01ad00c4;
            ERR_put_error(0x10,0x99,3,"ec_asn1.c",0x1df);
            to = (uchar *)0x0;
            bVar5 = false;
LAB_01ad0324:
            CRYPTO_free(local_70);
          }
          if (to != (uchar *)0x0) {
            CRYPTO_free(to);
          }
        }
        else {
          iVar6 = EC_GROUP_get_curve_GF2m(param_1,0,pBVar10,b,0);
          if (iVar6 != 0) goto LAB_01ad001c;
          iVar6 = 0x10;
          iVar7 = 0x1cd;
LAB_01ad0228:
          ERR_put_error(0x10,0x99,iVar6,"ec_asn1.c",iVar7);
          bVar5 = false;
        }
        BN_free(pBVar10);
        BN_free(b);
        if (!bVar5) goto LAB_01ad0450;
        p = EC_GROUP_get0_generator(param_1);
        if (p == (EC_POINT *)0x0) {
          iVar6 = 0x71;
          iVar7 = 0x247;
          goto LAB_01acfe4c;
        }
        form = EC_GROUP_get_point_conversion_form(param_1);
        len = EC_POINT_point2oct(param_1,p,form,(uchar *)0x0,0,(BN_CTX *)0x0);
        if (len == 0) {
          iVar6 = 0x10;
          iVar7 = 0x24f;
          goto LAB_01acfe4c;
        }
        puVar14 = CRYPTO_malloc((int)len,"ec_asn1.c",0x252);
        if (puVar14 == (uchar *)0x0) {
          iVar6 = 0x41;
          iVar7 = 0x253;
        }
        else {
          sVar15 = EC_POINT_point2oct(param_1,p,form,puVar14,len,(BN_CTX *)0x0);
          if (sVar15 == 0) {
            iVar6 = 0x10;
            iVar7 = 599;
          }
          else {
            pAVar16 = (ASN1_STRING *)val->data;
            if (pAVar16 == (ASN1_STRING *)0x0) {
              pAVar16 = ASN1_OCTET_STRING_new();
              val->data = (uchar *)pAVar16;
              if (pAVar16 == (ASN1_OCTET_STRING *)0x0) {
                iVar6 = 0x41;
                iVar7 = 0x25b;
                goto LAB_01ad05ac;
              }
            }
            iVar6 = ASN1_OCTET_STRING_set(pAVar16,puVar14,(int)len);
            if (iVar6 == 0) {
              iVar6 = 0xd;
              iVar7 = 0x25f;
            }
            else {
              iVar6 = EC_GROUP_get_order(param_1,a,(BN_CTX *)0x0);
              if (iVar6 == 0) {
                iVar6 = 0x10;
                iVar7 = 0x265;
              }
              else {
                pAVar11 = BN_to_ASN1_INTEGER(a,*(ASN1_INTEGER **)&val->flags);
                *(ASN1_INTEGER **)&val->flags = pAVar11;
                if (pAVar11 != (ASN1_INTEGER *)0x0) {
                  iVar6 = EC_GROUP_get_cofactor(param_1,a,(BN_CTX *)0x0);
                  if (iVar6 != 0) {
                    pAVar11 = BN_to_ASN1_INTEGER(a,(ASN1_INTEGER *)val[1].sn);
                    val[1].sn = (char *)pAVar11;
                    if (pAVar11 == (ASN1_INTEGER *)0x0) {
                      iVar6 = 0xd;
                      iVar7 = 0x272;
                      goto LAB_01ad05ac;
                    }
                  }
                  BN_free(a);
                  CRYPTO_free(puVar14);
                  *(ASN1_OBJECT **)(param_2 + 8) = val;
                  goto joined_r0x01acfce4;
                }
                iVar6 = 0xd;
                iVar7 = 0x26a;
              }
            }
          }
        }
LAB_01ad05ac:
        ERR_put_error(0x10,0x9b,iVar6,"ec_asn1.c",iVar7);
      }
      ASN1_item_free((ASN1_VALUE *)val,(ASN1_ITEM *)ECPARAMETERS_it);
      BN_free(a);
      if (puVar14 != (uchar *)0x0) {
        CRYPTO_free(puVar14);
        *(undefined8 *)(param_2 + 8) = 0;
        goto LAB_01acfe8c;
      }
    }
  }
  *(undefined8 *)(param_2 + 8) = 0;
LAB_01acfe8c:
  ASN1_item_free(param_2,(ASN1_ITEM *)ECPKPARAMETERS_it);
  return (ASN1_VALUE *)0x0;
}

