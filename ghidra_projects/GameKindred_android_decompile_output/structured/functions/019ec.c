// functions/019ec — 18 functions
#include "libGameKindred.h"




void thunk_FUN_019ecfd0(void)

{
  FUN_019ecfd0();
  return;
}




int thunk_FUN_019ecf9c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  
  iVar2 = SSL_peek(*(SSL **)(param_1 + 0x218),auStack_14,1);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}




undefined4
FUN_019ec04c(undefined8 param_1,char *param_2,char *param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  size_t __n;
  size_t __n_00;
  void *__dest;
  
  __n = strlen(param_2);
  __n_00 = strlen(param_3);
  lVar1 = __n_00 + __n * 2 + 2;
  __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(lVar1);
  if (__dest == (void *)0x0) {
    uVar2 = 0x1b;
    *param_5 = 0;
    *param_4 = 0;
  }
  else {
    memcpy(__dest,param_2,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    memcpy((undefined1 *)((long)__dest + __n) + 1,param_2,__n);
    *(undefined1 *)((long)__dest + (__n * 2 | 1)) = 0;
    memcpy((void *)((long)__dest + __n * 2 + 2),param_3,__n_00);
    uVar2 = FUN_019f0ec4(param_1,__dest,lVar1,param_4,param_5);
    (*(code *)PTR_free_02bf74b0)(__dest);
  }
  return uVar2;
}




undefined8 FUN_019ec158(undefined8 param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
  sVar1 = strlen(param_2);
  if (sVar1 != 0) {
    uVar2 = FUN_019f0ec4(param_1,param_2,sVar1,param_3,param_4);
    return uVar2;
  }
  lVar3 = (*(code *)PTR_strdup_02bf74c0)("=");
  *param_3 = lVar3;
  if (lVar3 == 0) {
    uVar2 = 0x1b;
    *param_4 = 0;
  }
  else {
    uVar2 = 0;
    *param_4 = 1;
  }
  return uVar2;
}




undefined8 FUN_019ec1f0(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_1;
  *param_2 = 0;
  *param_3 = 0;
  if ((cVar1 != '\0') && (*param_1 != '=')) {
    uVar2 = FUN_019f0cd0();
    return uVar2;
  }
  return 0;
}




undefined4
FUN_019ec218(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined4 uVar1;
  size_t sVar2;
  long lVar3;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  if (param_2 == (char *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = strlen(param_2);
  }
  strlen(param_4);
  uVar1 = FUN_019c1e8c();
  lVar3 = FUN_019f839c(&PTR_MD5_Init_02bb0340,param_4,uVar1);
  if (lVar3 != 0) {
    if (sVar2 != 0) {
      uVar1 = FUN_019c1e8c(sVar2);
      FUN_019f8530(lVar3,param_2,uVar1);
    }
    FUN_019f8550(lVar3,&local_60);
    lVar3 = FUN_019d5c34("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                         param_3,local_60,local_5f,local_5e,local_5d,local_5c,local_5b,local_5a,
                         local_59,local_58,local_57,local_56,local_55,local_54,local_53,local_52,
                         local_51);
    if (lVar3 != 0) {
      uVar1 = FUN_019f0ec4(param_1,lVar3,0,param_5,param_6);
      (*(code *)PTR_free_02bf74b0)(lVar3);
      return uVar1;
    }
  }
  return 0x1b;
}




int FUN_019ec38c(undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  char **ppcVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  char local_278 [8];
  char acStack_270 [16];
  char local_260 [16];
  char acStack_250 [36];
  undefined1 auStack_22c [64];
  char acStack_1ec [64];
  char local_1ac [128];
  char acStack_12c [64];
  undefined1 auStack_ec [36];
  undefined8 local_c8 [5];
  char *local_a0 [5];
  undefined1 local_78 [24];
  
  builtin_strncpy(local_278,"auth",5);
  builtin_strncpy(local_260,"00000001",9);
  local_a0[0] = (char *)0x0;
  builtin_strncpy(acStack_270 + 8,"CATE",5);
  builtin_strncpy(acStack_270,"AUTHENTI",8);
  local_c8[0] = 0;
  if (*param_2 == '\0') {
    return 0x3d;
  }
  if (*param_2 == '=') {
    return 0x3d;
  }
  iVar1 = FUN_019f0cd0(param_2,local_a0,local_c8);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_a0[0] != (char *)0x0) {
    uVar6 = FUN_019ecad0(local_a0[0],&DAT_01e277f3,acStack_12c,0x40,0x22);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_019ecad0(local_a0[0],"realm=\"",local_1ac,0x80,0x22);
      if ((uVar6 & 1) == 0) {
        local_1ac[0] = '\0';
      }
      uVar6 = FUN_019ecad0(local_a0[0],"algorithm=",acStack_1ec,0x40,0x2c);
      if (((uVar6 & 1) != 0) &&
         (uVar6 = FUN_019ecad0(local_a0[0],"qop=\"",auStack_22c,0x40,0x22), (uVar6 & 1) != 0)) {
        if (local_a0[0] != (char *)0x0) {
          (*(code *)PTR_free_02bf74b0)(local_a0[0]);
          local_a0[0] = (char *)0x0;
        }
        iVar1 = strcmp(acStack_1ec,"md5-sess");
        if (iVar1 != 0) {
          return 0x3d;
        }
        pcVar7 = (char *)(*(code *)PTR_strdup_02bf74c0)(auStack_22c);
        if (pcVar7 != (char *)0x0) {
          pcVar8 = strtok_r(pcVar7,",",local_a0);
          if (pcVar8 == (char *)0x0) {
            bVar13 = false;
          }
          else {
            bVar13 = false;
            do {
              iVar1 = FUN_019e23a8(pcVar8,"auth");
              if (iVar1 == 0) {
                iVar1 = FUN_019e23a8(pcVar8,"auth-int");
                if (iVar1 == 0) {
                  FUN_019e23a8(pcVar8,"auth-conf");
                }
              }
              else {
                bVar13 = true;
              }
              pcVar8 = strtok_r((char *)0x0,",",local_a0);
            } while (pcVar8 != (char *)0x0);
          }
          (*(code *)PTR_free_02bf74b0)(pcVar7);
          if (!bVar13) {
            return 0x3d;
          }
          uVar2 = FUN_019c2a2c(param_1);
          uVar3 = FUN_019c2a2c(param_1);
          uVar4 = FUN_019c2a2c(param_1);
          uVar5 = FUN_019c2a2c(param_1);
          FUN_019d5bc0(acStack_250,0x21,"%08x%08x%08x%08x",uVar2,uVar3,uVar4,uVar5);
          lVar9 = FUN_019dbfac(&PTR_MD5_Init_02bb0368);
          if (lVar9 != 0) {
            strlen(param_3);
            uVar2 = FUN_019c1e8c();
            FUN_019dc02c(lVar9,param_3,uVar2);
            FUN_019dc02c(lVar9,":",1);
            strlen(local_1ac);
            uVar2 = FUN_019c1e8c();
            FUN_019dc02c(lVar9,local_1ac,uVar2);
            FUN_019dc02c(lVar9,":",1);
            strlen(param_4);
            uVar2 = FUN_019c1e8c();
            FUN_019dc02c(lVar9,param_4,uVar2);
            FUN_019dc04c(lVar9,local_78);
            lVar9 = FUN_019dbfac(&PTR_MD5_Init_02bb0368);
            if (lVar9 != 0) {
              FUN_019dc02c(lVar9,local_78,0x10);
              FUN_019dc02c(lVar9,":",1);
              strlen(acStack_12c);
              uVar2 = FUN_019c1e8c();
              FUN_019dc02c(lVar9,acStack_12c,uVar2);
              FUN_019dc02c(lVar9,":",1);
              strlen(acStack_250);
              uVar2 = FUN_019c1e8c();
              FUN_019dc02c(lVar9,acStack_250,uVar2);
              FUN_019dc04c(lVar9,local_78);
              lVar9 = 0;
              ppcVar10 = local_a0;
              do {
                FUN_019d5bc0(ppcVar10,3,"%02x",local_78[lVar9]);
                lVar9 = lVar9 + 1;
                ppcVar10 = (char **)((long)ppcVar10 + 2);
              } while (lVar9 != 0x10);
              pcVar7 = (char *)FUN_019d5c34("%s/%s",param_5,local_1ac);
              if (pcVar7 != (char *)0x0) {
                lVar9 = FUN_019dbfac(&PTR_MD5_Init_02bb0368);
                if (lVar9 != 0) {
                  strlen(acStack_270);
                  uVar2 = FUN_019c1e8c();
                  FUN_019dc02c(lVar9,acStack_270,uVar2);
                  FUN_019dc02c(lVar9,":",1);
                  strlen(pcVar7);
                  uVar2 = FUN_019c1e8c();
                  FUN_019dc02c(lVar9,pcVar7,uVar2);
                  FUN_019dc04c(lVar9,local_78);
                  lVar9 = 0;
                  puVar11 = local_c8;
                  do {
                    FUN_019d5bc0(puVar11,3,"%02x",local_78[lVar9]);
                    lVar9 = lVar9 + 1;
                    puVar11 = (undefined8 *)((long)puVar11 + 2);
                  } while (lVar9 != 0x10);
                  lVar9 = FUN_019dbfac(&PTR_MD5_Init_02bb0368);
                  if (lVar9 != 0) {
                    FUN_019dc02c(lVar9,local_a0,0x20);
                    FUN_019dc02c(lVar9,":",1);
                    strlen(acStack_12c);
                    uVar2 = FUN_019c1e8c();
                    FUN_019dc02c(lVar9,acStack_12c,uVar2);
                    FUN_019dc02c(lVar9,":",1);
                    strlen(local_260);
                    uVar2 = FUN_019c1e8c();
                    FUN_019dc02c(lVar9,local_260,uVar2);
                    FUN_019dc02c(lVar9,":",1);
                    strlen(acStack_250);
                    uVar2 = FUN_019c1e8c();
                    FUN_019dc02c(lVar9,acStack_250,uVar2);
                    FUN_019dc02c(lVar9,":",1);
                    strlen(local_278);
                    uVar2 = FUN_019c1e8c();
                    FUN_019dc02c(lVar9,local_278,uVar2);
                    FUN_019dc02c(lVar9,":",1);
                    FUN_019dc02c(lVar9,local_c8,0x20);
                    FUN_019dc04c(lVar9,local_78);
                    lVar9 = 0;
                    puVar12 = auStack_ec;
                    do {
                      FUN_019d5bc0(puVar12,3,"%02x",local_78[lVar9]);
                      lVar9 = lVar9 + 1;
                      puVar12 = puVar12 + 2;
                    } while (lVar9 != 0x10);
                    lVar9 = FUN_019d5c34("username=\"%s\",realm=\"%s\",nonce=\"%s\",cnonce=\"%s\",nc=\"%s\",digest-uri=\"%s\",response=%s,qop=%s"
                                         ,param_3,local_1ac,acStack_12c,acStack_250,local_260,pcVar7
                                         ,auStack_ec,local_278);
                    (*(code *)PTR_free_02bf74b0)(pcVar7);
                    if (lVar9 == 0) {
                      return 0x1b;
                    }
                    iVar1 = FUN_019f0ec4(param_1,lVar9,0,param_6,param_7);
                    (*(code *)PTR_free_02bf74b0)(lVar9);
                    return iVar1;
                  }
                }
                (*(code *)PTR_free_02bf74b0)(pcVar7);
              }
            }
          }
        }
        return 0x1b;
      }
    }
    if (local_a0[0] != (char *)0x0) {
      (*(code *)PTR_free_02bf74b0)(local_a0[0]);
    }
    return 0x3d;
  }
  return 0x3d;
}




