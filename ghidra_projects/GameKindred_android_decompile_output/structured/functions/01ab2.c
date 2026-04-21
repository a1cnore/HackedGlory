// functions/01ab2 — 1 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01ab2cf8(void)

{
  char *filename;
  DSO_FUNC_TYPE pDVar1;
  DSO_FUNC_TYPE pDVar2;
  DSO_FUNC_TYPE pDVar3;
  DSO_FUNC_TYPE pDVar4;
  DSO_FUNC_TYPE pDVar5;
  DSO_FUNC_TYPE pDVar6;
  DSO_FUNC_TYPE pDVar7;
  DSO_FUNC_TYPE pDVar8;
  DSO_FUNC_TYPE file;
  CRYPTO_dynlock_value *pCVar9;
  CRYPTO_dynlock_value *l;
  long extraout_x0;
  int line;
  CRYPTO_dynlock_value *l_00;
  char *file_00;
  char *file_01;
  int line_00;
  undefined1 *local_478;
  undefined8 local_470;
  undefined1 auStack_468 [1032];
  
  if (DAT_03218780 == (DSO *)0x0) {
    filename = "nfhwcrhk";
    if (DAT_03218778 != (char *)0x0) {
      filename = DAT_03218778;
    }
    file_01 = (char *)0x0;
    line_00 = 0;
    DAT_03218780 = DSO_load((DSO *)0x0,filename,(DSO_METHOD *)0x0,0);
    if (DAT_03218780 == (DSO *)0x0) {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218740,0x67,0x68,"e_chil.c",0x22c);
    }
    else {
      pDVar1 = DSO_bind_func(DAT_03218780,"HWCryptoHook_Init");
      if (((((pDVar1 == (DSO_FUNC_TYPE)0x0) ||
            (pDVar2 = DSO_bind_func(DAT_03218780,"HWCryptoHook_Finish"),
            pDVar2 == (DSO_FUNC_TYPE)0x0)) ||
           (pDVar3 = DSO_bind_func(DAT_03218780,"HWCryptoHook_ModExp"), pDVar3 == (DSO_FUNC_TYPE)0x0
           )) || (((pDVar4 = DSO_bind_func(DAT_03218780,"HWCryptoHook_RSA"),
                   pDVar4 == (DSO_FUNC_TYPE)0x0 ||
                   (pDVar5 = DSO_bind_func(DAT_03218780,"HWCryptoHook_RSALoadKey"),
                   pDVar5 == (DSO_FUNC_TYPE)0x0)) ||
                  ((pDVar6 = DSO_bind_func(DAT_03218780,"HWCryptoHook_RSAGetPublicKey"),
                   pDVar6 == (DSO_FUNC_TYPE)0x0 ||
                   ((pDVar7 = DSO_bind_func(DAT_03218780,"HWCryptoHook_RSAUnloadKey"),
                    pDVar7 == (DSO_FUNC_TYPE)0x0 ||
                    (pDVar8 = DSO_bind_func(DAT_03218780,"HWCryptoHook_RandomBytes"),
                    pDVar8 == (DSO_FUNC_TYPE)0x0)))))))) ||
         (file = DSO_bind_func(DAT_03218780,"HWCryptoHook_ModExpCRT"), file == (DSO_FUNC_TYPE)0x0))
      {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_03218740,0x67,0x68,"e_chil.c",0x243);
      }
      else {
        DAT_03218750 = pDVar4;
        DAT_03218758 = file;
        DAT_03218760 = pDVar3;
        DAT_03218768 = pDVar7;
        DAT_03218770 = pDVar8;
        DAT_03218788 = pDVar1;
        DAT_03218790 = pDVar2;
        DAT_03218798 = pDVar5;
        DAT_032187a0 = pDVar6;
        if ((((DAT_03218744 == 0) &&
             (pCVar9 = CRYPTO_get_dynlock_create_callback((char *)file,line),
             pCVar9 != (CRYPTO_dynlock_value *)0x0)) &&
            (CRYPTO_get_dynlock_lock_callback((int)pCVar9,l_00,file_01,line_00),
            l != (CRYPTO_dynlock_value *)0x0)) &&
           (CRYPTO_get_dynlock_destroy_callback(l,file_00,(int)file_01), extraout_x0 != 0)) {
          DAT_02c03db0 = &LAB_01ab400c;
          DAT_02c03db8 = FUN_01ab403c;
          puRam0000000002c03dc8 = &UNK_01ab4080;
          _DAT_02c03dc0 = &UNK_01ab4068;
        }
        local_478 = auStack_468;
        local_470 = 0x400;
        DAT_03218748 = (*DAT_03218788)(&DAT_02c03d80,0x98,&local_478,&DAT_032187b0);
        if (DAT_03218748 != 0) {
          if (DAT_02c03c70 == -1) {
            DAT_02c03c70 = RSA_get_ex_new_index
                                     (0,"nFast HWCryptoHook RSA key handle",(undefined1 *)0x0,
                                      (undefined1 *)0x0,(undefined1 *)0x0);
          }
          return 1;
        }
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_03218740,0x67,0x71,"e_chil.c",0x266);
      }
    }
  }
  else {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x67,100,"e_chil.c",0x226);
  }
  if (DAT_03218780 != (DSO *)0x0) {
    DSO_free(DAT_03218780);
  }
  DAT_032187a0 = (DSO_FUNC_TYPE)0x0;
  DAT_03218798 = (DSO_FUNC_TYPE)0x0;
  DAT_03218790 = (DSO_FUNC_TYPE)0x0;
  DAT_03218788 = (DSO_FUNC_TYPE)0x0;
  DAT_03218780 = (DSO *)0x0;
  DAT_03218770 = (DSO_FUNC_TYPE)0x0;
  DAT_03218768 = (DSO_FUNC_TYPE)0x0;
  DAT_03218760 = (DSO_FUNC_TYPE)0x0;
  DAT_03218758 = (DSO_FUNC_TYPE)0x0;
  DAT_03218750 = (DSO_FUNC_TYPE)0x0;
  return 0;
}

