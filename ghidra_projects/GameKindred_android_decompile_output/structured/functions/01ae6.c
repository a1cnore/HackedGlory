// functions/01ae6 — 1 functions
#include "libGameKindred.h"




ulong FUN_01ae6dc0(BIO *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  BUF_MEM *str;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uchar *local_a8 [2];
  uint local_98;
  int local_94;
  int aiStack_90 [2];
  ulong local_88 [5];
  
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    ERR_put_error(0xd,0x6b,0x41,"a_d2i_fp.c",0x9e);
  }
  else {
    ERR_clear_error();
    iVar10 = 0;
    uVar6 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        while( true ) {
          uVar8 = uVar7 - uVar6;
          if (uVar8 < 9) {
            uVar9 = 8 - uVar8;
            if ((CARRY8(uVar9,uVar7)) || (iVar4 = BUF_MEM_grow_clean(str,uVar9 + uVar7), iVar4 == 0)
               ) {
              iVar10 = 0x41;
              iVar4 = 0xa8;
              goto LAB_01ae6fe8;
            }
            iVar4 = BIO_read(param_1,str->data + uVar7,(int)uVar9);
            if ((uVar8 == 0) && (iVar4 < 0)) {
              iVar10 = 0x8e;
              iVar4 = 0xad;
              goto LAB_01ae6fe8;
            }
            if (0 < iVar4) {
              bVar3 = CARRY8(uVar7,(long)iVar4);
              uVar7 = uVar7 + (long)iVar4;
              if (bVar3) {
                iVar10 = 0x9b;
                iVar4 = 0xb2;
                goto LAB_01ae6fe8;
              }
              uVar8 = uVar7 - uVar6;
            }
          }
          pcVar5 = str->data;
          local_a8[0] = (uchar *)(pcVar5 + uVar6);
          local_98 = ASN1_get_object(local_a8,(long *)local_88,&local_94,aiStack_90,uVar8);
          if ((local_98 >> 7 & 1) != 0) {
            uVar8 = ERR_peek_error();
            if ((uVar8 & 0xfff) != 0x9b) goto LAB_01ae6fec;
            ERR_clear_error();
          }
          uVar6 = uVar6 + (long)((int)local_a8[0] - (int)(pcVar5 + uVar6));
          if ((local_98 & 1) == 0) break;
          if (iVar10 < -1) {
            iVar10 = 0x7b;
            iVar4 = 0xce;
            goto LAB_01ae6fe8;
          }
          iVar10 = iVar10 + 1;
        }
        if (((iVar10 == 0) || (local_88[0] != 0)) || (local_94 != 0)) break;
        if (iVar10 < 2) goto LAB_01ae7054;
        iVar10 = iVar10 + -1;
      }
      uVar8 = local_88[0] - (uVar7 - uVar6);
      if (uVar7 - uVar6 <= local_88[0] && uVar8 != 0) {
        if ((uVar8 >> 0x1f != 0) || (CARRY8(uVar8,uVar7))) {
          iVar10 = 0x9b;
          iVar4 = 0xe2;
          goto LAB_01ae6fe8;
        }
        if (uVar8 != 0) {
          uVar9 = 0x4000;
          do {
            uVar1 = uVar9;
            if (uVar8 <= uVar9) {
              uVar1 = uVar8;
            }
            iVar4 = BUF_MEM_grow_clean(str,uVar1 + uVar7);
            uVar2 = uVar1;
            if (iVar4 == 0) {
              iVar10 = 0x41;
              iVar4 = 0xef;
              goto LAB_01ae6fe8;
            }
            for (; uVar2 != 0; uVar2 = uVar2 - (long)iVar4) {
              iVar4 = BIO_read(param_1,str->data + uVar7,(int)uVar2);
              if (iVar4 < 1) {
                iVar10 = 0x8e;
                iVar4 = 0xf7;
                goto LAB_01ae6fe8;
              }
              uVar7 = uVar7 + (long)iVar4;
            }
            uVar8 = uVar8 - uVar1;
            uVar9 = uVar9 << (uVar9 < 0x3fffffff);
          } while (uVar8 != 0);
        }
      }
      bVar3 = CARRY8(local_88[0],uVar6);
      uVar6 = local_88[0] + uVar6;
      if (bVar3) {
        iVar10 = 0x9b;
        iVar4 = 0x106;
        goto LAB_01ae6fe8;
      }
    } while (0 < iVar10);
LAB_01ae7054:
    if (uVar6 >> 0x1f == 0) {
      *param_2 = str;
      goto LAB_01ae6ff8;
    }
    iVar10 = 0x9b;
    iVar4 = 0x112;
LAB_01ae6fe8:
    ERR_put_error(0xd,0x6b,iVar10,"a_d2i_fp.c",iVar4);
LAB_01ae6fec:
    BUF_MEM_free(str);
  }
  uVar6 = 0xffffffff;
LAB_01ae6ff8:
  return uVar6 & 0xffffffff;
}

