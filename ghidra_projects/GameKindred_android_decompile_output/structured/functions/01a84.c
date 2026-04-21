// functions/01a84 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a84504(BIO *param_1,uint param_2,uint param_3,ulong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_b0 [128];
  
  pcVar4 = acStack_b0;
  pcVar3 = "prim: ";
  if ((param_4 & 0x20) != 0) {
    pcVar3 = "cons: ";
  }
  iVar2 = BIO_write(param_1,pcVar3,6);
  if (iVar2 < 6) {
    return 0;
  }
  BIO_indent(param_1,param_5,0x80);
  if ((~param_3 & 0xc0) == 0) {
    pcVar3 = "priv [ %d ] ";
  }
  else if ((param_3 >> 7 & 1) == 0) {
    if ((param_3 >> 6 & 1) == 0) {
      if ((int)param_2 < 0x1f) {
        uVar1 = param_2 & 0xfffffeff;
        if ((param_2 | 8) != 0x10a) {
          uVar1 = param_2;
        }
        if (uVar1 < 0x1f) {
          pcVar4 = (&PTR_DAT_02bc2fa0)[(int)uVar1];
        }
        else {
          pcVar4 = "(unknown)";
        }
        goto LAB_01a845c8;
      }
      pcVar3 = "<ASN1 %d>";
    }
    else {
      pcVar3 = "appl [ %d ]";
    }
  }
  else {
    pcVar3 = "cont [ %d ]";
  }
  BIO_snprintf(acStack_b0,0x80,pcVar3,(ulong)param_2);
LAB_01a845c8:
  iVar2 = BIO_printf(param_1,"%-18s",pcVar4);
  if (iVar2 < 1) {
    return 0;
  }
  return 1;
}

