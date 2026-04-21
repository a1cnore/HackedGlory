// functions/00e97 — 4 functions
#include "libGameKindred.h"




void FUN_00e97028(long param_1)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  timespec local_58;
  void *local_48;
  code *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c1c));
    uVar5 = (ulong)(*(byte *)(param_1 + 0x2c00) >> 1);
    lVar9 = param_1 + 0x2c01;
    if ((*(byte *)(param_1 + 0x2c00) & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x2c08);
      lVar9 = *(long *)(param_1 + 0x2c10);
    }
    FUN_008fcea8(param_1 + 0x2be8,lVar9,uVar5);
    *(char *)(param_1 + 0x2c18) = '\0';
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c1c));
  }
  uVar3 = clock_gettime(1,&local_58);
  uVar5 = (ulong)uVar3;
  lVar10 = local_58.tv_nsec - *(long *)(param_1 + 0x2a40);
  lVar9 = local_58.tv_sec - *(long *)(param_1 + 0x2a38);
  if (lVar10 < 0) {
    lVar9 = lVar9 + -1;
    lVar10 = local_58.tv_nsec + (1000000000 - *(long *)(param_1 + 0x2a40));
  }
  if ((((double)*(float *)(param_1 + 0x2a30) < (double)(lVar10 + lVar9 * 1000000000) * 1e-09) ||
      (*(char *)(param_1 + 0x2ca0) != '\0')) && (*(int *)(param_1 + 0x2ad0) != 0)) {
    *(undefined1 *)(param_1 + 0x2ca0) = 0;
    *(undefined4 *)(param_1 + 0x2a30) = 0x41200000;
    FUN_00e70314(param_1 + 0x2a38);
    uVar5 = FUN_00e972dc(param_1);
  }
  iVar4 = FUN_00e83340(uVar5);
  if ((iVar4 == -2) || (iVar4 = FUN_00e83340(), iVar4 == -0xc9)) {
    FUN_008fce60(param_1 + 0x2be8,&DAT_0320ffa8);
    FUN_00e85184((float *)(param_1 + 0x2a30));
  }
  if (*(char *)(param_1 + 0x2a21) != '\0') {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2a14)) {
      iVar4 = *(int *)(param_1 + 0x2a14) + -1;
    }
    *(int *)(param_1 + 0x2a14) = iVar4;
    if ((*(long **)(param_1 + 0x2a08) == (long *)0x0) ||
       (iVar4 = (**(code **)(**(long **)(param_1 + 0x2a08) + 0x40))(), iVar4 == 1)) {
      pcVar1 = (char *)(param_1 + 0x2a22);
      if (*pcVar1 == '\0') {
        cVar8 = '\0';
        if (*(char *)(param_1 + 0x2a23) != '\0') {
          cVar8 = '\0';
          iVar4 = *(int *)(param_1 + 0x2a14) + *(int *)(param_1 + 0x2a18);
          *(int *)(param_1 + 0x2a14) = iVar4;
          if (*(int *)(param_1 + 0x2a1c) < iVar4) {
            cVar8 = '\x01';
            *pcVar1 = '\x01';
            *(char *)(param_1 + 0x2a21) = '\0';
          }
        }
      }
      else {
        cVar8 = '\x01';
      }
      if (*(long **)(param_1 + 0x2a08) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x2a08) + 8))();
        *(undefined8 *)(param_1 + 0x2a08) = 0;
        cVar8 = *pcVar1;
      }
      if ((cVar8 != '\0') && (*(char *)(param_1 + 0x2a23) != '\0')) goto LAB_00e97278;
      local_58.tv_sec = 0;
      local_58.tv_nsec = 0;
      local_48 = (void *)0x0;
      uVar6 = FUN_00e85418(param_1 + 0x80,1,&local_58);
      *(undefined8 *)(param_1 + 0x2a08) = uVar6;
      if ((local_58.tv_sec & 1U) != 0) {
        operator_delete(local_48);
      }
    }
    plVar7 = *(long **)(param_1 + 0x2a08);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
      local_40 = FUN_00e96e4c;
      local_58.tv_sec = (__time_t)&PTR_FUN_028219d0;
      local_58.tv_nsec = (long)&local_40;
      (**(code **)(**(long **)(param_1 + 0x2a08) + 0x48))(*(long **)(param_1 + 0x2a08),&local_58);
    }
  }
