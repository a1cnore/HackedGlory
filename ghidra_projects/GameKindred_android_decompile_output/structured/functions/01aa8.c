// functions/01aa8 — 4 functions
#include "libGameKindred.h"




undefined8 FUN_01aa8040(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  local_40 = 0;
  local_50 = 5;
  if ((*(code **)(*param_3 + 0x10) != (code *)0x0) &&
     (uStack_48 = param_1, iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_50), iVar1 == 0)) {
    return 0xffffffff;
  }
  return 0;
}




undefined8 FUN_01aa8724(undefined8 param_1,UI_STRING *param_2)

{
  FILE *__stream;
  UI_string_types UVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *__s2;
  
  UVar1 = UI_get_string_type(param_2);
  __stream = DAT_03217990;
  if (UVar1 == UIT_PROMPT) {
    pcVar4 = UI_get0_output_string(param_2);
    fputs(pcVar4,DAT_03217990);
    fflush(DAT_03217990);
    uVar2 = UI_get_input_flags(param_2);
    uVar5 = FUN_01aa8938(param_1,param_2,uVar2 & 1,1);
    return uVar5;
  }
  if (UVar1 != UIT_VERIFY) {
    if (UVar1 == UIT_BOOLEAN) {
      pcVar4 = UI_get0_output_string(param_2);
      fputs(pcVar4,DAT_03217990);
      pcVar4 = UI_get0_action_string(param_2);
      fputs(pcVar4,DAT_03217990);
      fflush(DAT_03217990);
      uVar2 = UI_get_input_flags(param_2);
      uVar5 = FUN_01aa8938(param_1,param_2,uVar2 & 1,0);
      return uVar5;
    }
    return 1;
  }
  pcVar4 = UI_get0_output_string(param_2);
  fprintf(__stream,"Verifying - %s",pcVar4);
  fflush(DAT_03217990);
  uVar2 = UI_get_input_flags(param_2);
  uVar5 = FUN_01aa8938(param_1,param_2,uVar2 & 1,1);
  if (0 < (int)uVar5) {
    pcVar4 = UI_get0_result_string(param_2);
    __s2 = UI_get0_test_string(param_2);
    iVar3 = strcmp(pcVar4,__s2);
    if (iVar3 == 0) {
      return 1;
    }
    fwrite("Verify failure\n",0xf,1,DAT_03217990);
    fflush(DAT_03217990);
    uVar5 = 0;
  }
  return uVar5;
}




undefined8 FUN_01aa88d0(void)

