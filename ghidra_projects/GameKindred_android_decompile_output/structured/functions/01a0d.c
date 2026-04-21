// functions/01a0d — 5 functions
#include "libGameKindred.h"




undefined4 FUN_01a0d0a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  char *pcVar7;
  size_t sVar8;
  
  plVar2 = (long *)_libssh2_mac_methods();
  pcVar7 = *(char **)(param_1 + 0x58);
  if (pcVar7 == (char *)0x0) {
    puVar6 = (undefined8 *)*plVar2;
    while (puVar6 != (undefined8 *)0x0) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        return 0xffffffff;
      }
      sVar8 = strlen(pcVar7);
      lVar4 = FUN_01a0d310(param_2,param_3,pcVar7,sVar8);
      if (lVar4 != 0) {
        *(long *)(param_1 + 0x28) = *plVar2;
        return 0;
      }
      puVar6 = (undefined8 *)plVar2[1];
      plVar2 = plVar2 + 1;
    }
  }
  else {
    do {
      if (*pcVar7 == '\0') {
        return 0xffffffff;
      }
      pcVar3 = strchr(pcVar7,0x2c);
      if (pcVar3 == (char *)0x0) {
        sVar8 = strlen(pcVar7);
      }
      else {
        sVar8 = (long)pcVar3 - (long)pcVar7;
      }
      lVar4 = FUN_01a0d310(param_2,param_3,pcVar7,sVar8);
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)*plVar2;
        while( true ) {
          if (puVar6 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          plVar2 = plVar2 + 1;
          pcVar3 = (char *)*puVar6;
          sVar5 = strlen(pcVar3);
          if ((sVar5 == sVar8) && (iVar1 = strncmp(pcVar3,pcVar7,sVar8), iVar1 == 0)) break;
          puVar6 = (undefined8 *)*plVar2;
        }
        *(undefined8 **)(param_1 + 0x28) = puVar6;
        return 0;
      }
      pcVar7 = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  return 0xffffffff;
}




undefined4 FUN_01a0d1d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  char *pcVar7;
  size_t sVar8;
  
  plVar2 = (long *)_libssh2_comp_methods();
  pcVar7 = *(char **)(param_2 + 0x60);
  if (pcVar7 == (char *)0x0) {
    puVar6 = (undefined8 *)*plVar2;
    while (puVar6 != (undefined8 *)0x0) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        return 0xffffffff;
      }
      sVar8 = strlen(pcVar7);
      lVar4 = FUN_01a0d310(param_3,param_4,pcVar7,sVar8);
      if (lVar4 != 0) {
        *(long *)(param_2 + 0x40) = *plVar2;
        return 0;
      }
      puVar6 = (undefined8 *)plVar2[1];
      plVar2 = plVar2 + 1;
    }
  }
  else {
    do {
      if (*pcVar7 == '\0') {
        return 0xffffffff;
      }
      pcVar3 = strchr(pcVar7,0x2c);
      if (pcVar3 == (char *)0x0) {
        sVar8 = strlen(pcVar7);
      }
      else {
        sVar8 = (long)pcVar3 - (long)pcVar7;
      }
      lVar4 = FUN_01a0d310(param_3,param_4,pcVar7,sVar8);
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)*plVar2;
        while( true ) {
          if (puVar6 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          plVar2 = plVar2 + 1;
          pcVar3 = (char *)*puVar6;
          sVar5 = strlen(pcVar3);
          if ((sVar5 == sVar8) && (iVar1 = strncmp(pcVar3,pcVar7,sVar8), iVar1 == 0)) break;
          puVar6 = (undefined8 *)*plVar2;
        }
        *(undefined8 **)(param_2 + 0x40) = puVar6;
        return 0;
      }
      pcVar7 = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  return 0xffffffff;
}




