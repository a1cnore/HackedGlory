// functions/01a7b — 3 functions
#include "libGameKindred.h"




int FUN_01a7b00c(code *param_1,long param_2,uint param_3,_union_257 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char local_74 [4];
  byte *local_70;
  ASN1_TYPE local_68;
  char local_54;
  char local_53;
  
  local_74[0] = '\0';
  iVar2 = (param_4.asn1_string)->type;
  iVar1 = 0;
  if ((param_3 >> 6 & 1) != 0) {
    __s = ASN1_tag2str(iVar2);
    sVar4 = strlen(__s);
    iVar1 = (*param_1)(param_2,__s,sVar4 & 0xffffffff);
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = (*param_1)(param_2,":",1);
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = (int)sVar4 + 1;
  }
  if ((param_3 >> 7 & 1) == 0) {
    if ((param_3 >> 5 & 1) == 0) {
      if (iVar2 - 1U < 0x1e) {
        uVar8 = (uint)(char)(&DAT_01e45a08)[iVar2];
      }
      else {
        uVar8 = 0xffffffff;
      }
      uVar7 = uVar8;
      if (uVar8 == 0xffffffff && (param_3 & 0x100) == 0) {
        uVar7 = 1;
      }
      if (((param_3 >> 8 & 1) != 0) && (uVar8 == 0xffffffff)) goto LAB_01a7b18c;
    }
    else {
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if (((param_3 >> 4 & 1) != 0) && (uVar8 = uVar7 | 8, uVar7 == 0)) {
      uVar8 = 1;
    }
    iVar2 = FUN_01a7b3e4((param_4.asn1_string)->data,(param_4.asn1_string)->length,uVar8,
                         param_3 & 0xf,local_74,param_1,0);
    if (-1 < iVar2) {
      iVar3 = iVar2 + iVar1;
      if (local_74[0] != '\0') {
        iVar3 = iVar2 + iVar1 + 2;
      }
      if (param_2 == 0) {
        return iVar3;
      }
      if (((local_74[0] == '\0') || (iVar1 = (*param_1)(param_2,&DAT_01e277f9,1), iVar1 != 0)) &&
         (iVar1 = FUN_01a7b3e4((param_4.asn1_string)->data,(param_4.asn1_string)->length,uVar8,
                               param_3 & 0xf,0,param_1,param_2), -1 < iVar1)) {
        if (local_74[0] == '\0') {
          return iVar3;
        }
        iVar1 = (*param_1)(param_2,&DAT_01e277f9,1);
        if (iVar1 != 0) {
          return iVar3;
        }
      }
    }
  }
  else {
LAB_01a7b18c:
    iVar2 = (*param_1)(param_2,&DAT_01b9349c,1);
    if (iVar2 != 0) {
      if ((param_3 >> 9 & 1) == 0) {
        iVar2 = (param_4.asn1_string)->length;
        lVar6 = (long)iVar2;
        if (param_2 != 0) {
          if (iVar2 == 0) {
            return iVar1 + 1;
          }
          pbVar5 = (param_4.asn1_string)->data;
          do {
            local_54 = "0123456789ABCDEF"[*pbVar5 >> 4];
            local_53 = "0123456789ABCDEF"[(ulong)*pbVar5 & 0xf];
            iVar3 = (*param_1)(param_2,&local_54,2);
            if (iVar3 == 0) {
              return -1;
            }
            lVar6 = lVar6 + -1;
            pbVar5 = pbVar5 + 1;
          } while (lVar6 != 0);
        }
        if (iVar2 << 1 < 0) {
          return -1;
        }
        uVar7 = iVar2 << 1 | 1;
      }
      else {
        local_68.type = (param_4.asn1_string)->type;
        local_68.value = param_4;
        iVar2 = i2d_ASN1_TYPE(&local_68,(uchar **)0x0);
        pbVar5 = CRYPTO_malloc(iVar2,"a_strex.c",0x13d);
        if (pbVar5 == (byte *)0x0) {
          return -1;
        }
        local_70 = pbVar5;
        i2d_ASN1_TYPE(&local_68,&local_70);
        if ((param_2 != 0) && (iVar2 != 0)) {
          lVar6 = (long)iVar2;
          pbVar9 = pbVar5;
          do {
            local_54 = "0123456789ABCDEF"[*pbVar9 >> 4];
            local_53 = "0123456789ABCDEF"[(ulong)*pbVar9 & 0xf];
            iVar3 = (*param_1)(param_2,&local_54,2);
            if (iVar3 == 0) {
              CRYPTO_free(pbVar5);
              return -1;
            }
            lVar6 = lVar6 + -1;
            pbVar9 = pbVar9 + 1;
          } while (lVar6 != 0);
        }
        CRYPTO_free(pbVar5);
        if (iVar2 * 2 < 0) {
          return -1;
        }
        uVar7 = iVar2 * 2 + 1;
      }
      if (-1 < (int)uVar7) {
        return uVar7 + iVar1;
      }
    }
  }
  return -1;
}




int FUN_01a7b3e4(byte *param_1,int param_2,uint param_3,uint param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  uchar local_70 [8];
  ulong local_68;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    pbVar1 = param_1 + param_2;
    if ((param_3 & 7) == 4) {
      iVar7 = 0;
      pbVar6 = param_1;
      do {
        bVar2 = (param_4 & 1) != 0;
        pbVar9 = pbVar6 + 4;
        uVar5 = 0;
        if (bVar2 && pbVar6 == param_1) {
          uVar5 = 0x20;
        }
        local_68 = (ulong)*pbVar6 << 0x18 | (ulong)pbVar6[1] << 0x10 | (ulong)pbVar6[2] << 8 |
                   (ulong)pbVar6[3];
        if (bVar2 && pbVar9 == pbVar1) {
          uVar5 = 0x40;
        }
        if ((param_3 >> 3 & 1) == 0) {
          iVar3 = FUN_01a7b698(local_68,uVar5 | param_4,param_5,param_6,param_7);
          if (iVar3 < 0) {
            return -1;
          }
          iVar7 = iVar3 + iVar7;
        }
        else {
          iVar3 = UTF8_putc(local_70,6,local_68);
          if (0 < iVar3) {
            lVar8 = 0;
            do {
              iVar4 = FUN_01a7b698(local_70[lVar8],uVar5 | param_4,param_5,param_6,param_7);
              if (iVar4 < 0) {
                return -1;
              }
              lVar8 = lVar8 + 1;
              iVar7 = iVar4 + iVar7;
            } while (lVar8 < iVar3);
          }
        }
        pbVar6 = pbVar9;
      } while (pbVar9 != pbVar1);
    }
    else {
      iVar7 = 0;
      pbVar6 = param_1;
      do {
        while( true ) {
          uVar5 = 0;
          if (pbVar6 == param_1 && (param_4 & 1) != 0) {
            uVar5 = 0x20;
          }
          if ((param_3 & 7) == 0) {
            iVar3 = UTF8_getc(pbVar6,param_2,&local_68);
            if (iVar3 < 0) {
              return -1;
            }
            pbVar9 = pbVar6 + iVar3;
          }
          else if ((param_3 & 7) == 1) {
            pbVar9 = pbVar6 + 1;
            local_68 = (ulong)*pbVar6;
          }
          else {
            if ((param_3 & 7) != 2) {
              return -1;
            }
            pbVar9 = pbVar6 + 2;
            local_68 = (ulong)CONCAT11(*pbVar6,pbVar6[1]);
          }
          if (pbVar9 == pbVar1 && (param_4 & 1) != 0) {
            uVar5 = 0x40;
          }
          pbVar6 = pbVar9;
          if ((param_3 >> 3 & 1) != 0) break;
          iVar3 = FUN_01a7b698(local_68,uVar5 | param_4,param_5,param_6,param_7);
          if (iVar3 < 0) {
            return -1;
          }
          iVar7 = iVar3 + iVar7;
          if (pbVar9 == pbVar1) {
            return iVar7;
          }
        }
        iVar3 = UTF8_putc(local_70,6,local_68);
        if (0 < iVar3) {
          lVar8 = 0;
          do {
            iVar4 = FUN_01a7b698(local_70[lVar8],uVar5 | param_4,param_5,param_6,param_7);
            if (iVar4 < 0) {
              return -1;
            }
            lVar8 = lVar8 + 1;
            iVar7 = iVar4 + iVar7;
          } while (lVar8 < iVar3);
        }
      } while (pbVar9 != pbVar1);
    }
  }
  return iVar7;
}




