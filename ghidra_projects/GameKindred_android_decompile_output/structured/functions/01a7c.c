// functions/01a7c — 8 functions
#include "libGameKindred.h"




undefined8
FUN_01a7c4fc(long *param_1,uchar *param_2,int param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)*param_1;
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = BN_new();
    *param_1 = (long)pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  pBVar1 = BN_bin2bn(param_2,param_3,pBVar1);
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)*param_1;
    if (pBVar1 != (BIGNUM *)0x0) {
      if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
        BN_free(pBVar1);
      }
      else {
        BN_clear_free(pBVar1);
      }
      *param_1 = 0;
    }
    return 0;
  }
  return 1;
}




undefined8
FUN_01a7c634(ulong *param_1,byte *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < (int)param_3) {
    ERR_put_error(0xd,0xa6,0x80,"x_long.c",0xa3);
    return 0;
  }
  if ((param_3 == 0) || (-1 < (char)*param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if ((int)param_3 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = (ulong)param_3;
    do {
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)(*param_2 ^ uVar1) & 0xff | uVar3 << 8;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  if ((uVar3 ^ (long)(int)uVar1) == *(ulong *)(param_6 + 0x28)) {
    ERR_put_error(0xd,0xa6,0x80,"x_long.c",0xb9);
    return 0;
  }
  *param_1 = uVar3 ^ (long)(int)uVar1;
  return 1;
}




undefined8 FUN_01a7c7f4(undefined8 *param_1)

{
  undefined8 *ptr;
  _STACK *p_Var1;
  BUF_MEM *pBVar2;
  
  ptr = CRYPTO_malloc(0x28,"x_name.c",0x8f);
  if (ptr == (undefined8 *)0x0) {
    ERR_put_error(0xd,0xab,0x41,"x_name.c",0x9d);
    return 0;
  }
  p_Var1 = sk_new_null();
  *ptr = p_Var1;
  if (p_Var1 != (_STACK *)0x0) {
    pBVar2 = BUF_MEM_new();
    ptr[2] = pBVar2;
    if (pBVar2 != (BUF_MEM *)0x0) {
      ptr[3] = 0;
      *(undefined4 *)(ptr + 4) = 0;
      *(undefined4 *)(ptr + 1) = 1;
      *param_1 = ptr;
      return 1;
    }
  }
  ERR_put_error(0xd,0xab,0x41,"x_name.c",0x9d);
  if ((_STACK *)*ptr != (_STACK *)0x0) {
    sk_free((_STACK *)*ptr);
  }
  CRYPTO_free(ptr);
  return 0;
}




void FUN_01a7c8c4(undefined8 *param_1)

{
  undefined8 *ptr;
  
  if ((param_1 != (undefined8 *)0x0) && (ptr = (undefined8 *)*param_1, ptr != (undefined8 *)0x0)) {
    BUF_MEM_free((BUF_MEM *)ptr[2]);
    sk_pop_free((_STACK *)*ptr,X509_NAME_ENTRY_free);
    if ((void *)ptr[3] != (void *)0x0) {
      CRYPTO_free((void *)ptr[3]);
    }
    CRYPTO_free(ptr);
    *param_1 = 0;
  }
  return;
}




ulong FUN_01a7c91c(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  int param_5,int param_6,char param_7,ASN1_TLC *param_8)

{
  ASN1_VALUE *val;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _STACK *p_Var5;
  void *data;
  ulong uVar6;
  undefined8 *ptr;
  uchar *__src;
  ASN1_VALUE *local_58;
  _STACK *local_50;
  uchar *local_48;
  
  __src = (uchar *)*param_2;
  local_58 = (ASN1_VALUE *)0x0;
  local_50 = (_STACK *)0x0;
  local_48 = __src;
  if (param_3 < 0x100001) {
    uVar1 = ASN1_item_ex_d2i((ASN1_VALUE **)&local_50,&local_48,param_3,
                             (ASN1_ITEM *)X509_NAME_INTERNAL_it,param_5,param_6,param_7,param_8);
    if ((int)uVar1 < 1) {
      return (ulong)uVar1;
    }
    ptr = (undefined8 *)*param_1;
    if (ptr != (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)ptr[2]);
      sk_pop_free((_STACK *)*ptr,X509_NAME_ENTRY_free);
      if ((void *)ptr[3] != (void *)0x0) {
        CRYPTO_free((void *)ptr[3]);
      }
      CRYPTO_free(ptr);
      *param_1 = 0;
    }
    iVar2 = FUN_01a7c7f4(&local_58,0);
    val = local_58;
    if ((iVar2 != 0) &&
       (iVar2 = BUF_MEM_grow(*(BUF_MEM **)(local_58 + 0x10),(long)local_48 - (long)__src),
       iVar2 != 0)) {
      memcpy(*(void **)(*(long *)(val + 0x10) + 8),__src,(long)local_48 - (long)__src);
      iVar2 = sk_num(local_50);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          p_Var5 = sk_value(local_50,iVar2);
          iVar3 = sk_num(p_Var5);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              data = sk_value(p_Var5,iVar3);
              *(int *)((long)data + 0x10) = iVar2;
              iVar4 = sk_push(*(_STACK **)val,data);
              if (iVar4 == 0) goto LAB_01a7cab8;
              iVar3 = iVar3 + 1;
              iVar4 = sk_num(p_Var5);
            } while (iVar3 < iVar4);
          }
          sk_free(p_Var5);
          iVar2 = iVar2 + 1;
          iVar3 = sk_num(local_50);
        } while (iVar2 < iVar3);
      }
      sk_free(local_50);
      uVar6 = FUN_01a7cdb8(val);
      if ((int)uVar6 != 0) {
        *(undefined4 *)(val + 8) = 0;
        *param_1 = val;
        *param_2 = local_48;
        return uVar6;
      }
    }
    if (val != (ASN1_VALUE *)0x0) {
LAB_01a7cab8:
      ASN1_item_free(val,(ASN1_ITEM *)X509_NAME_it);
    }
    iVar2 = 0x3a;
    iVar3 = 0xf7;
  }
  else {
    iVar2 = 0x9b;
    iVar3 = 0xcb;
  }
  ERR_put_error(0xd,0x9e,iVar2,"x_name.c",iVar3);
  return 0;
}