char * FUN_01a0d310(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((param_4 <= param_2) &&
     ((iVar1 = strncmp(param_1,param_3,(size_t)param_4), iVar1 != 0 ||
      ((pcVar2 = param_1, param_4 != param_2 && (param_1[(long)param_4] != ',')))))) {
    pcVar2 = strchr(param_1,0x2c);
    if (pcVar2 != (char *)0x0) {
      do {
        if (param_1 + (long)param_2 + -(long)pcVar2 <= param_4) break;
        pcVar2 = pcVar2 + 1;
        iVar1 = strncmp(pcVar2,param_3,(size_t)param_4);
        if (iVar1 == 0) {
          if (pcVar2 + ((long)param_4 - (long)param_1) == param_2) {
            return pcVar2;
          }
          if (pcVar2[(long)param_4] == ',') {
            return pcVar2;
          }
        }
        pcVar2 = strchr(pcVar2,0x2c);
      } while (pcVar2 != (char *)0x0);
    }
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}




undefined8 FUN_01a0d3f0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  char *pcVar7;
  size_t sVar8;
  char *__s;
  long *plVar9;
  
  plVar2 = (long *)libssh2_hostkey_methods();
  pcVar7 = *(char **)(param_1 + 0x60);
  if (pcVar7 == (char *)0x0) {
    if (plVar2 != (long *)0x0) {
      puVar6 = (undefined8 *)*plVar2;
      while (puVar6 != (undefined8 *)0x0) {
        plVar2 = plVar2 + 1;
        pcVar7 = (char *)*puVar6;
        if (pcVar7 == (char *)0x0) {
          return 0xffffffff;
        }
        sVar8 = strlen(pcVar7);
        lVar4 = FUN_01a0d310(param_3,param_4,pcVar7,sVar8);
        if (((lVar4 != 0) && (((param_2 & 1) == 0 || (puVar6[6] != 0)))) &&
           (((param_2 >> 1 & 1) == 0 || (puVar6[4] != 0)))) {
          *(undefined8 **)(param_1 + 0xa0) = puVar6;
          return 0;
        }
        puVar6 = (undefined8 *)*plVar2;
      }
    }
  }
  else {
    while (*pcVar7 != '\0') {
      pcVar3 = strchr(pcVar7,0x2c);
      if (pcVar3 == (char *)0x0) {
        sVar8 = strlen(pcVar7);
      }
      else {
        sVar8 = (long)pcVar3 - (long)pcVar7;
      }
      lVar4 = FUN_01a0d310(param_3,param_4,pcVar7,sVar8);
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)*plVar2;
        plVar9 = plVar2;
        while( true ) {
          if (puVar6 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          plVar9 = plVar9 + 1;
          __s = (char *)*puVar6;
          sVar5 = strlen(__s);
          if ((sVar5 == sVar8) && (iVar1 = strncmp(__s,pcVar7,sVar8), iVar1 == 0)) break;
          puVar6 = (undefined8 *)*plVar9;
        }
        if ((((param_2 & 1) == 0) || (puVar6[6] != 0)) &&
           (((param_2 >> 1 & 1) == 0 || (puVar6[4] != 0)))) {
          *(undefined8 **)(param_1 + 0xa0) = puVar6;
          return 0;
        }
      }
      pcVar7 = pcVar3 + 1;
      if (pcVar3 == (char *)0x0) {
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}




int FUN_01a0d644(long param_1,BIGNUM *param_2,BIGNUM *param_3,int param_4,char param_5,
                undefined4 param_6,void *param_7,size_t param_8,undefined4 *param_9)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  BN_CTX *pBVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  EVP_MD *pEVar8;
  uchar *puVar9;
  void *__dest;
  BIGNUM *pBVar10;
  size_t sVar11;
  uchar *puVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 local_98;
  EVP_MD_CTX EStack_90;
  
  iVar1 = 0;
  switch(*param_9) {
  case 0:
    *(long *)(param_9 + 2) = 0;
    *(undefined8 *)(param_9 + 0x22) = 0;
    *(undefined8 *)(param_9 + 4) = 0;
    pBVar5 = BN_CTX_new();
    *(BN_CTX **)(param_9 + 0x14) = pBVar5;
    pBVar10 = BN_new();
    *(BIGNUM **)(param_9 + 0x16) = pBVar10;
    pBVar10 = BN_new();
    *(BIGNUM **)(param_9 + 0x18) = pBVar10;
    pBVar10 = BN_new();
    *(BIGNUM **)(param_9 + 0x1a) = pBVar10;
    pBVar10 = BN_new();
    *(BIGNUM **)(param_9 + 0x1c) = pBVar10;
    *(undefined8 *)(param_9 + 0x38) = 0;
    *(undefined8 *)(param_9 + 0x3a) = 0;
    BN_rand(*(BIGNUM **)(param_9 + 0x16),param_4,0,-1);
    BN_mod_exp(*(BIGNUM **)(param_9 + 0x18),param_2,*(BIGNUM **)(param_9 + 0x16),param_3,
               *(BN_CTX **)(param_9 + 0x14));
    iVar4 = BN_num_bits(*(BIGNUM **)(param_9 + 0x18));
    iVar1 = iVar4 + 0xe;
    if (-1 < iVar4 + 7) {
      iVar1 = iVar4 + 7;
    }
    *(long *)(param_9 + 0xe) = (long)((iVar1 >> 3) + 6);
    uVar3 = BN_num_bits(*(BIGNUM **)(param_9 + 0x18));
    lVar14 = *(long *)(param_9 + 0xe);
    if ((uVar3 & 7) != 0) {
      lVar14 = lVar14 + -1;
      *(long *)(param_9 + 0xe) = lVar14;
    }
    pcVar17 = (char *)(**(code **)(param_1 + 8))(lVar14,param_1);
    *(char **)(param_9 + 2) = pcVar17;
    if (pcVar17 != (char *)0x0) {
      *pcVar17 = param_5;
      _libssh2_htonu32(*(long *)(param_9 + 2) + 1,param_9[0xe] + -5);
      uVar3 = BN_num_bits(*(BIGNUM **)(param_9 + 0x18));
      if ((uVar3 & 7) == 0) {
        *(undefined1 *)(*(long *)(param_9 + 2) + 5) = 0;
        pBVar10 = *(BIGNUM **)(param_9 + 0x18);
        puVar7 = (uchar *)(*(long *)(param_9 + 2) + 6);
      }
      else {
        pBVar10 = *(BIGNUM **)(param_9 + 0x18);
        puVar7 = (uchar *)(*(long *)(param_9 + 2) + 5);
      }
      BN_bn2bin(pBVar10,puVar7);
      *param_9 = 2;
      goto LAB_01a0dbac;
    }
    pcVar17 = "Out of memory error";
    goto LAB_01a0de88;
  default:
    goto switchD_01a0d6a8_caseD_1;
  case 2:
LAB_01a0dbac:
    iVar1 = _libssh2_transport_send
                      (param_1,*(undefined8 *)(param_9 + 2),*(undefined8 *)(param_9 + 0xe),0,0);
    if (iVar1 == -0x25) {
      return -0x25;
    }
    if (iVar1 == 0) {
      *param_9 = 3;
      break;
    }
    pcVar17 = "Unable to send KEX init message";
    goto LAB_01a0de90;
  case 3:
    break;
  case 4:
    goto switchD_01a0d6a8_caseD_4;
  case 5:
    goto LAB_01a0d7bc;
  case 6:
    goto switchD_01a0d6a8_caseD_6;
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    iVar1 = _libssh2_packet_burn(param_1,param_9 + 0x3c);
    if (iVar1 == -0x25) {
      return -0x25;
    }
    if (iVar1 < 1) goto switchD_01a0d6a8_caseD_1;
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe;
  }
  *param_9 = 4;
switchD_01a0d6a8_caseD_4:
  iVar1 = _libssh2_packet_require(param_1,param_6,param_9 + 4,param_9 + 0x10,0,0,0,param_9 + 0x38);
  if (iVar1 == -0x25) {
    return -0x25;
  }
  if (iVar1 == 0) {
    *(long *)(param_9 + 0x1e) = *(long *)(param_9 + 4) + 1;
    uVar2 = _libssh2_ntohu32();
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(long *)(param_9 + 0x1e) = *(long *)(param_9 + 0x1e) + 4;
    __dest = (void *)(**(code **)(param_1 + 8))(uVar2,param_1);
    *(void **)(param_1 + 0xb0) = __dest;
    if (__dest == (void *)0x0) {
      pcVar17 = "Unable to allocate memory for a copy of the host key";
LAB_01a0de88:
      iVar1 = -6;
    }
    else {
      memcpy(__dest,*(void **)(param_9 + 0x1e),(ulong)*(uint *)(param_1 + 0xb8));
      *(ulong *)(param_9 + 0x1e) = *(long *)(param_9 + 0x1e) + (ulong)*(uint *)(param_1 + 0xb8);
      pEVar8 = EVP_get_digestbyname("md5");
      iVar1 = EVP_DigestInit(&EStack_90,pEVar8);
      if (iVar1 != 0) {
        EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0xb0),(ulong)*(uint *)(param_1 + 0xb8));
        EVP_DigestFinal(&EStack_90,(uchar *)(param_1 + 0xbc),(uint *)0x0);
      }
      *(uint *)(param_1 + 0xcc) = (uint)(iVar1 != 0);
      pEVar8 = EVP_get_digestbyname("sha1");
      EVP_DigestInit(&EStack_90,pEVar8);
      EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0xb0),(ulong)*(uint *)(param_1 + 0xb8));
      EVP_DigestFinal(&EStack_90,(uchar *)(param_1 + 0xd0),(uint *)0x0);
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))
                        (param_1,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                         param_1 + 0xa8);
      if (iVar1 == 0) {
        uVar3 = _libssh2_ntohu32(*(undefined8 *)(param_9 + 0x1e));
        puVar7 = (uchar *)(*(long *)(param_9 + 0x1e) + 4);
        *(ulong *)(param_9 + 0x26) = (ulong)uVar3;
        *(uchar **)(param_9 + 0x1e) = puVar7 + uVar3;
        *(uchar **)(param_9 + 0x20) = puVar7;
        BN_bin2bn(puVar7,uVar3,*(BIGNUM **)(param_9 + 0x1a));
        uVar16 = _libssh2_ntohu32(*(undefined8 *)(param_9 + 0x1e));
        lVar14 = *(long *)(param_9 + 0x1e);
        *(ulong *)(param_9 + 0x2a) = uVar16 & 0xffffffff;
        *(long *)(param_9 + 0x1e) = lVar14 + 4;
        *(long *)(param_9 + 0x24) = lVar14 + 4;
        BN_mod_exp(*(BIGNUM **)(param_9 + 0x1c),*(BIGNUM **)(param_9 + 0x1a),
                   *(BIGNUM **)(param_9 + 0x16),param_3,*(BN_CTX **)(param_9 + 0x14));
        iVar4 = BN_num_bits(*(BIGNUM **)(param_9 + 0x1c));
        iVar1 = iVar4 + 0xe;
        if (-1 < iVar4 + 7) {
          iVar1 = iVar4 + 7;
        }
        *(long *)(param_9 + 0x28) = (long)((iVar1 >> 3) + 5);
        uVar3 = BN_num_bits(*(BIGNUM **)(param_9 + 0x1c));
        lVar14 = *(long *)(param_9 + 0x28);
        if ((uVar3 & 7) != 0) {
          lVar14 = lVar14 + -1;
          *(long *)(param_9 + 0x28) = lVar14;
        }
        lVar14 = (**(code **)(param_1 + 8))(lVar14,param_1);
        *(long *)(param_9 + 0x22) = lVar14;
        if (lVar14 == 0) {
          pcVar17 = "Unable to allocate buffer for K";
          goto LAB_01a0de88;
        }
        _libssh2_htonu32(lVar14,param_9[0x28] + -4);
        uVar3 = BN_num_bits(*(BIGNUM **)(param_9 + 0x1c));
        if ((uVar3 & 7) == 0) {
          *(undefined1 *)(*(long *)(param_9 + 0x22) + 4) = 0;
          pBVar10 = *(BIGNUM **)(param_9 + 0x1c);
          puVar7 = (uchar *)(*(long *)(param_9 + 0x22) + 5);
        }
        else {
          pBVar10 = *(BIGNUM **)(param_9 + 0x1c);
          puVar7 = (uchar *)(*(long *)(param_9 + 0x22) + 4);
        }
        BN_bn2bin(pBVar10,puVar7);
        ctx = (EVP_MD_CTX *)(param_9 + 0x2c);
        pEVar8 = EVP_get_digestbyname("sha1");
        EVP_DigestInit(ctx,pEVar8);
        puVar7 = (uchar *)(param_9 + 8);
        if (*(char **)(param_1 + 0x158) == (char *)0x0) {
          _libssh2_htonu32(puVar7,0x15);
          EVP_DigestUpdate(ctx,puVar7,4);
          pcVar17 = "SSH-2.0-libssh2_1.4.3";
          sVar11 = 0x15;
        }
        else {
          sVar11 = strlen(*(char **)(param_1 + 0x158));
          _libssh2_htonu32(puVar7,(int)sVar11 + -2);
          EVP_DigestUpdate(ctx,puVar7,4);
          pcVar17 = *(char **)(param_1 + 0x158);
          sVar11 = strlen(pcVar17);
          sVar11 = sVar11 - 2;
        }
        EVP_DigestUpdate(ctx,pcVar17,sVar11);
        sVar11 = strlen(*(char **)(param_1 + 0xe8));
        _libssh2_htonu32(puVar7,sVar11);
        EVP_DigestUpdate(ctx,puVar7,4);
        pcVar17 = *(char **)(param_1 + 0xe8);
        sVar11 = strlen(pcVar17);
        EVP_DigestUpdate(ctx,pcVar17,sVar11);
        _libssh2_htonu32(puVar7,*(undefined4 *)(param_1 + 0x168));
        EVP_DigestUpdate(ctx,puVar7,4);
        EVP_DigestUpdate(ctx,*(void **)(param_1 + 0x160),*(size_t *)(param_1 + 0x168));
        _libssh2_htonu32(puVar7,*(undefined4 *)(param_1 + 0xf8));
        EVP_DigestUpdate(ctx,puVar7,4);
        EVP_DigestUpdate(ctx,*(void **)(param_1 + 0xf0),*(size_t *)(param_1 + 0xf8));
        _libssh2_htonu32(puVar7,*(undefined4 *)(param_1 + 0xb8));
        EVP_DigestUpdate(ctx,puVar7,4);
        EVP_DigestUpdate(ctx,*(void **)(param_1 + 0xb0),(ulong)*(uint *)(param_1 + 0xb8));
        if (param_5 == ' ') {
          _libssh2_htonu32(puVar7,0x400);
          _libssh2_htonu32(param_9 + 9,0x600);
          _libssh2_htonu32(param_9 + 10,0x800);
          EVP_DigestUpdate(ctx,puVar7,0xc);
        }
        if (param_7 != (void *)0x0) {
          EVP_DigestUpdate(ctx,param_7,param_8);
        }
        EVP_DigestUpdate(ctx,(void *)(*(long *)(param_9 + 2) + 1),*(long *)(param_9 + 0xe) - 1);
        _libssh2_htonu32(puVar7,param_9[0x26]);
        EVP_DigestUpdate(ctx,puVar7,4);
        EVP_DigestUpdate(ctx,*(void **)(param_9 + 0x20),*(size_t *)(param_9 + 0x26));
        EVP_DigestUpdate(ctx,*(void **)(param_9 + 0x22),*(size_t *)(param_9 + 0x28));
        EVP_DigestFinal(ctx,puVar7,(uint *)0x0);
        iVar1 = (**(code **)(*(long *)(param_1 + 0xa0) + 0x20))
                          (param_1,*(undefined8 *)(param_9 + 0x24),*(undefined8 *)(param_9 + 0x2a),
                           puVar7,0x14,param_1 + 0xa8);
        if (iVar1 == 0) {
          *(undefined1 *)(param_9 + 0xd) = 0x15;
          *param_9 = 5;
LAB_01a0d7bc:
          iVar1 = _libssh2_transport_send(param_1,param_9 + 0xd,1,0,0);
          if (iVar1 == -0x25) {
            return -0x25;
          }
          if (iVar1 == 0) {
            *param_9 = 6;
switchD_01a0d6a8_caseD_6:
            iVar1 = _libssh2_packet_require
                              (param_1,0x15,param_9 + 6,param_9 + 0x12,0,0,0,param_9 + 0x38);
            if (iVar1 == -0x25) {
              return -0x25;
            }
            if (iVar1 == 0) {
              *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
              (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_9 + 6),param_1);
              if (*(long *)(param_1 + 0x88) == 0) {
                puVar6 = (undefined8 *)(**(code **)(param_1 + 8))(0x14,param_1);
                *(undefined8 **)(param_1 + 0x88) = puVar6;
                if (puVar6 == (undefined8 *)0x0) {
                  pcVar17 = "Unable to allocate buffer for SHA digest";
                  goto LAB_01a0de88;
                }
                *(undefined4 *)(puVar6 + 2) = param_9[0xc];
                uVar18 = *(undefined8 *)(param_9 + 8);
                puVar6[1] = *(undefined8 *)(param_9 + 10);
                *puVar6 = uVar18;
                *(undefined4 *)(param_1 + 0x90) = 0x14;
              }
              lVar14 = *(long *)(param_1 + 0x170);
              if (*(code **)(lVar14 + 0x30) != (code *)0x0) {
                (**(code **)(lVar14 + 0x30))(param_1,param_1 + 0x178);
                lVar14 = *(long *)(param_1 + 0x170);
              }
              if (*(long *)(lVar14 + 0x20) != 0) {
                local_98 = 0;
                puVar7 = (uchar *)(**(code **)(param_1 + 8))
                                            ((long)*(int *)(lVar14 + 0xc) + 0x14,param_1);
                if (puVar7 == (uchar *)0x0) {
                  iVar1 = -1;
                  goto switchD_01a0d6a8_caseD_1;
                }
                lVar14 = *(long *)(param_1 + 0x170);
                if (*(int *)(lVar14 + 0xc) != 0) {
                  pEVar8 = EVP_get_digestbyname("sha1");
                  EVP_DigestInit(&EStack_90,pEVar8);
                  EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),*(size_t *)(param_9 + 0x28)
                                  );
                  EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                  EVP_DigestUpdate(&EStack_90,&DAT_01e66520,1);
                  EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0x88),
                                   (ulong)*(uint *)(param_1 + 0x90));
                  EVP_DigestFinal(&EStack_90,puVar7,(uint *)0x0);
                  lVar14 = *(long *)(param_1 + 0x170);
                  if (0x14 < *(uint *)(lVar14 + 0xc)) {
                    uVar16 = 0x14;
                    do {
                      pEVar8 = EVP_get_digestbyname("sha1");
                      EVP_DigestInit(&EStack_90,pEVar8);
                      EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                       *(size_t *)(param_9 + 0x28));
                      EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                      puVar9 = puVar7;
                      uVar13 = uVar16;
                      if (uVar16 == 0) {
                        EVP_DigestUpdate(&EStack_90,&DAT_01e66520,1);
                        puVar9 = *(uchar **)(param_1 + 0x88);
                        uVar13 = (ulong)*(uint *)(param_1 + 0x90);
                      }
                      EVP_DigestUpdate(&EStack_90,puVar9,uVar13);
                      EVP_DigestFinal(&EStack_90,puVar7 + uVar16,(uint *)0x0);
                      lVar14 = *(long *)(param_1 + 0x170);
                      uVar16 = uVar16 + 0x14;
                    } while (uVar16 < (ulong)(long)*(int *)(lVar14 + 0xc));
                  }
                }
                puVar9 = (uchar *)(**(code **)(param_1 + 8))
                                            ((long)*(int *)(lVar14 + 0x10) + 0x14,param_1);
                if (puVar9 == (uchar *)0x0) {
                  pcVar15 = *(code **)(param_1 + 0x18);
                }
                else {
                  lVar14 = *(long *)(param_1 + 0x170);
                  if (*(int *)(lVar14 + 0x10) != 0) {
                    pEVar8 = EVP_get_digestbyname("sha1");
                    EVP_DigestInit(&EStack_90,pEVar8);
                    EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                     *(size_t *)(param_9 + 0x28));
                    EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                    EVP_DigestUpdate(&EStack_90,&DAT_01e239e7,1);
                    EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0x88),
                                     (ulong)*(uint *)(param_1 + 0x90));
                    EVP_DigestFinal(&EStack_90,puVar9,(uint *)0x0);
                    lVar14 = *(long *)(param_1 + 0x170);
                    if (0x14 < *(uint *)(lVar14 + 0x10)) {
                      uVar16 = 0x14;
                      do {
                        pEVar8 = EVP_get_digestbyname("sha1");
                        EVP_DigestInit(&EStack_90,pEVar8);
                        EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                         *(size_t *)(param_9 + 0x28));
                        EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                        puVar12 = puVar9;
                        uVar13 = uVar16;
                        if (uVar16 == 0) {
                          EVP_DigestUpdate(&EStack_90,&DAT_01e239e7,1);
                          puVar12 = *(uchar **)(param_1 + 0x88);
                          uVar13 = (ulong)*(uint *)(param_1 + 0x90);
                        }
                        EVP_DigestUpdate(&EStack_90,puVar12,uVar13);
                        EVP_DigestFinal(&EStack_90,puVar9 + uVar16,(uint *)0x0);
                        lVar14 = *(long *)(param_1 + 0x170);
                        uVar16 = uVar16 + 0x14;
                      } while (uVar16 < (ulong)(long)*(int *)(lVar14 + 0x10));
                    }
                  }
                  iVar1 = (**(code **)(lVar14 + 0x20))
                                    (param_1,lVar14,puVar7,(long)&local_98 + 4,puVar9,&local_98,1,
                                     param_1 + 0x178);
                  if (iVar1 == 0) {
                    if (local_98._4_4_ != 0) {
                      memset(puVar7,0,(long)*(int *)(*(long *)(param_1 + 0x170) + 0xc));
                      (**(code **)(param_1 + 0x18))(puVar7,param_1);
                    }
                    if ((int)local_98 != 0) {
                      memset(puVar9,0,(long)*(int *)(*(long *)(param_1 + 0x170) + 0x10));
                      (**(code **)(param_1 + 0x18))(puVar9,param_1);
                    }
                    goto LAB_01a0e224;
                  }
                  (**(code **)(param_1 + 0x18))(puVar7,param_1);
                  pcVar15 = *(code **)(param_1 + 0x18);
                  puVar7 = puVar9;
                }
                (*pcVar15)(puVar7,param_1);
                iVar1 = -5;
                goto switchD_01a0d6a8_caseD_1;
              }
