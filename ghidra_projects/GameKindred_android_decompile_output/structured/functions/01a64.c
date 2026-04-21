// functions/01a64 — 1 functions
#include "libGameKindred.h"




bool FUN_01a642ec(ENGINE *param_1,undefined4 param_2,ulong param_3,char *param_4,undefined1 *param_5
                 )

{
  int iVar1;
  int iVar2;
  int mode;
  uint uVar3;
  long *plVar4;
  long *__s;
  _STACK *p_Var5;
  void *pvVar6;
  DSO *pDVar7;
  DSO_FUNC_TYPE pDVar8;
  int *num;
  CRYPTO_dynlock_value *l;
  ulong uVar9;
  int type;
  int mount;
  int line;
  char *pcVar10;
  CRYPTO_dynlock_value *l_00;
  char *file;
  f **f;
  char *file_00;
  int iVar11;
  long lVar12;
  void *local_180;
  ERR_FNS *local_178;
  CRYPTO_EX_DATA_IMPL *local_170;
  m *pmStack_168;
  r *prStack_160;
  f *apfStack_158 [2];
  char *local_148;
  CRYPTO_dynlock_value *local_140;
  undefined1 auStack_128 [216];
  
  if (DAT_02bfca68 < 0) {
    param_5 = &LAB_01a649a0;
    iVar1 = ENGINE_get_ex_new_index(0,(void *)0x0,(undefined1 *)0x0,(undefined1 *)0x0,&LAB_01a649a0)
    ;
    if (iVar1 == -1) {
      ERR_put_error(0x26,0xb5,0x90,"eng_dyn.c",0x10d);
      goto LAB_01a64538;
    }
    CRYPTO_lock(9,0x1e,"eng_dyn.c",0x110);
    if (DAT_02bfca68 < 0) {
      DAT_02bfca68 = iVar1;
    }
    CRYPTO_lock(10,0x1e,"eng_dyn.c",0x117);
    plVar4 = ENGINE_get_ex_data(param_1,DAT_02bfca68);
    if (plVar4 == (long *)0x0) goto LAB_01a643d0;
LAB_01a64334:
    lVar12 = *plVar4;
  }
  else {
    plVar4 = ENGINE_get_ex_data(param_1,DAT_02bfca68);
    if (plVar4 != (long *)0x0) goto LAB_01a64334;
LAB_01a643d0:
    __s = CRYPTO_malloc(0x58,"eng_dyn.c",0xd2);
    if (__s == (long *)0x0) {
      ERR_put_error(0x26,0xb7,0x41,"eng_dyn.c",0xd4);
LAB_01a64538:
      iVar1 = 0xb4;
      iVar2 = 0x70;
      iVar11 = 0x162;
      goto LAB_01a64550;
    }
    memset(__s,0,0x58);
    __s[8] = (long)"bind_engine";
    __s[7] = (long)"v_check";
    *(undefined4 *)(__s + 9) = 1;
    p_Var5 = sk_new_null();
    __s[10] = (long)p_Var5;
    if (p_Var5 == (_STACK *)0x0) {
      ERR_put_error(0x26,0xb7,0x41,"eng_dyn.c",0xe4);
      CRYPTO_free(__s);
      goto LAB_01a64538;
    }
    CRYPTO_lock(9,0x1e,"eng_dyn.c",0xe8);
    plVar4 = ENGINE_get_ex_data(param_1,DAT_02bfca68);
    if (plVar4 == (long *)0x0) {
      ENGINE_set_ex_data(param_1,DAT_02bfca68,__s);
      CRYPTO_lock(10,0x1e,"eng_dyn.c",0xf1);
      lVar12 = *__s;
      plVar4 = __s;
    }
    else {
      CRYPTO_lock(10,0x1e,"eng_dyn.c",0xf1);
      sk_free((_STACK *)__s[10]);
      CRYPTO_free(__s);
      lVar12 = *plVar4;
    }
  }
  if (lVar12 != 0) {
    iVar1 = 0xb4;
    iVar2 = 100;
    iVar11 = 0x168;
    goto LAB_01a64550;
  }
  switch(param_2) {
  case 200:
    if (param_4 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pvVar6 = (void *)plVar4[3];
    }
    else {
      pcVar10 = (char *)0x0;
      if (*param_4 != '\0') {
        pcVar10 = param_4;
      }
      pvVar6 = (void *)plVar4[3];
    }
    if (pvVar6 != (void *)0x0) {
      CRYPTO_free(pvVar6);
    }
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar10 = BUF_strdup(pcVar10);
    }
    plVar4[3] = (long)pcVar10;
    goto LAB_01a64874;
  case 0xc9:
    *(uint *)(plVar4 + 4) = (uint)(param_3 != 0);
    return true;
  case 0xca:
    if (param_4 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pvVar6 = (void *)plVar4[5];
    }
    else {
      pcVar10 = (char *)0x0;
      if (*param_4 != '\0') {
        pcVar10 = param_4;
      }
      pvVar6 = (void *)plVar4[5];
    }
    if (pvVar6 != (void *)0x0) {
      CRYPTO_free(pvVar6);
    }
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      plVar4[5] = 0;
    }
    else {
      pcVar10 = BUF_strdup(pcVar10);
      plVar4[5] = (long)pcVar10;
    }
