// functions/01b0e — 4 functions
#include "libGameKindred.h"




_STACK * FUN_01b0e590(BIO *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  _STACK *st;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  byte *__s;
  byte *pbVar9;
  void *local_470;
  byte local_468 [1032];
  
  st = sk_new((cmp *)&LAB_01b0ee84);
  if (st == (_STACK *)0x0) {
    return (_STACK *)0x0;
  }
  local_470 = (void *)0x0;
LAB_01b0e5e0:
  iVar3 = BIO_gets(param_1,(char *)local_468,0x400);
  if (iVar3 < 1) {
    return st;
  }
  if ((local_470 == (void *)0x0) || (iVar3 = isspace((uint)local_468[0]), iVar3 == 0)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 3;
  }
  pbVar9 = (byte *)0x0;
  lVar8 = 0;
  __s = local_468;
  uVar7 = (uint)local_468[0];
  pbVar6 = local_468;
  if (local_468[0] < 0xe) goto LAB_01b0ea14;
LAB_01b0e658:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(iVar3) {
  case 2:
    if (uVar7 != 0x3a) {
      iVar3 = 1;
      break;
    }
    *pbVar6 = 0;
    uVar7 = (uint)*__s;
    if (*__s != 0) {
      do {
        if (uVar7 == 0x22) {
          __s = __s + 1;
          if (*__s != 0) {
LAB_01b0e794:
            sVar4 = strlen((char *)__s);
            pbVar9 = (byte *)0x0;
            if (__s <= __s + (sVar4 - 1)) goto LAB_01b0e7b8;
            goto LAB_01b0e958;
          }
          break;
        }
        iVar3 = isspace(uVar7);
        if (iVar3 == 0) {
          if (__s != (byte *)0x0) goto LAB_01b0e794;
          break;
        }
        __s = __s + 1;
        uVar7 = (uint)*__s;
      } while (uVar7 != 0);
    }
    pbVar9 = (byte *)0x0;
    goto LAB_01b0e958;
  case 3:
    if (uVar7 == 0x28) {
      iVar3 = 6;
      break;
    }
    if (uVar7 == 0x3b) {
      *pbVar6 = 0;
      uVar7 = (uint)*__s;
      if (*__s != 0) {
        do {
          if (uVar7 == 0x22) {
            __s = __s + 1;
            if (*__s != 0) {
LAB_01b0e8d4:
              sVar4 = strlen((char *)__s);
              pbVar5 = (byte *)0x0;
              if (__s <= __s + (sVar4 - 1)) goto LAB_01b0e8f4;
              goto LAB_01b0e9a8;
            }
            break;
          }
          iVar3 = isspace(uVar7);
          if (iVar3 == 0) {
            if (__s != (byte *)0x0) goto LAB_01b0e8d4;
            break;
          }
          __s = __s + 1;
          uVar7 = (uint)*__s;
        } while (uVar7 != 0);
      }
      goto LAB_01b0e9a4;
    }
    goto LAB_01b0e95c;
  case 4:
    if (uVar7 != 0x3d) {
      iVar3 = 3;
      break;
    }
    *pbVar6 = 0;
    uVar7 = (uint)*__s;
    if (*__s != 0) {
      do {
        if (uVar7 == 0x22) {
          __s = __s + 1;
          if (*__s != 0) {
LAB_01b0e7f0:
            sVar4 = strlen((char *)__s);
            pbVar9 = (byte *)0x0;
            if (__s <= __s + (sVar4 - 1)) goto LAB_01b0e814;
            goto LAB_01b0e984;
          }
          break;
        }
        iVar3 = isspace(uVar7);
        if (iVar3 == 0) {
          if (__s != (byte *)0x0) goto LAB_01b0e7f0;
          break;
        }
        __s = __s + 1;
        uVar7 = (uint)*__s;
      } while (uVar7 != 0);
    }
    pbVar9 = (byte *)0x0;
    goto LAB_01b0e984;
  }
  goto switchD_01b0e66c_default;
  while( true ) {
    iVar3 = isspace((uint)__s[sVar4 - 1]);
    if (iVar3 == 0) goto LAB_01b0e984;
    lVar2 = sVar4 - 2;
    __s[sVar4 - 1] = 0;
    sVar4 = sVar4 - 1;
    if (__s + lVar2 < __s) break;
LAB_01b0e814:
    pbVar9 = __s;
    if (__s[sVar4 - 1] == 0x22) {
      if (sVar4 != 2) {
        __s[sVar4 - 1] = 0;
        goto LAB_01b0e984;
      }
      break;
    }
  }
  pbVar9 = (byte *)0x0;
LAB_01b0e984:
  __s = pbVar6 + 1;
  iVar3 = 4;
  goto switchD_01b0e66c_default;
  while( true ) {
    iVar3 = isspace((uint)__s[sVar4 - 1]);
    if (iVar3 == 0) goto LAB_01b0e9a8;
    lVar2 = sVar4 - 2;
    __s[sVar4 - 1] = 0;
    sVar4 = sVar4 - 1;
    if (__s + lVar2 < __s) break;
LAB_01b0e8f4:
    pbVar5 = __s;
    if (__s[sVar4 - 1] == 0x22) {
      if (sVar4 != 2) {
        __s[sVar4 - 1] = 0;
        goto LAB_01b0e9a8;
      }
      break;
    }
  }
LAB_01b0e9a4:
  pbVar5 = (byte *)0x0;
LAB_01b0e9a8:
  local_470 = (void *)FUN_01b0eecc(pbVar9,pbVar5);
  sk_push(st,local_470);
  pbVar9 = (byte *)0x0;
  __s = pbVar6 + 1;
  iVar3 = 3;
  goto switchD_01b0e66c_default;
  while( true ) {
    iVar3 = isspace((uint)__s[sVar4 - 1]);
    if (iVar3 == 0) goto LAB_01b0e958;
    lVar2 = sVar4 - 2;
    __s[sVar4 - 1] = 0;
    sVar4 = sVar4 - 1;
    if (__s + lVar2 < __s) break;
LAB_01b0e7b8:
    pbVar9 = __s;
    if (__s[sVar4 - 1] == 0x22) {
      if (sVar4 != 2) {
        __s[sVar4 - 1] = 0;
        goto LAB_01b0e958;
      }
      break;
    }
  }
  pbVar9 = (byte *)0x0;
LAB_01b0e958:
  __s = pbVar6 + 1;
LAB_01b0e95c:
  iVar3 = 2;
switchD_01b0e66c_default:
  lVar8 = lVar8 + 1;
  pbVar6 = local_468 + lVar8;
  uVar7 = (uint)*pbVar6;
  if (0xd < *pbVar6) goto LAB_01b0e658;
LAB_01b0ea14:
  if ((1 << (ulong)(uVar7 & 0x1f) & 0x2401U) != 0) goto code_r0x01b0ea20;
  goto LAB_01b0e658;
code_r0x01b0ea20:
  if (iVar3 != 2) {
    if (iVar3 == 4) {
      for (; bVar1 = *__s, bVar1 != 0; __s = __s + 1) {
        if (bVar1 == 0x22) {
          __s = __s + 1;
          if (*__s != 0) {
LAB_01b0ea98:
            sVar4 = strlen((char *)__s);
            pbVar6 = (byte *)0x0;
            if (__s <= __s + (sVar4 - 1)) goto LAB_01b0eb28;
            goto LAB_01b0eab4;
          }
          break;
        }
        iVar3 = isspace((uint)bVar1);
        if (iVar3 == 0) {
          if (__s != (byte *)0x0) goto LAB_01b0ea98;
          break;
        }
      }
LAB_01b0ebb8:
      FUN_01b0efb8(local_470,pbVar9,0);
    }
    goto joined_r0x01b0ebe0;
  }
  uVar7 = (uint)*__s;
  if (*__s != 0) {
    do {
      if (uVar7 == 0x22) {
        __s = __s + 1;
        if (*__s != 0) {
LAB_01b0ead0:
          sVar4 = strlen((char *)__s);
          pbVar6 = (byte *)0x0;
          if (__s <= __s + (sVar4 - 1)) goto LAB_01b0eaf0;
          goto LAB_01b0eb74;
        }
        break;
      }
      iVar3 = isspace(uVar7);
      if (iVar3 == 0) {
        if (__s != (byte *)0x0) goto LAB_01b0ead0;
        break;
      }
      __s = __s + 1;
      uVar7 = (uint)*__s;
    } while (uVar7 != 0);
  }
  goto LAB_01b0eb70;
LAB_01b0eb28:
  if (__s[sVar4 - 1] != 0x22) {
    iVar3 = isspace((uint)__s[sVar4 - 1]);
    if (iVar3 != 0) goto code_r0x01b0eb40;
    FUN_01b0efb8(local_470,pbVar9,__s);
    goto joined_r0x01b0ebe0;
  }
  if (sVar4 != 2) {
    __s[sVar4 - 1] = 0;
    pbVar6 = __s;
LAB_01b0eab4:
    FUN_01b0efb8(local_470,pbVar9,pbVar6);
    goto joined_r0x01b0ebe0;
  }
  goto LAB_01b0ebb8;
code_r0x01b0eb40:
  lVar2 = sVar4 - 2;
  __s[sVar4 - 1] = 0;
  sVar4 = sVar4 - 1;
  if (__s + lVar2 < __s) goto LAB_01b0ebb8;
  goto LAB_01b0eb28;
  while( true ) {
    iVar3 = isspace((uint)__s[sVar4 - 1]);
    if (iVar3 == 0) goto LAB_01b0eb74;
    lVar2 = sVar4 - 2;
    __s[sVar4 - 1] = 0;
    sVar4 = sVar4 - 1;
    if (__s + lVar2 < __s) break;
LAB_01b0eaf0:
    pbVar6 = __s;
    if (__s[sVar4 - 1] == 0x22) {
      if (sVar4 != 2) {
        __s[sVar4 - 1] = 0;
        goto LAB_01b0eb74;
      }
      break;
    }
  }
LAB_01b0eb70:
  pbVar6 = (byte *)0x0;
LAB_01b0eb74:
  local_470 = (void *)FUN_01b0eecc(pbVar9,pbVar6);
  sk_push(st,local_470);
joined_r0x01b0ebe0:
  if (lVar8 == 0) {
    return st;
  }
  goto LAB_01b0e5e0;
}




