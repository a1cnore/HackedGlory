// functions/01a67 — 10 functions
#include "libGameKindred.h"




ulong FUN_01a671ec(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)__errno();
  *piVar2 = 0;
  uVar3 = write(param_1->num,param_2,(long)param_3);
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar3 < 1) && ((int)uVar3 + 1U < 2)) {
    iVar1 = *piVar2;
    if (((iVar1 - 0x47U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0))
       || ((iVar1 == 0xb || (iVar1 == 4)))) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar3 & 0xffffffff;
}




ulong FUN_01a672a0(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != (void *)0x0) {
    piVar2 = (int *)__errno();
    *piVar2 = 0;
    uVar3 = read(param_1->num,param_2,(long)param_3);
    BIO_clear_flags(param_1,0xf);
    if (((int)uVar3 < 1) && ((int)uVar3 + 1U < 2)) {
      iVar1 = *piVar2;
      if (((iVar1 - 0x47U < 0x2d) &&
          ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0)) ||
         ((iVar1 == 0xb || (iVar1 == 4)))) {
        BIO_set_flags(param_1,9);
      }
    }
  }
  return uVar3 & 0xffffffff;
}




ulong FUN_01a67358(BIO *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_2);
  piVar3 = (int *)__errno();
  *piVar3 = 0;
  uVar4 = write(param_1->num,param_2,(long)(int)sVar2);
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar4 < 1) && ((int)uVar4 + 1U < 2)) {
    iVar1 = *piVar3;
    if (((iVar1 - 0x47U < 0x2d) && ((1L << ((ulong)(iVar1 - 0x47U) & 0x3f) & 0x181000000001U) != 0))
       || ((iVar1 == 0xb || (iVar1 == 4)))) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar4 & 0xffffffff;
}




int FUN_01a675d4(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  iVar4 = 0;
  if ((param_2 != (void *)0x0) && (0 < param_3)) {
    pvVar5 = param_1->ptr;
    if ((pvVar5 == (void *)0x0) || (param_1->next_bio == (bio_st *)0x0)) {
      iVar4 = 0;
    }
    else {
      BIO_clear_flags(param_1,0xf);
      iVar1 = *(int *)((long)pvVar5 + 0x20);
      iVar2 = *(int *)((long)pvVar5 + 0x24);
      iVar3 = iVar2 + iVar1;
      iVar6 = *(int *)((long)pvVar5 + 4) - iVar3;
      if (iVar6 < param_3) {
        iVar4 = 0;
        do {
          if (iVar1 != 0) {
            if (0 < iVar6) {
              memcpy((void *)(*(long *)((long)pvVar5 + 0x18) + (long)iVar3),param_2,(long)iVar6);
              iVar2 = *(int *)((long)pvVar5 + 0x24);
              param_2 = (void *)((long)param_2 + (long)iVar6);
              param_3 = param_3 - iVar6;
              iVar4 = iVar6 + iVar4;
              iVar1 = *(int *)((long)pvVar5 + 0x20) + iVar6;
              *(int *)((long)pvVar5 + 0x20) = iVar1;
            }
            do {
              iVar1 = BIO_write(param_1->next_bio,
                                (void *)(*(long *)((long)pvVar5 + 0x18) + (long)iVar2),iVar1);
              if (iVar1 < 1) goto LAB_01a67738;
              iVar2 = *(int *)((long)pvVar5 + 0x24) + iVar1;
              iVar1 = *(int *)((long)pvVar5 + 0x20) - iVar1;
              *(int *)((long)pvVar5 + 0x20) = iVar1;
              *(int *)((long)pvVar5 + 0x24) = iVar2;
            } while (iVar1 != 0);
          }
          *(undefined4 *)((long)pvVar5 + 0x24) = 0;
          while (*(int *)((long)pvVar5 + 4) <= param_3) {
            iVar1 = BIO_write(param_1->next_bio,param_2,param_3);
            if (iVar1 < 1) {
LAB_01a67738:
              BIO_copy_next_retry(param_1);
              if (-1 < iVar1) {
                return iVar4;
              }
              if (0 < iVar4) {
                return iVar4;
              }
              return iVar1;
            }
            iVar4 = iVar1 + iVar4;
            param_3 = param_3 - iVar1;
            param_2 = (void *)((long)param_2 + (long)iVar1);
            if (param_3 == 0) {
              return iVar4;
            }
          }
          iVar1 = *(int *)((long)pvVar5 + 0x20);
          iVar2 = *(int *)((long)pvVar5 + 0x24);
          iVar3 = iVar2 + iVar1;
          iVar6 = *(int *)((long)pvVar5 + 4) - iVar3;
        } while (iVar6 < param_3);
      }
      else {
        iVar4 = 0;
      }
      memcpy((void *)(*(long *)((long)pvVar5 + 0x18) + (long)iVar3),param_2,(long)param_3);
      iVar4 = iVar4 + param_3;
      *(int *)((long)pvVar5 + 0x20) = *(int *)((long)pvVar5 + 0x20) + param_3;
    }
  }
  return iVar4;
}




