// functions/01a92 — 4 functions
#include "libGameKindred.h"




undefined8 FUN_01a92438(long param_1)

{
  undefined8 *ptr;
  BUF_MEM *pBVar1;
  undefined8 uVar2;
  
  ptr = CRYPTO_malloc(0x10,"by_dir.c",0x97);
  uVar2 = 0;
  if (ptr != (undefined8 *)0x0) {
    pBVar1 = BUF_MEM_new();
    *ptr = pBVar1;
    if (pBVar1 == (BUF_MEM *)0x0) {
      CRYPTO_free(ptr);
      return 0;
    }
    uVar2 = 1;
    ptr[1] = 0;
    *(undefined8 **)(param_1 + 0x10) = ptr;
  }
  return uVar2;
}




undefined8 FUN_01a9257c(X509_LOOKUP *param_1,int param_2,X509_NAME *param_3,undefined4 *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BUF_MEM *str;
  ulong uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined4 *puVar8;
  ulong *data;
  uint uVar9;
  undefined8 uVar10;
  char *pcVar11;
  void *local_238;
  stat sStack_228;
  int local_198 [2];
  undefined1 **local_190;
  undefined1 *local_188 [15];
  undefined1 auStack_110 [16];
  X509_NAME *local_100;
  undefined1 auStack_d0 [40];
  X509_NAME *local_a8;
  
  if (param_3 == (X509_NAME *)0x0) {
    return 0;
  }
  local_198[0] = param_2;
  if (param_2 == 1) {
    local_190 = local_188;
    local_188[0] = auStack_d0;
    pcVar1 = "";
    local_a8 = param_3;
    str = BUF_MEM_new();
  }
  else {
    if (param_2 != 2) {
      iVar3 = 0x70;
      iVar4 = 0x122;
      goto LAB_01a92978;
    }
    local_190 = local_188;
    local_188[0] = auStack_110;
    pcVar1 = "r";
    local_100 = param_3;
    str = BUF_MEM_new();
  }
  if (str != (BUF_MEM *)0x0) {
    pcVar11 = param_1->method_data;
    uVar5 = X509_NAME_hash_old(param_3);
    iVar3 = sk_num(*(_STACK **)(pcVar11 + 8));
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar6 = sk_value(*(_STACK **)(pcVar11 + 8),iVar3);
        sVar7 = strlen((char *)*puVar6);
        iVar4 = BUF_MEM_grow(str,(long)((sVar7 << 0x20) + 0x1100000000) >> 0x20);
        if (iVar4 == 0) {
          ERR_put_error(0xb,0x67,0x41,"by_dir.c",0x135);
          break;
        }
        if (param_2 == 2) {
          if (puVar6[2] == 0) {
            uVar9 = 0;
            local_238 = (void *)0x0;
          }
          else {
            sStack_228.__unused[1] = uVar5;
            CRYPTO_lock(5,0xb,"by_dir.c",0x13a);
            iVar4 = sk_find((_STACK *)puVar6[2],sStack_228.__unused + 1);
            if (iVar4 < 0) {
              uVar9 = 0;
              local_238 = (void *)0x0;
            }
            else {
              local_238 = sk_value((_STACK *)puVar6[2],iVar4);
              uVar9 = *(uint *)((long)local_238 + 8);
            }
            CRYPTO_lock(6,0xb,"by_dir.c",0x143);
          }
LAB_01a926bc:
          uVar2 = uVar9;
          if (param_2 == 2) {
            while( true ) {
              BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar6,0x2f,uVar5,pcVar1,
                           (ulong)uVar9);
              iVar4 = stat(str->data,&sStack_228);
              if (((iVar4 >> 0x1f & 6U) != 0) ||
                 (iVar4 = X509_load_crl_file(param_1,str->data,*(int *)(puVar6 + 1)), iVar4 == 0))
              break;
              uVar9 = uVar9 + 1;
            }
          }
          else {
            do {
              uVar9 = uVar2;
              BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar6,0x2f,uVar5,pcVar1,
                           (ulong)uVar9);
              iVar4 = stat(str->data,&sStack_228);
              uVar2 = uVar9 + 1;
            } while ((iVar4 >> 0x1f & 6U) == 0);
          }
        }
        else {
          uVar9 = 0;
          local_238 = (void *)0x0;
          if (param_2 != 1) goto LAB_01a926bc;
          while( true ) {
            BIO_snprintf(str->data,str->max,"%s%c%08lx.%s%d",*puVar6,0x2f,uVar5,pcVar1,(ulong)uVar9)
            ;
            iVar4 = stat(str->data,&sStack_228);
            if (((iVar4 >> 0x1f & 6U) != 0) ||
               (iVar4 = X509_load_cert_file(param_1,str->data,*(int *)(puVar6 + 1)), iVar4 == 0))
            break;
            uVar9 = uVar9 + 1;
          }
        }
        CRYPTO_lock(9,0xb,"by_dir.c",0x17c);
        iVar4 = sk_find(&param_1->store_ctx->objs->stack,local_198);
        if (iVar4 == -1) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = sk_value(&param_1->store_ctx->objs->stack,iVar4);
        }
        CRYPTO_lock(10,0xb,"by_dir.c",0x182);
        if (param_2 == 2) {
          CRYPTO_lock(9,0xb,"by_dir.c",0x187);
          if ((local_238 == (void *)0x0) &&
             ((sStack_228.__unused[1] = uVar5,
              iVar4 = sk_find((_STACK *)puVar6[2],sStack_228.__unused + 1), iVar4 < 0 ||
              (local_238 = sk_value((_STACK *)puVar6[2],iVar4), local_238 == (void *)0x0)))) {
            data = CRYPTO_malloc(0x10,"by_dir.c",0x193);
            *data = uVar5;
            *(uint *)(data + 1) = uVar9;
            iVar4 = sk_push((_STACK *)puVar6[2],data);
            if (iVar4 == 0) {
              CRYPTO_lock(10,0xb,"by_dir.c",0x197);
              CRYPTO_free(data);
              break;
            }
          }
          else if (*(int *)((long)local_238 + 8) < (int)uVar9) {
            *(uint *)((long)local_238 + 8) = uVar9;
          }
          CRYPTO_lock(10,0xb,"by_dir.c",0x19f);
        }
        if (puVar8 != (undefined4 *)0x0) {
          uVar10 = 1;
          *param_4 = *puVar8;
          *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar8 + 2);
          goto LAB_01a929c0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = sk_num(*(_STACK **)(pcVar11 + 8));
      } while (iVar3 < iVar4);
    }
    uVar10 = 0;
