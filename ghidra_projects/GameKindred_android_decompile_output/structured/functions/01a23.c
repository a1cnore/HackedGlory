// functions/01a23 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01a23368(long param_1,X509 *param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  EVP_PKEY *pkey;
  EVP_MD *pEVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  char local_38 [8];
  
  pkey = X509_get_pubkey(param_2);
  if (pkey == (EVP_PKEY *)0x0) {
    return 0;
  }
  if (pkey->type != 0x198) {
    EVP_PKEY_free(pkey);
    return 1;
  }
  iVar3 = FUN_01a1e8c0(local_38,local_38 + 4,(pkey->pkey).ptr);
  EVP_PKEY_free(pkey);
  if (iVar3 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x130);
  pcVar2 = (char *)0x0;
  if (*(int *)(param_1 + 0x38) != 0) {
    pcVar2 = local_38;
  }
  if (*(long *)(lVar5 + 0x128) != 0) {
    uVar6 = *(ulong *)(lVar5 + 0x120);
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        if (local_38[4] == *(char *)(*(long *)(lVar5 + 0x128) + uVar10)) break;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
    }
    if (uVar10 == uVar6) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x38) == 0) goto LAB_01a23510;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x100) + 0x6c) & 0x30000;
  if (uVar1 == 0x30000) {
    uVar6 = 2;
    puVar7 = &DAT_01e2eec8;
  }
  else {
    if (uVar1 == 0x20000) {
      puVar7 = &DAT_01e2eeca;
    }
    else {
      if (uVar1 != 0x10000) {
        if (*(undefined1 **)(param_1 + 0x230) == (undefined1 *)0x0) {
          uVar6 = 0x1c;
          puVar7 = &DAT_01e2ee24;
          if (*(int *)(*(long *)(param_1 + 0x100) + 0x68) != 0) {
            uVar6 = 0xd;
            puVar7 = &DAT_01e2eecc;
          }
        }
        else {
          if ((*(ulong *)(param_1 + 0x228) & 1) != 0) goto LAB_01a23574;
          uVar6 = *(ulong *)(param_1 + 0x228) >> 1;
          puVar7 = *(undefined1 **)(param_1 + 0x230);
          if (uVar6 == 0) {
            return 0;
          }
        }
        goto LAB_01a23474;
      }
      puVar7 = &DAT_01e2eec8;
    }
    uVar6 = 1;
  }
LAB_01a23474:
  uVar10 = 0;
  pcVar8 = puVar7 + 1;
  do {
    if ((pcVar8[-1] == *pcVar2) && (*pcVar8 == pcVar2[1])) break;
    uVar10 = uVar10 + 1;
    pcVar8 = pcVar8 + 2;
  } while (uVar10 < uVar6);
  if (uVar10 == uVar6) {
    return 0;
  }
  if ((*(ulong *)(lVar5 + 0x130) & 1) != 0) {
LAB_01a23574:
    ERR_put_error(0x14,0x152,0x44,"t1_lib.c",0x200);
    return 0;
  }
  uVar6 = *(ulong *)(lVar5 + 0x130) >> 1;
  if (uVar6 != 0) {
    uVar10 = 0;
    pcVar8 = (char *)(*(long *)(lVar5 + 0x138) + 1);
    do {
      if ((pcVar8[-1] == *pcVar2) && (*pcVar8 == pcVar2[1])) break;
      uVar10 = uVar10 + 1;
      pcVar8 = pcVar8 + 2;
    } while (uVar10 < uVar6);
    if (uVar10 == uVar6) {
      return 0;
    }
  }
LAB_01a23510:
  if ((param_3 != 0) && (lVar5 = *(long *)(param_1 + 0x100), (*(byte *)(lVar5 + 0x6e) & 3) != 0)) {
    if (local_38[0] != '\0') {
      return 0;
    }
    if (local_38[1] == '\x17') {
      iVar3 = 0x31a;
      uVar6 = *(ulong *)(lVar5 + 0x278);
    }
    else {
      if (local_38[1] != '\x18') {
        return 0;
      }
      iVar3 = 0x31b;
      uVar6 = *(ulong *)(lVar5 + 0x278);
    }
    if (uVar6 == 0) {
      return 0;
    }
    uVar10 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0x270) + 8);
    do {
      if (iVar3 == *piVar9) break;
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 < uVar6);
    if (uVar10 == uVar6) {
      return 0;
    }
    if (param_3 == 2) {
      if (iVar3 == 0x31a) {
        pEVar4 = EVP_sha256();
      }
      else {
        pEVar4 = EVP_sha384();
      }
      *(EVP_MD **)(lVar5 + 0x198) = pEVar4;
    }
  }
  return 1;
}




