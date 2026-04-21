// functions/01b13 — 12 functions
#include "libGameKindred.h"




void FUN_01b13478(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_01b12930(param_1,param_2,sVar1);
  return;
}




int FUN_01b138a4(BIO *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  uchar *local_68;
  
  if ((((param_2 == (void *)0x0) || (param_3 < 0)) || (param_1->next_bio == (bio_st *)0x0)) ||
     (puVar6 = param_1->ptr, puVar6 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar7 = 0;
  piVar1 = puVar6 + 0x14;
LAB_01b1394c:
  do {
    switch(*puVar6) {
    case 0:
      if ((*(code **)(puVar6 + 10) == (code *)0x0) ||
         (iVar4 = (**(code **)(puVar6 + 10))(param_1,puVar6 + 0x12,piVar1,puVar6 + 0x16), iVar4 != 0
         )) {
        if (*piVar1 < 1) {
          *puVar6 = 2;
        }
        else {
          *puVar6 = 1;
        }
        break;
      }
    default:
      BIO_clear_flags(param_1,0xf);
      return 0;
    case 1:
      if (0 < (int)puVar6[0x14]) {
        pcVar5 = *(code **)(puVar6 + 0xc);
        iVar4 = BIO_write(param_1->next_bio,
                          (void *)(*(long *)(puVar6 + 0x12) + (long)(int)puVar6[0x15]),puVar6[0x14])
        ;
        while( true ) {
          if (iVar4 < 1) goto LAB_01b13b34;
          iVar2 = *piVar1 - iVar4;
          *piVar1 = iVar2;
          if (iVar2 < 1) break;
          iVar3 = puVar6[0x15];
          puVar6[0x15] = (int)((long)iVar3 + (long)iVar4);
          iVar4 = BIO_write(param_1->next_bio,
                            (void *)(*(long *)(puVar6 + 0x12) + (long)iVar3 + (long)iVar4),iVar2);
        }
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1,puVar6 + 0x12,piVar1,puVar6 + 0x16);
        }
        *puVar6 = 2;
        puVar6[0x15] = 0;
      }
      break;
    case 2:
      iVar4 = ASN1_object_size(0,param_3,puVar6[9]);
      puVar6[6] = iVar4 - param_3;
      if ((int)puVar6[4] < iVar4 - param_3) {
                    /* WARNING: Subroutine does not return */
        OpenSSLDie("bio_asn1.c",0xe8,"ctx->buflen <= ctx->bufsize");
      }
      local_68 = *(uchar **)(puVar6 + 2);
      ASN1_put_object(&local_68,0,param_3,puVar6[9],puVar6[8]);
      puVar6[7] = param_3;
      *puVar6 = 3;
      break;
    case 3:
      iVar4 = BIO_write(param_1->next_bio,(void *)(*(long *)(puVar6 + 2) + (long)(int)puVar6[5]),
                        puVar6[6]);
      if (iVar4 < 1) goto LAB_01b13b34;
      iVar2 = puVar6[6];
      puVar6[6] = iVar2 - iVar4;
      if (iVar2 - iVar4 == 0) {
        puVar6[5] = 0;
        *puVar6 = 4;
      }
      else {
        puVar6[5] = puVar6[5] + iVar4;
      }
      break;
    case 4:
      iVar4 = puVar6[7];
      if (param_3 <= (int)puVar6[7]) {
        iVar4 = param_3;
      }
      iVar4 = BIO_write(param_1->next_bio,param_2,iVar4);
      if (0 < iVar4) goto code_r0x01b13a50;
    }
  } while( true );
code_r0x01b13a50:
  iVar2 = puVar6[7];
  iVar7 = iVar4 + iVar7;
  param_2 = (void *)((long)param_2 + (long)iVar4);
  param_3 = param_3 - iVar4;
  puVar6[7] = iVar2 - iVar4;
  if (iVar2 - iVar4 == 0) {
    *puVar6 = 2;
  }
  if (param_3 == 0) {
LAB_01b13b34:
    BIO_clear_flags(param_1,0xf);
    BIO_copy_next_retry(param_1);
    if (0 < iVar7) {
      return iVar7;
    }
    return iVar4;
  }
  goto LAB_01b1394c;
}




void FUN_01b13b94(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_01b138a4(param_1,param_2,sVar1);
  return;
}




undefined8 FUN_01b13e70(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x30);
  if (ptr != (void *)0x0) {
    if (*(void **)((long)ptr + 8) != (void *)0x0) {
      CRYPTO_free(*(void **)((long)ptr + 8));
    }
    CRYPTO_free(ptr);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 1;
  }
  return 0;
}




void FUN_01b13ed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02bcc160;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




void FUN_01b13ef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02bcc160;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_00e77ccc(param_1 + 1);
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}




void FUN_01b13f30(long param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_00e77ccc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_01b13f60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1b13f64);
  (*pcVar1)();
}




void FUN_01b13f64(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else {
    FUN_00e6a50c((undefined1 *)(param_1 + 0x11),0x10,param_2);
  }
  FUN_00e77c7c(param_1 + 8,FUN_01b13fb8,param_1,2);
  return;
}




undefined8 FUN_01b13fb8(long *param_1)

{
  FUN_00e77d5c((long)param_1 + 0x11);
  (**(code **)(*param_1 + 0x10))(param_1);
  return 0;
}




undefined1 FUN_01b13ff0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}




void FUN_01b13ff8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  return;
}

