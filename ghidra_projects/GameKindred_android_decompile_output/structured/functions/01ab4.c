// functions/01ab4 — 6 functions
#include "libGameKindred.h"




undefined8 FUN_01ab403c(int *param_1)

{
  CRYPTO_lock(9,*param_1,"e_chil.c",0x48a);
  return 0;
}




int FUN_01ab4088(char *param_1,int *param_2,char *param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  UI *ui_method;
  char *pcVar2;
  UI_METHOD *method;
  size_t sVar3;
  code *pcVar4;
  void *user_data;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)0x0;
    if (*param_1 != '\0') {
      pcVar2 = param_1;
    }
  }
  if (param_5 == (undefined8 *)0x0) {
    pcVar4 = (code *)0x0;
    user_data = (void *)0x0;
    method = (UI_METHOD *)0x0;
  }
  else {
    pcVar4 = (code *)*param_5;
    method = (UI_METHOD *)param_5[1];
    user_data = (void *)param_5[2];
  }
  if (param_4 != (long *)0x0) {
    if ((UI_METHOD *)*param_4 != (UI_METHOD *)0x0) {
      pcVar4 = (code *)0x0;
      method = (UI_METHOD *)*param_4;
    }
    if ((void *)param_4[1] != (void *)0x0) {
      user_data = (void *)param_4[1];
    }
  }
  if ((pcVar4 == (code *)0x0) && (method == (UI_METHOD *)0x0)) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x66,0x6c,"e_chil.c",0x4b8);
    iVar1 = -1;
  }
  else {
    if (method == (UI_METHOD *)0x0) {
      iVar1 = (*pcVar4)(param_3,*param_2,0,user_data);
      *param_2 = iVar1;
    }
    else {
      ui_method = UI_new_method(method);
      if (ui_method != (UI *)0x0) {
        pcVar2 = UI_construct_prompt(ui_method,"pass phrase",pcVar2);
        iVar1 = UI_add_input_string(ui_method,pcVar2,2,param_3,0,*param_2 + -1);
        UI_add_user_data(ui_method,user_data);
        UI_ctrl(ui_method,1,1,(void *)0x0,(f *)0x0);
        if (-1 < iVar1) {
          do {
            iVar1 = UI_process(ui_method);
            if (-1 < iVar1) {
              sVar3 = strlen(param_3);
              *param_2 = (int)sVar3;
              break;
            }
            iVar1 = UI_ctrl(ui_method,2,0,(void *)0x0,(f *)0x0);
          } while (iVar1 != 0);
        }
        UI_free(ui_method);
        CRYPTO_free(pcVar2);
      }
    }
    iVar1 = -(uint)(*param_2 == 0);
  }
  return iVar1;
}




void FUN_01ab43ac(undefined8 *param_1,undefined8 param_2)

{
  CRYPTO_lock(9,0x15,"e_chil.c",0x523);
  if ((param_1 != (undefined8 *)0x0) && ((BIO *)*param_1 != (BIO *)0x0)) {
    BIO_printf((BIO *)*param_1,"%s\n",param_2);
  }
  CRYPTO_lock(10,0x15,"e_chil.c",0x529);
  return;
}




bool FUN_01ab47ec(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  int reason;
  int line;
  
  if (param_2 == 200) {
    if (param_4 == (char *)0x0) {
      if (DAT_032187e0 == 0) {
        DAT_032187e0 = ERR_get_next_error_library();
      }
      reason = 0x43;
      line = 0xae;
    }
    else {
      if (DAT_032187e8 == 0) {
        if (DAT_032187f8 != (void *)0x0) {
          CRYPTO_free(DAT_032187f8);
        }
        DAT_032187f8 = (char *)0x0;
        DAT_032187f8 = BUF_strdup(param_4);
        return DAT_032187f8 != (char *)0x0;
      }
      if (DAT_032187e0 == 0) {
        DAT_032187e0 = ERR_get_next_error_library();
      }
      reason = 100;
      line = 0xb2;
    }
  }
  else {
    if (DAT_032187e0 == 0) {
      DAT_032187e0 = ERR_get_next_error_library();
    }
    reason = 0x65;
    line = 0xb9;
  }
  ERR_put_error(DAT_032187e0,100,reason,"e_nuron.c",line);
  return false;
}




