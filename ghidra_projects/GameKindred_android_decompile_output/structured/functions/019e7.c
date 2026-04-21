// functions/019e7 — 6 functions
#include "libGameKindred.h"




int FUN_019e70e0(long *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  long lVar8;
  char *pcVar9;
  char acStack_46c [1036];
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0xb4] = (long)param_1;
  param_1[0xb3] = 1800000;
  param_1[0xb5] = (long)FUN_019e76b4;
  param_1[0xb6] = (long)&LAB_019e829c;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0xffffffff;
  FUN_019e8ab4(param_1 + 0xa9);
  pcVar4 = (char *)param_1[0x30];
  if ((pcVar4 != (char *)0x0) && (cVar1 = *pcVar4, cVar1 != '\0')) {
    iVar3 = 0;
    bVar7 = true;
    pcVar6 = pcVar4;
    do {
      while ((pcVar9 = pcVar4 + 1, cVar1 != '\0' && (cVar1 != '='))) {
        pcVar4 = pcVar9;
        cVar1 = *pcVar9;
      }
      iVar2 = FUN_019d9e0c(pcVar6,&DAT_01e26968,4);
      if (iVar2 == 0) {
        iVar3 = 3;
      }
      else {
        if (bVar7) {
          *(undefined4 *)((long)param_1 + 0x5cc) = 0;
        }
        lVar8 = 0;
        for (pcVar6 = pcVar9; (*pcVar6 != '\0' && (*pcVar6 != ';')); pcVar6 = pcVar6 + 1) {
          lVar8 = lVar8 + 1;
        }
        iVar2 = FUN_019d9e0c(pcVar9,&DAT_01e26823,lVar8);
        if (iVar2 == 0) {
          iVar2 = FUN_019d9e0c(pcVar9,"LOGIN",lVar8);
          if (iVar2 != 0) {
            uVar5 = 1;
LAB_019e72d4:
            uVar5 = *(uint *)((long)param_1 + 0x5cc) | uVar5;
            goto LAB_019e72dc;
          }
          iVar2 = FUN_019d9e0c(pcVar9,"PLAIN",lVar8);
          if (iVar2 != 0) {
            uVar5 = 2;
            goto LAB_019e72d4;
          }
          iVar2 = FUN_019d9e0c(pcVar9,"CRAM-MD5",lVar8);
          if (iVar2 != 0) {
            uVar5 = 4;
            goto LAB_019e72d4;
          }
          iVar2 = FUN_019d9e0c(pcVar9,"DIGEST-MD5",lVar8);
          if (iVar2 != 0) {
            uVar5 = 8;
            goto LAB_019e72d4;
          }
          iVar2 = FUN_019d9e0c(pcVar9,"GSSAPI",lVar8);
          if (iVar2 != 0) {
            uVar5 = 0x10;
            goto LAB_019e72d4;
          }
          iVar2 = FUN_019d9e0c(pcVar9,&DAT_01e21e68,lVar8);
          if (iVar2 != 0) {
            uVar5 = 0x40;
            goto LAB_019e72d4;
          }
          iVar2 = FUN_019d9e0c(pcVar9,"XOAUTH2",lVar8);
          if (iVar2 != 0) {
            uVar5 = 0x80;
            goto LAB_019e72d4;
          }
        }
        else {
          uVar5 = 0xffffffff;
LAB_019e72dc:
          *(uint *)((long)param_1 + 0x5cc) = uVar5;
        }
        bVar7 = false;
        pcVar4 = pcVar6 + 1;
        if (*pcVar6 != ';') {
          pcVar4 = pcVar6;
        }
      }
      cVar1 = *pcVar4;
      pcVar6 = pcVar4;
    } while (cVar1 != '\0');
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  lVar8 = *param_1;
  pcVar4 = *(char **)(lVar8 + 0x8ae8);
  if (**(char **)(lVar8 + 0x8ae8) == '\0') {
    iVar3 = FUN_019e9e2c(acStack_46c,0x401);
    lVar8 = *param_1;
    pcVar4 = acStack_46c;
    if (iVar3 != 0) {
      pcVar4 = "localhost";
    }
  }
  iVar3 = FUN_019d4890(lVar8,pcVar4,0,param_1 + 0xb8,0,1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xb7) = 1;
    iVar3 = FUN_019e7394(param_1,param_2);
  }
  return iVar3;
}