undefined4
FUN_019eca4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  
  __s = (char *)FUN_019d5c34(&DAT_01e277da);
  if (__s == (char *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN_019f0ec4(param_1,__s,sVar2,param_4,param_5);
    (*(code *)PTR_free_02bf74b0)(__s);
  }
  return uVar1;
}




void FUN_019ecacc(void)

{
  return;
}




undefined8 FUN_019ecad0(char *param_1,char *param_2,long param_3,long param_4,char param_5)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  
  pcVar1 = strstr(param_1,param_2);
  uVar3 = 0;
  if (pcVar1 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if ((param_4 == 1) || (cVar4 = pcVar1[sVar2], cVar4 == param_5)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (cVar4 != '\0') {
        uVar6 = 0;
        do {
          uVar5 = uVar6 + 1;
          *(char *)(param_3 + uVar6) = cVar4;
          if ((param_4 - 1U <= uVar5) || (cVar4 = pcVar1[uVar6 + sVar2 + 1], cVar4 == param_5))
          break;
          uVar6 = uVar5;
        } while (cVar4 != '\0');
      }
    }
    uVar3 = 1;
    *(undefined1 *)(param_3 + uVar5) = 0;
  }
  return uVar3;
}




undefined8 FUN_019ecb78(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)(*(code *)PTR_malloc_02bf74a8)(0x18);
  *param_2 = (long)puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = 0;
    uVar2 = FUN_019da388(&LAB_019ecbfc);
    *(undefined8 *)(*param_2 + 0x10) = uVar2;
    lVar3 = *param_2;
    if (*(long *)(lVar3 + 0x10) != 0) {
      return 0;
    }
    if (lVar3 != 0) {
      (*(code *)PTR_free_02bf74b0)(lVar3);
      *param_2 = 0;
    }
  }
  return 0x1b;
}