LAB_00e97278:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00e972dc(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e97320:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        FUN_008fa54c(local_50,"update");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_68,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_50,local_68,0,0,0x14,0);
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e973f4;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e97320;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e973f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e973f8(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  char *local_60;
  ulong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00e83330();
  if ((int)param_2[2] == 0) {
    FUN_00e83324(0xffffffff);
    goto switchD_00e97598_caseD_6;
  }
  if ((*(char *)(param_1 + 0x2be0) != '\0') &&
     (lVar5 = FUN_008fd190(param_2,"sessionToken"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar5)) {
    local_60 = "sessionToken";
    local_50 = 0x100005;
    local_58 = 0xc;
    plVar6 = (long *)FUN_008feca4(param_2,&local_60);
    if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
      plVar6 = (long *)*plVar6;
    }
    FUN_008fa54c(&local_60,plVar6);
    uVar1 = (ulong)local_60 >> 1 & 0x7f;
    if (((ulong)local_60 & 1) != 0) {
      uVar1 = local_58;
    }
    if ((uVar1 != 0) ||
       (iVar3 = FUN_0090d610(&local_60,0,0xffffffffffffffff,&DAT_01e277f2,0), iVar3 != 0)) {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c1c));
      *(undefined1 *)(param_1 + 0x2c18) = 1;
      FUN_008fce60(param_1 + 0x2c00,&local_60);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c1c));
    }
    if (((ulong)local_60 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_4c,local_50));
    }
  }
  if (DAT_02bf251c == param_3) {
LAB_00e97538:
    FUN_00e97a90(param_1,param_2);
  }
  else {
    plVar6 = (long *)FUN_00e850a4(param_1 + 0x2c48,param_3);
    if (plVar6 == (long *)0x0) goto switchD_00e97598_caseD_6;
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
    switch(uVar4) {
    case 1:
      FUN_00e9d0f0(param_2,plVar6);
      break;
    case 2:
      FUN_00e9eb3c(param_2,plVar6);
      break;
    case 3:
      FUN_00e9e9c4(param_2,plVar6);
      break;
    case 4:
      FUN_00e9ed00(param_2,plVar6);
      break;
    case 5:
      FUN_00e9eec0(param_2,plVar6,*(undefined1 *)(param_1 + 0x2a24));
      goto LAB_00e97538;
    case 7:
      FUN_00ea0a78(param_2,plVar6);
      break;
    case 8:
      FUN_00ea1e94(param_2,plVar6);
      FUN_00910394(param_1 + 0x2b08,plVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2b20) = *(undefined4 *)((long)plVar6 + 0x124);
      *(undefined8 *)(param_1 + 0x2b18) = *(undefined8 *)((long)plVar6 + 0x11c);
      break;
    case 9:
      FUN_00ea5474(param_2,plVar6);
      break;
    case 10:
      FUN_00ea7e88(param_2,plVar6);
      break;
    case 0xb:
      FUN_00ea829c(param_2,plVar6);
      break;
    case 0xc:
      FUN_00ea884c(param_2,plVar6);
      break;
    case 0xd:
      FUN_00ea88c0(param_2,plVar6);
      break;
    case 0xe:
      FUN_00ea8ecc(param_2,plVar6);
      break;
    case 0xf:
      FUN_00ea9328(param_2,plVar6);
      break;
    case 0x10:
      FUN_00ea9694(param_2,plVar6);
      break;
    case 0x11:
      FUN_00eac544(param_2,plVar6);
      break;
    case 0x12:
      FUN_00eacd38(param_2,plVar6);
      break;
    case 0x13:
      FUN_00ead0a4(param_2,plVar6);
      break;
    case 0x14:
      FUN_00eae4c8(param_2,plVar6);
      break;
    case 0x15:
      FUN_00eaee3c(param_2,plVar6);
      break;
    case 0x16:
      FUN_00eaf23c(param_2,plVar6);
      break;
    case 0x17:
      FUN_00eaf5c8(param_2,plVar6);
      break;
    case 0x18:
      FUN_00eaf88c(param_2,plVar6);
      break;
    case 0x19:
      FUN_00eafafc(param_2,plVar6);
      break;
    case 0x1a:
      FUN_00eafeb0(param_2,plVar6);
      break;
    case 0x1b:
      FUN_00eb0214(param_2,plVar6);
      break;
    case 0x1c:
      FUN_00eb08dc(param_2,plVar6,param_1 + 0x2aa0,param_1 + 0x2ab8);
      break;
    case 0x1d:
      FUN_00ea0b50(param_2,plVar6);
      break;
    case 0x1e:
      FUN_00ea0fe4(param_2,plVar6);
      break;
    case 0x1f:
      FUN_00ea1108(param_2,plVar6);
      break;
    case 0x20:
      FUN_00ea122c(param_2,plVar6);
      break;
    case 0x21:
      FUN_00ea1350(param_2,plVar6);
      break;
    case 0x22:
      FUN_00ea15b0(param_2,plVar6);
      break;
    case 0x23:
      FUN_00ea1c94(param_2,plVar6);
      break;
    case 0x24:
      FUN_00ea6664(param_2,plVar6);
      break;
    case 0x25:
      FUN_00ea6948(param_2,plVar6);
      break;
    case 0x26:
      FUN_00ea6c2c(param_2,plVar6);
      break;
    case 0x27:
      FUN_00ea71ac(param_2,plVar6);
      break;
    case 0x28:
      FUN_00ea7afc(param_2,plVar6);
      break;
    case 0x29:
      FUN_00ea0ec0(param_2,plVar6);
      break;
    case 0x2a:
      FUN_00ea0d9c(param_2,plVar6);
      break;
    case 0x2b:
      FUN_00ea6578(param_2,plVar6);
      break;
    case 0x2c:
      FUN_00eb0a38(param_2,plVar6);
      break;
    case 0x2d:
      FUN_00eb0b98(param_2,plVar6);
      break;
    case 0x2e:
      FUN_00eb0d90(param_2,plVar6);
      break;
    case 0x2f:
      FUN_00eb0f88(param_2,plVar6);
      break;
    case 0x30:
      FUN_00eb1180(param_2,plVar6);
      break;
    case 0x31:
      FUN_00eb1378(param_2,plVar6);
      break;
    case 0x32:
      FUN_00eb14c8(param_2,plVar6);
      break;
    case 0x33:
      FUN_00eb2890(param_2,plVar6);
      break;
    case 0x34:
      FUN_00eb2a8c(param_2,plVar6);
      break;
    case 0x35:
      FUN_00eb3bb8(param_2,plVar6);
      break;
    case 0x36:
      FUN_00eb3d30(param_2,plVar6);
      break;
    case 0x37:
      FUN_00e9e638(param_2,plVar6);
      break;
    case 0x38:
      FUN_00e9e2ac(param_2,plVar6);
      break;
    case 0x39:
      FUN_00eb3edc(param_2,plVar6);
      break;
    case 0x3a:
      FUN_00eb4420(param_2,plVar6);
      break;
    case 0x3b:
      FUN_00eb4b44(param_2,plVar6);
      break;
    case 0x3c:
      FUN_00eb4dc0(param_2,plVar6);
      break;
    case 0x3d:
      FUN_00eb5894(param_2,plVar6);
      break;
    case 0x3e:
      FUN_00eb7b30(param_2,plVar6);
      break;
    case 0x3f:
      FUN_00eb7df8(param_2,plVar6);
      break;
    case 0x40:
      FUN_00eb8784(param_2,plVar6);
      break;
    case 0x41:
      FUN_00eb986c(param_2,plVar6);
      break;
    case 0x42:
      FUN_00eb9960(param_2,plVar6);
      break;
    case 0x43:
      FUN_00eb9ddc(param_2,plVar6);
      break;
    case 0x44:
      FUN_00eb9ed0(param_2,plVar6);
      break;
    case 0x45:
      FUN_00eb9fc4(param_2,plVar6);
      break;
    case 0x46:
      FUN_00e9d808(param_2,plVar6);
      break;
    case 0x47:
      FUN_00e9db94(param_2,plVar6);
      break;
    case 0x48:
      FUN_00e9df20(param_2,plVar6);
      break;
    case 0x49:
      FUN_00e9d47c(param_2,plVar6);
      break;
    case 0x4a:
      FUN_00ea8574(param_2,plVar6);
    }
  }