undefined8 FUN_019e7394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 800) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x5bc), *pcVar2 == '\0')) {
    uVar1 = FUN_019c2ba0(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_019e8940(param_1 + 0x548,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5b8) == 0;
  return uVar1;
}




undefined8 FUN_019e7418(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019e7394();
  if ((int)uVar1 == 0) {
    if (*param_2 != '\0') {
      FUN_019e88a4(param_1,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_019e7460(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x548;
  if (((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x5a0) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x5a0) + 0x2eb) != '\0')) &&
     (iVar2 = FUN_019e8c44(lVar1,"%s",&DAT_01e26b23), iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x5b8) = 0x19;
    do {
      iVar2 = FUN_019e8940(lVar1,1);
      if (iVar2 != 0) break;
    } while (*(int *)(param_1 + 0x5b8) != 0);
  }
  FUN_019e9018(lVar1);
  FUN_019ecacc(param_1,*(undefined4 *)(param_1 + 0x5d0));
  if (*(long *)(param_1 + 0x5c0) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x5c0) = 0;
  }
  return 0;
}




undefined8 FUN_019e7504(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  size_t __n;
  size_t __n_00;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *param_1;
  plVar1 = (long *)(lVar5 + 0x8980);
  lVar6 = *(long *)(lVar5 + 0x218);
  if (*plVar1 == 0) {
    lVar2 = (*(code *)PTR_malloc_02bf74a8)(0x8000);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_019ca0fc(lVar5,"Failed to alloc scratch buffer!");
      return 0x1b;
    }
  }
  __n = *(size_t *)(lVar6 + 0x18);
  if (param_2 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    lVar7 = 0;
    __n_00 = __n;
    do {
      lVar3 = *(long *)(lVar5 + 0x208);
      if ("\r\n.\r\n"[__n_00] == *(char *)(lVar3 + lVar7)) {
        __n = __n_00 + 1;
        uVar4 = 1;
        *(size_t *)(lVar6 + 0x18) = __n;
        if ((__n_00 != 1) && (__n_00 != 4)) {
          uVar4 = 0;
        }
LAB_019e75ec:
        *(undefined1 *)(lVar6 + 0x20) = uVar4;
        if (__n == 0) goto LAB_019e7614;
        if (__n == 3) {
          __n = 0;
          *(undefined4 *)(*plVar1 + lVar2) = 0x2e2e0a0d;
          lVar2 = lVar2 + 4;
          *(undefined8 *)(lVar6 + 0x18) = 0;
        }
      }
      else {
        if (__n_00 != 0) {
          memcpy((void *)(*plVar1 + lVar2),"\r\n.\r\n",__n_00);
          lVar3 = *(long *)(lVar5 + 0x208);
          uVar4 = 0;
          lVar2 = *(long *)(lVar6 + 0x18) + lVar2;
          __n = (size_t)(*(char *)(lVar3 + lVar7) == '\r');
          *(size_t *)(lVar6 + 0x18) = __n;
          goto LAB_019e75ec;
        }
LAB_019e7614:
        *(undefined1 *)(*plVar1 + lVar2) = *(undefined1 *)(lVar3 + lVar7);
        __n = *(size_t *)(lVar6 + 0x18);
        lVar2 = lVar2 + 1;
      }
      lVar7 = lVar7 + 1;
      __n_00 = __n;
    } while (param_2 != lVar7);
  }
  if (__n != 0) {
    memcpy((void *)(*plVar1 + lVar2),"\r\n.\r\n",__n);
    lVar7 = *(long *)(lVar6 + 0x18);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    lVar2 = lVar7 + lVar2;
  }
  if (lVar2 != param_2) {
    *(long *)(lVar5 + 0x200) = lVar2;
    *(long *)(lVar5 + 0x208) = *plVar1;
  }
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_019e76b4(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *__s1;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *__s1_00;
  undefined8 local_98;
  int local_8c;
  ulong local_88;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long local_68;
  
  lVar5 = param_1[0x3a];
  lVar15 = *param_1;
  local_98 = 0;
  if ((int)param_1[0xb7] == 5) {
    iVar8 = FUN_019e836c(param_1);
    return iVar8;
  }
  plVar2 = param_1 + 0xa9;
  if (param_1[0xaf] != 0) {
    iVar8 = FUN_019e8f84(plVar2);
    return iVar8;
  }
  plVar3 = param_1 + 0xb7;
  plVar4 = param_1 + 0x7c;
  do {
    iVar9 = FUN_019e8cb8((int)lVar5,plVar2,&local_8c,&local_98);
    iVar8 = local_8c;
    if (iVar9 != 0) {
      return iVar9;
    }
    lVar12 = *plVar3;
    if (((int)lVar12 != 0x19) && (local_8c != 1)) {
      *(int *)(lVar15 + 0x8b68) = local_8c;
    }
    if (local_8c == 0) {
      return 0;
    }
    switch((int)lVar12) {
    case 1:
      if (99 < local_8c - 200U) {
        FUN_019ca0fc(*param_1,"Got unexpected smtp-server response: %d",local_8c);
        return 8;
      }
      iVar9 = FUN_019e83dc(param_1);
      break;
    case 2:
      lVar12 = *param_1;
      if ((local_8c == 1) || (local_8c - 200U < 100)) {
        sVar10 = strlen((char *)(lVar12 + 0x938));
        uVar11 = sVar10 - 4;
        __s1 = (long *)(lVar12 + 0x93c);
        if (uVar11 < 8) {
          if (3 < uVar11) goto LAB_019e7db8;
        }
        else if (*__s1 == 0x534c545452415453) {
          *(undefined1 *)((long)param_1 + 0x5d4) = 1;
        }
        else {
LAB_019e7db8:
          if (*(int *)__s1 == 0x455a4953) {
            *(undefined1 *)((long)param_1 + 0x5d5) = 1;
          }
          else if ((4 < uVar11) && (iVar9 = memcmp(__s1,"AUTH ",5), iVar9 == 0)) {
            uVar11 = sVar10 - 9;
            *(undefined1 *)((long)param_1 + 0x5d6) = 1;
            if (uVar11 != 0) {
              __s1_00 = (byte *)(lVar12 + 0x941);
LAB_019e7e00:
              do {
                uVar16 = (ulong)*__s1_00;
                if ((*__s1_00 < 0x21) && ((1L << (uVar16 & 0x3f) & 0x100002600U) != 0))
                goto code_r0x019e7e20;
                uVar18 = 1;
                while ((0x20 < (uint)uVar16 || ((1L << (uVar16 & 0x3f) & 0x100002600U) == 0))) {
                  if (uVar11 <= uVar18) goto LAB_019e7e6c;
                  pbVar1 = __s1_00 + uVar18;
                  uVar18 = uVar18 + 1;
                  uVar16 = (ulong)*pbVar1;
                }
                uVar18 = uVar18 - 1;
LAB_019e7e6c:
                switch(uVar18) {
                case 4:
                  if (*(int *)__s1_00 == 0x4d4c544e) {
                    uVar14 = *(uint *)(param_1 + 0xb9) | 0x40;
                    goto LAB_019e7fc0;
                  }
                  break;
                case 5:
                  iVar9 = memcmp(__s1_00,"LOGIN",5);
                  if (iVar9 == 0) {
                    uVar14 = *(uint *)(param_1 + 0xb9) | 1;
                  }
                  else {
                    iVar9 = memcmp(__s1_00,"PLAIN",5);
                    if (iVar9 != 0) break;
                    uVar14 = *(uint *)(param_1 + 0xb9) | 2;
                  }
                  goto LAB_019e7fc0;
                case 6:
                  iVar9 = memcmp(__s1_00,"GSSAPI",6);
                  if (iVar9 == 0) {
                    uVar14 = *(uint *)(param_1 + 0xb9) | 0x10;
                    goto LAB_019e7fc0;
                  }
                  break;
                case 7:
                  iVar9 = memcmp(__s1_00,"XOAUTH2",7);
                  if (iVar9 == 0) {
                    uVar14 = *(uint *)(param_1 + 0xb9) | 0x80;
                    goto LAB_019e7fc0;
                  }
                  break;
                case 8:
                  if (*(long *)__s1_00 == 0x35444d2d4d415243) {
                    uVar14 = *(uint *)(param_1 + 0xb9) | 4;
                  }
                  else {
                    if (*(long *)__s1_00 != 0x4c414e5245545845) break;
                    uVar14 = *(uint *)(param_1 + 0xb9) | 0x20;
                  }
LAB_019e7fc0:
                  *(uint *)(param_1 + 0xb9) = uVar14;
                  break;
                case 10:
                  iVar9 = memcmp(__s1_00,"DIGEST-MD5",10);
                  if (iVar9 == 0) {
                    uVar14 = *(uint *)(param_1 + 0xb9) | 8;
                    goto LAB_019e7fc0;
                  }
                }
                uVar11 = uVar11 - uVar18;
                __s1_00 = __s1_00 + uVar18;
              } while (uVar11 != 0);
            }
          }
        }
LAB_019e80fc:
        if (iVar8 != 1) {
          if ((*(int *)(lVar12 + 0x528) != 0) && ((char)param_1[0x41] == '\0')) {
            if (*(char *)((long)param_1 + 0x5d4) != '\0') {
              iVar8 = FUN_019e8c44(plVar2,"%s","STARTTLS");
              if (iVar8 != 0) {
                return iVar8;
              }
              iVar8 = 4;
              goto LAB_019e7d8c;
            }
            if (*(int *)(lVar12 + 0x528) != 1) {
              FUN_019ca0fc(lVar12,"STARTTLS not supported.");
              return 0x40;
            }
          }
          goto LAB_019e7c28;
        }
      }
      else {
        if ((1 < *(uint *)(lVar12 + 0x528)) && ((char)param_1[0x41] == '\0')) goto LAB_019e8180;
        *(undefined4 *)(param_1 + 0xba) = 0;
        iVar8 = FUN_019e8c44(plVar2,"HELO %s",param_1[0xb8]);
        if (iVar8 != 0) {
          return iVar8;
        }
        *(int *)plVar3 = 3;
      }
      goto LAB_019e7cbc;
    case 3:
      if (99 < local_8c - 200U) {
        lVar12 = *param_1;
LAB_019e8180:
        FUN_019ca0fc(lVar12,"Remote access denied: %d",local_8c);
        return 9;
      }
      goto switchD_019e77b0_caseD_5;
    case 4:
      if (local_8c == 0xdc) {
        iVar9 = FUN_019e836c(param_1);
      }
      else {
        if (*(int *)(*param_1 + 0x528) != 1) {
          FUN_019ca0fc(*param_1,"STARTTLS denied. %c",local_8c);
          return 0x40;
        }
LAB_019e7c28:
        iVar9 = FUN_019e8428(param_1);
      }
      break;
    default:
      goto switchD_019e77b0_caseD_5;
    case 6:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c == 0x14e) {
        iVar9 = FUN_019ec04c(lVar12,param_1[0x2e],param_1[0x2f],&local_70,&local_68);
        goto LAB_019e8078;
      }
LAB_019e7c7c:
      local_68 = 0;
      local_70 = 0;
      FUN_019ca0fc(lVar12,"Access denied: %d",local_8c);
      iVar9 = 0x43;
      goto LAB_019e7c94;
    case 7:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) goto LAB_019e7c7c;
      iVar9 = FUN_019ec158(lVar12,param_1[0x2e],&local_70,&local_68);
      if (((iVar9 != 0) || (local_70 == 0)) || (iVar9 = FUN_019e8c44(plVar2,"%s"), iVar9 != 0))
      goto LAB_019e7c94;
      iVar8 = 8;
      goto LAB_019e80a4;
    case 8:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) goto LAB_019e7c7c;
      iVar9 = FUN_019ec158(lVar12,param_1[0x2f],&local_70,&local_68);
      goto LAB_019e8078;
    case 9:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_88 = 0;
      if (local_8c != 0x14e) {
LAB_019e7bb4:
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        FUN_019ca0fc(lVar12,"Access denied: %d",local_8c);
        return 0x43;
      }
      FUN_019e8730(lVar12 + 0x938,&local_70);
      iVar8 = FUN_019ec1f0(local_70,&local_68,&local_88);
      if (iVar8 == 0) {
        iVar9 = FUN_019ec218(lVar12,local_68,param_1[0x2e],param_1[0x2f],&local_78,&local_88);
        if (((iVar9 == 0) && (local_78 != 0)) && (iVar9 = FUN_019e8c44(plVar2,"%s"), iVar9 == 0)) {
          iVar8 = 0x13;
          goto LAB_019e801c;
        }
      }
      else {
        iVar9 = FUN_019e8c44(plVar2,"%s",&DAT_01e26823);
        if (iVar9 == 0) {
          iVar8 = 0x12;
LAB_019e801c:
          *(int *)plVar3 = iVar8;
        }
      }
      if (local_68 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        local_68 = 0;
      }
      lVar17 = 0;
      lVar6 = local_70;
      lVar7 = local_68;
      if (local_78 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        local_78 = 0;
        lVar17 = local_78;
        lVar6 = local_70;
        lVar7 = local_68;
      }
      goto joined_r0x019e7d34;
    case 10:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      if (local_8c != 0x14e) goto LAB_019e7bb4;
      FUN_019e8730(lVar12 + 0x938,&local_68);
      iVar9 = FUN_019ec38c(lVar12,local_68,param_1[0x2e],param_1[0x2f],&DAT_01e23142,&local_70,
                           &local_78);
      if (iVar9 == 0) {
        iVar9 = FUN_019e8c44(plVar2,"%s",local_70);
        if (iVar9 == 0) {
          iVar8 = 0xb;
          goto LAB_019e80cc;
        }
      }
      else if ((iVar9 == 0x3d) && (iVar9 = FUN_019e8c44(plVar2,"%s",&DAT_01e26823), iVar9 == 0)) {
        iVar8 = 0x12;
LAB_019e80cc:
        *(int *)plVar3 = iVar8;
      }
      lVar17 = local_78;
      lVar6 = 0;
      lVar7 = local_68;
      if (local_70 == 0) goto joined_r0x019e7d34;
      goto LAB_019e7ca4;
    case 0xb:
      if (local_8c != 0x14e) {
LAB_019e8198:
        FUN_019ca0fc(*param_1,"Authentication failed: %d",local_8c);
        return 0x43;
      }
      iVar8 = FUN_019e8c44(plVar2,"%s",&DAT_01e277f2);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = 0x13;
      goto LAB_019e7d8c;
    case 0xc:
      local_70 = 0;
      local_68 = 0;
      if (local_8c == 0x14e) {
        iVar9 = thunk_FUN_019eba38(param_1[0x2e],param_1[0x2f],plVar4,&local_68,&local_70);
        if (((iVar9 == 0) && (local_68 != 0)) && (iVar9 = FUN_019e8c44(plVar2,"%s"), iVar9 == 0)) {
          *(int *)plVar3 = 0xd;
        }
      }
      else {
        FUN_019ca0fc(*param_1,"Access denied: %d",local_8c);
        iVar9 = 0x43;
      }
      lVar17 = local_78;
      lVar6 = local_70;
      lVar7 = 0;
      if (local_68 != 0) {
        (*(code *)PTR_free_02bf74b0)(local_68);
        local_68 = 0;
        lVar17 = local_78;
        lVar6 = local_70;
        lVar7 = local_68;
      }
      goto joined_r0x019e7d34;
    case 0xd:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      if (local_8c != 0x14e) goto LAB_019e7c7c;
      FUN_019e8730(lVar12 + 0x938,&local_68);
      iVar8 = thunk_FUN_019eb8e8(lVar12,local_68,plVar4);
      if (iVar8 != 0) {
        iVar9 = FUN_019e8c44(plVar2,"%s",&DAT_01e26823);
        if (iVar9 == 0) {
          iVar8 = 0x12;
          goto LAB_019e80a4;
        }
        goto LAB_019e7c94;
      }
      iVar9 = thunk_FUN_019ebaf4(lVar12,param_1[0x2e],param_1[0x2f],plVar4,&local_70,&local_78);
      goto LAB_019e8078;
    case 0x11:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) goto LAB_019e7c7c;
      iVar9 = FUN_019eca4c(lVar12,param_1[0x2e],param_1[0x31],&local_70,&local_68);