undefined8
FUN_01a23dbc(ulong param_1,void *param_2,int param_3,void *param_4,int param_5,void *param_6,
            int param_7,void *param_8,int param_9,uchar *param_10,uint param_11,uchar *param_12,
            uchar *param_13,uint param_14)

{
  uint uVar1;
  bool bVar2;
  EVP_MD *type;
  int iVar3;
  int iVar4;
  int iVar5;
  EVP_PKEY *pkey;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uchar *puVar10;
  byte *pbVar11;
  size_t cnt;
  size_t cnt_00;
  size_t cnt_01;
  size_t cnt_02;
  uchar *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  EVP_MD *local_158;
  long local_150;
  size_t local_148;
  uchar auStack_140 [64];
  EVP_MD_CTX EStack_100;
  EVP_MD_CTX EStack_d0;
  EVP_MD_CTX EStack_a0;
  size_t local_70 [2];
  
  iVar3 = ssl_get_handshake_digest(0,&local_150,&local_158);
  if (iVar3 != 0) {
    iVar16 = 0;
    iVar3 = 1;
    do {
      if ((param_1 & local_150 << 10) != 0) {
        iVar16 = iVar16 + 1;
      }
      iVar4 = ssl_get_handshake_digest(iVar3,&local_150,&local_158);
      iVar3 = iVar3 + 1;
    } while (iVar4 != 0);
    if (iVar16 != 0) {
      memset(param_12,0,(long)(int)param_14);
      iVar3 = ssl_get_handshake_digest(0,&local_150,&local_158);
      if (iVar3 == 0) {
        return 1;
      }
      cnt = (size_t)param_3;
      cnt_00 = (size_t)param_5;
      cnt_01 = (size_t)param_7;
      cnt_02 = (size_t)param_9;
      iVar3 = 0;
      if (iVar16 != 0) {
        iVar3 = (int)param_11 / iVar16;
      }
      uVar17 = (ulong)param_14;
      uVar1 = 0;
      if (iVar16 != 1) {
        uVar1 = param_11 & 1;
      }
      uVar7 = uVar17 & 0xffffffe0;
      iVar16 = 0;
LAB_01a23f08:
      type = local_158;
      if ((param_1 & local_150 << 10) == 0) goto LAB_01a24454;
      if (local_158 != (EVP_MD *)0x0) {
        iVar4 = EVP_MD_size(local_158);
        if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          OpenSSLDie("t1_enc.c",0xaa,"chunk >= 0");
        }
        EVP_MD_CTX_init(&EStack_a0);
        EVP_MD_CTX_init(&EStack_d0);
        EVP_MD_CTX_init(&EStack_100);
        EVP_MD_CTX_set_flags(&EStack_100,8);
        pkey = EVP_PKEY_new_mac_key(0x357,(ENGINE *)0x0,param_10,iVar3 + uVar1);
        if (((((((pkey == (EVP_PKEY *)0x0) ||
                (iVar5 = EVP_DigestSignInit(&EStack_100,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey
                                           ), iVar5 == 0)) ||
               (iVar5 = EVP_MD_CTX_copy_ex(&EStack_a0,&EStack_100), iVar5 == 0)) ||
              ((param_2 != (void *)0x0 &&
               (iVar5 = EVP_DigestUpdate(&EStack_a0,param_2,cnt), iVar5 == 0)))) ||
             ((param_4 != (void *)0x0 &&
              (iVar5 = EVP_DigestUpdate(&EStack_a0,param_4,cnt_00), iVar5 == 0)))) ||
            (((param_6 != (void *)0x0 &&
              (iVar5 = EVP_DigestUpdate(&EStack_a0,param_6,cnt_01), iVar5 == 0)) ||
             ((param_8 != (void *)0x0 &&
              (iVar5 = EVP_DigestUpdate(&EStack_a0,param_8,cnt_02), iVar5 == 0)))))) ||
           (iVar5 = EVP_DigestSignFinal(&EStack_a0,auStack_140,&local_148), iVar5 == 0))
        goto LAB_01a24398;
        puVar10 = param_13;
        uVar15 = param_14;
        if (param_2 == (void *)0x0) {
          if (param_4 == (void *)0x0) {
            do {
              iVar5 = EVP_MD_CTX_copy_ex(&EStack_a0,&EStack_100);
              if (((((iVar5 == 0) ||
                    (iVar5 = EVP_DigestUpdate(&EStack_a0,auStack_140,local_148), iVar5 == 0)) ||
                   ((iVar4 < (int)uVar15 &&
                    (iVar5 = EVP_MD_CTX_copy_ex(&EStack_d0,&EStack_a0), iVar5 == 0)))) ||
                  ((param_6 != (void *)0x0 &&
                   (iVar5 = EVP_DigestUpdate(&EStack_a0,param_6,cnt_01), iVar5 == 0)))) ||
                 ((param_8 != (void *)0x0 &&
                  (iVar5 = EVP_DigestUpdate(&EStack_a0,param_8,cnt_02), iVar5 == 0))))
              goto LAB_01a24398;
              if ((int)uVar15 <= iVar4) goto LAB_01a2436c;
              iVar5 = EVP_DigestSignFinal(&EStack_a0,puVar10,local_70);
              if (iVar5 == 0) goto LAB_01a24398;
              puVar10 = puVar10 + local_70[0];
              uVar15 = uVar15 - (int)local_70[0];
              iVar5 = EVP_DigestSignFinal(&EStack_d0,auStack_140,&local_148);
              bVar2 = true;
            } while (iVar5 != 0);
          }
          else {
            do {
              iVar5 = EVP_MD_CTX_copy_ex(&EStack_a0,&EStack_100);
              if (((((iVar5 == 0) ||
                    (iVar5 = EVP_DigestUpdate(&EStack_a0,auStack_140,local_148), iVar5 == 0)) ||
                   ((iVar4 < (int)uVar15 &&
                    (iVar5 = EVP_MD_CTX_copy_ex(&EStack_d0,&EStack_a0), iVar5 == 0)))) ||
                  ((iVar5 = EVP_DigestUpdate(&EStack_a0,param_4,cnt_00), iVar5 == 0 ||
                   ((param_6 != (void *)0x0 &&
                    (iVar5 = EVP_DigestUpdate(&EStack_a0,param_6,cnt_01), iVar5 == 0)))))) ||
                 ((param_8 != (void *)0x0 &&
                  (iVar5 = EVP_DigestUpdate(&EStack_a0,param_8,cnt_02), iVar5 == 0))))
              goto LAB_01a24398;
              if ((int)uVar15 <= iVar4) goto LAB_01a2436c;
              iVar5 = EVP_DigestSignFinal(&EStack_a0,puVar10,local_70);
              if (iVar5 == 0) goto LAB_01a24398;
              puVar10 = puVar10 + local_70[0];
              iVar6 = (int)local_70[0];
              iVar5 = EVP_DigestSignFinal(&EStack_d0,auStack_140,&local_148);
              bVar2 = true;
              uVar15 = uVar15 - iVar6;
            } while (iVar5 != 0);
          }
        }
        else if (param_4 == (void *)0x0) {
          do {
            iVar5 = EVP_MD_CTX_copy_ex(&EStack_a0,&EStack_100);
            if ((((iVar5 == 0) ||
                 (iVar5 = EVP_DigestUpdate(&EStack_a0,auStack_140,local_148), iVar5 == 0)) ||
                ((iVar4 < (int)uVar15 &&
                 (iVar5 = EVP_MD_CTX_copy_ex(&EStack_d0,&EStack_a0), iVar5 == 0)))) ||
               (((iVar5 = EVP_DigestUpdate(&EStack_a0,param_2,cnt), iVar5 == 0 ||
                 ((param_6 != (void *)0x0 &&
                  (iVar5 = EVP_DigestUpdate(&EStack_a0,param_6,cnt_01), iVar5 == 0)))) ||
                ((param_8 != (void *)0x0 &&
                 (iVar5 = EVP_DigestUpdate(&EStack_a0,param_8,cnt_02), iVar5 == 0))))))
            goto LAB_01a24398;
            if ((int)uVar15 <= iVar4) goto LAB_01a2436c;
            iVar5 = EVP_DigestSignFinal(&EStack_a0,puVar10,local_70);
            if (iVar5 == 0) goto LAB_01a24398;
            puVar10 = puVar10 + local_70[0];
            uVar15 = uVar15 - (int)local_70[0];
            iVar5 = EVP_DigestSignFinal(&EStack_d0,auStack_140,&local_148);
            bVar2 = true;
          } while (iVar5 != 0);
        }
        else {
          do {
            iVar5 = EVP_MD_CTX_copy_ex(&EStack_a0,&EStack_100);
            if ((((((iVar5 == 0) ||
                   (iVar5 = EVP_DigestUpdate(&EStack_a0,auStack_140,local_148), iVar5 == 0)) ||
                  ((iVar4 < (int)uVar15 &&
                   (iVar5 = EVP_MD_CTX_copy_ex(&EStack_d0,&EStack_a0), iVar5 == 0)))) ||
                 ((iVar5 = EVP_DigestUpdate(&EStack_a0,param_2,cnt), iVar5 == 0 ||
                  (iVar5 = EVP_DigestUpdate(&EStack_a0,param_4,cnt_00), iVar5 == 0)))) ||
                ((param_6 != (void *)0x0 &&
                 (iVar5 = EVP_DigestUpdate(&EStack_a0,param_6,cnt_01), iVar5 == 0)))) ||
               ((param_8 != (void *)0x0 &&
                (iVar5 = EVP_DigestUpdate(&EStack_a0,param_8,cnt_02), iVar5 == 0))))
            goto LAB_01a24398;
            if ((int)uVar15 <= iVar4) goto LAB_01a2436c;
            iVar5 = EVP_DigestSignFinal(&EStack_a0,puVar10,local_70);
            if (iVar5 == 0) goto LAB_01a24398;
            puVar10 = puVar10 + local_70[0];
            iVar6 = (int)local_70[0];
            iVar5 = EVP_DigestSignFinal(&EStack_d0,auStack_140,&local_148);
            bVar2 = true;
            uVar15 = uVar15 - iVar6;
          } while (iVar5 != 0);
        }
        goto LAB_01a2439c;
      }
      iVar3 = 0x146;
      iVar16 = 0x114;
      goto LAB_01a2448c;
    }
  }
  iVar3 = 0x44;
  iVar16 = 0x109;
