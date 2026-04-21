// functions/01a9f — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a9ffc8(undefined8 param_1,_STACK *param_2,BIO *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ASN1_GENERALIZEDTIME *s;
  uchar *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  char acStack_74 [20];
  
  iVar4 = sk_num(param_2);
  if (0 < iVar4) {
    iVar4 = 0;
    uVar1 = param_4 + 4;
    uVar2 = param_4 + 0x10;
    do {
      puVar6 = sk_value(param_2,iVar4);
      BIO_printf(param_3,"%*sSigned Certificate Timestamp:",(ulong)param_4,&DAT_01e277f2);
      BIO_printf(param_3,"\n%*sVersion   : ",(ulong)uVar1,&DAT_01e277f2);
      if (*(char *)((long)puVar6 + 10) == '\0') {
        BIO_printf(param_3,"v1(0)");
        BIO_printf(param_3,"\n%*sLog ID    : ",(ulong)uVar1,&DAT_01e277f2);
        BIO_hex_string(param_3,uVar2,0x10,puVar6[2],*(undefined2 *)(puVar6 + 3));
        BIO_printf(param_3,"\n%*sTimestamp : ",(ulong)uVar1,&DAT_01e277f2);
        uVar10 = puVar6[4];
        s = ASN1_GENERALIZEDTIME_new();
        ASN1_GENERALIZEDTIME_adj(s,0,(int)(uVar10 / 86400000),(uVar10 % 86400000) / 1000);
        puVar7 = ASN1_STRING_data(s);
        BIO_snprintf(acStack_74,0x14,"%.14s.%03dZ",puVar7,
                     (ulong)(uint)((int)uVar10 + (int)(uVar10 / 1000) * -1000));
        ASN1_GENERALIZEDTIME_set_string(s,acStack_74);
        ASN1_GENERALIZEDTIME_print(param_3,s);
        ASN1_GENERALIZEDTIME_free(s);
        BIO_printf(param_3,"\n%*sExtensions: ",(ulong)uVar1,&DAT_01e277f2);
        if (*(short *)(puVar6 + 6) == 0) {
          BIO_printf(param_3,"none");
        }
        else {
          BIO_hex_string(param_3,uVar2,0x10,puVar6[5]);
        }
        BIO_printf(param_3,"\n%*sSignature : ",(ulong)uVar1,&DAT_01e277f2);
        if (*(char *)((long)puVar6 + 0x32) == '\x04') {
          if (*(char *)((long)puVar6 + 0x33) == '\x01') {
            iVar5 = 0x29c;
          }
          else {
            if (*(char *)((long)puVar6 + 0x33) != '\x03') goto LAB_01aa0218;
            iVar5 = 0x31a;
          }
          pcVar8 = OBJ_nid2ln(iVar5);
          BIO_printf(param_3,"%s",pcVar8);
        }
        else {
LAB_01aa0218:
          BIO_printf(param_3,"%02X%02X");
        }
        BIO_printf(param_3,"\n%*s            ",(ulong)uVar1,&DAT_01e277f2);
        uVar9 = puVar6[7];
        uVar3 = *(undefined2 *)(puVar6 + 8);
      }
      else {
        BIO_printf(param_3,"unknown\n%*s",(ulong)uVar2,&DAT_01e277f2);
        uVar9 = *puVar6;
        uVar3 = *(undefined2 *)(puVar6 + 1);
      }
      BIO_hex_string(param_3,uVar2,0x10,uVar9,uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = sk_num(param_2);
      if (iVar4 < iVar5) {
        BIO_printf(param_3,"\n");
      }
      iVar5 = sk_num(param_2);
    } while (iVar4 < iVar5);
  }
  return 1;
}