{
  if (DAT_03217988 != (FILE *)&__sF) {
    fclose(DAT_03217988);
  }
  if (DAT_03217990 != (FILE *)glClearDepthf) {
    fclose(DAT_03217990);
  }
  CRYPTO_lock(10,0x1f,"ui_openssl.c",0x249);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01aa8938(UI *param_1,UI_STRING *param_2,int param_3,int param_4)

{
  FILE *__stream;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  _union_1457 local_458;
  undefined1 *puStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  char acStack_58 [8];
  
  DAT_03217984 = 0;
  DAT_03217980 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_458.sa_handler = (__sighandler_t)0x0;
  puStack_450 = &LAB_01aa8f10;
  sigaction(1,(sigaction *)&local_458,(sigaction *)&DAT_03217a00);
  sigaction(2,(sigaction *)&local_458,(sigaction *)&DAT_03217a20);
  sigaction(3,(sigaction *)&local_458,(sigaction *)&DAT_03217a40);
  sigaction(4,(sigaction *)&local_458,(sigaction *)&DAT_03217a60);
  sigaction(5,(sigaction *)&local_458,(sigaction *)&DAT_03217a80);
  sigaction(6,(sigaction *)&local_458,(sigaction *)&DAT_03217aa0);
  sigaction(7,(sigaction *)&local_458,(sigaction *)&DAT_03217ac0);
  sigaction(8,(sigaction *)&local_458,(sigaction *)&DAT_03217ae0);
  sigaction(0xb,(sigaction *)&local_458,(sigaction *)&DAT_03217b40);
  sigaction(0xd,(sigaction *)&local_458,(sigaction *)&DAT_03217b80);
  sigaction(0xe,(sigaction *)&local_458,(sigaction *)&DAT_03217ba0);
  sigaction(0xf,(sigaction *)&local_458,(sigaction *)&DAT_03217bc0);
  sigaction(0x10,(sigaction *)&local_458,(sigaction *)&DAT_03217be0);
  sigaction(0x11,(sigaction *)&local_458,(sigaction *)&DAT_03217c00);
  sigaction(0x12,(sigaction *)&local_458,(sigaction *)&DAT_03217c20);
  sigaction(0x13,(sigaction *)&local_458,(sigaction *)&DAT_03217c40);
  sigaction(0x14,(sigaction *)&local_458,(sigaction *)&DAT_03217c60);
  sigaction(0x15,(sigaction *)&local_458,(sigaction *)&DAT_03217c80);
  sigaction(0x16,(sigaction *)&local_458,(sigaction *)&DAT_03217ca0);
  sigaction(0x17,(sigaction *)&local_458,(sigaction *)&DAT_03217cc0);
  sigaction(0x18,(sigaction *)&local_458,(sigaction *)&DAT_03217ce0);
  sigaction(0x19,(sigaction *)&local_458,(sigaction *)&DAT_03217d00);
  sigaction(0x1a,(sigaction *)&local_458,(sigaction *)&DAT_03217d20);
  sigaction(0x1b,(sigaction *)&local_458,(sigaction *)&DAT_03217d40);
  sigaction(0x1c,(sigaction *)&local_458,(sigaction *)&DAT_03217d60);
  sigaction(0x1d,(sigaction *)&local_458,(sigaction *)&DAT_03217d80);
  sigaction(0x1e,(sigaction *)&local_458,(sigaction *)&DAT_03217da0);
  sigaction(0x1f,(sigaction *)&local_458,(sigaction *)&DAT_03217dc0);
  signal(0x1c,(__sighandler_t)0x0);
  DAT_03217980 = 1;
  if (param_3 == 0) {
    _DAT_032179bc = _DAT_03217998;
    DAT_032179dc = DAT_032179b8;
    uRam00000000032179d4 = uRam00000000032179b0;
    _DAT_032179cc = _DAT_032179a8;
    uRam00000000032179c4 = uRam00000000032179a0 & 0xfffffff7ffffffff;
    if (DAT_03217970 != '\x01') goto LAB_01aa8bb0;
    iVar1 = fileno(DAT_03217988);
    iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_032179bc);
    if (iVar1 != -1) goto LAB_01aa8bb0;
    uVar2 = -(uint)(DAT_03217984 == 2);
  }
  else {
LAB_01aa8bb0:
    DAT_03217980 = 2;
    local_458.sa_handler = local_458.sa_handler & 0xffffffffffffff00;
    pcVar3 = fgets((char *)&local_458,0x3ff,DAT_03217988);
    if (((pcVar3 == (char *)0x0) ||
        (iVar1 = feof(DAT_03217988), __stream = DAT_03217988, iVar1 != 0)) ||
       (iVar1 = ferror(DAT_03217988), iVar1 != 0)) {
      uVar2 = 0;
      if (DAT_03217984 == 2) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      pcVar3 = strchr((char *)&local_458,10);
      if (pcVar3 == (char *)0x0) {
        do {
          pcVar3 = fgets(acStack_58,4,__stream);
          if (pcVar3 == (char *)0x0) {
            uVar2 = 0;
            if (DAT_03217984 == 2) {
              uVar2 = 0xffffffff;
            }
            goto joined_r0x01aa8f08;
          }
          pcVar3 = strchr(acStack_58,10);
        } while (pcVar3 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar3 = '\0';
      }
      uVar2 = UI_set_result(param_1,param_2,(char *)&local_458);
      uVar2 = uVar2 >> 0x1f ^ 1;
      if (DAT_03217984 == 2) {
        uVar2 = 0xffffffff;
      }
    }
joined_r0x01aa8f08:
    uVar4 = uVar2;
    if (param_3 != 0) goto LAB_01aa8c78;
  }
  fputc(10,DAT_03217990);
  uVar4 = uVar2;
  if ((param_3 == 0) && (1 < DAT_03217980)) {
    _DAT_032179bc = _DAT_03217998;
    DAT_032179dc = DAT_032179b8;
    uRam00000000032179d4 = uRam00000000032179b0;
    _DAT_032179cc = _DAT_032179a8;
    uRam00000000032179c4 = uRam00000000032179a0 | 0x800000000;
    if (DAT_03217970 == '\x01') {
      iVar1 = fileno(DAT_03217988);
      iVar1 = tcsetattr(iVar1,0,(termios *)&DAT_032179bc);
      uVar4 = 0;
      if (iVar1 != -1) {
        uVar4 = uVar2;
      }
    }
  }
LAB_01aa8c78:
  if (0 < DAT_03217980) {
    sigaction(1,(sigaction *)&DAT_03217a00,(sigaction *)0x0);
    sigaction(2,(sigaction *)&DAT_03217a20,(sigaction *)0x0);
    sigaction(3,(sigaction *)&DAT_03217a40,(sigaction *)0x0);
    sigaction(4,(sigaction *)&DAT_03217a60,(sigaction *)0x0);
    sigaction(5,(sigaction *)&DAT_03217a80,(sigaction *)0x0);
    sigaction(6,(sigaction *)&DAT_03217aa0,(sigaction *)0x0);
    sigaction(7,(sigaction *)&DAT_03217ac0,(sigaction *)0x0);
    sigaction(8,(sigaction *)&DAT_03217ae0,(sigaction *)0x0);
    sigaction(9,(sigaction *)&DAT_03217b00,(sigaction *)0x0);
    sigaction(0xb,(sigaction *)&DAT_03217b40,(sigaction *)0x0);
    sigaction(0xd,(sigaction *)&DAT_03217b80,(sigaction *)0x0);
    sigaction(0xe,(sigaction *)&DAT_03217ba0,(sigaction *)0x0);
    sigaction(0xf,(sigaction *)&DAT_03217bc0,(sigaction *)0x0);
    sigaction(0x10,(sigaction *)&DAT_03217be0,(sigaction *)0x0);
    sigaction(0x11,(sigaction *)&DAT_03217c00,(sigaction *)0x0);
    sigaction(0x12,(sigaction *)&DAT_03217c20,(sigaction *)0x0);
    sigaction(0x13,(sigaction *)&DAT_03217c40,(sigaction *)0x0);
    sigaction(0x14,(sigaction *)&DAT_03217c60,(sigaction *)0x0);
    sigaction(0x15,(sigaction *)&DAT_03217c80,(sigaction *)0x0);
    sigaction(0x16,(sigaction *)&DAT_03217ca0,(sigaction *)0x0);
    sigaction(0x17,(sigaction *)&DAT_03217cc0,(sigaction *)0x0);
    sigaction(0x18,(sigaction *)&DAT_03217ce0,(sigaction *)0x0);
    sigaction(0x19,(sigaction *)&DAT_03217d00,(sigaction *)0x0);
    sigaction(0x1a,(sigaction *)&DAT_03217d20,(sigaction *)0x0);
    sigaction(0x1b,(sigaction *)&DAT_03217d40,(sigaction *)0x0);
    sigaction(0x1c,(sigaction *)&DAT_03217d60,(sigaction *)0x0);
    sigaction(0x1d,(sigaction *)&DAT_03217d80,(sigaction *)0x0);
    sigaction(0x1e,(sigaction *)&DAT_03217da0,(sigaction *)0x0);
    sigaction(0x1f,(sigaction *)&DAT_03217dc0,(sigaction *)0x0);
  }
  OPENSSL_cleanse(&local_458,0x400);
  return uVar4;
}

