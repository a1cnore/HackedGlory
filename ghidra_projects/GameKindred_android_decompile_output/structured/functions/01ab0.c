// functions/01ab0 — 5 functions
#include "libGameKindred.h"




int FUN_01ab00d0(int *param_1)

{
  __pid_t _Var1;
  int iVar2;
  int reason;
  int line;
  int *piVar3;
  ulong uVar4;
  
  CRYPTO_lock(9,0x1e,"e_aep.c",0x36a);
  _Var1 = getpid();
  if (DAT_03217e54 == _Var1) {
    uVar4 = 0;
    piVar3 = (int *)&DAT_03217ea0;
    do {
      if (*piVar3 == 1) {
        iVar2 = 0;
        *piVar3 = 2;
        *param_1 = piVar3[1];
        goto LAB_01ab02b4;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar4 < 0x100);
    uVar4 = 0;
    piVar3 = (int *)&DAT_03217ea0;
    do {
      if (*piVar3 == 0) {
        iVar2 = (*DAT_03217e80)(param_1);
        if (iVar2 == 0) {
          *piVar3 = 2;
          piVar3[1] = *param_1;
        }
        else {
          if (DAT_03217e50 == 0) {
            DAT_03217e50 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_03217e50,0x66,0x73,"e_aep.c",0x3c9);
        }
        goto LAB_01ab02b4;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar4 < 0x100);
    iVar2 = 0x10000001;
  }
  else {
    DAT_03217e54 = _Var1;
    (*DAT_03217e68)();
    iVar2 = (*DAT_03217e70)(0);
    if (iVar2 == 0) {
      iVar2 = (*DAT_03217e78)(&LAB_01ab0308,FUN_01ab031c,&LAB_01ab0348);
      if (iVar2 == 0) {
        memset(&DAT_03217ea0,0,0x800);
        iVar2 = (*DAT_03217e80)(param_1);
        if (iVar2 == 0) {
          DAT_03217ea0._0_4_ = 2;
          DAT_03217ea0._4_4_ = *param_1;
          goto LAB_01ab02b4;
        }
        if (DAT_03217e50 == 0) {
          DAT_03217e50 = ERR_get_next_error_library();
        }
        reason = 0x73;
        line = 0x3aa;
      }
      else {
        if (DAT_03217e50 == 0) {
          DAT_03217e50 = ERR_get_next_error_library();
        }
        reason = 0x72;
        line = 0x391;
      }
    }
    else {
      if (DAT_03217e50 == 0) {
        DAT_03217e50 = ERR_get_next_error_library();
      }
      reason = 0x6b;
      line = 900;
    }
    ERR_put_error(DAT_03217e50,0x66,reason,"e_aep.c",line);
    DAT_03217e54 = 0;
  }
LAB_01ab02b4:
  CRYPTO_lock(10,0x1e,"e_aep.c",0x3d4);
  return iVar2;
}




undefined8 FUN_01ab031c(undefined8 *param_1,ulong param_2,void *param_3)

{
  memcpy(param_3,(void *)*param_1,param_2 & 0xffffffff);
  return 0;
}




undefined8 FUN_01ab0624(void)

{
  char *filename;
  int iVar1;
  DSO_FUNC_TYPE pDVar2;
  DSO_FUNC_TYPE pDVar3;
  DSO_FUNC_TYPE pDVar4;
  undefined1 auStack_1030 [4096];
  
  if (DAT_032186b8 == (DSO *)0x0) {
    filename = "atasi";
    if (DAT_032186c8 != (char *)0x0) {
      filename = DAT_032186c8;
    }
    DAT_032186b8 = DSO_load((DSO *)0x0,filename,(DSO_METHOD *)0x0,0);
    if (DAT_032186b8 == (DSO *)0x0) {
      if (DAT_032186b0 == 0) {
        DAT_032186b0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_032186b0,0x66,0x69,"e_atalla.c",0x17f);
    }
    else {
      pDVar2 = DSO_bind_func(DAT_032186b8,"ASI_GetHardwareConfig");
      if (((pDVar2 == (DSO_FUNC_TYPE)0x0) ||
          (pDVar3 = DSO_bind_func(DAT_032186b8,"ASI_RSAPrivateKeyOpFn"),
          pDVar3 == (DSO_FUNC_TYPE)0x0)) ||
         (pDVar4 = DSO_bind_func(DAT_032186b8,"ASI_GetPerformanceStatistics"),
         pDVar4 == (DSO_FUNC_TYPE)0x0)) {
        if (DAT_032186b0 == 0) {
          DAT_032186b0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_032186b0,0x66,0x69,"e_atalla.c",0x189);
      }
      else {
        DAT_032186c0 = pDVar3;
        DAT_032186d0 = pDVar2;
        DAT_032186d8 = pDVar4;
        iVar1 = (*pDVar2)(0,auStack_1030);
        if (iVar1 == 0) {
          return 1;
        }
        if (DAT_032186b0 == 0) {
          DAT_032186b0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_032186b0,0x66,0x6b,"e_atalla.c",0x194);
      }
    }
  }
  else {
    if (DAT_032186b0 == 0) {
      DAT_032186b0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032186b0,0x66,100,"e_atalla.c",0x170);
  }
  if (DAT_032186b8 != (DSO *)0x0) {
    DSO_free(DAT_032186b8);
  }
  DAT_032186c0 = (DSO_FUNC_TYPE)0x0;
  DAT_032186b8 = (DSO *)0x0;
  return 0;
}




bool FUN_01ab0880(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  int reason;
  int line;
  
  if (param_2 == 200) {
    if (param_4 == (char *)0x0) {
      if (DAT_032186b0 == 0) {
        DAT_032186b0 = ERR_get_next_error_library();
      }
      reason = 0x43;
      line = 0x1bb;
    }
    else {
      if (DAT_032186b8 == 0) {
        if (DAT_032186c8 != (void *)0x0) {
          CRYPTO_free(DAT_032186c8);
        }
        DAT_032186c8 = (char *)0x0;
        DAT_032186c8 = BUF_strdup(param_4);
        return DAT_032186c8 != (char *)0x0;
      }
      if (DAT_032186b0 == 0) {
        DAT_032186b0 = ERR_get_next_error_library();
      }
      reason = 100;
      line = 0x1bf;
    }
  }
  else {
    if (DAT_032186b0 == 0) {
      DAT_032186b0 = ERR_get_next_error_library();
    }
    reason = 0x67;
    line = 0x1c6;
  }
  ERR_put_error(DAT_032186b0,100,reason,"e_atalla.c",line);
  return false;
}




undefined4
FUN_01ab0a1c(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *pBVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined1 auStack_100 [24];
  ulong *local_e8;
  int local_e0;
  ulong *local_c8;
  int local_c0;
  
  if (DAT_032186b8 == 0) {
    if (DAT_032186b0 == 0) {
      DAT_032186b0 = ERR_get_next_error_library();
    }
    iVar2 = 0x69;
    iVar4 = 0x1de;
  }
  else {
    BN_CTX_start(param_5);
    a = BN_CTX_get(param_5);
    a_00 = BN_CTX_get(param_5);
    a_01 = BN_CTX_get(param_5);
    a_02 = BN_CTX_get(param_5);
    if (a_02 == (BIGNUM *)0x0) {
      if (DAT_032186b0 == 0) {
        DAT_032186b0 = ERR_get_next_error_library();
      }
      iVar2 = 0x65;
      iVar4 = 0x1e8;
    }
    else {
      iVar2 = param_4->top;
      if (a->dmax < iVar2) {
        pBVar5 = bn_expand2(a,iVar2);
        if (pBVar5 != (BIGNUM *)0x0) {
          iVar2 = param_4->top;
          goto LAB_01ab0abc;
        }
      }
      else {
LAB_01ab0abc:
        if (a_00->dmax < iVar2) {
          pBVar5 = bn_expand2(a_00,iVar2);
          if (pBVar5 == (BIGNUM *)0x0) goto LAB_01ab0cd8;
          iVar2 = param_4->top;
        }
        if (a_01->dmax < iVar2) {
          pBVar5 = bn_expand2(a_01,iVar2);
          if (pBVar5 == (BIGNUM *)0x0) goto LAB_01ab0cd8;
          iVar2 = param_4->top;
        }
        if ((iVar2 <= a_02->dmax) || (pBVar5 = bn_expand2(a_02,iVar2), pBVar5 != (BIGNUM *)0x0)) {
          memset(auStack_100,0,0x98);
          iVar2 = BN_num_bits(param_4);
          uVar1 = iVar2 + 0xe;
          if (-1 < (int)(iVar2 + 7U)) {
            uVar1 = iVar2 + 7U;
          }
          __n = (long)((ulong)uVar1 << 0x20) >> 0x23;
          iVar2 = (int)uVar1 >> 3;
          memset(a_00->d,0,__n);
          memset(a->d,0,__n);
          puVar6 = a_00->d;
          iVar3 = BN_num_bits(param_3);
          iVar4 = iVar3 + 0xe;
          if (-1 < iVar3 + 7) {
            iVar4 = iVar3 + 7;
          }
          BN_bn2bin(param_3,(uchar *)((long)puVar6 + (__n - (long)(iVar4 >> 3))));
          puVar6 = a->d;
          iVar3 = BN_num_bits(param_4);
          iVar4 = iVar3 + 0xe;
          if (-1 < iVar3 + 7) {
            iVar4 = iVar3 + 7;
          }
          BN_bn2bin(param_4,(uchar *)((long)puVar6 + (__n - (long)(iVar4 >> 3))));
          local_c8 = a_00->d;
          local_e8 = a->d;
          local_e0 = iVar2;
          local_c0 = iVar2;
          memset(a_01->d,0,__n);
          memset(a_02->d,0,__n);
          puVar6 = a_01->d;
          iVar3 = BN_num_bits(param_2);
          iVar4 = iVar3 + 0xe;
          if (-1 < iVar3 + 7) {
            iVar4 = iVar3 + 7;
          }
          BN_bn2bin(param_2,(uchar *)((long)puVar6 + (__n - (long)(iVar4 >> 3))));
          iVar4 = (*DAT_032186c0)(auStack_100,a_02->d,a_01->d,iVar2);
          if (iVar4 == 0) {
            BN_bin2bn((uchar *)a_02->d,iVar2,param_1);
            uVar7 = 1;
            goto LAB_01ab0d08;
          }
          if (DAT_032186b0 == 0) {
            DAT_032186b0 = ERR_get_next_error_library();
          }
          iVar2 = 0x6a;
          iVar4 = 0x203;
          goto LAB_01ab0d00;
        }
      }
LAB_01ab0cd8:
      if (DAT_032186b0 == 0) {
        DAT_032186b0 = ERR_get_next_error_library();
      }
      iVar2 = 0x66;
      iVar4 = 0x1ed;
    }
  }
LAB_01ab0d00:
  ERR_put_error(DAT_032186b0,0x67,iVar2,"e_atalla.c",iVar4);
  uVar7 = 0;
LAB_01ab0d08:
  BN_CTX_end(param_5);
  return uVar7;
}