void FUN_019ecc04(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_019da520(*(long *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    (*(code *)PTR_free_02bf74b0)(param_1);
    return;
  }
  return;
}




undefined8 FUN_019ecc4c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_019da3c4(*(long *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8),
                       param_2);
  if (iVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    *(long *)(param_2 + 0x6c0) = param_1;
    uVar2 = 0;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  return uVar2;
}




undefined8 FUN_019ecca0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)**(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_019da474(*(long **)(param_1 + 0x10),plVar1,0);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  *(undefined8 *)(param_2 + 0x6c0) = 0;
  return 1;
}




bool FUN_019ecf40(void)

{
  int iVar1;
  
  ENGINE_load_builtin_engines();
  SSL_load_error_strings();
  iVar1 = SSL_library_init();
  if (iVar1 != 0) {
    OPENSSL_add_all_algorithms_noconf();
    CONF_modules_load_file((char *)0x0,(char *)0x0,0x30);
  }
  return iVar1 != 0;
}




void FUN_019ecf78(void)

{
  EVP_cleanup();
  ENGINE_cleanup();
  CRYPTO_cleanup_all_ex_data();
  ERR_free_strings();
  ERR_remove_thread_state((CRYPTO_THREADID *)0x0);
  return;
}




int FUN_019ecf9c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  
  iVar2 = SSL_peek(*(SSL **)(param_1 + 0x218),auStack_14,1);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}




undefined8 FUN_019ecfd0(long param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ENGINE *e;
  undefined8 uVar3;
  ulong e_00;
  char acStack_140 [256];
  
  e = ENGINE_by_id(param_2);
  if (e == (ENGINE *)0x0) {
    FUN_019ca0fc(param_1,"SSL Engine \'%s\' not found",param_2);
    uVar3 = 0x35;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x8a70);
    if ((ENGINE *)*puVar1 != (ENGINE *)0x0) {
      ENGINE_finish((ENGINE *)*puVar1);
      ENGINE_free((ENGINE *)*puVar1);
      *puVar1 = 0;
    }
    iVar2 = ENGINE_init(e);
    if (iVar2 == 0) {
      ENGINE_free(e);
      e_00 = ERR_get_error();
      ERR_error_string_n(e_00,acStack_140,0x100);
      FUN_019ca0fc(param_1,"Failed to initialise SSL Engine \'%s\':\n%s",param_2,acStack_140);
      uVar3 = 0x42;
    }
    else {
      uVar3 = 0;
      *puVar1 = e;
    }
  }
  return uVar3;
}