switchD_00e97598_caseD_6:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e97a90(long param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = "code";
  local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
  local_68 = 4;
  piVar2 = (int *)FUN_008feca4(param_2,&local_70);
  if (*piVar2 != 0) {
    FUN_00e83324();
    goto LAB_00e97af8;
  }
  lVar3 = FUN_008fd190(param_2,"returnValue");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) goto LAB_00e97af8;
  local_70 = "returnValue";
  local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
  local_68 = 0xb;
  lVar3 = FUN_008feca4(param_2,&local_70);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00e97af8;
  local_70 = "returnValue";
  local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
  local_68 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_2,&local_70);
  lVar3 = FUN_008fd190(plVar4,"notifyUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_70 = "notifyUrl";
    local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
    local_68 = 9;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2a23) = 0;
      lVar3 = FUN_008fd190(plVar4,"notifyFallbackUrl");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_70 = "notifyFallbackUrl";
        local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
        local_68 = 0x11;
        lVar3 = FUN_008feca4(plVar4,&local_70);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x2a23) = 1;
          local_70 = "notifyFallbackUrl";
          local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
          local_68 = 0x11;
          plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
          if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
            plVar5 = (long *)*plVar5;
          }
          FUN_008fa54c(&local_70,plVar5);
          FUN_008fce60(param_1 + 0x98,&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete(local_60);
          }
        }
      }
      lVar3 = FUN_008fd190(plVar4,"bucketIncrementer");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00e97ce0:
        uVar7 = 3000;
      }
      else {
        local_70 = "bucketIncrementer";
        local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
        local_68 = 0x11;
        lVar3 = FUN_008feca4(plVar4,&local_70);
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00e97ce0;
        local_70 = "bucketIncrementer";
        local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
        local_68 = 0x11;
        puVar6 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
        uVar7 = *puVar6;
      }
      *(undefined4 *)(param_1 + 0x2a18) = uVar7;
      lVar3 = FUN_008fd190(plVar4,"failoverThreshold");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00e97d58:
        uVar7 = 4000;
      }
      else {
        local_70 = "failoverThreshold";
        local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
        local_68 = 0x11;
        lVar3 = FUN_008feca4(plVar4,&local_70);
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00e97d58;
        local_70 = "failoverThreshold";
        local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
        local_68 = 0x11;
        puVar6 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
        uVar7 = *puVar6;
      }
      *(undefined4 *)(param_1 + 0x2a1c) = uVar7;
      local_70 = "notifyUrl";
      local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
      local_68 = 9;
      plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_008fa54c(&local_70,plVar5);
      FUN_008fce60(param_1 + 0x80,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      *(undefined1 *)(param_1 + 0x2a22) = 0;
      *(undefined4 *)(param_1 + 0x2a14) = 0;
      local_70 = (char *)0x0;
      local_68 = 0;
      local_60 = (void *)0x0;
      lVar3 = FUN_00e85418(param_1 + 0x80,1,&local_70);
      *(long *)(param_1 + 0x2a08) = lVar3;
      if (((ulong)local_70 & 1) != 0) {
        operator_delete(local_60);
        lVar3 = *(long *)(param_1 + 0x2a08);
      }
      if (lVar3 != 0) {
        *(undefined1 *)(param_1 + 0x2a21) = 1;
      }
    }
  }
  lVar3 = FUN_008fd190(plVar4,"platformUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_70 = "platformUrl";
    local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
    local_68 = 0xb;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = "platformUrl";
      local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
      local_68 = 0xb;
      plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_008fa54c(&local_70,plVar5);
      FUN_008fce60(param_1 + 0x68,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
  }
  lVar3 = FUN_008fd190(plVar4,"state");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    lVar3 = FUN_008fd190(plVar4,"playerInfo");
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) goto LAB_00e97f0c;
  }
  else {
LAB_00e97f0c:
    FUN_00ebe28c(param_1 + 0x2a28,plVar4);
  }
  lVar3 = FUN_008fd190(plVar4,"playerUUID");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_70 = "playerUUID";
    local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
    local_68 = 10;
    plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
      plVar5 = (long *)*plVar5;
    }
    FUN_008fa54c(&local_70,plVar5);
    FUN_008fce60(param_1 + 0x2b80,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  lVar3 = FUN_008fd190(plVar4,"sessionToken");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_70 = "sessionToken";
    local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
    local_68 = 0xc;
    plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
      plVar5 = (long *)*plVar5;
    }
    FUN_008fa54c(&local_70,plVar5);
    FUN_008fce60(param_1 + 0x2b80,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  lVar3 = FUN_008fd190(plVar4,"startSessionUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_70 = "startSessionUrl";
    local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
    local_68 = 0xf;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = "startSessionUrl";
      local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
      local_68 = 0xf;
      plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_008fa54c(&local_70,plVar5);
      FUN_008fce60(param_1 + 0x50,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
  }
  lVar3 = FUN_008fd190(plVar4,"linked");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_70 = "linked";
    local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
    local_68 = 6;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_70 = "linked";
      local_60 = (void *)CONCAT44(local_60._4_4_,0x100005);
      local_68 = 6;
      lVar3 = FUN_008feca4(plVar4,&local_70);
      *(bool *)(param_1 + 0x2a24) = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
LAB_00e97af8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