int FUN_01a67768(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  BIO *b;
  int iVar3;
  int *piVar4;
  
  if (((param_2 == (void *)0x0) || (piVar4 = param_1->ptr, piVar4 == (int *)0x0)) ||
     (param_1->next_bio == (bio_st *)0x0)) {
    iVar3 = 0;
  }
  else {
    BIO_clear_flags(param_1,0xf);
    iVar2 = piVar4[4];
    iVar3 = 0;
    if (iVar2 == 0) goto LAB_01a6781c;
    while( true ) {
      iVar1 = param_3;
      if (iVar2 <= param_3) {
        iVar1 = iVar2;
      }
      memcpy(param_2,(void *)(*(long *)(piVar4 + 2) + (long)piVar4[5]),(long)iVar1);
      iVar3 = iVar1 + iVar3;
      piVar4[4] = piVar4[4] - iVar1;
      piVar4[5] = piVar4[5] + iVar1;
      if (param_3 <= iVar2) break;
      param_3 = param_3 - iVar1;
      param_2 = (void *)((long)param_2 + (long)iVar1);
      iVar2 = *piVar4;
      b = param_1->next_bio;
      if (iVar2 < param_3) {
LAB_01a6784c:
        while (iVar2 = BIO_read(b,param_2,param_3), 0 < iVar2) {
          param_3 = param_3 - iVar2;
          iVar3 = iVar2 + iVar3;
          if (param_3 == 0) {
            return iVar3;
          }
          b = param_1->next_bio;
          param_2 = (void *)((long)param_2 + (long)iVar2);
        }
LAB_01a67894:
        BIO_copy_next_retry(param_1);
        if (-1 < iVar2) {
          return iVar3;
        }
        if (0 < iVar3) {
          return iVar3;
        }
        return iVar2;
      }
      while( true ) {
        iVar2 = BIO_read(b,*(void **)(piVar4 + 2),iVar2);
        if (iVar2 < 1) goto LAB_01a67894;
        piVar4[4] = iVar2;
        piVar4[5] = 0;
        if (iVar2 != 0) break;
LAB_01a6781c:
        iVar2 = *piVar4;
        b = param_1->next_bio;
        if (iVar2 < param_3) goto LAB_01a6784c;
      }
    }
  }
  return iVar3;
}




void FUN_01a678ac(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_01a675d4(param_1,param_2,sVar1);
  return;
}




