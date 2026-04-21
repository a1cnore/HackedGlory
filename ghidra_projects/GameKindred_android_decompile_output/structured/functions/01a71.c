// functions/01a71 — 13 functions
#include "libGameKindred.h"




undefined8 FUN_01a7102c(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  ulong uVar4;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar4 = uVar1 & 0xc000000000000000;
    lVar2 = uVar4 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      idea_ofb64_encrypt(param_3,out,0x4000000000000000,*(IDEA_KEY_SCHEDULE **)(param_1 + 0x78),
                         (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    idea_ofb64_encrypt(param_3,param_2,param_4,*(IDEA_KEY_SCHEDULE **)(param_1 + 0x78),
                       (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a71120(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      idea_ecb_encrypt((uchar *)(param_3 + uVar2),(uchar *)(param_2 + uVar2),
                       (IDEA_KEY_SCHEDULE *)param_1[0xf]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a71228(long param_1,const_DES_cblock *param_2)

{
  DES_key_schedule *schedule;
  
  schedule = *(DES_key_schedule **)(param_1 + 0x78);
  schedule[3].ks[0] = (_union_772)0x0;
  DES_set_key_unchecked(param_2,schedule);
  DES_set_key_unchecked(param_2 + 1,schedule + 1);
  memcpy(schedule + 2,schedule,0x80);
  return 1;
}




undefined8 FUN_01a71278(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  ulong uVar4;
  DES_key_schedule *ks1;
  uchar *output;
  
  ks1 = *(DES_key_schedule **)(param_1 + 0x78);
  if (ks1[3].ks[0] == (_union_772)0x0) {
    if (param_4 >> 0x3e != 0) {
      uVar1 = param_4 + 0xc000000000000000;
      uVar4 = uVar1 & 0xc000000000000000;
      lVar2 = uVar4 + 0x4000000000000000;
      puVar3 = param_3 + lVar2;
      output = param_2;
      do {
        DES_ede3_cbc_encrypt
                  (param_3,output,0x4000000000000000,ks1,ks1 + 1,ks1 + 2,
                   (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
        param_4 = param_4 + 0xc000000000000000;
        param_3 = param_3 + 0x4000000000000000;
        output = output + 0x4000000000000000;
      } while (param_4 >> 0x3e != 0);
      param_4 = uVar1 - uVar4;
      param_2 = param_2 + lVar2;
      param_3 = puVar3;
    }
    if (param_4 != 0) {
      DES_ede3_cbc_encrypt
                (param_3,param_2,param_4,ks1,ks1 + 1,ks1 + 2,(DES_cblock *)(param_1 + 0x28),
                 *(int *)(param_1 + 0x10));
    }
  }
  else {
    (*(code *)ks1[3].ks[0])(param_3,param_2,param_4,ks1,param_1 + 0x28);
  }
  return 1;
}




undefined8 FUN_01a713a4(long param_1,int param_2,undefined8 param_3,DES_cblock *param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = RAND_bytes(*param_4,*(int *)(param_1 + 0x68));
  if (0 < iVar1) {
    DES_set_odd_parity(param_4);
    if ((0xf < *(int *)(param_1 + 0x68)) &&
       (DES_set_odd_parity(param_4 + 1), 0x17 < *(int *)(param_1 + 0x68))) {
      DES_set_odd_parity(param_4 + 2);
    }
    return 1;
  }
  return 0;
}




undefined8 FUN_01a71434(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  DES_key_schedule *pDVar4;
  ulong uVar5;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar5 = uVar1 & 0xc000000000000000;
    lVar2 = uVar5 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
      DES_ede3_cfb64_encrypt
                (param_3,out,0x4000000000000000,pDVar4,pDVar4 + 1,pDVar4 + 2,
                 (DES_cblock *)(param_1 + 0x28),(int *)(param_1 + 0x58),*(int *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar5;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
    DES_ede3_cfb64_encrypt
              (param_3,param_2,param_4,pDVar4,pDVar4 + 1,pDVar4 + 2,(DES_cblock *)(param_1 + 0x28),
               (int *)(param_1 + 0x58),*(int *)(param_1 + 0x10));
  }
  return 1;
}




undefined8 FUN_01a71548(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  DES_key_schedule *pDVar4;
  ulong uVar5;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar5 = uVar1 & 0xc000000000000000;
    lVar2 = uVar5 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
      DES_ede3_ofb64_encrypt
                (param_3,out,0x4000000000000000,pDVar4,pDVar4 + 1,pDVar4 + 2,
                 (DES_cblock *)(param_1 + 0x28),(int *)(param_1 + 0x58));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar5;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
    DES_ede3_ofb64_encrypt
              (param_3,param_2,param_4,pDVar4,pDVar4 + 1,pDVar4 + 2,(DES_cblock *)(param_1 + 0x28),
               (int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a7164c(long *param_1,long param_2,long param_3,ulong param_4)

{
  DES_key_schedule *ks1;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      ks1 = (DES_key_schedule *)param_1[0xf];
      DES_ecb3_encrypt((const_DES_cblock *)(param_3 + uVar2),(DES_cblock *)(param_2 + uVar2),ks1,
                       ks1 + 1,ks1 + 2,(int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a716c4(long param_1,const_DES_cblock *param_2)

{
  DES_key_schedule *schedule;
  
  schedule = *(DES_key_schedule **)(param_1 + 0x78);
  schedule[3].ks[0] = (_union_772)0x0;
  DES_set_key_unchecked(param_2,schedule);
  DES_set_key_unchecked(param_2 + 1,schedule + 1);
  DES_set_key_unchecked(param_2 + 2,schedule + 2);
  return 1;
}




undefined8 FUN_01a71710(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  DES_key_schedule *ks1;
  ulong uVar2;
  ulong uVar3;
  byte local_68 [4];
  uchar local_64 [4];
  
  if (param_4 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 >> 3;
      uVar1 = (uint)uVar2 & 7;
      local_64[0] = '\0';
      if ((1 << (ulong)(uVar1 ^ 7) & (uint)*(byte *)(param_3 + uVar3)) != 0) {
        local_64[0] = 0x80;
      }
      ks1 = *(DES_key_schedule **)(param_1 + 0x78);
      DES_ede3_cfb_encrypt
                (local_64,local_68,1,1,ks1,ks1 + 1,ks1 + 2,(DES_cblock *)(param_1 + 0x28),
                 *(int *)(param_1 + 0x10));
      uVar2 = uVar2 + 1;
      *(byte *)(param_2 + uVar3) =
           (byte)((local_68[0] & 0x80) >> (ulong)uVar1) |
           (byte)(-0x81 >> uVar1) & *(byte *)(param_2 + uVar3);
    } while (param_4 != uVar2);
  }
  return 1;
}




undefined8 FUN_01a717f4(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  DES_key_schedule *pDVar4;
  uchar *out;
  ulong uVar5;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar5 = uVar1 & 0xc000000000000000;
    lVar2 = uVar5 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
      DES_ede3_cfb_encrypt
                (param_3,out,8,0x4000000000000000,pDVar4,pDVar4 + 1,pDVar4 + 2,
                 (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar5;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
    DES_ede3_cfb_encrypt
              (param_3,param_2,8,param_4,pDVar4,pDVar4 + 1,pDVar4 + 2,(DES_cblock *)(param_1 + 0x28)
               ,*(int *)(param_1 + 0x10));
  }
  return 1;
}




ulong FUN_01a718fc(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  uchar *puVar2;
  _union_772 _Var3;
  ulong uVar4;
  ulong uVar5;
  DES_cblock *pauVar6;
  DES_key_schedule *pDVar7;
  ulong uVar8;
  uchar *input;
  undefined8 local_88 [3];
  uchar auStack_70 [8];
  uchar auStack_68 [8];
  
  if ((param_4 & 0xc000000000000007) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (param_2 == (uchar *)0x0) {
        uVar8 = (ulong)((int)param_4 + 0x10);
        goto LAB_01a71928;
      }
      puVar2 = param_2 + 8;
      memmove(puVar2,param_3,param_4);
      SHA1(param_3,param_4,(uchar *)local_88);
      *(undefined8 *)(param_2 + param_4 + 8) = local_88[0];
      OPENSSL_cleanse(local_88,0x14);
      pauVar6 = (DES_cblock *)(param_1 + 0x28);
      iVar1 = RAND_bytes((uchar *)pauVar6,8);
      if (iVar1 < 1) goto LAB_01a71924;
      uVar8 = param_4 + 8;
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x28);
      pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
      if (pDVar7[3].ks[0] == (_union_772)0x0) {
        if (uVar8 >> 0x3e != 0) {
          uVar4 = param_4 + 0xc000000000000008 & 0xc000000000000000;
          input = puVar2;
          do {
            DES_ede3_cbc_encrypt
                      (input,input,0x4000000000000000,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,
                       *(int *)(param_1 + 0x10));
            uVar8 = uVar8 + 0xc000000000000000;
            input = input + 0x4000000000000000;
          } while (uVar8 >> 0x3e != 0);
          uVar8 = (param_4 + 0xc000000000000008) - uVar4;
          if (uVar8 == 0) goto LAB_01a71b10;
          puVar2 = puVar2 + uVar4 + 0x4000000000000000;
        }
        DES_ede3_cbc_encrypt
                  (puVar2,puVar2,uVar8,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,*(int *)(param_1 + 0x10)
                  );
      }
      else {
        (*(code *)pDVar7[3].ks[0])(puVar2,puVar2,uVar8,pDVar7,pauVar6);
      }
LAB_01a71b10:
      uVar8 = param_4 + 0x10;
      BUF_reverse(param_2,(uchar *)0x0,uVar8);
      pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x28) = 0x521e8792ca2dd4a;
      if (pDVar7[3].ks[0] == (_union_772)0x0) {
        uVar4 = uVar8;
        if (uVar8 >> 0x3e != 0) {
          uVar5 = param_4 + 0xc000000000000010 & 0xc000000000000000;
          puVar2 = param_2;
          do {
            DES_ede3_cbc_encrypt
                      (puVar2,puVar2,0x4000000000000000,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,
                       *(int *)(param_1 + 0x10));
            uVar4 = uVar4 + 0xc000000000000000;
            puVar2 = puVar2 + 0x4000000000000000;
          } while (uVar4 >> 0x3e != 0);
          param_2 = param_2 + uVar5 + 0x4000000000000000;
          uVar4 = (param_4 + 0xc000000000000010) - uVar5;
        }
        if (uVar4 != 0) {
          DES_ede3_cbc_encrypt
                    (param_2,param_2,uVar4,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,
                     *(int *)(param_1 + 0x10));
        }
      }
      else {
        (*(code *)pDVar7[3].ks[0])(param_2,param_2,uVar8,pDVar7,pauVar6);
      }
      goto LAB_01a71928;
    }
    if (param_4 < 0x18) goto LAB_01a71924;
    if (param_2 == (uchar *)0x0) {
      uVar8 = (ulong)((int)param_4 - 0x10);
      goto LAB_01a71928;
    }
    pauVar6 = (DES_cblock *)(param_1 + 0x28);
    *pauVar6 = (DES_cblock)0x521e8792ca2dd4a;
    pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
    if (pDVar7[3].ks[0] == (_union_772)0x0) {
      DES_ede3_cbc_encrypt(param_3,auStack_68,8,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,0);
      if (param_2 != param_3) goto LAB_01a71a3c;
LAB_01a71c54:
      memmove(param_2,param_2 + 8,param_4 - 8);
      pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
      param_3 = param_2 + -8;
      _Var3 = pDVar7[3].ks[0];
      puVar2 = param_2;
      if (_Var3 == (_union_772)0x0) {
        iVar1 = *(int *)(param_1 + 0x10);
        goto LAB_01a71ca0;
      }
LAB_01a71c7c:
      (*(code *)_Var3)(puVar2,param_2,param_4 - 0x10,pDVar7,pauVar6);
    }
    else {
      (*(code *)pDVar7[3].ks[0])(param_3,auStack_68,8,pDVar7,pauVar6);
      if (param_2 == param_3) goto LAB_01a71c54;
LAB_01a71a3c:
      pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
      _Var3 = pDVar7[3].ks[0];
      puVar2 = param_3 + 8;
      if (_Var3 != (_union_772)0x0) goto LAB_01a71c7c;
      iVar1 = *(int *)(param_1 + 0x10);
LAB_01a71ca0:
      DES_ede3_cbc_encrypt(puVar2,param_2,param_4 - 0x10,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,iVar1)
      ;
    }
    uVar8 = param_4 - 0x10;
    pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
    if (pDVar7[3].ks[0] == (_union_772)0x0) {
      DES_ede3_cbc_encrypt
                (param_3 + (param_4 - 8),auStack_70,8,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,
                 *(int *)(param_1 + 0x10));
    }
    else {
      (*(code *)pDVar7[3].ks[0])(param_3 + (param_4 - 8),auStack_70,8,pDVar7,pauVar6);
    }
    BUF_reverse(auStack_68,(uchar *)0x0,8);
    BUF_reverse(param_2,(uchar *)0x0,uVar8);
    BUF_reverse((uchar *)pauVar6,auStack_70,8);
    pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
    if (pDVar7[3].ks[0] == (_union_772)0x0) {
      DES_ede3_cbc_encrypt
                (param_2,param_2,uVar8,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,*(int *)(param_1 + 0x10)
                );
      pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
      _Var3 = pDVar7[3].ks[0];
      if (_Var3 != (_union_772)0x0) goto LAB_01a71d50;
LAB_01a71d94:
      DES_ede3_cbc_encrypt
                (auStack_68,auStack_68,8,pDVar7,pDVar7 + 1,pDVar7 + 2,pauVar6,
                 *(int *)(param_1 + 0x10));
    }
    else {
      (*(code *)pDVar7[3].ks[0])(param_2,param_2,uVar8,pDVar7,pauVar6);
      pDVar7 = *(DES_key_schedule **)(param_1 + 0x78);
      _Var3 = pDVar7[3].ks[0];
      if (_Var3 == (_union_772)0x0) goto LAB_01a71d94;
LAB_01a71d50:
      (*(code *)_Var3)(auStack_68,auStack_68,8,pDVar7,pauVar6);
    }
    SHA1(param_2,uVar8,(uchar *)local_88);
    iVar1 = CRYPTO_memcmp(local_88,auStack_68,8);
    OPENSSL_cleanse(auStack_68,8);
    OPENSSL_cleanse(local_88,0x14);
    OPENSSL_cleanse(auStack_70,8);
    OPENSSL_cleanse(pauVar6,8);
    if (((int)uVar8 != -1) && (iVar1 == 0)) goto LAB_01a71928;
    OPENSSL_cleanse(param_2,uVar8);
  }
LAB_01a71924:
  uVar8 = 0xffffffff;
LAB_01a71928:
  return uVar8 & 0xffffffff;
}




undefined8 FUN_01a71fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (*(code **)(lVar1 + 0x120) != (code *)0x0) {
    (**(code **)(lVar1 + 0x120))
              (param_3,param_2,param_4,lVar1,param_1 + 0x28,*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    CRYPTO_cbc128_encrypt();
    return 1;
  }
  CRYPTO_cbc128_decrypt(param_3,param_2,param_4,lVar1,param_1 + 0x28,*(undefined8 *)(lVar1 + 0x118))
  ;
  return 1;
}

