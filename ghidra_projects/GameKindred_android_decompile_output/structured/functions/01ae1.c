// functions/01ae1 — 4 functions
#include "libGameKindred.h"




void FUN_01ae12fc(long param_1,void *param_2)

{
  int loc;
  
  loc = sk_find(*(_STACK **)(param_1 + 8),param_2);
  while (-1 < loc) {
    sk_delete(*(_STACK **)(param_1 + 8),loc);
    *(undefined4 *)(param_1 + 0x18) = 0;
    loc = sk_find(*(_STACK **)(param_1 + 8),param_2);
  }
  if (*(void **)(param_1 + 0x10) != param_2) {
    return;
  }
  engine_unlocked_finish(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}




size_t FUN_01ae1668(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    return sVar1;
  }
  return 0;
}




void FUN_01ae1ae8(void *param_1,size_t param_2,FILE *param_3)

{
  fwrite(param_1,param_2,1,param_3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae1d04(double param_1,void *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  EVP_MD *type;
  long lVar9;
  uint uVar10;
  size_t cnt;
  int iVar11;
  int iVar12;
  EVP_MD_CTX EStack_d0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  long local_78;
  
  if (param_3 == 0) {
    return;
  }
  if (DAT_032189a0 == '\x01') {
    CRYPTO_THREADID_current((CRYPTO_THREADID *)&EStack_d0);
    CRYPTO_lock(5,0x13,"md_rand.c",0xdf);
    iVar8 = CRYPTO_THREADID_cmp((CRYPTO_THREADID *)&DAT_032189f8,(CRYPTO_THREADID *)&EStack_d0);
    CRYPTO_lock(6,0x13,"md_rand.c",0xe1);
    if (iVar8 != 0) goto LAB_01ae1d9c;
    bVar7 = true;
  }
  else {
LAB_01ae1d9c:
    CRYPTO_lock(9,0x12,"md_rand.c",0xe6);
    bVar7 = false;
  }
  iVar8 = DAT_032189d4;
  local_80 = DAT_032189e8;
  local_78 = DAT_032189f0;
  uVar10 = DAT_032189d4 + param_3;
  uStack_98 = uRam00000000032189b8;
  local_a0 = _DAT_032189b0;
  local_90 = DAT_032189c0;
  if ((int)uVar10 < 0x3ff) {
    DAT_032189d4 = uVar10;
    if ((0x3fe < (int)DAT_032189d8) || ((int)uVar10 <= (int)DAT_032189d8)) goto LAB_01ae1e48;
  }
  else {
    DAT_032189d4 = uVar10 % 0x3ff;
    uVar10 = 0x3ff;
  }
  DAT_032189d8 = uVar10;
LAB_01ae1e48:
  iVar12 = param_3 / 0x14;
  if (0 < param_3 % 0x14) {
    iVar12 = iVar12 + 1;
  }
  DAT_032189f0 = DAT_032189f0 + iVar12;
  if (!bVar7) {
    CRYPTO_lock(10,0x12,"md_rand.c",0x106);
  }
  EVP_MD_CTX_init(&EStack_d0);
  if (0 < param_3) {
    iVar12 = 0;
    do {
      iVar6 = param_3 - iVar12;
      iVar11 = iVar6;
      if (0x13 < iVar6) {
        iVar11 = 0x14;
      }
      type = EVP_sha1();
      EVP_DigestInit_ex(&EStack_d0,type,(ENGINE *)0x0);
      EVP_DigestUpdate(&EStack_d0,&local_a0,0x14);
      if (iVar11 + iVar8 < 0x400) {
        EVP_DigestUpdate(&EStack_d0,&DAT_03218a08 + iVar8,(long)iVar11);
      }
      else {
        iVar5 = iVar11 + iVar8 + -0x3ff;
        EVP_DigestUpdate(&EStack_d0,&DAT_03218a08 + iVar8,(long)(iVar11 - iVar5));
        EVP_DigestUpdate(&EStack_d0,&DAT_03218a08,(long)iVar5);
      }
      cnt = (size_t)iVar11;
      EVP_DigestUpdate(&EStack_d0,param_2,cnt);
      EVP_DigestUpdate(&EStack_d0,&local_80,0x10);
      EVP_DigestFinal_ex(&EStack_d0,(uchar *)&local_a0,(uint *)0x0);
      param_2 = (void *)((long)param_2 + cnt);
      local_78 = local_78 + 1;
      if (0 < iVar6) {
        lVar9 = 0;
        iVar11 = iVar8;
        do {
          pbVar1 = (byte *)((long)&local_a0 + lVar9);
          lVar9 = lVar9 + 1;
          iVar8 = 0;
          if (iVar11 < 0x3fe) {
            iVar8 = iVar11 + 1;
          }
          (&DAT_03218a08)[iVar11] = (&DAT_03218a08)[iVar11] ^ *pbVar1;
          iVar11 = iVar8;
        } while (lVar9 < (long)cnt);
      }
      iVar12 = iVar12 + 0x14;
    } while (iVar12 < param_3);
  }
  EVP_MD_CTX_cleanup(&EStack_d0);
  if (!bVar7) {
    CRYPTO_lock(9,0x12,"md_rand.c",0x137);
  }
  _DAT_032189b0 =
       CONCAT17((byte)((ulong)_DAT_032189b0 >> 0x38) ^ (byte)((ulong)local_a0 >> 0x38),
                CONCAT16((byte)((ulong)_DAT_032189b0 >> 0x30) ^ (byte)((ulong)local_a0 >> 0x30),
                         CONCAT15((byte)((ulong)_DAT_032189b0 >> 0x28) ^
                                  (byte)((ulong)local_a0 >> 0x28),
                                  CONCAT14((byte)((ulong)_DAT_032189b0 >> 0x20) ^
                                           (byte)((ulong)local_a0 >> 0x20),
                                           CONCAT13((byte)((ulong)_DAT_032189b0 >> 0x18) ^
                                                    (byte)((ulong)local_a0 >> 0x18),
                                                    CONCAT12((byte)((ulong)_DAT_032189b0 >> 0x10) ^
                                                             (byte)((ulong)local_a0 >> 0x10),
                                                             CONCAT11((byte)((ulong)_DAT_032189b0 >>
                                                                            8) ^
                                                                      (byte)((ulong)local_a0 >> 8),
                                                                      (byte)_DAT_032189b0 ^
                                                                      (byte)local_a0)))))));
  uRam00000000032189b8 =
       CONCAT17((byte)((ulong)uRam00000000032189b8 >> 0x38) ^ (byte)((ulong)uStack_98 >> 0x38),
                CONCAT16((byte)((ulong)uRam00000000032189b8 >> 0x30) ^
                         (byte)((ulong)uStack_98 >> 0x30),
                         CONCAT15((byte)((ulong)uRam00000000032189b8 >> 0x28) ^
                                  (byte)((ulong)uStack_98 >> 0x28),
                                  CONCAT14((byte)((ulong)uRam00000000032189b8 >> 0x20) ^
                                           (byte)((ulong)uStack_98 >> 0x20),
                                           CONCAT13((byte)((ulong)uRam00000000032189b8 >> 0x18) ^
                                                    (byte)((ulong)uStack_98 >> 0x18),
                                                    CONCAT12((byte)((ulong)uRam00000000032189b8 >>
                                                                   0x10) ^
                                                             (byte)((ulong)uStack_98 >> 0x10),
                                                             CONCAT11((byte)((ulong)
                                                  uRam00000000032189b8 >> 8) ^
                                                  (byte)((ulong)uStack_98 >> 8),
                                                  (byte)uRam00000000032189b8 ^ (byte)uStack_98))))))
               );
  bVar2 = (byte)DAT_032189c0 ^ (byte)local_90;
  bVar3 = DAT_032189c0._1_1_ ^ local_90._1_1_;
  bVar4 = DAT_032189c0._2_1_ ^ local_90._2_1_;
  DAT_032189c0 = CONCAT13(DAT_032189c0._3_1_ ^ local_90._3_1_,CONCAT12(bVar4,CONCAT11(bVar3,bVar2)))
  ;
  if (DAT_032189e0 < 32.0) {
    DAT_032189e0 = DAT_032189e0 + param_1;
  }
  if (!bVar7) {
    CRYPTO_lock(10,0x12,"md_rand.c",0x144);
  }
  return;
}

