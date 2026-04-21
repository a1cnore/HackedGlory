// functions/01a77 — 1 functions
#include "libGameKindred.h"




long * FUN_01a77200(long param_1,ENGINE *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  EVP_PKEY_METHOD *pEVar4;
  long *plVar5;
  int line;
  code *pcVar6;
  int local_120 [52];
  undefined1 *local_48;
  
  if (param_3 == -1) {
    if (param_1 == 0) {
      return (long *)0x0;
    }
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      return (long *)0x0;
    }
    param_3 = **(int **)(param_1 + 0x10);
LAB_01a772b8:
    bVar1 = true;
    if (*(ENGINE **)(param_1 + 0x18) != (ENGINE *)0x0) {
      param_2 = *(ENGINE **)(param_1 + 0x18);
    }
    if (param_2 == (ENGINE *)0x0) goto LAB_01a7723c;
LAB_01a772cc:
    iVar3 = ENGINE_init(param_2);
    if (iVar3 == 0) {
      iVar3 = 0x26;
      line = 0x92;
      goto LAB_01a773e0;
    }
LAB_01a772d8:
    pEVar4 = ENGINE_get_pkey_meth(param_2,param_3);
    bVar2 = true;
joined_r0x01a77438:
    if (pEVar4 != (EVP_PKEY_METHOD *)0x0) {
      plVar5 = CRYPTO_malloc(0x50,"pmeth_lib.c",0xa8);
      if (plVar5 != (long *)0x0) {
        *plVar5 = (long)pEVar4;
        plVar5[1] = (long)param_2;
        *(undefined4 *)(plVar5 + 4) = 0;
        plVar5[2] = param_1;
        plVar5[3] = 0;
        plVar5[7] = 0;
        if (bVar1) {
          CRYPTO_add_lock((int *)(param_1 + 8),1,10,"pmeth_lib.c",0xb8);
        }
        plVar5[5] = 0;
        if (*(code **)(pEVar4 + 8) != (code *)0x0) {
          iVar3 = (**(code **)(pEVar4 + 8))(plVar5);
          if (iVar3 < 1) {
            if ((*plVar5 != 0) && (pcVar6 = *(code **)(*plVar5 + 0x18), pcVar6 != (code *)0x0)) {
              (*pcVar6)(plVar5);
            }
            if ((EVP_PKEY *)plVar5[2] != (EVP_PKEY *)0x0) {
              EVP_PKEY_free((EVP_PKEY *)plVar5[2]);
            }
            if ((EVP_PKEY *)plVar5[3] != (EVP_PKEY *)0x0) {
              EVP_PKEY_free((EVP_PKEY *)plVar5[3]);
            }
            if ((ENGINE *)plVar5[1] != (ENGINE *)0x0) {
              ENGINE_finish((ENGINE *)plVar5[1]);
            }
            CRYPTO_free(plVar5);
            return (long *)0x0;
          }
          return plVar5;
        }
        return plVar5;
      }
      if (bVar2) {
        ENGINE_finish(param_2);
      }
      iVar3 = 0x41;
      line = 0xae;
      goto LAB_01a773e0;
    }
  }
  else {
    if (param_1 != 0) goto LAB_01a772b8;
    bVar1 = false;
    if (param_2 != (ENGINE *)0x0) goto LAB_01a772cc;
LAB_01a7723c:
    param_2 = ENGINE_get_pkey_meth_engine(param_3);
    if (param_2 != (ENGINE *)0x0) goto LAB_01a772d8;
    local_120[0] = param_3;
    local_48 = (undefined1 *)local_120;
    if ((app_pkey_methods != (_STACK *)0x0) &&
       (local_48 = (undefined1 *)local_120, iVar3 = sk_find(app_pkey_methods,local_120), -1 < iVar3)
       ) {
      pEVar4 = sk_value(app_pkey_methods,iVar3);
      bVar2 = false;
      param_2 = (ENGINE *)0x0;
      goto joined_r0x01a77438;
    }
    plVar5 = OBJ_bsearch_(&local_48,&PTR_rsa_pkey_meth_02bfda10,7,8,(cmp *)&LAB_01a77948);
    if (plVar5 != (long *)0x0) {
      pEVar4 = (EVP_PKEY_METHOD *)*plVar5;
      bVar2 = false;
      param_2 = (ENGINE *)0x0;
      goto joined_r0x01a77438;
    }
  }
  iVar3 = 0x9c;
  line = 0xa4;
LAB_01a773e0:
  ERR_put_error(6,0x9d,iVar3,"pmeth_lib.c",line);
  return (long *)0x0;
}