LAB_01a64874:
    return pcVar10 != (char *)0x0;
  case 0xcb:
    if (param_3 < 3) {
      *(int *)(plVar4 + 6) = (int)param_3;
      return true;
    }
    iVar1 = 0xb4;
    iVar2 = 0x8f;
    iVar11 = 0x187;
    break;
  case 0xcc:
    if (param_3 < 3) {
      *(int *)(plVar4 + 9) = (int)param_3;
      return true;
    }
    iVar1 = 0xb4;
    iVar2 = 0x8f;
    iVar11 = 400;
    break;
  case 0xcd:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      iVar1 = 0xb4;
      iVar2 = 0x8f;
      iVar11 = 0x198;
    }
    else {
      pcVar10 = BUF_strdup(param_4);
      if (pcVar10 != (char *)0x0) {
        sk_insert((_STACK *)plVar4[10],pcVar10,-1);
        return true;
      }
      iVar1 = 0xb4;
      iVar2 = 0x41;
      iVar11 = 0x19e;
    }
    break;
  case 0xce:
    pDVar7 = DSO_new();
    pcVar10 = (char *)plVar4[3];
    *plVar4 = (long)pDVar7;
    if (pcVar10 == (char *)0x0) {
      if ((char *)plVar4[5] == (char *)0x0) {
        return false;
      }
      pcVar10 = DSO_convert_filename(pDVar7,(char *)plVar4[5]);
      plVar4[3] = (long)pcVar10;
    }
    if ((int)plVar4[9] != 2) {
      file_00 = (char *)0x0;
      pDVar7 = DSO_load((DSO *)*plVar4,pcVar10,(DSO_METHOD *)0x0,0);
      iVar1 = (int)param_5;
      if (pDVar7 != (DSO *)0x0) {
LAB_01a64760:
        pDVar8 = DSO_bind_func((DSO *)*plVar4,(char *)plVar4[8]);
        plVar4[2] = (long)pDVar8;
        if (pDVar8 == (DSO_FUNC_TYPE)0x0) {
          plVar4[2] = 0;
          DSO_free((DSO *)*plVar4);
          *plVar4 = 0;
          iVar1 = 0xb6;
          iVar2 = 0x68;
          iVar11 = 0x1e0;
        }
        else {
          if ((int)plVar4[4] == 0) {
            pDVar8 = DSO_bind_func((DSO *)*plVar4,(char *)plVar4[7]);
            plVar4[1] = (long)pDVar8;
            if ((pDVar8 == (DSO_FUNC_TYPE)0x0) || (uVar9 = (*pDVar8)(0x20000), uVar9 >> 0x11 == 0))
            {
              plVar4[1] = 0;
              plVar4[2] = 0;
              DSO_free((DSO *)*plVar4);
              *plVar4 = 0;
              iVar1 = 0xb6;
              iVar2 = 0x91;
              iVar11 = 0x1fb;
              break;
            }
          }
          memcpy(auStack_128,param_1,0xd8);
          local_180 = ENGINE_get_static_state();
          local_178 = ERR_get_implementation();
          local_170 = CRYPTO_get_ex_data_implementation();
          f = apfStack_158;
          CRYPTO_get_mem_functions(&pmStack_168,&prStack_160,f);
          CRYPTO_get_locking_callback(mode,type,(char *)f,(int)file_00);
          uVar3 = CRYPTO_get_add_lock_callback(num,mount,(int)f,file_00,iVar1);
          iVar1 = (int)file_00;
          local_148 = (char *)(ulong)uVar3;
          local_140 = CRYPTO_get_dynlock_create_callback(local_148,line);
          CRYPTO_get_dynlock_lock_callback((int)local_140,l_00,(char *)f,iVar1);
          CRYPTO_get_dynlock_destroy_callback(l,file,(int)f);
          engine_set_all_null(param_1);
          iVar1 = (*(code *)plVar4[2])(param_1,plVar4[5],&local_180);
          if (iVar1 == 0) {
            plVar4[1] = 0;
            plVar4[2] = 0;
            DSO_free((DSO *)*plVar4);
            *plVar4 = 0;
            ERR_put_error(0x26,0xb6,0x6d,"eng_dyn.c",0x221);
            memcpy(param_1,auStack_128,0xd8);
            return false;
          }
          if (((int)plVar4[6] < 1) || (iVar1 = ENGINE_add(param_1), iVar1 != 0)) {
            return true;
          }
          if ((int)plVar4[6] < 2) {
            ERR_clear_error();
            return true;
          }
          iVar1 = 0xb6;
          iVar2 = 0x67;
          iVar11 = 0x232;
        }
        break;
      }
      if ((int)plVar4[9] == 0) goto LAB_01a64888;
    }
    iVar2 = sk_num((_STACK *)plVar4[10]);
    if (0 < iVar2) {
      iVar11 = 0;
      do {
        pcVar10 = sk_value((_STACK *)plVar4[10],iVar11);
        pcVar10 = DSO_merge((DSO *)*plVar4,(char *)plVar4[3],pcVar10);
        if (pcVar10 == (char *)0x0) break;
        file_00 = (char *)0x0;
        pDVar7 = DSO_load((DSO *)*plVar4,pcVar10,(DSO_METHOD *)0x0,0);
        CRYPTO_free(pcVar10);
        iVar1 = (int)param_5;
        if (pDVar7 != (DSO *)0x0) goto LAB_01a64760;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar2);
    }
LAB_01a64888:
    ERR_put_error(0x26,0xb6,0x84,"eng_dyn.c",0x1d3);
    DSO_free((DSO *)*plVar4);
    *plVar4 = 0;
    return false;
  default:
    iVar1 = 0xb4;
    iVar2 = 0x77;
    iVar11 = 0x1a7;
  }
LAB_01a64550:
  ERR_put_error(0x26,iVar1,iVar2,"eng_dyn.c",iVar11);
  return false;
}