bool FUN_01ab49a4(undefined8 param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,BIGNUM *param_7,BN_CTX *param_8)

{
  bool bVar1;
  int iVar2;
  BIGNUM BStack_68;
  
  BN_init(&BStack_68);
  if (DAT_032187e8 == 0) {
LAB_01ab4a58:
    if (DAT_032187e0 == 0) {
      DAT_032187e0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032187e0,0x67,0x69,"e_nuron.c",0xc1);
  }
  else {
    iVar2 = (*DAT_032187f0)(param_2,param_3,param_4,param_7);
    if (iVar2 != 0) {
      if (DAT_032187e8 == 0) goto LAB_01ab4a58;
      iVar2 = (*DAT_032187f0)(&BStack_68,param_5,param_6,param_7);
      if (iVar2 != 0) {
        iVar2 = BN_mod_mul(param_2,param_2,&BStack_68,param_7,param_8);
        bVar1 = iVar2 != 0;
        goto LAB_01ab4a88;
      }
    }
  }
  bVar1 = false;
LAB_01ab4a88:
  BN_free(&BStack_68);
  return bVar1;
}




undefined8 FUN_01ab4dc4(undefined8 param_1)

{
  int iVar1;
  DSO_FUNC_TYPE pDVar2;
  DSO_FUNC_TYPE pDVar3;
  DSO_FUNC_TYPE pDVar4;
  DSO_FUNC_TYPE pDVar5;
  DSO_FUNC_TYPE pDVar6;
  DSO_FUNC_TYPE pDVar7;
  DSO_FUNC_TYPE pDVar8;
  DSO_FUNC_TYPE pDVar9;
  DSO_FUNC_TYPE pDVar10;
  DSO_FUNC_TYPE pDVar11;
  DSO_FUNC_TYPE pDVar12;
  DSO_FUNC_TYPE pDVar13;
  DSO_FUNC_TYPE pDVar14;
  char local_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0x74696e;
  builtin_strncpy(local_a0,"ENGINE_i",8);
  uStack_88 = 0;
  uStack_90 = 0;
  if (DAT_03218850 == (DSO *)0x0) {
    DAT_03218850 = DSO_load((DSO *)0x0,"SureWareHook",(DSO_METHOD *)0x0,0);
    if (DAT_03218850 == (DSO *)0x0) {
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218810,0x68,0x68,"e_sureware.c",0x1df);
    }
    else {
      pDVar2 = DSO_bind_func(DAT_03218850,"SureWareHook_Init");
      if (((((pDVar2 == (DSO_FUNC_TYPE)0x0) ||
            (pDVar3 = DSO_bind_func(DAT_03218850,"SureWareHook_Finish"),
            pDVar3 == (DSO_FUNC_TYPE)0x0)) ||
           (pDVar4 = DSO_bind_func(DAT_03218850,"SureWareHook_Rand_Bytes"),
           pDVar4 == (DSO_FUNC_TYPE)0x0)) ||
          (((pDVar5 = DSO_bind_func(DAT_03218850,"SureWareHook_Rand_Seed"),
            pDVar5 == (DSO_FUNC_TYPE)0x0 ||
            (pDVar6 = DSO_bind_func(DAT_03218850,"SureWareHook_Load_Privkey"),
            pDVar6 == (DSO_FUNC_TYPE)0x0)) ||
           ((pDVar7 = DSO_bind_func(DAT_03218850,"SureWareHook_Load_Rsa_Pubkey"),
            pDVar7 == (DSO_FUNC_TYPE)0x0 ||
            ((pDVar8 = DSO_bind_func(DAT_03218850,"SureWareHook_Free"), pDVar8 == (DSO_FUNC_TYPE)0x0
             || (pDVar9 = DSO_bind_func(DAT_03218850,"SureWareHook_Rsa_Priv_Dec"),
                pDVar9 == (DSO_FUNC_TYPE)0x0)))))))) ||
         ((pDVar10 = DSO_bind_func(DAT_03218850,"SureWareHook_Rsa_Sign"),
          pDVar10 == (DSO_FUNC_TYPE)0x0 ||
          ((((pDVar11 = DSO_bind_func(DAT_03218850,"SureWareHook_Dsa_Sign"),
             pDVar11 == (DSO_FUNC_TYPE)0x0 ||
             (pDVar12 = DSO_bind_func(DAT_03218850,"SureWareHook_Info_Pubkey"),
             pDVar12 == (DSO_FUNC_TYPE)0x0)) ||
            (pDVar13 = DSO_bind_func(DAT_03218850,"SureWareHook_Load_Dsa_Pubkey"),
            pDVar13 == (DSO_FUNC_TYPE)0x0)) ||
           (pDVar14 = DSO_bind_func(DAT_03218850,"SureWareHook_Mod_Exp"),
           pDVar14 == (DSO_FUNC_TYPE)0x0)))))) {
        if (DAT_03218810 == 0) {
          DAT_03218810 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_03218810,0x68,0x68,"e_sureware.c",0x209);
      }
      else {
        DAT_03218818 = pDVar10;
        DAT_03218828 = pDVar9;
        DAT_03218830 = pDVar14;
        DAT_03218838 = pDVar11;
        DAT_03218840 = pDVar5;
        DAT_03218848 = pDVar4;
        DAT_03218858 = pDVar2;
        DAT_03218860 = pDVar3;
        DAT_03218868 = pDVar6;
        DAT_03218870 = pDVar7;
        DAT_03218878 = pDVar8;
        DAT_03218880 = pDVar12;
        DAT_03218888 = pDVar13;
        iVar1 = (*pDVar2)(local_a0,(ulong)(~(uint)DAT_03218804 & 1));
        if (iVar1 == -3) {
          if (DAT_03218810 == 0) {
            DAT_03218810 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_03218810,0x68,0x68,"e_sureware.c",0x21c);
        }
        else {
          iVar1 = (*DAT_03218858)(local_a0,(ulong)(~(uint)DAT_03218804 & 1));
          if (iVar1 != -3) {
            FUN_01ab5408(param_1,0,0,0);
            if (DAT_02c041c0 == -1) {
              DAT_02c041c0 = RSA_get_ex_new_index
                                       (0,"SureWareHook RSA key handle",(undefined1 *)0x0,
                                        (undefined1 *)0x0,&LAB_01ab61b0);
            }
            if (DAT_02c041c4 == -1) {
              DAT_02c041c4 = DSA_get_ex_new_index
                                       (0,"SureWareHook DSA key handle",(undefined1 *)0x0,
                                        (undefined1 *)0x0,&LAB_01ab61b0);
            }
            return 1;
          }
          if (DAT_03218810 == 0) {
            DAT_03218810 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_03218810,0x68,0x68,"e_sureware.c",0x220);
        }
      }
    }
  }
  else {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x68,100,"e_sureware.c",0x1d9);
  }
  if (DAT_03218850 != (DSO *)0x0) {
    DSO_free(DAT_03218850);
  }
  DAT_03218888 = (DSO_FUNC_TYPE)0x0;
  DAT_03218880 = (DSO_FUNC_TYPE)0x0;
  DAT_03218878 = (DSO_FUNC_TYPE)0x0;
  DAT_03218870 = (DSO_FUNC_TYPE)0x0;
  DAT_03218868 = (DSO_FUNC_TYPE)0x0;
  DAT_03218860 = (DSO_FUNC_TYPE)0x0;
  DAT_03218858 = (DSO_FUNC_TYPE)0x0;
  DAT_03218850 = (DSO *)0x0;
  DAT_03218848 = (DSO_FUNC_TYPE)0x0;
  DAT_03218840 = (DSO_FUNC_TYPE)0x0;
  DAT_03218838 = (DSO_FUNC_TYPE)0x0;
  DAT_03218830 = (DSO_FUNC_TYPE)0x0;
  DAT_03218828 = (DSO_FUNC_TYPE)0x0;
  DAT_03218818 = (DSO_FUNC_TYPE)0x0;
  return 0;
}