LAB_01a0e224:
              lVar14 = *(long *)(param_1 + 0x100);
              if (*(code **)(lVar14 + 0x30) != (code *)0x0) {
                (**(code **)(lVar14 + 0x30))(param_1,param_1 + 0x108);
                lVar14 = *(long *)(param_1 + 0x100);
              }
              if (*(long *)(lVar14 + 0x20) != 0) {
                local_98 = 0;
                puVar7 = (uchar *)(**(code **)(param_1 + 8))
                                            ((long)*(int *)(lVar14 + 0xc) + 0x14,param_1);
                if (puVar7 != (uchar *)0x0) {
                  lVar14 = *(long *)(param_1 + 0x100);
                  if (*(int *)(lVar14 + 0xc) != 0) {
                    pEVar8 = EVP_get_digestbyname("sha1");
                    EVP_DigestInit(&EStack_90,pEVar8);
                    EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                     *(size_t *)(param_9 + 0x28));
                    EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                    EVP_DigestUpdate(&EStack_90,&DAT_01e66526,1);
                    EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0x88),
                                     (ulong)*(uint *)(param_1 + 0x90));
                    EVP_DigestFinal(&EStack_90,puVar7,(uint *)0x0);
                    lVar14 = *(long *)(param_1 + 0x100);
                    if (0x14 < *(uint *)(lVar14 + 0xc)) {
                      uVar16 = 0x14;
                      do {
                        pEVar8 = EVP_get_digestbyname("sha1");
                        EVP_DigestInit(&EStack_90,pEVar8);
                        EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                         *(size_t *)(param_9 + 0x28));
                        EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                        puVar9 = puVar7;
                        uVar13 = uVar16;
                        if (uVar16 == 0) {
                          EVP_DigestUpdate(&EStack_90,&DAT_01e66526,1);
                          puVar9 = *(uchar **)(param_1 + 0x88);
                          uVar13 = (ulong)*(uint *)(param_1 + 0x90);
                        }
                        EVP_DigestUpdate(&EStack_90,puVar9,uVar13);
                        EVP_DigestFinal(&EStack_90,puVar7 + uVar16,(uint *)0x0);
                        lVar14 = *(long *)(param_1 + 0x100);
                        uVar16 = uVar16 + 0x14;
                      } while (uVar16 < (ulong)(long)*(int *)(lVar14 + 0xc));
                    }
                  }
                  puVar9 = (uchar *)(**(code **)(param_1 + 8))
                                              ((long)*(int *)(lVar14 + 0x10) + 0x14,param_1);
                  if (puVar9 == (uchar *)0x0) {
                    pcVar15 = *(code **)(param_1 + 0x18);
                  }
                  else {
                    lVar14 = *(long *)(param_1 + 0x100);
                    if (*(int *)(lVar14 + 0x10) != 0) {
                      pEVar8 = EVP_get_digestbyname("sha1");
                      EVP_DigestInit(&EStack_90,pEVar8);
                      EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                       *(size_t *)(param_9 + 0x28));
                      EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                      EVP_DigestUpdate(&EStack_90,"D",1);
                      EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0x88),
                                       (ulong)*(uint *)(param_1 + 0x90));
                      EVP_DigestFinal(&EStack_90,puVar9,(uint *)0x0);
                      lVar14 = *(long *)(param_1 + 0x100);
                      if (0x14 < *(uint *)(lVar14 + 0x10)) {
                        uVar16 = 0x14;
                        do {
                          pEVar8 = EVP_get_digestbyname("sha1");
                          EVP_DigestInit(&EStack_90,pEVar8);
                          EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                           *(size_t *)(param_9 + 0x28));
                          EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                          puVar12 = puVar9;
                          uVar13 = uVar16;
                          if (uVar16 == 0) {
                            EVP_DigestUpdate(&EStack_90,"D",1);
                            puVar12 = *(uchar **)(param_1 + 0x88);
                            uVar13 = (ulong)*(uint *)(param_1 + 0x90);
                          }
                          EVP_DigestUpdate(&EStack_90,puVar12,uVar13);
                          EVP_DigestFinal(&EStack_90,puVar9 + uVar16,(uint *)0x0);
                          lVar14 = *(long *)(param_1 + 0x100);
                          uVar16 = uVar16 + 0x14;
                        } while (uVar16 < (ulong)(long)*(int *)(lVar14 + 0x10));
                      }
                    }
                    iVar1 = (**(code **)(lVar14 + 0x20))
                                      (param_1,lVar14,puVar7,(long)&local_98 + 4,puVar9,&local_98,0,
                                       param_1 + 0x108);
                    if (iVar1 == 0) {
                      if (local_98._4_4_ != 0) {
                        memset(puVar7,0,(long)*(int *)(*(long *)(param_1 + 0x100) + 0xc));
                        (**(code **)(param_1 + 0x18))(puVar7,param_1);
                      }
                      if ((int)local_98 != 0) {
                        memset(puVar9,0,(long)*(int *)(*(long *)(param_1 + 0x100) + 0x10));
                        (**(code **)(param_1 + 0x18))(puVar9,param_1);
                      }
                      goto LAB_01a0e584;
                    }
                    (**(code **)(param_1 + 0x18))(puVar7,param_1);
                    pcVar15 = *(code **)(param_1 + 0x18);
                    puVar7 = puVar9;
                  }
                  (*pcVar15)(puVar7,param_1);
                }