undefined4
FUN_01a7b698(ulong param_1,uint param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char acStack_44 [20];
  undefined1 local_24 [4];
  
  if (param_1 >> 0x20 != 0) {
    return 0xffffffff;
  }
  if (param_1 < 0x10000) {
    if (0xff < param_1) {
      BIO_snprintf(acStack_44,0x13,"\\U%04lX");
      pcVar3 = acStack_44;
      uVar4 = 6;
      uVar6 = 6;
      goto LAB_01a7b71c;
    }
    uVar5 = (uint)param_1;
    local_24[0] = (undefined1)param_1;
    if ((uVar5 >> 7 & 1) == 0) {
      uVar1 = (byte)(&DAT_01e45a27)[param_1 & 0xff] & param_2;
      if ((uVar1 & 0x61) != 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          iVar2 = (*param_4)(param_5,&DAT_01e45acc,1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          iVar2 = (*param_4)(param_5,local_24,1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 2;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        goto LAB_01a7b7f8;
      }
    }
    else {
      uVar1 = param_2 & 4;
    }
    if ((uVar1 & 6) == 0) {
      if (((uVar5 & 0xff) != 0x5c) || ((param_2 & 0xf) == 0)) {
LAB_01a7b7f8:
        iVar2 = (*param_4)(param_5,local_24,1);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        return 1;
      }
      pcVar3 = "\\\\";
      uVar4 = 2;
      uVar6 = 2;
    }
    else {
      BIO_snprintf(acStack_44,0xb,"\\%02X",(ulong)(uVar5 & 0xff));
      pcVar3 = acStack_44;
      uVar4 = 3;
      uVar6 = 3;
    }
  }
  else {
    BIO_snprintf(acStack_44,0x13,"\\W%08lX");
    pcVar3 = acStack_44;
    uVar4 = 10;
    uVar6 = 10;
  }
LAB_01a7b71c:
  iVar2 = (*param_4)(param_5,pcVar3,uVar4);
  if (iVar2 == 0) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