LAB_019e8078:
      if (((iVar9 == 0) && (local_70 != 0)) && (iVar9 = FUN_019e8c44(plVar2,"%s"), iVar9 == 0)) {
        iVar8 = 0x13;
LAB_019e80a4:
        *(int *)plVar3 = iVar8;
      }
LAB_019e7c94:
      lVar17 = local_78;
      lVar6 = 0;
      lVar7 = local_68;
      if (local_70 != 0) {
LAB_019e7ca4:
        (*(code *)PTR_free_02bf74b0)(local_70);
        local_70 = 0;
        lVar17 = local_78;
        lVar6 = local_70;
        lVar7 = local_68;
      }
      goto joined_r0x019e7d34;
    case 0x12:
      lVar12 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_88 = local_88 & 0xffffffff00000000;
      local_7c = 0;
      *(uint *)(param_1 + 0xb9) = *(uint *)(param_1 + 0xb9) ^ *(uint *)(param_1 + 0xba);
      iVar9 = FUN_019e84ec(param_1,&local_68,&local_70,&local_78,&local_88,&local_7c);
      lVar17 = local_78;
      lVar6 = local_70;
      lVar7 = local_68;
      if (iVar9 == 0) {
        if (local_68 == 0) {
          FUN_019ca0fc(lVar12,"Authentication cancelled");
          return 0x43;
        }
        iVar9 = FUN_019e8688(param_1,local_68,local_70,local_78,local_88 & 0xffffffff,local_7c);
        lVar17 = local_78;
        lVar6 = 0;
        lVar7 = local_68;
        if (local_70 != 0) {
          (*(code *)PTR_free_02bf74b0)(local_70);
          local_70 = 0;
          lVar17 = local_78;
          lVar6 = local_70;
          lVar7 = local_68;
        }
      }