LAB_01a929c0:
    BUF_MEM_free(str);
    return uVar10;
  }
  iVar3 = 7;
  iVar4 = 0x127;
LAB_01a92978:
  ERR_put_error(0xb,0x67,iVar3,"by_dir.c",iVar4);
  return 0;
}




undefined8 FUN_01a92a1c(long param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t sVar7;
  _STACK *p_Var8;
  long *data;
  ulong __n;
  char *pcVar9;
  
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, pcVar2 = param_2, cVar1 == '\0')) {
    iVar5 = 0x71;
    iVar3 = 0xcc;
LAB_01a92bdc:
    ERR_put_error(0xb,100,iVar5,"by_dir.c",iVar3);
    return 0;
  }
  do {
    if ((cVar1 == '\0') || (cVar1 == ':')) {
      iVar5 = (int)((long)pcVar2 - (long)param_2);
      if (iVar5 != 0) {
        __n = (long)pcVar2 - (long)param_2 & 0xffffffff;
        iVar3 = sk_num(*(_STACK **)(param_1 + 8));
        if (iVar3 < 1) {
          iVar3 = sk_num(*(_STACK **)(param_1 + 8));
          if (iVar3 < 1) goto LAB_01a92b24;
        }
        else {
          iVar3 = 0;
          do {
            puVar6 = sk_value(*(_STACK **)(param_1 + 8),iVar3);
            pcVar9 = (char *)*puVar6;
            sVar7 = strlen(pcVar9);
            if ((sVar7 == (long)iVar5) && (iVar4 = strncmp(pcVar9,param_2,__n), iVar4 == 0)) break;
            iVar3 = iVar3 + 1;
            iVar4 = sk_num(*(_STACK **)(param_1 + 8));
          } while (iVar3 < iVar4);
          iVar4 = sk_num(*(_STACK **)(param_1 + 8));
          if (iVar4 <= iVar3) {
LAB_01a92b24:
            if (*(long *)(param_1 + 8) == 0) {
              p_Var8 = sk_new_null();
              *(_STACK **)(param_1 + 8) = p_Var8;
              if (p_Var8 == (_STACK *)0x0) {
                iVar5 = 0x41;
                iVar3 = 0xe5;
                goto LAB_01a92bdc;
              }
            }
            data = CRYPTO_malloc(0x18,"by_dir.c",0xe9);
            if (data == (long *)0x0) {
              return 0;
            }
            *(undefined4 *)(data + 1) = param_3;
            p_Var8 = sk_new((cmp *)&LAB_01a92c5c);
            data[2] = (long)p_Var8;
            pcVar9 = CRYPTO_malloc(iVar5 + 1,"by_dir.c",0xee);
            p_Var8 = (_STACK *)data[2];
            *data = (long)pcVar9;
            if (pcVar9 == (char *)0x0) goto joined_r0x01a92c00;
            if (p_Var8 == (_STACK *)0x0) {
LAB_01a92c1c:
              CRYPTO_free(pcVar9);
            }
            else {
              strncpy(pcVar9,param_2,__n);
              *(undefined1 *)(*data + (long)iVar5) = 0;
              iVar5 = sk_push(*(_STACK **)(param_1 + 8),data);
              if (iVar5 != 0) {
                cVar1 = *pcVar2;
                param_2 = pcVar2 + 1;
                goto joined_r0x01a92b08;
              }
              pcVar9 = (char *)*data;
              if (pcVar9 != (char *)0x0) goto LAB_01a92c1c;
            }
            p_Var8 = (_STACK *)data[2];
joined_r0x01a92c00:
            if (p_Var8 != (_STACK *)0x0) {
              sk_pop_free(p_Var8,(func *)&LAB_01a92cbc);
            }
            CRYPTO_free(data);
            return 0;
          }
        }
      }
      cVar1 = *pcVar2;
      param_2 = pcVar2 + 1;
    }
    else {
      cVar1 = *pcVar2;
    }
joined_r0x01a92b08:
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  } while( true );
}




void FUN_01a92d54(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    if ((_STACK *)param_1[6] != (_STACK *)0x0) {
      sk_pop_free((_STACK *)param_1[6],ASN1_OBJECT_free);
      param_1[6] = 0;
    }
    puVar2 = (undefined8 *)param_1[7];
    if ((_STACK *)*puVar2 != (_STACK *)0x0) {
      sk_pop_free((_STACK *)*puVar2,(func *)&LAB_01a931c8);
      *puVar2 = 0;
    }
    if ((void *)puVar2[2] != (void *)0x0) {
      CRYPTO_free((void *)puVar2[2]);
    }
    pvVar1 = (void *)puVar2[3];
    puVar2[2] = 0;
    if (pvVar1 != (void *)0x0) {
      CRYPTO_free(pvVar1);
      puVar2[3] = 0;
      puVar2[4] = 0;
    }
    pvVar1 = (void *)puVar2[5];
    if (pvVar1 != (void *)0x0) {
      CRYPTO_free(pvVar1);
      puVar2[5] = 0;
      puVar2[6] = 0;
    }
  }
  return;
}