ulong FUN_01a7cb00(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  _STACK *st;
  void *data;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  _STACK *st_00;
  uchar *local_58;
  _STACK *local_48;
  
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = (ulong *)param_1[2];
    uVar7 = *puVar6;
joined_r0x01a7cc5c:
    if (param_2 != (long *)0x0) {
      memcpy((void *)*param_2,(void *)puVar6[1],(long)(int)uVar7);
      *param_2 = *param_2 + (long)(int)uVar7;
    }
  }
  else {
    st = sk_new_null();
    local_48 = st;
    if (st != (_STACK *)0x0) {
      iVar1 = sk_num((_STACK *)*param_1);
      if (0 < iVar1) {
        iVar1 = 0;
        st_00 = (_STACK *)0x0;
        iVar2 = -1;
        do {
          data = sk_value((_STACK *)*param_1,iVar1);
          if (*(int *)((long)data + 0x10) != iVar2) {
            st_00 = sk_new_null();
            if ((st_00 == (_STACK *)0x0) || (iVar2 = sk_push(st,st_00), iVar2 == 0))
            goto LAB_01a7cc88;
            iVar2 = *(int *)((long)data + 0x10);
          }
          iVar3 = sk_push(st_00,data);
          if (iVar3 == 0) goto LAB_01a7cc88;
          iVar1 = iVar1 + 1;
          iVar3 = sk_num((_STACK *)*param_1);
        } while (iVar1 < iVar3);
      }
      uVar4 = ASN1_item_ex_i2d((ASN1_VALUE **)&local_48,(uchar **)0x0,
                               (ASN1_ITEM *)X509_NAME_INTERNAL_it,-1,-1);
      uVar7 = (ulong)uVar4;
      iVar1 = BUF_MEM_grow((BUF_MEM *)param_1[2],(long)(int)uVar4);
      st = local_48;
      if (iVar1 != 0) {
        local_58 = *(uchar **)(param_1[2] + 8);
        ASN1_item_ex_i2d((ASN1_VALUE **)&local_48,&local_58,(ASN1_ITEM *)X509_NAME_INTERNAL_it,-1,-1
                        );
        sk_pop_free(local_48,(func *)&LAB_01a7d194);
        *(undefined4 *)(param_1 + 1) = 0;
        if ((int)uVar4 < 0) goto LAB_01a7ccb8;
        uVar5 = FUN_01a7cdb8(param_1);
        uVar7 = uVar5 & 0xffffffff;
        if ((int)uVar5 < 0) goto LAB_01a7ccb8;
        puVar6 = (ulong *)param_1[2];
        uVar7 = *puVar6;
        goto joined_r0x01a7cc5c;
      }
    }
LAB_01a7cc88:
    sk_pop_free(st,(func *)&LAB_01a7d194);
    ERR_put_error(0xd,0xcb,0x41,"x_name.c",0x145);
    uVar7 = 0xffffffff;
  }