int FUN_01a678e0(BIO *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = param_1->ptr;
  param_3 = param_3 + -1;
  BIO_clear_flags(param_1,0xf);
  iVar2 = piVar7[4];
  iVar6 = 0;
  do {
    while (iVar2 < 1) {
      iVar2 = BIO_read(param_1->next_bio,*(void **)(piVar7 + 2),*piVar7);
      if (iVar2 < 1) {
        BIO_copy_next_retry(param_1);
        *param_2 = 0;
        if (-1 < iVar2) {
          return iVar6;
        }
        if (0 < iVar6) {
          return iVar6;
        }
        return iVar2;
      }
      piVar7[4] = iVar2;
      piVar7[5] = 0;
    }
    if (param_3 < 1) {
      lVar4 = 0;
    }
    else {
      lVar5 = *(long *)(piVar7 + 2);
      iVar3 = piVar7[5];
      lVar4 = 0;
      do {
        param_2[lVar4] = *(undefined1 *)(lVar5 + iVar3 + lVar4);
        if (*(char *)(lVar5 + iVar3 + lVar4) == '\n') {
          iVar2 = piVar7[4];
          iVar3 = (int)lVar4 + 1;
          param_2 = param_2 + lVar4 + 1;
          bVar1 = true;
          goto LAB_01a679c0;
        }
        iVar2 = piVar7[4];
        lVar4 = lVar4 + 1;
      } while ((lVar4 < param_3) && (lVar4 < iVar2));
      param_2 = param_2 + lVar4;
    }
    iVar3 = (int)lVar4;
    bVar1 = false;
LAB_01a679c0:
    iVar6 = iVar3 + iVar6;
    iVar2 = iVar2 - iVar3;
    piVar7[4] = iVar2;
    piVar7[5] = piVar7[5] + iVar3;
    if ((bVar1) || (param_3 = param_3 - iVar3, param_3 == 0)) {
      *param_2 = 0;
      return iVar6;
    }
  } while( true );
}




long FUN_01a67a18(BIO *param_1,int param_2,long param_3,BIO *param_4)