joined_r0x019e7d34:
      local_68 = lVar7;
      local_70 = lVar6;
      local_78 = lVar17;
      if (iVar9 != 0) {
        return iVar9;
      }
      goto LAB_019e7cb4;
    case 0x13:
      if (local_8c != 0xeb) goto LAB_019e8198;
      goto switchD_019e77b0_caseD_5;
    case 0x14:
      lVar17 = *param_1;
      lVar12 = *(long *)(lVar17 + 0x218);
      sVar10 = strlen((char *)(lVar17 + 0x938));
      if ((iVar8 - 200U < 100) || (*(long *)(lVar12 + 0x10) == 0)) {
        if ((iVar8 != 1) && ((99 < iVar8 - 200U && (*(long *)(lVar12 + 0x10) == 0))))
        goto LAB_019e8258;
      }
      else if ((iVar8 != 1) && (iVar8 != 0x229)) {
LAB_019e8258:
        FUN_019ca0fc(lVar17,"Command failed: %d",iVar8);
        return 0x38;
      }
      iVar9 = 0;
      if (*(char *)(lVar17 + 0x517) == '\0') {
        *(undefined1 *)(lVar17 + sVar10 + 0x938) = 10;
        iVar9 = FUN_019ca574(param_1,1,(char *)(lVar17 + 0x938),sVar10 + 1);
        *(undefined1 *)(lVar17 + sVar10 + 0x938) = 0;
      }
      lVar17 = local_78;
      lVar6 = local_70;
      lVar7 = local_68;
      if (iVar8 == 1) goto joined_r0x019e7d34;
      if ((*(long *)(lVar12 + 0x10) == 0) ||
         (lVar17 = *(long *)(*(long *)(lVar12 + 0x10) + 8), *(long *)(lVar12 + 0x10) = lVar17,
         lVar17 == 0)) {
        *(int *)plVar3 = 0;
      }
      else {
        iVar9 = FUN_019e87b8(param_1);
      }
      break;
    case 0x15:
      if (99 < local_8c - 200U) {
        lVar12 = *param_1;
        pcVar13 = "MAIL failed: %d";
LAB_019e8248:
        FUN_019ca0fc(lVar12,pcVar13,local_8c);
        return 0x37;
      }
