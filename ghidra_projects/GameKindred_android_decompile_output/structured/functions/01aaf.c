// functions/01aaf — 4 functions
#include "libGameKindred.h"




undefined8 FUN_01aaf898(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  if (DAT_03217e58 == (DSO *)0x0) {
    if (DAT_03217e50 == 0) {
      DAT_03217e50 = ERR_get_next_error_library();
    }
    iVar2 = 0x6f;
    iVar1 = 0x219;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    piVar4 = (int *)&DAT_03217ea0;
    do {
      while (*piVar4 == 2) {
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 2;
        if (0xff < uVar3) goto LAB_01aaf914;
      }
      if (*piVar4 == 1) {
        iVar1 = (*DAT_03217e88)(piVar4[1]);
        if (iVar1 != 0) {
          if (DAT_03217e50 == 0) {
            DAT_03217e50 = ERR_get_next_error_library();
          }
          iVar2 = 0x65;
          iVar1 = 0x21f;
          goto LAB_01aaf9d0;
        }
        piVar4[0] = 0;
        piVar4[1] = 0;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < 0x100);
LAB_01aaf914:
    if (iVar2 == 0) {
      iVar2 = (*DAT_03217e68)();
      if (iVar2 == 0) {
        iVar2 = DSO_free(DAT_03217e58);
        if (iVar2 != 0) {
          DAT_03217e60 = 0;
          DAT_03217e58 = (DSO *)0x0;
          DAT_03217e90 = 0;
          DAT_03217e88 = (code *)0x0;
          DAT_03217e70 = 0;
          DAT_03217e68 = (code *)0x0;
          DAT_03217e80 = 0;
          DAT_03217e78 = 0;
          return 1;
        }
        if (DAT_03217e50 == 0) {
          DAT_03217e50 = ERR_get_next_error_library();
        }
        iVar2 = 0x73;
        iVar1 = 0x22e;
      }
      else {
        if (DAT_03217e50 == 0) {
          DAT_03217e50 = ERR_get_next_error_library();
        }
        iVar2 = 0x68;
        iVar1 = 0x229;
      }
    }
    else {
      if (DAT_03217e50 == 0) {
        DAT_03217e50 = ERR_get_next_error_library();
      }
      iVar2 = 0x66;
      iVar1 = 0x223;
    }
  }
LAB_01aaf9d0:
  ERR_put_error(DAT_03217e50,0x65,iVar2,"e_aep.c",iVar1);
  return 0;
}




bool FUN_01aafa48(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  int reason;
  int line;
  
  if (param_2 == 200) {
    if (param_4 == (char *)0x0) {
      if (DAT_03217e50 == 0) {
        DAT_03217e50 = ERR_get_next_error_library();
      }
      reason = 0x43;
      line = 0x249;
    }
    else {
      if (DAT_03217e58 == 0) {
        if (DAT_03217e98 != (void *)0x0) {
          CRYPTO_free(DAT_03217e98);
        }
        DAT_03217e98 = (char *)0x0;
        DAT_03217e98 = BUF_strdup(param_4);
        return DAT_03217e98 != (char *)0x0;
      }
      if (DAT_03217e50 == 0) {
        DAT_03217e50 = ERR_get_next_error_library();
      }
      reason = 100;
      line = 0x24d;
    }
  }
  else {
    if (DAT_03217e50 == 0) {
      DAT_03217e50 = ERR_get_next_error_library();
    }
    reason = 0x67;
    line = 0x254;
  }
  ERR_put_error(DAT_03217e50,100,reason,"e_aep.c",line);
  return false;
}




bool FUN_01aafb38(undefined8 param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,BIGNUM *param_7,BN_CTX *param_8)

{
  bool bVar1;
  int iVar2;
  BIGNUM BStack_68;
  
  BN_init(&BStack_68);
  iVar2 = FUN_01aafec0(param_2,param_3,param_4,param_7,param_8);
  if ((iVar2 == 0) || (iVar2 = FUN_01aafec0(&BStack_68,param_5,param_6,param_7,param_8), iVar2 == 0)
     ) {
    bVar1 = false;
  }
  else {
    iVar2 = BN_mod_mul(param_2,param_2,&BStack_68,param_7,param_8);
    bVar1 = iVar2 != 0;
  }
  BN_free(&BStack_68);
  return bVar1;
}




int FUN_01aafec0(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  int line;
  ulong uVar2;
  int *piVar3;
  int local_54;
  
  iVar1 = BN_num_bits(param_4);
  if (iVar1 < 0x881) {
    iVar1 = FUN_01ab00d0(&local_54);
    if (iVar1 == 0) {
      iVar1 = (*DAT_03217e90)(local_54,param_2,param_3,param_4,param_1,0);
      if (iVar1 == 0) {
        CRYPTO_lock(9,0x1e,"e_aep.c",0x3dc);
        uVar2 = 0;
        piVar3 = (int *)((long)&DAT_03217ea0 + 4);
        do {
          if (*piVar3 == local_54) {
            piVar3[-1] = 1;
            break;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 < 0x100);
        CRYPTO_lock(10,0x1e,"e_aep.c",1000);
        return 1;
      }
      if (DAT_03217e50 == 0) {
        DAT_03217e50 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03217e50,0x68,0x6e,"e_aep.c",0x279);
      CRYPTO_lock(9,0x1e,"e_aep.c",0x3f2);
      uVar2 = 0;
      piVar3 = (int *)((long)&DAT_03217ea0 + 4);
      do {
        if (*piVar3 == local_54) {
          iVar1 = (*DAT_03217e88)(local_54);
          if (iVar1 == 0) {
            piVar3[-1] = 0;
            *piVar3 = 0;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 < 0x100);
      CRYPTO_lock(10,0x1e,"e_aep.c",0x403);
      goto LAB_01aaff64;
    }
    if (DAT_03217e50 == 0) {
      DAT_03217e50 = ERR_get_next_error_library();
    }
    iVar1 = 0x69;
    line = 0x26e;
  }
  else {
    if (DAT_03217e50 == 0) {
      DAT_03217e50 = ERR_get_next_error_library();
    }
    iVar1 = 0x74;
    line = 0x265;
  }
  ERR_put_error(DAT_03217e50,0x68,iVar1,"e_aep.c",line);
LAB_01aaff64:
  iVar1 = BN_mod_exp(param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

