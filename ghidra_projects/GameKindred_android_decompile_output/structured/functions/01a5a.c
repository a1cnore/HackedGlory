// functions/01a5a — 3 functions
#include "libGameKindred.h"




void FUN_01a5a57c(void *param_1)

{
  int iVar1;
  long *ptr;
  EC_POINT *point;
  
  if ((param_1 != (void *)0x0) &&
     (iVar1 = CRYPTO_add_lock((int *)((long)param_1 + 0x30),-1,0x24,"ec_mult.c",0x89), iVar1 < 1)) {
    ptr = *(long **)((long)param_1 + 0x20);
    if (ptr != (long *)0x0) {
      point = (EC_POINT *)*ptr;
      if (point != (EC_POINT *)0x0) {
        do {
          ptr = ptr + 1;
          EC_POINT_free(point);
          point = (EC_POINT *)*ptr;
        } while (point != (EC_POINT *)0x0);
        ptr = *(long **)((long)param_1 + 0x20);
      }
      CRYPTO_free(ptr);
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}




void FUN_01a5a5fc(void *param_1)

{
  int iVar1;
  EC_POINT *point;
  long *ptr;
  
  if ((param_1 != (void *)0x0) &&
     (iVar1 = CRYPTO_add_lock((int *)((long)param_1 + 0x30),-1,0x24,"ec_mult.c",0x9f), iVar1 < 1)) {
    ptr = *(long **)((long)param_1 + 0x20);
    if (ptr != (long *)0x0) {
      point = (EC_POINT *)*ptr;
      if (point != (EC_POINT *)0x0) {
        do {
          EC_POINT_clear_free(point);
          OPENSSL_cleanse(ptr,8);
          ptr = ptr + 1;
          point = (EC_POINT *)*ptr;
        } while (point != (EC_POINT *)0x0);
        ptr = *(long **)((long)param_1 + 0x20);
      }
      CRYPTO_free(ptr);
    }
    OPENSSL_cleanse(param_1,0x38);
    CRYPTO_free(param_1);
    return;
  }
  return;
}




undefined1 * FUN_01a5a690(BIGNUM *param_1,uint param_2,ulong *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int line;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint uVar10;
  
  if (param_1->top == 0) {
    puVar8 = CRYPTO_malloc(1,"ec_mult.c",0xc3);
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = 0;
      *param_3 = 1;
      return puVar8;
    }
    iVar4 = 0x41;
    line = 0xc5;
    puVar8 = (undefined1 *)0x0;
LAB_01a5a928:
    ERR_put_error(0x10,0x8f,iVar4,"ec_mult.c",line);
  }
  else {
    if (param_2 - 1 < 7) {
      cVar1 = -1;
      if (param_1->neg == 0) {
        cVar1 = '\x01';
      }
      if (param_1->d != (ulong *)0x0) {
        iVar4 = BN_num_bits(param_1);
        puVar8 = CRYPTO_malloc(iVar4 + 1,"ec_mult.c",0xe0);
        if (puVar8 == (undefined1 *)0x0) {
          iVar4 = 0x41;
          line = 0xe5;
        }
        else {
          uVar2 = 1 << (ulong)(param_2 & 0x1f);
          uVar3 = uVar2 * 2;
          uVar9 = (ulong)iVar4;
          uVar10 = uVar3 - 1 & (uint)*param_1->d;
          uVar5 = 0;
          do {
            if (uVar10 == 0) {
              uVar6 = 0;
              if (uVar9 <= (long)(int)param_2 + 1 + uVar5) {
                if (uVar5 <= uVar9 + 1) {
                  *param_3 = uVar5;
                  return puVar8;
                }
                iVar4 = 0x44;
                line = 0x125;
                goto LAB_01a5a928;
              }
            }
            else if ((uVar10 & 1) == 0) {
              uVar6 = 0;
            }
            else {
              if ((uVar10 & uVar2) == 0) {
                uVar7 = 1;
                uVar6 = uVar10;
              }
              else {
                uVar6 = uVar10 + uVar2 * -2;
                if (uVar9 <= (long)(int)param_2 + 1 + uVar5) {
                  uVar6 = uVar10 & (int)(uVar3 - 1) >> 1;
                }
                uVar7 = uVar6 & 1;
              }
              if ((((int)uVar2 <= (int)uVar6) || ((int)uVar6 <= (int)-uVar2)) || (uVar7 == 0)) {
                iVar4 = 0x44;
                line = 0x108;
                goto LAB_01a5a928;
              }
              uVar10 = uVar10 - uVar6;
              if (((uVar10 != uVar2) && (uVar10 != 0)) && (uVar10 != uVar3)) {
                iVar4 = 0x44;
                line = 0x114;
                goto LAB_01a5a928;
              }
            }
            puVar8[uVar5] = (char)uVar6 * cVar1;
            iVar4 = BN_is_bit_set(param_1,param_2 + (int)uVar5 + 1);
            uVar10 = (iVar4 << (ulong)(param_2 & 0x1f)) + ((int)uVar10 >> 1);
            uVar5 = uVar5 + 1;
          } while ((int)uVar10 <= (int)uVar3);
          iVar4 = 0x44;
          line = 0x11f;
        }
        goto LAB_01a5a928;
      }
      iVar4 = 0xdb;
    }
    else {
      iVar4 = 0xcf;
    }
    ERR_put_error(0x10,0x8f,0x44,"ec_mult.c",iVar4);
    puVar8 = (undefined1 *)0x0;
  }
  CRYPTO_free(puVar8);
  return (undefined1 *)0x0;
}