LAB_01a7ccb8:
  return uVar7 & 0xffffffff;
}




undefined4
FUN_01a7ccd8(BIO *param_1,undefined8 *param_2,int param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = X509_NAME_print_ex(param_1,(X509_NAME *)*param_2,param_3,*(ulong *)(param_5 + 8));
  uVar2 = 0;
  if (0 < iVar1) {
    uVar2 = 2;
  }
  return uVar2;
}




undefined4 FUN_01a7cdb8(undefined8 *param_1)

{
  bool bVar1;
  uchar **out;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _STACK *st;
  undefined8 *puVar7;
  ASN1_VALUE *val;
  ASN1_OBJECT *pAVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  _STACK *st_00;
  ASN1_STRING *dst;
  ASN1_STRING *str;
  uchar *local_70;
  ASN1_VALUE *local_68;
  
  if ((void *)param_1[3] != (void *)0x0) {
    CRYPTO_free((void *)param_1[3]);
    param_1[3] = 0;
  }
  iVar3 = sk_num((_STACK *)*param_1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar12 = 1;
  }
  else {
    st = sk_new_null();
    if (st == (_STACK *)0x0) {
      uVar12 = 0;
    }
    else {
      iVar3 = sk_num((_STACK *)*param_1);
      if (0 < iVar3) {
        iVar3 = 0;
        st_00 = (_STACK *)0x0;
        iVar4 = -1;
        do {
          puVar7 = sk_value((_STACK *)*param_1,iVar3);
          if (*(int *)(puVar7 + 2) != iVar4) {
            st_00 = sk_new_null();
            if ((st_00 == (_STACK *)0x0) || (iVar4 = sk_push(st,st_00), iVar4 == 0))
            goto LAB_01a7d150;
            iVar4 = *(int *)(puVar7 + 2);
          }
          val = ASN1_item_new((ASN1_ITEM *)X509_NAME_ENTRY_it);
          if (val == (ASN1_VALUE *)0x0) goto LAB_01a7d150;
          pAVar8 = OBJ_dup((ASN1_OBJECT *)*puVar7);
          *(ASN1_OBJECT **)val = pAVar8;
          str = (ASN1_STRING *)puVar7[1];
          dst = *(ASN1_STRING **)(val + 8);
          uVar9 = ASN1_tag2bit(str->type);
          if ((uVar9 & 0x2956) == 0) {
            iVar5 = ASN1_STRING_copy(dst,str);
            if (iVar5 != 0) goto LAB_01a7d004;
LAB_01a7d0a8:
            ASN1_item_free(val,(ASN1_ITEM *)X509_NAME_ENTRY_it);
            goto LAB_01a7d150;
          }
          out = &dst->data;
          dst->type = 0xc;
          iVar5 = ASN1_STRING_to_UTF8(out,str);
          dst->length = iVar5;
          if (iVar5 == -1) goto LAB_01a7d0a8;
          pbVar13 = *out;
          pbVar10 = pbVar13;
          if (iVar5 < 1) {
            iVar5 = (int)pbVar13;
          }
          else {
            do {
              iVar11 = iVar5;
              if (((char)*pbVar10 < '\0') || (iVar6 = isspace((uint)*pbVar10), iVar6 == 0)) break;
              iVar11 = iVar5 + -1;
              pbVar10 = pbVar10 + 1;
              bVar1 = 0 < iVar5;
              iVar5 = iVar11;
            } while (iVar11 != 0 && bVar1);
            pbVar14 = pbVar13;
            if (0 < iVar11) {
              pbVar15 = pbVar10 + iVar11;
              do {
                pbVar15 = pbVar15 + -1;
                iVar5 = iVar11;
                if (((char)*pbVar15 < '\0') || (iVar6 = isspace((uint)*pbVar15), iVar6 == 0)) break;
                iVar5 = iVar11 + -1;
                bVar1 = 0 < iVar11;
                iVar11 = iVar5;
              } while (iVar5 != 0 && bVar1);
              if (0 < iVar5) {
                iVar11 = 0;
LAB_01a7cf30:
                do {
                  pbVar14 = pbVar13;
                  bVar2 = *pbVar10;
                  if ((char)bVar2 < '\0') {
                    pbVar10 = pbVar10 + 1;
                    *pbVar14 = bVar2;
                    iVar11 = iVar11 + 1;
                  }
                  else {
                    iVar6 = isspace((uint)bVar2);
                    if (iVar6 == 0) {
                      iVar6 = tolower((uint)bVar2);
                      pbVar10 = pbVar10 + 1;
                      *pbVar14 = (byte)iVar6;
                      iVar11 = iVar11 + 1;
                      pbVar13 = pbVar14 + 1;
                      if (iVar5 <= iVar11) break;
                      goto LAB_01a7cf30;
                    }
                    *pbVar14 = 0x20;
                    do {
                      iVar11 = iVar11 + 1;
                      pbVar10 = pbVar10 + 1;
                      if ((char)*pbVar10 < '\0') break;
                      iVar6 = isspace((uint)*pbVar10);
                    } while (iVar6 != 0);
                  }
                  pbVar13 = pbVar14 + 1;
                } while (iVar11 < iVar5);
                pbVar13 = *out;
                pbVar14 = pbVar14 + 1;
              }
            }
            iVar5 = (int)pbVar13;
            pbVar13 = pbVar14;
          }
          dst->length = (int)pbVar13 - iVar5;
LAB_01a7d004:
          iVar5 = sk_push(st_00,val);
          if (iVar5 == 0) goto LAB_01a7d0a8;
          iVar3 = iVar3 + 1;
          iVar5 = sk_num((_STACK *)*param_1);
        } while (iVar3 < iVar5);
      }
      iVar3 = sk_num(st);
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      else {
        iVar4 = 0;
        iVar5 = 0;
        do {
          local_68 = sk_value(st,iVar4);
          iVar3 = ASN1_item_ex_i2d(&local_68,(uchar **)0x0,(ASN1_ITEM *)X509_NAME_ENTRIES_it,-1,-1);
          if (iVar3 < 0) break;
          iVar5 = iVar3 + iVar5;
          iVar4 = iVar4 + 1;
          iVar11 = sk_num(st);
          iVar3 = iVar5;
        } while (iVar4 < iVar11);
      }
      *(int *)(param_1 + 4) = iVar3;
      local_70 = CRYPTO_malloc(iVar3,"x_name.c",0x18a);
      if (local_70 == (uchar *)0x0) {
LAB_01a7d150:
        uVar12 = 0;
      }
      else {
        param_1[3] = local_70;
        iVar3 = sk_num(st);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            local_68 = sk_value(st,iVar3);
            iVar4 = ASN1_item_ex_i2d(&local_68,&local_70,(ASN1_ITEM *)X509_NAME_ENTRIES_it,-1,-1);
            if (iVar4 < 0) break;
            iVar3 = iVar3 + 1;
            iVar4 = sk_num(st);
          } while (iVar3 < iVar4);
        }
        uVar12 = 1;
      }
      sk_pop_free(st,(func *)&LAB_01a7d188);
    }
  }
  return uVar12;
}