LAB_019e7ba8:
      iVar9 = FUN_019e8848(param_1);
      break;
    case 0x16:
      lVar12 = *param_1;
      if (99 < local_8c - 200U) {
        pcVar13 = "RCPT failed: %d";
        goto LAB_019e8248;
      }
      lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x218) + 0x10) + 8);
      *(long *)(*(long *)(lVar12 + 0x218) + 0x10) = lVar17;
      if (lVar17 != 0) goto LAB_019e7ba8;
      iVar8 = FUN_019e8c44(plVar2,"%s","DATA");
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = 0x17;
LAB_019e7d8c:
      *(int *)plVar3 = iVar8;
      goto LAB_019e7cbc;
    case 0x17:
      lVar12 = *param_1;
      if (local_8c != 0x162) {
        pcVar13 = "DATA failed: %d";
        goto LAB_019e8248;
      }
      FUN_019c4460(lVar12,*(undefined8 *)(lVar12 + 0x8b28));
      FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
switchD_019e77b0_caseD_5:
      *(int *)plVar3 = 0;
      return 0;
    case 0x18:
      *(int *)plVar3 = 0;
      if (local_8c == 0xfa) {
        return 0;
      }
      return 0x38;
    }
    if (iVar9 != 0) {
      return iVar9;
    }
LAB_019e7cb4:
    if ((int)*plVar3 == 0) {
      return 0;
    }
LAB_019e7cbc:
    uVar11 = FUN_019e8a8c(plVar2);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  } while( true );
code_r0x019e7e20:
  uVar11 = uVar11 - 1;
  __s1_00 = __s1_00 + 1;
  if (uVar11 == 0) goto LAB_019e80fc;
  goto LAB_019e7e00;
}

