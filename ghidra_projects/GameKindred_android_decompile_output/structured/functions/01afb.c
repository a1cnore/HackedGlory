// functions/01afb — 1 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01afbe84(BIGNUM *param_1,EVP_PKEY *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  DH *dh;
  BIGNUM *pBVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uchar local_140 [8];
  undefined8 uStack_138;
  uchar auStack_130 [8];
  undefined8 auStack_128 [9];
  undefined1 auStack_df [16];
  undefined1 auStack_cf [15];
  uchar auStack_c0 [128];
  
  dh = DH_new();
  if (dh == (DH *)0x0) {
    return 0;
  }
  memset(local_140,0,0x80);
  pBVar4 = BN_dup(((param_2->pkey).rsa)->e);
  dh->g = pBVar4;
  pBVar4 = BN_dup(((param_2->pkey).dsa)->p);
  dh->p = pBVar4;
  pBVar4 = BN_dup(param_1);
  dh->priv_key = pBVar4;
  pvVar5 = EVP_PKEY_get0(param_2);
  uVar3 = DH_compute_key(auStack_c0,*(BIGNUM **)((long)pvVar5 + 0x30),dh);
  if (uVar3 == 0) {
    DH_free(dh);
    return 0;
  }
  uVar11 = (ulong)uVar3;
  memset(local_140,0,0x80);
  if (0 < (int)uVar3) {
    uVar6 = 0;
    if (0x1f < uVar3) {
      iVar7 = uVar3 - 1;
      if (iVar7 < iVar7 - (int)(uVar11 - 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if (uVar11 - 1 >> 0x20 == 0) {
          uVar6 = uVar11 & 0xffffffe0;
          puVar9 = local_140 + 0x10;
          uVar10 = uVar6;
          do {
            lVar1 = (long)iVar7;
            lVar2 = (long)iVar7;
            uVar10 = uVar10 - 0x20;
            iVar7 = iVar7 + -0x20;
            auVar12 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(auStack_cf + lVar1),_DAT_01e44180);
            auVar13 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(auStack_df + lVar2),_DAT_01e44180);
            *(long *)(puVar9 + -8) = auVar12._8_8_;
            *(long *)(puVar9 + -0x10) = auVar12._0_8_;
            *(long *)(puVar9 + 8) = auVar13._8_8_;
            *(long *)puVar9 = auVar13._0_8_;
            puVar9 = puVar9 + 0x20;
          } while (uVar10 != 0);
          if (uVar6 == uVar11) goto LAB_01afbfe4;
        }
      }
    }
    uVar8 = ~(uint)uVar6;
    do {
      iVar7 = uVar3 + uVar8;
      uVar8 = uVar8 - 1;
      local_140[uVar6] = auStack_c0[iVar7];
      uVar6 = uVar6 + 1;
    } while (uVar11 != uVar6);
  }
LAB_01afbfe4:
  DH_free(dh);
  if (uVar3 == 0) {
                    /* WARNING: Read-only address (ram,0x01e44180) is written */
                    /* WARNING: Read-only address (ram,0x01e44180) is written */
    return 0;
  }
  init_gost_hash_ctx(auStack_c0,GostR3411_94_CryptoProParamSet);
  start_hash(auStack_c0);
  hash_block(auStack_c0,local_140,0x80);
  finish_hash(auStack_c0,param_3);
  done_gost_hash_ctx(auStack_c0);
  return 1;
}