LAB_01a0e928:
                iVar1 = -5;
                goto switchD_01a0d6a8_caseD_1;
              }
LAB_01a0e584:
              lVar14 = *(long *)(param_1 + 0x180);
              if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
                (**(code **)(lVar14 + 0x20))(param_1,param_1 + 400);
                lVar14 = *(long *)(param_1 + 0x180);
              }
              if (*(long *)(lVar14 + 0x10) != 0) {
                local_98 = local_98 & 0xffffffff;
                puVar7 = (uchar *)(**(code **)(param_1 + 8))
                                            ((long)*(int *)(lVar14 + 0xc) + 0x14,param_1);
                if (puVar7 == (uchar *)0x0) goto LAB_01a0e928;
                lVar14 = *(long *)(param_1 + 0x180);
                if (*(int *)(lVar14 + 0xc) != 0) {
                  pEVar8 = EVP_get_digestbyname("sha1");
                  EVP_DigestInit(&EStack_90,pEVar8);
                  EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),*(size_t *)(param_9 + 0x28)
                                  );
                  EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                  EVP_DigestUpdate(&EStack_90,&DAT_01b947c6,1);
                  EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0x88),
                                   (ulong)*(uint *)(param_1 + 0x90));
                  EVP_DigestFinal(&EStack_90,puVar7,(uint *)0x0);
                  lVar14 = *(long *)(param_1 + 0x180);
                  if (0x14 < *(uint *)(lVar14 + 0xc)) {
                    uVar16 = 0x14;
                    do {
                      pEVar8 = EVP_get_digestbyname("sha1");
                      EVP_DigestInit(&EStack_90,pEVar8);
                      EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                       *(size_t *)(param_9 + 0x28));
                      EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                      puVar9 = puVar7;
                      uVar13 = uVar16;
                      if (uVar16 == 0) {
                        EVP_DigestUpdate(&EStack_90,&DAT_01b947c6,1);
                        puVar9 = *(uchar **)(param_1 + 0x88);
                        uVar13 = (ulong)*(uint *)(param_1 + 0x90);
                      }
                      EVP_DigestUpdate(&EStack_90,puVar9,uVar13);
                      EVP_DigestFinal(&EStack_90,puVar7 + uVar16,(uint *)0x0);
                      lVar14 = *(long *)(param_1 + 0x180);
                      uVar16 = uVar16 + 0x14;
                    } while (uVar16 < (ulong)(long)*(int *)(lVar14 + 0xc));
                  }
                }
                (**(code **)(lVar14 + 0x10))(param_1,puVar7,(long)&local_98 + 4,param_1 + 400);
                if (local_98._4_4_ != 0) {
                  memset(puVar7,0,(long)*(int *)(*(long *)(param_1 + 0x180) + 0xc));
                  (**(code **)(param_1 + 0x18))(puVar7,param_1);
                }
              }
              lVar14 = *(long *)(param_1 + 0x110);
              if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
                (**(code **)(lVar14 + 0x20))(param_1,param_1 + 0x120);
                lVar14 = *(long *)(param_1 + 0x110);
              }
              if (*(long *)(lVar14 + 0x10) != 0) {
                local_98 = local_98 & 0xffffffff;
                puVar7 = (uchar *)(**(code **)(param_1 + 8))
                                            ((long)*(int *)(lVar14 + 0xc) + 0x14,param_1);
                if (puVar7 == (uchar *)0x0) goto LAB_01a0e928;
                lVar14 = *(long *)(param_1 + 0x110);
                if (*(int *)(lVar14 + 0xc) != 0) {
                  pEVar8 = EVP_get_digestbyname("sha1");
                  EVP_DigestInit(&EStack_90,pEVar8);
                  EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),*(size_t *)(param_9 + 0x28)
                                  );
                  EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                  EVP_DigestUpdate(&EStack_90,&DAT_01bef1b0,1);
                  EVP_DigestUpdate(&EStack_90,*(void **)(param_1 + 0x88),
                                   (ulong)*(uint *)(param_1 + 0x90));
                  EVP_DigestFinal(&EStack_90,puVar7,(uint *)0x0);
                  lVar14 = *(long *)(param_1 + 0x110);
                  if (0x14 < *(uint *)(lVar14 + 0xc)) {
                    uVar16 = 0x14;
                    do {
                      pEVar8 = EVP_get_digestbyname("sha1");
                      EVP_DigestInit(&EStack_90,pEVar8);
                      EVP_DigestUpdate(&EStack_90,*(void **)(param_9 + 0x22),
                                       *(size_t *)(param_9 + 0x28));
                      EVP_DigestUpdate(&EStack_90,param_9 + 8,0x14);
                      puVar9 = puVar7;
                      uVar13 = uVar16;
                      if (uVar16 == 0) {
                        EVP_DigestUpdate(&EStack_90,&DAT_01bef1b0,1);
                        puVar9 = *(uchar **)(param_1 + 0x88);
                        uVar13 = (ulong)*(uint *)(param_1 + 0x90);
                      }
                      EVP_DigestUpdate(&EStack_90,puVar9,uVar13);
                      EVP_DigestFinal(&EStack_90,puVar7 + uVar16,(uint *)0x0);
                      lVar14 = *(long *)(param_1 + 0x110);
                      uVar16 = uVar16 + 0x14;
                    } while (uVar16 < (ulong)(long)*(int *)(lVar14 + 0xc));
                  }
                }
                (**(code **)(lVar14 + 0x10))(param_1,puVar7,(long)&local_98 + 4,param_1 + 0x120);
                if (local_98._4_4_ != 0) {
                  memset(puVar7,0,(long)*(int *)(*(long *)(param_1 + 0x110) + 0xc));
                  (**(code **)(param_1 + 0x18))(puVar7,param_1);
                }
              }
              lVar14 = *(long *)(param_1 + 0x198);
              if (lVar14 != 0) {
                if (*(code **)(lVar14 + 0x28) != (code *)0x0) {
                  (**(code **)(lVar14 + 0x28))(param_1,1,param_1 + 0x1a0);
                  lVar14 = *(long *)(param_1 + 0x198);
                  if (lVar14 == 0) goto LAB_01a0e930;
                }
                if ((*(code **)(lVar14 + 0x10) != (code *)0x0) &&
                   (iVar1 = (**(code **)(lVar14 + 0x10))(param_1,1,param_1 + 0x1a0), iVar1 != 0))
                goto LAB_01a0e928;
              }