LAB_01a2448c:
  ERR_put_error(0x14,0x11c,iVar3,"t1_enc.c",iVar16);
  return 0;
LAB_01a2436c:
  iVar4 = EVP_DigestSignFinal(&EStack_a0,auStack_140,&local_148);
  if (iVar4 == 0) {
LAB_01a24398:
    bVar2 = true;
  }
  else {
    memcpy(puVar10,auStack_140,(long)(int)uVar15);
    bVar2 = false;
  }
LAB_01a2439c:
  EVP_PKEY_free(pkey);
  EVP_MD_CTX_cleanup(&EStack_a0);
  EVP_MD_CTX_cleanup(&EStack_d0);
  EVP_MD_CTX_cleanup(&EStack_100);
  OPENSSL_cleanse(auStack_140,0x40);
  if (bVar2) {
    return 0;
  }
  param_10 = param_10 + iVar3;
  if (0 < (int)param_14) {
    uVar8 = uVar7;
    puVar10 = param_12 + 0x10;
    uVar13 = 0;
    puVar12 = param_13 + 0x10;
    if (0x1f < param_14 && (param_13 + uVar17 <= param_12 || param_12 + uVar17 <= param_13)) {
      do {
        uVar19 = *(undefined8 *)(puVar12 + -8);
        uVar18 = *(undefined8 *)(puVar12 + -0x10);
        uVar21 = *(undefined8 *)(puVar12 + 8);
        uVar20 = *(undefined8 *)puVar12;
        uVar23 = *(undefined8 *)(puVar10 + -8);
        uVar22 = *(undefined8 *)(puVar10 + -0x10);
        uVar25 = *(undefined8 *)(puVar10 + 8);
        uVar24 = *(undefined8 *)puVar10;
        uVar8 = uVar8 - 0x20;
        *(ulong *)(puVar10 + -8) =
             CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                        (byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                 (byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                          (byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                   (byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar23 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  8),(byte)uVar23 ^
                                                                                     (byte)uVar19)))
                                                ))));
        *(ulong *)(puVar10 + -0x10) =
             CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar22 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar22 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(puVar10 + 8) =
             CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                      CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                               CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                        (byte)((ulong)uVar21 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                 (byte)((ulong)uVar21 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                          (byte)((ulong)uVar21 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                   (byte)((ulong)uVar21 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar25 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8),(byte)uVar25 ^
                                                                                     (byte)uVar21)))
                                                ))));
        *(ulong *)puVar10 =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                        (byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                 (byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                          (byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                   (byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar24 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  8),(byte)uVar24 ^
                                                                                     (byte)uVar20)))
                                                ))));
        puVar10 = puVar10 + 0x20;
        puVar12 = puVar12 + 0x20;
      } while (uVar8 != 0);
      uVar13 = uVar7;
      if (uVar7 == uVar17) goto LAB_01a24454;
    }
    lVar14 = uVar17 - uVar13;
    pbVar9 = param_12 + uVar13;
    pbVar11 = param_13 + uVar13;
    do {
      lVar14 = lVar14 + -1;
      *pbVar9 = *pbVar9 ^ *pbVar11;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    } while (lVar14 != 0);
  }
LAB_01a24454:
  iVar16 = iVar16 + 1;
  iVar4 = ssl_get_handshake_digest(iVar16,&local_150,&local_158);
  if (iVar4 == 0) {
    return 1;
  }
  goto LAB_01a23f08;
}

