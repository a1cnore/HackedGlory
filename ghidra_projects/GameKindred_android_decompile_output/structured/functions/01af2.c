// functions/01af2 — 6 functions
#include "libGameKindred.h"




void * FUN_01af2120(long param_1)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_malloc(0x20,"conf_def.c",0x85);
  if ((ptr != (void *)0x0) && (iVar1 = (**(code **)(param_1 + 0x10))(ptr), iVar1 == 0)) {
    CRYPTO_free(ptr);
    return (void *)0x0;
  }
  return ptr;
}




bool FUN_01af21d8(CONF *param_1)

{
  if (param_1 != (CONF *)0x0) {
    _CONF_free_data(param_1);
  }
  return param_1 != (CONF *)0x0;
}




undefined8 FUN_01af21dc(CONF *param_1)

{
  _CONF_free_data(param_1);
  return 1;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01af21f4(CONF *param_1,BIO *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  BUF_MEM *a;
  byte *pbVar4;
  size_t sVar5;
  CONF_VALUE *value;
  char *pcVar6;
  CONF_VALUE *section;
  lhash_st_CONF_VALUE *conf;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  long lVar18;
  CONF_VALUE *pCVar19;
  lhash_st_CONF_VALUE *plVar20;
  ulong uVar21;
  long lVar22;
  CONF_VALUE *local_a8;
  byte *local_80;
  char acStack_78 [24];
  
  local_80 = (byte *)0x0;
  plVar20 = param_1->data;
  a = BUF_MEM_new();
  if (a == (BUF_MEM *)0x0) {
    ERR_put_error(0xe,0x79,7,"conf_def.c",0xe0);
    lVar22 = 0;
    goto joined_r0x01af28c4;
  }
  pbVar4 = (byte *)BUF_strdup("default");
  local_80 = pbVar4;
  if (pbVar4 == (byte *)0x0) {
    iVar3 = 0x41;
    iVar7 = 0xe6;
LAB_01af2928:
    ERR_put_error(0xe,0x79,iVar3,"conf_def.c",iVar7);
  }
  else {
    iVar3 = _CONF_new_data(param_1);
    if (iVar3 != 0) {
      local_a8 = _CONF_new_section(param_1,(char *)pbVar4);
      if (local_a8 != (CONF_VALUE *)0x0) {
        iVar3 = BUF_MEM_grow(a,0x200);
        if (iVar3 != 0) {
          lVar22 = 0;
LAB_01af2290:
          uVar21 = 0;
          bVar2 = false;
LAB_01af2298:
          lVar18 = (long)(int)uVar21;
          pcVar6 = a->data + lVar18;
          *pcVar6 = '\0';
          BIO_gets(param_2,pcVar6,0x1ff);
          pcVar6[0x1ff] = '\0';
          sVar5 = strlen(pcVar6);
          iVar3 = (int)sVar5;
          if (!bVar2 && iVar3 == 0) {
            BUF_MEM_free(a);
            if (local_80 != (byte *)0x0) {
              CRYPTO_free(local_80);
            }
            return 1;
          }
          uVar21 = sVar5 & 0xffffffff;
          if (0 < iVar3) {
            uVar12 = (long)iVar3;
            do {
              if ((pcVar6[uVar12 - 1] != '\r') && (uVar21 = uVar12, pcVar6[uVar12 - 1] != '\n'))
              break;
              uVar21 = uVar12 - 1;
              bVar2 = 1 < (long)uVar12;
              uVar12 = uVar21;
            } while (bVar2);
          }
          iVar7 = (int)uVar21;
          if ((iVar3 == 0) || (iVar7 != iVar3)) {
            bVar2 = false;
            lVar22 = lVar22 + 1;
            pcVar6[iVar7] = '\0';
            uVar12 = lVar18 + iVar7;
            if (0 < (int)uVar12) goto LAB_01af233c;
LAB_01af235c:
            if (bVar2) {
              bVar2 = true;
              uVar21 = uVar12 & 0xffffffff;
              goto LAB_01af2788;
            }
            pbVar8 = (byte *)a->data;
            pvVar10 = param_1->meth_data;
            uVar21 = (ulong)*pbVar8;
            uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
            pbVar4 = pbVar8;
            while ((uVar14 >> 0xb & 1) == 0) {
              if ((uVar14 >> 4 & 1) == 0) {
                if ((uVar14 >> 7 & 1) == 0) {
                  uVar16 = (uint)uVar14;
                  goto LAB_01af23f0;
                }
                break;
              }
              pbVar4 = pbVar4 + 1;
              uVar21 = (ulong)*pbVar4;
              uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
            }
            goto LAB_01af24f8;
          }
          bVar2 = true;
          uVar12 = lVar18 + iVar7;
          if ((int)uVar12 < 1) goto LAB_01af235c;
LAB_01af233c:
          uVar21 = uVar12 - 1;
          if (((*(byte *)((long)param_1->meth_data + (ulong)(byte)a->data[uVar21] * 2) >> 5 & 1) ==
               0) || ((1 < (int)uVar12 &&
                      ((*(byte *)((long)param_1->meth_data + (ulong)(byte)(a->data + uVar21)[-1] * 2
                                 ) >> 5 & 1) != 0)))) goto LAB_01af235c;
          bVar2 = true;
          goto LAB_01af2788;
        }
        lVar22 = 0;
LAB_01af29e0:
        iVar3 = 7;
        iVar7 = 0xf9;
LAB_01af29f8:
        ERR_put_error(0xe,0x79,iVar3,"conf_def.c",iVar7);
LAB_01af2a00:
        BUF_MEM_free(a);
        goto joined_r0x01af28c4;
      }
      iVar3 = 0x67;
      iVar7 = 0xf1;
      goto LAB_01af2928;
    }
    ERR_put_error(0xe,0x79,0x41,"conf_def.c",0xeb);
  }
  lVar22 = 0;
  BUF_MEM_free(a);
joined_r0x01af28c4:
  value = (CONF_VALUE *)0x0;
  pCVar19 = value;
joined_r0x01af2ab4:
  if (local_80 != (byte *)0x0) {
    CRYPTO_free(local_80);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar22;
  }
  BIO_snprintf(acStack_78,0x18,"%ld",lVar22);
  ERR_add_error_data(2,"line ",acStack_78);
  conf = param_1->data;
  if ((conf != (lhash_st_CONF_VALUE *)0x0) && (plVar20 != conf)) {
    CONF_free(conf);
    param_1->data = (lhash_st_CONF_VALUE *)0x0;
  }
  if (pCVar19 != (CONF_VALUE *)0x0) {
    if (pCVar19->name != (char *)0x0) {
      CRYPTO_free(pCVar19->name);
    }
    if (pCVar19->value != (char *)0x0) {
      CRYPTO_free(pCVar19->value);
    }
    CRYPTO_free(value);
  }
  return 0;
LAB_01af23f0:
  do {
    uVar15 = (uint)uVar21;
    if ((uVar16 >> 10 & 1) == 0) {
      if ((uVar16 >> 6 & 1) == 0) {
        if ((uVar16 >> 5 & 1) == 0) {
          if ((uVar16 >> 3 & 1) != 0) goto LAB_01af24fc;
          uVar21 = (ulong)pbVar4[1];
          uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
          pbVar4 = pbVar4 + 1;
        }
        else {
          pbVar9 = pbVar4 + 1;
          if ((*(byte *)((long)pvVar10 + (ulong)*pbVar9 * 2) & 8) == 0) {
            pbVar9 = pbVar4 + 2;
          }
LAB_01af24ec:
          uVar21 = (ulong)*pbVar9;
          uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
          pbVar4 = pbVar9;
        }
        uVar16 = (uint)uVar14;
        if ((uVar14 >> 7 & 1) != 0) break;
        goto LAB_01af23f0;
      }
      pbVar17 = pbVar4 + 1;
      bVar2 = *pbVar17 == uVar15;
      if (!bVar2) {
        uVar14 = *(ushort *)((long)pvVar10 + (ulong)(uint)*pbVar17 * 2);
        while ((uVar14 >> 3 & 1) == 0) {
          pbVar9 = pbVar17;
          if (((uVar14 >> 5 & 1) != 0) &&
             (pbVar9 = pbVar4 + 2, (*(byte *)((long)pvVar10 + (ulong)*pbVar9 * 2) >> 3 & 1) != 0))
          goto LAB_01af24ec;
          pbVar17 = pbVar9 + 1;
          bVar2 = *pbVar17 == uVar15;
          pbVar4 = pbVar9;
          if (bVar2) break;
          uVar14 = *(ushort *)((long)pvVar10 + (ulong)(uint)*pbVar17 * 2);
        }
      }
      pbVar4 = pbVar4 + 2;
      if (!bVar2) {
        pbVar4 = pbVar17;
      }
      uVar21 = (ulong)*pbVar4;
      uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
    }
    else {
      pbVar17 = pbVar4 + 1;
      uVar21 = (ulong)*pbVar17;
      bVar1 = *(byte *)((long)pvVar10 + uVar21 * 2);
      while ((uVar16 = (uint)uVar21, (bVar1 >> 3 & 1) == 0 &&
             ((pbVar9 = pbVar17, (uint)uVar21 != uVar15 ||
              (pbVar9 = pbVar4 + 2, uVar16 = uVar15, *pbVar9 == uVar15))))) {
        pbVar17 = pbVar9 + 1;
        uVar21 = (ulong)*pbVar17;
        bVar1 = *(byte *)((long)pvVar10 + uVar21 * 2);
        pbVar4 = pbVar9;
      }
      pbVar4 = pbVar4 + 2;
      if (uVar16 != uVar15) {
        pbVar4 = pbVar17;
      }
      uVar21 = (ulong)*pbVar4;
      uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
    }
    uVar16 = (uint)uVar14;
  } while ((uVar14 >> 7 & 1) == 0);
LAB_01af24f8:
  *pbVar4 = 0;
LAB_01af24fc:
  pvVar10 = param_1->meth_data;
  do {
    pbVar4 = pbVar8;
    uVar12 = (ulong)*pbVar4;
    uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
    pbVar8 = pbVar4 + 1;
  } while ((uVar14 & 0x18) == 0x10);
  bVar2 = false;
  uVar21 = 0;
  if ((uVar14 >> 3 & 1) == 0) {
    pbVar8 = pbVar4;
    if (*pbVar4 != 0x5b) {
      do {
        if ((uVar14 >> 5 & 1) == 0) {
          if ((uVar14 & 0x307) == 0) goto LAB_01af2570;
          pbVar17 = pbVar8 + 1;
        }
        else {
          pbVar17 = pbVar8 + 1;
          if ((*(byte *)((long)pvVar10 + (ulong)*pbVar17 * 2) & 8) == 0) {
            pbVar17 = pbVar8 + 2;
          }
        }
        uVar12 = (ulong)*pbVar17;
        uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
        pbVar8 = pbVar17;
      } while( true );
    }
    do {
      pbVar4 = pbVar4 + 1;
      uVar21 = (ulong)*pbVar4;
    } while ((*(ushort *)((long)pvVar10 + uVar21 * 2) & 0x18) == 0x10);
    do {
      uVar14 = *(ushort *)((long)pvVar10 + uVar21 * 2);
      pbVar17 = pbVar4;
      pbVar8 = pbVar4;
      if ((uVar14 >> 5 & 1) == 0) goto LAB_01af2808;
LAB_01af27e4:
      pbVar8 = pbVar17 + 1;
      if ((*(byte *)((long)pvVar10 + (ulong)*pbVar8 * 2) & 8) == 0) {
        pbVar8 = pbVar17 + 2;
      }
      uVar14 = *(ushort *)((long)pvVar10 + (ulong)*pbVar8 * 2);
joined_r0x01af2804:
      pbVar17 = pbVar8;
      if ((uVar14 >> 5 & 1) != 0) goto LAB_01af27e4;
LAB_01af2808:
      if ((uVar14 & 0x307) != 0) goto LAB_01af27d4;
      pbVar17 = pbVar8 + -1;
      do {
        pbVar17 = pbVar17 + 1;
        bVar1 = *pbVar17;
        uVar21 = (ulong)bVar1;
      } while ((*(ushort *)((long)pvVar10 + uVar21 * 2) & 0x18) == 0x10);
      if (bVar1 == 0) {
LAB_01af2af4:
        ERR_put_error(0xe,0x79,100,"conf_def.c",0x13e);
        goto LAB_01af2a00;
      }
      if (bVar1 == 0x5d) goto LAB_01af2844;
      bVar2 = pbVar4 == pbVar17;
      pbVar4 = pbVar17;
      if (bVar2) goto LAB_01af2af4;
    } while( true );
  }
LAB_01af2788:
  iVar3 = BUF_MEM_grow(a,(long)((int)uVar21 + 0x200));
  if (iVar3 == 0) goto LAB_01af29e0;
  goto LAB_01af2298;
LAB_01af2570:
  pbVar17 = pbVar4;
  if ((int)uVar12 == 0x3a) {
    if (pbVar8[1] == 0x3a) {
      pbVar17 = pbVar8 + 2;
      *pbVar8 = 0;
      pvVar10 = param_1->meth_data;
      uVar12 = (ulong)*pbVar17;
      uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
      pbVar8 = pbVar17;
      while( true ) {
        while ((uVar14 >> 5 & 1) != 0) {
          pbVar9 = pbVar8 + 1;
          if ((*(byte *)((long)pvVar10 + (ulong)*pbVar9 * 2) & 8) == 0) {
            pbVar9 = pbVar8 + 2;
          }
          uVar12 = (ulong)*pbVar9;
          pbVar8 = pbVar9;
          uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
        }
        if ((uVar14 & 0x307) == 0) break;
        pbVar8 = pbVar8 + 1;
        uVar12 = (ulong)*pbVar8;
        uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
      }
    }
    else {
      uVar12 = 0x3a;
      pbVar4 = (byte *)0x0;
    }
  }
  else {
    pbVar4 = (byte *)0x0;
  }
  uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
  pbVar9 = pbVar8;
  while ((uVar14 & 0x18) == 0x10) {
    uVar12 = (ulong)pbVar9[1];
    pbVar9 = pbVar9 + 1;
    uVar14 = *(ushort *)((long)pvVar10 + uVar12 * 2);
  }
  if ((int)uVar12 != 0x3d) {
    ERR_put_error(0xe,0x79,0x65,"conf_def.c",0x159);
    goto LAB_01af2a00;
  }
  *pbVar8 = 0;
  pvVar10 = param_1->meth_data;
  lVar18 = 1;
  pbVar8 = pbVar9;
  do {
    lVar13 = lVar18;
    pbVar8 = pbVar8 + 1;
    lVar18 = lVar13 + 1;
  } while ((*(ushort *)((long)pvVar10 + (ulong)*pbVar8 * 2) & 0x18) == 0x10);
  do {
    lVar18 = lVar13;
    pbVar9 = pbVar9 + 1;
    lVar13 = lVar18 + -1;
  } while ((*(byte *)((long)pvVar10 + (ulong)*pbVar9 * 2) >> 3 & 1) == 0);
  do {
    pbVar11 = pbVar9;
    if (lVar18 == 0) break;
    lVar18 = lVar18 + 1;
    pbVar9 = pbVar11 + -1;
  } while ((*(byte *)((long)pvVar10 + (ulong)pbVar11[-1] * 2) >> 4 & 1) != 0);
  *pbVar11 = 0;
  value = CRYPTO_malloc(0x18,"conf_def.c",0x167);
  pbVar9 = local_80;
  if (value == (CONF_VALUE *)0x0) {
    ERR_put_error(0xe,0x79,0x41,"conf_def.c",0x168);
    pCVar19 = (CONF_VALUE *)0x0;
  }
  else {
    pbVar11 = local_80;
    if (pbVar4 != (byte *)0x0) {
      pbVar11 = pbVar4;
    }
    sVar5 = strlen((char *)pbVar17);
    pcVar6 = CRYPTO_malloc((int)sVar5 + 1,"conf_def.c",0x16d);
    value->value = (char *)0x0;
    value->name = pcVar6;
    pCVar19 = value;
    if (pcVar6 == (char *)0x0) {
      ERR_put_error(0xe,0x79,0x41,"conf_def.c",0x170);
    }
    else {
      sVar5 = strlen((char *)pbVar17);
      BUF_strlcpy(pcVar6,(char *)pbVar17,sVar5 + 1);
      iVar3 = FUN_01af2c44(param_1,pbVar11,&value->value,pbVar8);
      if (iVar3 != 0) {
        iVar3 = strcmp((char *)pbVar11,(char *)pbVar9);
        section = local_a8;
        if (((iVar3 == 0) ||
            (section = _CONF_get_section(param_1,(char *)pbVar11), section != (CONF_VALUE *)0x0)) ||
           (section = _CONF_new_section(param_1,(char *)pbVar11), section != (CONF_VALUE *)0x0)) {
          iVar3 = _CONF_add_string(param_1,section,value);
          bVar2 = false;
          uVar21 = 0;
          if (iVar3 != 0) goto LAB_01af2788;
          iVar3 = 0x41;
          iVar7 = 0x184;
        }
        else {
          iVar3 = 0x67;
          iVar7 = 0x17d;
        }
        ERR_put_error(0xe,0x79,iVar3,"conf_def.c",iVar7);
        BUF_MEM_free(a);
        goto joined_r0x01af2ab4;
      }
    }
  }
  BUF_MEM_free(a);
  goto joined_r0x01af2ab4;
LAB_01af27d4:
  pbVar8 = pbVar8 + 1;
  uVar14 = *(ushort *)((long)pvVar10 + (ulong)*pbVar8 * 2);
  goto joined_r0x01af2804;
LAB_01af2844:
  *pbVar8 = 0;
  iVar3 = FUN_01af2c44(param_1,0,&local_80);
  pbVar4 = local_80;
  if (iVar3 == 0) goto LAB_01af2a00;
  local_a8 = _CONF_get_section(param_1,(char *)local_80);
  if ((local_a8 == (CONF_VALUE *)0x0) &&
     (local_a8 = _CONF_new_section(param_1,(char *)pbVar4), local_a8 == (CONF_VALUE *)0x0)) {
    iVar3 = 0x67;
    iVar7 = 0x148;
    goto LAB_01af29f8;
  }
  iVar3 = BUF_MEM_grow(a,0x200);
  if (iVar3 == 0) goto LAB_01af29e0;
  goto LAB_01af2290;
}




undefined8 FUN_01af2b4c(long param_1,void *param_2)

{
  lh_doall_arg(*(_LHASH **)(param_1 + 0x10),(LHASH_DOALL_ARG_FN_TYPE)&LAB_01af30e8,param_2);
  return 1;
}




undefined8 FUN_01af2c44(CONF *param_1,byte *param_2,undefined8 *param_3,byte *param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  BUF_MEM *str;
  size_t sVar7;
  char *__s;
  byte *section;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  void *pvVar12;
  byte *pbVar13;
  byte bVar14;
  ulong uVar15;
  long lVar16;
  char cVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  
  str = BUF_MEM_new();
  if (str != (BUF_MEM *)0x0) {
    sVar7 = strlen((char *)param_4);
    iVar5 = BUF_MEM_grow(str,(long)((sVar7 << 0x20) + 0x100000000) >> 0x20);
    if (iVar5 != 0) {
      uVar21 = 0;
      bVar4 = 0;
      do {
        pvVar12 = param_1->meth_data;
        uVar10 = (ulong)*param_4;
        uVar2 = *(ushort *)((long)pvVar12 + uVar10 * 2);
        if ((uVar2 >> 6 & 1) == 0) goto LAB_01af2cf8;
LAB_01af2e14:
        pbVar18 = param_4 + 1;
        bVar14 = *pbVar18;
        uVar15 = (ulong)bVar14;
        uVar9 = (uint)uVar10;
        if ((bVar14 != uVar9) &&
           (uVar2 = *(ushort *)((long)pvVar12 + (ulong)(uint)bVar14 * 2), (uVar2 >> 3 & 1) == 0)) {
          uVar10 = (long)(int)uVar21;
          do {
            bVar14 = (byte)uVar15;
            pbVar13 = pbVar18;
            if ((uVar2 >> 5 & 1) != 0) {
              pbVar18 = param_4 + 2;
              bVar14 = *pbVar18;
              uVar15 = (ulong)bVar14;
              pbVar13 = pbVar18;
              if ((*(byte *)((long)pvVar12 + uVar15 * 2) >> 3 & 1) != 0) {
                uVar21 = uVar10 & 0xffffffff;
                break;
              }
            }
            uVar21 = uVar10 + 1;
            str->data[uVar10] = bVar14;
            pbVar18 = pbVar13 + 1;
            bVar14 = *pbVar18;
            uVar15 = (ulong)bVar14;
            if (bVar14 == uVar9) break;
            pvVar12 = param_1->meth_data;
            uVar2 = *(ushort *)((long)pvVar12 + (ulong)(uint)bVar14 * 2);
            uVar10 = uVar21;
            param_4 = pbVar13;
          } while ((uVar2 >> 3 & 1) == 0);
        }
        if ((uint)uVar15 == uVar9) {
          pbVar18 = pbVar18 + 1;
        }
        pvVar12 = param_1->meth_data;
        uVar10 = (ulong)*pbVar18;
        uVar2 = *(ushort *)((long)pvVar12 + uVar10 * 2);
        param_4 = pbVar18;
joined_r0x01af2cf4:
        if ((uVar2 >> 6 & 1) != 0) goto LAB_01af2e14;
LAB_01af2cf8:
        uVar9 = (uint)uVar10;
        iVar5 = (int)uVar21;
        if ((uVar2 >> 10 & 1) != 0) goto LAB_01af2d38;
        if ((uVar2 >> 5 & 1) != 0) {
          bVar14 = param_4[1];
          if ((*(byte *)((long)pvVar12 + (ulong)bVar14 * 2) >> 3 & 1) != 0) goto LAB_01af303c;
          uVar3 = (bVar14 - 0x62) * 0x80;
          uVar9 = bVar14 - 0x62 >> 1 & 0x7f;
          if ((uVar3 & 0xff | uVar9) < 10) {
            bVar11 = 0xd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(uVar3 & 0xff | uVar9) {
            case 0:
              bVar11 = 8;
              break;
            default:
              goto switchD_01af2de8_caseD_1;
            case 6:
              bVar11 = 10;
              break;
            case 8:
              break;
            case 9:
              bVar11 = 9;
            }
          }
          else {
switchD_01af2de8_caseD_1:
            bVar11 = bVar14;
          }
          str->data[iVar5] = bVar11;
          uVar21 = (ulong)(iVar5 + 1);
          pvVar12 = param_1->meth_data;
          uVar10 = (ulong)param_4[2];
          uVar2 = *(ushort *)((long)pvVar12 + uVar10 * 2);
          param_4 = param_4 + 2;
          goto joined_r0x01af2cf4;
        }
        if ((uVar2 >> 3 & 1) != 0) {
LAB_01af303c:
          str->data[iVar5] = '\0';
          if ((void *)*param_3 != (void *)0x0) {
            CRYPTO_free((void *)*param_3);
          }
          *param_3 = str->data;
          CRYPTO_free(str);
          return 1;
        }
        pbVar18 = param_4 + 1;
        if (uVar9 != 0x24) {
          str->data[iVar5] = (char)uVar10;
          uVar21 = (ulong)(iVar5 + 1);
          pvVar12 = param_1->meth_data;
          uVar10 = (ulong)*pbVar18;
          uVar2 = *(ushort *)((long)pvVar12 + uVar10 * 2);
          param_4 = pbVar18;
          goto joined_r0x01af2cf4;
        }
        iVar6 = 0x29;
        if (param_4[1] != 0x28) {
          iVar6 = 0;
        }
        iVar1 = 0x7d;
        if (param_4[1] != 0x7b) {
          iVar1 = iVar6;
        }
        pbVar13 = param_4 + 2;
        if (iVar1 == 0) {
          pbVar13 = pbVar18;
        }
        pbVar19 = pbVar13 + -1;
        pbVar18 = pbVar13;
        do {
          pbVar8 = pbVar19;
          pbVar18 = pbVar18 + 1;
          pbVar19 = pbVar8 + 1;
          bVar14 = *pbVar19;
        } while ((*(ushort *)((long)pvVar12 + (ulong)bVar14 * 2) & 0x107) != 0);
        if (bVar14 != 0x3a) {
          uVar10 = (ulong)(uint)bVar14;
          *pbVar19 = 0;
          bVar11 = bVar14;
joined_r0x01af3034:
          pbVar20 = (byte *)0x0;
          section = param_2;
          pbVar8 = pbVar13;
          pbVar18 = pbVar19;
          bVar14 = bVar4;
          if (iVar1 == 0) goto LAB_01af2f80;
LAB_01af2f74:
          bVar11 = (byte)uVar10;
          if (iVar1 == (int)uVar10) {
            pbVar8 = pbVar13;
            pbVar19 = pbVar18 + 1;
            bVar14 = bVar4;
            goto LAB_01af2f80;
          }
          iVar5 = 0x66;
          iVar6 = 0x234;
          goto LAB_01af30b8;
        }
        if (pbVar8[2] != 0x3a) {
          uVar10 = 0x3a;
          *pbVar19 = 0;
          bVar11 = 0x3a;
          goto joined_r0x01af3034;
        }
        pbVar8 = pbVar8 + 3;
        *pbVar19 = 0;
        do {
          pbVar18 = pbVar18 + 1;
          bVar11 = *pbVar18;
          uVar10 = (ulong)bVar11;
        } while ((*(ushort *)((long)param_1->meth_data + uVar10 * 2) & 0x107) != 0);
        *pbVar18 = 0;
        section = pbVar13;
        pbVar13 = pbVar8;
        pbVar20 = pbVar19;
        pbVar19 = pbVar18;
        bVar4 = bVar14;
        if (iVar1 != 0) goto LAB_01af2f74;
LAB_01af2f80:
        __s = _CONF_get_string(param_1,(char *)section,(char *)pbVar8);
        if (pbVar20 != (byte *)0x0) {
          *pbVar20 = bVar14;
        }
        *pbVar18 = bVar11;
        if (__s == (char *)0x0) {
          iVar5 = 0x68;
          iVar6 = 0x248;
          goto LAB_01af30b8;
        }
        sVar7 = strlen(__s);
        iVar6 = BUF_MEM_grow_clean(str,(size_t)(param_4 + str->length + (sVar7 - (long)pbVar19)));
        if (iVar6 == 0) {
          iVar5 = 0x41;
          iVar6 = 0x24d;
LAB_01af30b8:
          ERR_put_error(0xe,0x65,iVar5,"conf_def.c",iVar6);
          break;
        }
        cVar17 = *__s;
        if (cVar17 != '\0') {
          lVar16 = (long)iVar5;
          do {
            __s = __s + 1;
            uVar21 = (ulong)((int)uVar21 + 1);
            str->data[lVar16] = cVar17;
            cVar17 = *__s;
            lVar16 = lVar16 + 1;
          } while (cVar17 != '\0');
        }
        *pbVar18 = bVar11;
        param_4 = pbVar19;
        bVar4 = bVar14;
      } while( true );
    }
    BUF_MEM_free(str);
  }
  return 0;
LAB_01af2d38:
  pbVar18 = param_4 + 1;
  uVar15 = (ulong)*pbVar18;
  if ((*(byte *)((long)pvVar12 + uVar15 * 2) >> 3 & 1) == 0) {
    uVar21 = (ulong)iVar5;
    do {
      pbVar13 = pbVar18;
      cVar17 = (char)uVar15;
      if (((uint)uVar15 == uVar9) &&
         (pbVar13 = param_4 + 2, uVar15 = uVar10, cVar17 = (char)uVar10, *pbVar13 != uVar9))
      goto LAB_01af2df8;
      str->data[uVar21] = cVar17;
      pbVar18 = pbVar13 + 1;
      uVar15 = (ulong)*pbVar18;
      uVar21 = uVar21 + 1;
      param_4 = pbVar13;
    } while ((*(byte *)((long)param_1->meth_data + uVar15 * 2) >> 3 & 1) == 0);
    uVar21 = uVar21 & 0xffffffff;
  }
LAB_01af2df8:
  param_4 = param_4 + 2;
  if ((uint)uVar15 != uVar9) {
    param_4 = pbVar18;
  }
  pvVar12 = param_1->meth_data;
  uVar10 = (ulong)*param_4;
  uVar2 = *(ushort *)((long)pvVar12 + uVar10 * 2);
  goto joined_r0x01af2cf4;
}