LAB_01a0e930:
              lVar14 = *(long *)(param_1 + 0x128);
              if (lVar14 != 0) {
                if (*(code **)(lVar14 + 0x28) != (code *)0x0) {
                  (**(code **)(lVar14 + 0x28))(param_1,0,param_1 + 0x130);
                  lVar14 = *(long *)(param_1 + 0x128);
                  if (lVar14 == 0) goto LAB_01a0e980;
                }
                if (*(code **)(lVar14 + 0x10) != (code *)0x0) {
                  iVar4 = (**(code **)(lVar14 + 0x10))(param_1,0,param_1 + 0x130);
                  iVar1 = 0;
                  if (iVar4 != 0) {
                    iVar1 = -5;
                  }
                  goto switchD_01a0d6a8_caseD_1;
                }
              }
LAB_01a0e980:
              iVar1 = 0;
              goto switchD_01a0d6a8_caseD_1;
            }
            pcVar17 = "Timed out waiting for NEWKEYS";
          }
          else {
            pcVar17 = "Unable to send NEWKEYS message";
          }
        }
        else {
          pcVar17 = "Unable to verify hostkey signature";
          iVar1 = -0xb;
        }
      }
      else {
        pcVar17 = "Unable to initialize hostkey importer";
        iVar1 = -10;
      }
    }
  }
  else {
    pcVar17 = "Timed out waiting for KEX reply";
    iVar1 = -9;
  }