{
  int iVar1;
  int iVar2;
  BIO *bp;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  void *pvVar10;
  int *piVar11;
  int iVar12;
  
  piVar11 = param_1->ptr;
  switch(param_2) {
  case 1:
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[8] = 0;
    piVar11[9] = 0;
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    param_2 = 1;
    break;
  case 3:
    return (long)piVar11[8];
  case 10:
    if (piVar11[4] != 0) {
      return (long)piVar11[4];
    }
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    param_2 = 10;
    break;
  case 0xb:
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    if (0 < piVar11[8]) {
      while( true ) {
        BIO_clear_flags(param_1,0xf);
        if (piVar11[8] < 1) break;
        iVar2 = BIO_write(param_1->next_bio,(void *)(*(long *)(piVar11 + 6) + (long)piVar11[9]),
                          piVar11[8]);
        BIO_copy_next_retry(param_1);
        if (iVar2 < 1) {
          return (long)iVar2;
        }
        piVar11[8] = piVar11[8] - iVar2;
        piVar11[9] = piVar11[9] + iVar2;
      }
      piVar11[8] = 0;
      piVar11[9] = 0;
      bp = param_1->next_bio;
    }
    param_2 = 0xb;
    break;
  case 0xc:
    lVar4 = BIO_int_ctrl(param_4,0x75,(long)*piVar11,0);
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = BIO_int_ctrl(param_4,0x75,(long)piVar11[1],1);
    if (lVar4 == 0) {
      return 0;
    }
    return 1;
  case 0xd:
    if (piVar11[8] != 0) {
      return (long)piVar11[8];
    }
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    param_2 = 0xd;
    break;
  default:
    iVar2 = (int)param_3;
    switch(param_2) {
    case 0x65:
      if (param_1->next_bio != (bio_st *)0x0) {
        BIO_clear_flags(param_1,0xf);
        lVar4 = BIO_ctrl(param_1->next_bio,0x65,param_3,param_4);
        BIO_copy_next_retry(param_1);
        return lVar4;
      }
      return 0;
    case 0x74:
      iVar2 = piVar11[4];
      uVar5 = (ulong)iVar2;
      if (iVar2 < 1) {
        return 0;
      }
      uVar6 = 0;
      lVar4 = 0;
      if (iVar2 != 1) {
        uVar6 = uVar5 & 0xfffffffffffffffe;
        lVar7 = 0;
        lVar4 = 0;
        pcVar8 = (char *)(*(long *)(piVar11 + 2) + (long)piVar11[5] + 1);
        uVar9 = uVar6;
        do {
          if (pcVar8[-1] == '\n') {
            lVar7 = lVar7 + 1;
          }
          if (*pcVar8 == '\n') {
            lVar4 = lVar4 + 1;
          }
          uVar9 = uVar9 - 2;
          pcVar8 = pcVar8 + 2;
        } while (uVar9 != 0);
        lVar4 = lVar4 + lVar7;
        if (uVar6 == uVar5) {
          return lVar4;
        }
      }
      do {
        pcVar8 = (char *)(*(long *)(piVar11 + 2) + (long)piVar11[5] + uVar6);
        uVar6 = uVar6 + 1;
        if (*pcVar8 == '\n') {
          lVar4 = lVar4 + 1;
        }
      } while ((long)uVar6 < (long)uVar5);
      return lVar4;
    case 0x75:
      iVar12 = iVar2;
      if (param_4 == (BIO *)0x0) {
LAB_01a67cbc:
        pvVar3 = *(void **)(piVar11 + 2);
        pvVar10 = *(void **)(piVar11 + 6);
        iVar1 = iVar2;
      }
      else {
        if (*(int *)&param_4->method != 0) {
          iVar12 = *piVar11;
          goto LAB_01a67cbc;
        }
        pvVar3 = *(void **)(piVar11 + 2);
        pvVar10 = *(void **)(piVar11 + 6);
        iVar1 = piVar11[1];
      }
      if (((iVar12 < 0x1001) || (iVar12 == *piVar11)) ||
         (pvVar3 = CRYPTO_malloc(iVar2,"bf_buff.c",0x171), pvVar3 != (void *)0x0)) {
        if (((iVar1 < 0x1001) || (iVar1 == piVar11[1])) ||
           (pvVar10 = CRYPTO_malloc(iVar2,"bf_buff.c",0x176), pvVar10 != (void *)0x0)) {
          if (*(void **)(piVar11 + 2) != pvVar3) {
            CRYPTO_free(*(void **)(piVar11 + 2));
            *(void **)(piVar11 + 2) = pvVar3;
            piVar11[4] = 0;
            piVar11[5] = 0;
            *piVar11 = iVar12;
          }
          if (*(void **)(piVar11 + 6) != pvVar10) {
            CRYPTO_free(*(void **)(piVar11 + 6));
            *(void **)(piVar11 + 6) = pvVar10;
            piVar11[8] = 0;
            piVar11[9] = 0;
            piVar11[1] = iVar1;
          }
          return 1;
        }
        if (pvVar3 != *(void **)(piVar11 + 2)) {
          CRYPTO_free(pvVar3);
        }
      }
LAB_01a67db8:
      ERR_put_error(0x20,0x72,0x41,"bf_buff.c",0x1c1);
      return 0;
    case 0x7a:
      if (param_3 <= *piVar11) {
        pvVar3 = *(void **)(piVar11 + 2);
LAB_01a67c9c:
        piVar11[4] = iVar2;
        piVar11[5] = 0;
        memcpy(pvVar3,param_4,(long)iVar2);
        return 1;
      }
      pvVar3 = CRYPTO_malloc(iVar2,"bf_buff.c",0x153);
      if (pvVar3 != (void *)0x0) {
        if (*(void **)(piVar11 + 2) != (void *)0x0) {
          CRYPTO_free(*(void **)(piVar11 + 2));
        }
        *(void **)(piVar11 + 2) = pvVar3;
        goto LAB_01a67c9c;
      }
      goto LAB_01a67db8;
    }
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
  }
  lVar4 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar4;
}




undefined8 FUN_01a67df0(long param_1)

{
  undefined8 *ptr;
  void *pvVar1;
  
  ptr = CRYPTO_malloc(0x28,"bf_buff.c",0x60);
  if (ptr == (undefined8 *)0x0) {
    return 0;
  }
  pvVar1 = CRYPTO_malloc(0x1000,"bf_buff.c",99);
  ptr[1] = pvVar1;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = CRYPTO_malloc(0x1000,"bf_buff.c",0x68);
    ptr[3] = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *ptr = 0x100000001000;
      ptr[2] = 0;
      ptr[4] = 0;
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined8 **)(param_1 + 0x30) = ptr;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 1;
    }
    CRYPTO_free((void *)ptr[1]);
  }
  CRYPTO_free(ptr);
  return 0;
}




undefined8 FUN_01a67ea4(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    pvVar1 = *(void **)(lVar3 + 8);
    if (pvVar1 != (void *)0x0) {
      CRYPTO_free(pvVar1);
    }
    pvVar1 = *(void **)(lVar3 + 0x18);
    if (pvVar1 != (void *)0x0) {
      CRYPTO_free(pvVar1);
    }
    CRYPTO_free(*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

