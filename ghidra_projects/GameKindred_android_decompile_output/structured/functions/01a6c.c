// functions/01a6c — 1 functions
#include "libGameKindred.h"




ulong FUN_01a6cd64(int param_1,int param_2,undefined8 *param_3,int *param_4,undefined8 *param_5,
                  int *param_6)

{
  uint uVar1;
  ERR_STATE *pEVar2;
  int iVar3;
  int iVar4;
  char *ptr;
  ulong uVar5;
  
  pEVar2 = ERR_get_state();
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar4 = pEVar2->bottom;
    iVar3 = pEVar2->top;
    uVar5 = 0;
    if (iVar4 != iVar3) {
      if (param_2 == 0) {
        uVar1 = iVar4 + 0x10;
        if (-1 < iVar4 + 1) {
          uVar1 = iVar4 + 1;
        }
        iVar3 = (iVar4 + 1) - (uVar1 & 0xfffffff0);
      }
      uVar5 = pEVar2->err_buffer[iVar3];
      if (param_1 != 0) {
        pEVar2->bottom = iVar3;
        pEVar2->err_buffer[iVar3] = 0;
      }
      if ((param_3 != (undefined8 *)0x0) && (param_4 != (int *)0x0)) {
        if (pEVar2->err_file[iVar3] == (char *)0x0) {
          *param_3 = &DAT_01e3aae1;
          iVar4 = 0;
        }
        else {
          *param_3 = pEVar2->err_file[iVar3];
          iVar4 = pEVar2->err_line[iVar3];
        }
        *param_4 = iVar4;
      }
      if (param_5 == (undefined8 *)0x0) {
        if (param_1 != 0) {
          ptr = pEVar2->err_data[iVar3];
          if ((ptr != (char *)0x0) && ((pEVar2->err_data_flags[iVar3] & 1) != 0)) {
            CRYPTO_free(ptr);
            pEVar2->err_data[iVar3] = (char *)0x0;
          }
          pEVar2->err_data_flags[iVar3] = 0;
        }
      }
      else if (pEVar2->err_data[iVar3] == (char *)0x0) {
        *param_5 = &DAT_01e277f2;
        if (param_6 != (int *)0x0) {
          *param_6 = 0;
        }
      }
      else {
        *param_5 = pEVar2->err_data[iVar3];
        if (param_6 != (int *)0x0) {
          *param_6 = pEVar2->err_data_flags[iVar3];
        }
      }
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = &DAT_01e277f2;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = &DAT_01e277f2;
    }
    if (param_6 == (int *)0x0) {
      uVar5 = 0x44;
    }
    else {
      *param_6 = 0;
      uVar5 = 0x44;
    }
  }
  return uVar5;
}