LAB_01a0de90:
  iVar1 = _libssh2_error(param_1,iVar1,pcVar17);
switchD_01a0d6a8_caseD_1:
  BN_clear_free(*(BIGNUM **)(param_9 + 0x16));
  *(undefined8 *)(param_9 + 0x16) = 0;
  BN_clear_free(*(BIGNUM **)(param_9 + 0x18));
  *(undefined8 *)(param_9 + 0x18) = 0;
  BN_clear_free(*(BIGNUM **)(param_9 + 0x1a));
  *(undefined8 *)(param_9 + 0x1a) = 0;
  BN_clear_free(*(BIGNUM **)(param_9 + 0x1c));
  *(undefined8 *)(param_9 + 0x1c) = 0;
  BN_CTX_free(*(BN_CTX **)(param_9 + 0x14));
  *(undefined8 *)(param_9 + 0x14) = 0;
  if (*(long *)(param_9 + 2) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_9 + 2),param_1);
    *(undefined8 *)(param_9 + 2) = 0;
  }
  if (*(long *)(param_9 + 4) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_9 + 4),param_1);
    *(undefined8 *)(param_9 + 4) = 0;
  }
  if (*(long *)(param_9 + 0x22) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_9 + 0x22),param_1);
    *(undefined8 *)(param_9 + 0x22) = 0;
  }
  *param_9 = 0;
  return iVar1;
}