void * FUN_01b0ec54(BIO *param_1,ASN1_ITEM *param_2)

{
  BIO_METHOD *type;
  BIO *b;
  BIO *in;
  void *pvVar1;
  
  type = BIO_f_base64();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
    ERR_put_error(0xd,0xd1,0x41,"asn_mime.c",0xba);
    pvVar1 = (void *)0x0;
  }
  else {
    in = BIO_push(b,param_1);
    pvVar1 = ASN1_item_d2i_bio(param_2,in,(void *)0x0);
    if (pvVar1 == (void *)0x0) {
      ERR_put_error(0xd,0xd1,0x6e,"asn_mime.c",0xc0);
    }
    BIO_ctrl(in,0xb,0,(void *)0x0);
    BIO_pop(in);
    BIO_free(b);
  }
  return pvVar1;
}




undefined8 * FUN_01b0eecc(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  _STACK *p_Var6;
  undefined8 *puVar7;
  uint uVar8;
  
  if (param_1 == (char *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)BUF_strdup(param_1);
    if (pbVar3 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar8 = (uint)*pbVar3;
    pbVar4 = pbVar3;
    if (*pbVar3 != 0) {
      do {
        iVar2 = isupper(uVar8);
        if (iVar2 != 0) {
          iVar2 = tolower(uVar8);
          *pbVar4 = (byte)iVar2;
        }
        uVar8 = (uint)pbVar4[1];
        pbVar4 = pbVar4 + 1;
      } while (uVar8 != 0);
    }
  }
  pbVar4 = (byte *)0x0;
  if (param_2 != (char *)0x0) {
    pbVar4 = (byte *)BUF_strdup(param_2);
    if (pbVar4 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar8 = (uint)*pbVar4;
    pbVar1 = pbVar4;
    if (*pbVar4 != 0) {
      do {
        iVar2 = isupper(uVar8);
        if (iVar2 != 0) {
          iVar2 = tolower(uVar8);
          *pbVar1 = (byte)iVar2;
        }
        uVar8 = (uint)pbVar1[1];
        pbVar1 = pbVar1 + 1;
      } while (uVar8 != 0);
    }
  }
  puVar5 = CRYPTO_malloc(0x18,"asn_mime.c",0x33d);
  puVar7 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = pbVar3;
    puVar5[1] = pbVar4;
    p_Var6 = sk_new((cmp *)&LAB_01b0f084);
    puVar5[2] = p_Var6;
    puVar7 = (undefined8 *)0x0;
    if (p_Var6 != (_STACK *)0x0) {
      puVar7 = puVar5;
    }
  }
  return puVar7;
}




int FUN_01b0efb8(long param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined8 *data;
  uint __c;
  
  if (param_2 == (char *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)BUF_strdup(param_2);
    if (pbVar3 == (byte *)0x0) {
      return 0;
    }
    __c = (uint)*pbVar3;
    pbVar1 = pbVar3;
    if (*pbVar3 != 0) {
      do {
        iVar2 = isupper(__c);
        if (iVar2 != 0) {
          iVar2 = tolower(__c);
          *pbVar1 = (byte)iVar2;
        }
        __c = (uint)pbVar1[1];
        pbVar1 = pbVar1 + 1;
      } while (__c != 0);
    }
  }
  pcVar4 = (char *)0x0;
  if (((param_3 == (char *)0x0) || (pcVar4 = BUF_strdup(param_3), pcVar4 != (char *)0x0)) &&
     (data = CRYPTO_malloc(0x10,"asn_mime.c",0x360), data != (undefined8 *)0x0)) {
    *data = pbVar3;
    data[1] = pcVar4;
    iVar2 = sk_push(*(_STACK **)(param_1 + 0x10),data);
    return iVar2;
  }
  return 0;
}

