// functions/019e5 — 9 functions
#include "libGameKindred.h"




undefined8 FUN_019e5054(long param_1,long param_2,char *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  long lVar7;
  
  pbVar1 = (byte *)(param_1 + param_2);
  sVar5 = strlen(param_3);
  pbVar6 = (byte *)(param_1 + 2);
  if ((2 < param_2) && (*pbVar6 - 0x30 < 10)) {
    lVar3 = param_2 + -3;
    pbVar2 = (byte *)(param_1 + 3);
    do {
      pbVar6 = pbVar2;
      lVar7 = lVar3;
      if (pbVar1 <= pbVar6) break;
      lVar3 = lVar7 + -1;
      pbVar2 = pbVar6 + 1;
    } while (*pbVar6 - 0x30 < 10);
    if (lVar7 == 0) {
      return 0;
    }
    if (*pbVar6 != 0x20) {
      return 0;
    }
    pbVar6 = pbVar6 + 1;
  }
  pbVar2 = pbVar6 + sVar5;
  if ((pbVar2 <= pbVar1) && (iVar4 = FUN_019e2430(pbVar6,param_3), iVar4 != 0)) {
    if (pbVar2 + 2 == pbVar1) {
      return 1;
    }
    if (*pbVar2 == 0x20) {
      return 1;
    }
  }
  return 0;
}




undefined8 FUN_019e5124(undefined1 param_1)

{
  switch(param_1) {
  case 0x21:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3d:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7e:
    return 1;
  default:
    return 0;
  }
}




void FUN_019e5158(long *param_1)

{
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    return;
  }
  return;
}




undefined8 FUN_019e5188(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = (*(code *)PTR_calloc_02bf74c8)(0x18,1);
  *(long *)(lVar5 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    if ((*(char *)((long)param_1 + 0x2e3) != '\0') && (*(char *)(lVar5 + 0x50a) == '\0')) {
      ppuVar1 = &PTR_DAT_02bb0980;
      if ((undefined **)param_1[100] != &PTR_DAT_02bb0880) {
        ppuVar1 = &PTR_s_POP3S_02bb0a00;
      }
      pcVar4 = (code *)ppuVar1[1];
      param_1[100] = (long)ppuVar1;
      uVar3 = (*pcVar4)(param_1);
      return uVar3;
    }
    uVar3 = 0;
    *(long *)(lVar5 + 0x8ae8) = *(long *)(lVar5 + 0x8ae8) + 1;
  }
  return uVar3;
}




int FUN_019e53c4(long *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x218);
  if (puVar1 == (undefined4 *)0x0) {
    param_2 = 0;
  }
  else {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    if (*(long *)(puVar1 + 2) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(puVar1 + 2) = 0;
    }
    if (*(long *)(puVar1 + 4) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(puVar1 + 4) = 0;
    }
    *puVar1 = 0;
  }
  return param_2;
}




undefined8 FUN_019e5730(long param_1,undefined8 param_2)

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




undefined8 FUN_019e57c0(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x548;
  if (((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x5a0) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x5a0) + 0x2eb) != '\0')) &&
     (iVar2 = FUN_019e8c44(lVar1,"%s",&DAT_01e26b23), iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x5b8) = 0x17;
    do {
      iVar2 = FUN_019e8940(lVar1,1);
      if (iVar2 != 0) break;
    } while (*(int *)(param_1 + 0x5b8) != 0);
  }
  FUN_019e9018(lVar1);
  FUN_019ecacc(param_1,*(undefined4 *)(param_1 + 0x5e0));
  if (*(long *)(param_1 + 0x5e8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  return 0;
}




undefined8 FUN_019e5864(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_1;
  uVar4 = param_1[0xb8];
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    lVar10 = 0;
    do {
      cVar1 = *(char *)(param_2 + uVar9);
      if (cVar1 == '\n') {
        if ((uVar4 != 4) && (uVar6 = 0, uVar4 != 1)) goto LAB_019e5940;
        uVar6 = uVar4 + 1;
LAB_019e5950:
        param_1[0xb8] = uVar6;
LAB_019e5954:
        if (uVar6 <= uVar4) {
          lVar7 = param_1[0xb9];
          lVar5 = -uVar4;
          do {
            lVar7 = lVar7 + -1;
            if (lVar7 == -1) {
              uVar2 = FUN_019ca574(param_1,1,"\r\n.\r\n",-lVar5 - lVar10);
              lVar10 = 0;
              goto LAB_019e59a0;
            }
            param_1[0xb9] = lVar7;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0);
        }
      }
      else {
        if (cVar1 == '.') {
          if (uVar4 == 2) {
            uVar6 = 3;
          }
          else {
            uVar6 = 0;
            if (uVar4 != 3) goto LAB_019e5940;
            uVar6 = 0;
            lVar10 = 1;
          }
          goto LAB_019e5950;
        }
        uVar6 = 0;
        if (cVar1 != '\r') {
LAB_019e5940:
          param_1[0xb8] = uVar6;
          if (uVar4 == 0) goto LAB_019e59a8;
          goto LAB_019e5954;
        }
        if (uVar4 == 3) {
          uVar6 = 4;
          goto LAB_019e5950;
        }
        if (uVar4 != 0) {
          uVar6 = 1;
          goto LAB_019e5940;
        }
        param_1[0xb8] = 1;
        if (uVar9 != 0) {
          uVar2 = FUN_019ca574(param_1,1,param_2 + uVar3,uVar9 - uVar3);
LAB_019e59a0:
          uVar3 = uVar9;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
      }
LAB_019e59a8:
      uVar4 = param_1[0xb8];
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (uVar4 == 0) {
    if (param_3 - uVar3 != 0) {
      uVar2 = FUN_019ca574(param_1,1,param_2 + uVar3,param_3 - uVar3);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (uVar4 == 5) {
      uVar2 = FUN_019ca574(param_1,1,"\r\n.\r\n",2);
      *(uint *)(lVar8 + 0x1e4) = *(uint *)(lVar8 + 0x1e4) & 0xfffffffe;
      param_1[0xb8] = 0;
    }
  }
  return uVar2;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_019e5a44(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  int iVar6;
  size_t sVar7;
  void *__dest;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  size_t __n;
  byte *__s1;
  undefined8 local_98;
  uint local_8c;
  ulong local_88;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long local_68;
  
  lVar15 = param_1[0x3a];
  local_98 = 0;
  if ((int)param_1[0xb7] == 4) {
    iVar6 = FUN_019e65d8(param_1);
  }
  else {
    plVar2 = param_1 + 0xa9;
    if (param_1[0xaf] == 0) {
      plVar3 = param_1 + 0xb7;
      plVar4 = param_1 + 0x7c;
      do {
        iVar6 = FUN_019e8cb8((int)lVar15,plVar2,&local_8c,&local_98);
        uVar11 = local_8c;
        if (iVar6 != 0) {
          return iVar6;
        }
        if (local_8c == 0) {
          return 0;
        }
        switch((int)*plVar3) {
        case 1:
          lVar10 = *param_1;
          sVar7 = strlen((char *)(lVar10 + 0x938));
          if (uVar11 != 0x2b) {
            FUN_019ca0fc(lVar10,"Got unexpected pop3-server response");
            return 8;
          }
          __n = sVar7 - 4;
          if (((3 < sVar7) && (uVar8 = sVar7 - 2, 3 < uVar8)) &&
             (*(char *)(lVar10 + uVar8 + 0x938) == '>')) {
            lVar18 = 0x93b;
            do {
              if (*(char *)(lVar10 + lVar18) == '<') {
                if (__n != 0) {
                  __dest = (void *)(*(code *)PTR_calloc_02bf74c8)(1,__n + 1);
                  param_1[0xbd] = (long)__dest;
                  if (__dest != (void *)0x0) {
                    memcpy(__dest,(void *)(lVar10 + lVar18),__n);
                    *(undefined1 *)(param_1[0xbd] + __n) = 0;
                    *(uint *)(param_1 + 0xba) = *(uint *)(param_1 + 0xba) | 2;
                  }
                }
                break;
              }
              uVar13 = lVar18 - 0x937;
              lVar18 = lVar18 + 1;
              __n = __n - 1;
            } while (uVar13 < uVar8);
          }
          *(undefined4 *)((long)param_1 + 0x5d4) = 0;
          *(undefined4 *)(param_1 + 0xbc) = 0;
          *(undefined1 *)(param_1 + 0xbe) = 0;
          iVar6 = FUN_019e8c44(plVar2,"%s",&DAT_01e26a99);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = 2;
          goto LAB_019e63a0;
        case 2:
          lVar10 = *param_1;
          piVar14 = (int *)(lVar10 + 0x938);
          sVar7 = strlen((char *)piVar14);
          if (uVar11 == 0x2b) {
            if ((*(int *)(lVar10 + 0x528) != 0) && ((char)param_1[0x41] == '\0')) {
              if ((char)param_1[0xbe] != '\0') {
                iVar6 = FUN_019e8c44(plVar2,"%s",&DAT_01e26ac2);
                if (iVar6 != 0) {
                  return iVar6;
                }
                iVar6 = 3;
                goto LAB_019e63a0;
              }
              if (*(int *)(lVar10 + 0x528) != 1) {
                FUN_019ca0fc(lVar10,"STLS not supported.");
                return 0x40;
              }
            }
LAB_019e61d8:
            iVar6 = FUN_019e666c(param_1);
            lVar10 = local_70;
            lVar18 = local_78;
            goto joined_r0x019e6188;
          }
          if (uVar11 != 0x2a) {
            *(uint *)(param_1 + 0xba) = *(uint *)(param_1 + 0xba) | 1;
            goto LAB_019e61d8;
          }
          if (3 < sVar7) {
            if (*piVar14 == 0x534c5453) {
              *(undefined1 *)(param_1 + 0xbe) = 1;
            }
            else if (*piVar14 == 0x52455355) {
              *(uint *)(param_1 + 0xba) = *(uint *)(param_1 + 0xba) | 1;
            }
            else if ((4 < sVar7) && (iVar6 = memcmp(piVar14,"SASL ",5), iVar6 == 0)) {
              uVar8 = sVar7 - 5;
              *(uint *)(param_1 + 0xba) = *(uint *)(param_1 + 0xba) | 4;
              if (uVar8 != 0) {
                __s1 = (byte *)(lVar10 + 0x93d);
LAB_019e5bfc:
                do {
                  uVar13 = (ulong)*__s1;
                  if ((*__s1 < 0x21) && ((1L << (uVar13 & 0x3f) & 0x100002600U) != 0))
                  goto code_r0x019e5c20;
                  uVar16 = 1;
                  while ((0x20 < (uint)uVar13 || ((1L << (uVar13 & 0x3f) & 0x100002600U) == 0))) {
                    if (uVar8 <= uVar16) goto LAB_019e5c6c;
                    pbVar1 = __s1 + uVar16;
                    uVar16 = uVar16 + 1;
                    uVar13 = (ulong)*pbVar1;
                  }
                  uVar16 = uVar16 - 1;
LAB_019e5c6c:
                  switch(uVar16) {
                  case 4:
                    if (*(int *)__s1 == 0x4d4c544e) {
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 0x40;
                      goto LAB_019e5dac;
                    }
                    break;
                  case 5:
                    iVar6 = memcmp(__s1,"LOGIN",5);
                    if (iVar6 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 1;
                    }
                    else {
                      iVar6 = memcmp(__s1,"PLAIN",5);
                      if (iVar6 != 0) break;
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 2;
                    }
                    goto LAB_019e5dac;
                  case 6:
                    iVar6 = memcmp(__s1,"GSSAPI",6);
                    if (iVar6 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 0x10;
                      goto LAB_019e5dac;
                    }
                    break;
                  case 7:
                    iVar6 = memcmp(__s1,"XOAUTH2",7);
                    if (iVar6 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 0x80;
                      goto LAB_019e5dac;
                    }
                    break;
                  case 8:
                    if (*(long *)__s1 == 0x35444d2d4d415243) {
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 4;
                    }
                    else {
                      if (*(long *)__s1 != 0x4c414e5245545845) break;
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 0x20;
                    }
LAB_019e5dac:
                    *(uint *)((long)param_1 + 0x5d4) = uVar11;
                    break;
                  case 10:
                    iVar6 = memcmp(__s1,"DIGEST-MD5",10);
                    if (iVar6 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5d4) | 8;
                      goto LAB_019e5dac;
                    }
                  }
                  uVar8 = uVar8 - uVar16;
                  __s1 = __s1 + uVar16;
                } while (uVar8 != 0);
              }
            }
          }
          goto LAB_019e63a4;
        case 3:
          if (local_8c != 0x2b) {
            if (*(int *)(*param_1 + 0x528) != 1) {
              FUN_019ca0fc(*param_1,"STARTTLS denied. %c",local_8c);
              return 0x40;
            }
            goto LAB_019e61d8;
          }
          iVar6 = FUN_019e65d8(param_1);
          lVar10 = local_70;
          lVar18 = local_78;
          goto joined_r0x019e6188;
        default:
          goto switchD_019e5b0c_caseD_4;
        case 5:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          if (local_8c == 0x2b) {
            iVar6 = FUN_019ec04c(lVar10,param_1[0x2e],param_1[0x2f],&local_70,&local_68);
            goto LAB_019e6294;
          }
          pcVar9 = "Access denied. %c";
LAB_019e615c:
          local_68 = 0;
          local_70 = 0;
          FUN_019ca0fc(lVar10,pcVar9,local_8c);
          iVar6 = 0x43;
          break;
        case 6:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          if (local_8c != 0x2b) {
LAB_019e6154:
            pcVar9 = "Access denied: %d";
            goto LAB_019e615c;
          }
          iVar6 = FUN_019ec158(lVar10,param_1[0x2e],&local_70,&local_68);
          if (((iVar6 == 0) && (local_70 != 0)) && (iVar6 = FUN_019e8c44(plVar2,"%s"), iVar6 == 0))
          {
            *(int *)plVar3 = 7;
          }
          break;
        case 7:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          if (local_8c != 0x2b) goto LAB_019e6154;
          iVar6 = FUN_019ec158(lVar10,param_1[0x2f],&local_70,&local_68);
          goto LAB_019e6294;
        case 8:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          local_78 = 0;
          local_88 = 0;
          if (local_8c != 0x2b) {
LAB_019e6110:
            local_68 = 0;
            local_70 = 0;
            local_78 = 0;
            FUN_019ca0fc(lVar10,"Access denied: %d",local_8c);
            return 0x43;
          }
          FUN_019e6b1c(lVar10 + 0x938,&local_70);
          iVar6 = FUN_019ec1f0(local_70,&local_68,&local_88);
          if (iVar6 == 0) {
            iVar6 = FUN_019ec218(lVar10,local_68,param_1[0x2e],param_1[0x2f],&local_78,&local_88);
            if (((iVar6 == 0) && (local_78 != 0)) && (iVar6 = FUN_019e8c44(plVar2,"%s"), iVar6 == 0)
               ) {
              iVar12 = 0x12;
              goto LAB_019e6238;
            }
          }
          else {
            iVar6 = FUN_019e8c44(plVar2,"%s",&DAT_01e26823);
            if (iVar6 == 0) {
              iVar12 = 0x11;
LAB_019e6238:
              *(int *)plVar3 = iVar12;
            }
          }
          if (local_68 != 0) {
            (*(code *)PTR_free_02bf74b0)();
            local_68 = 0;
          }
          lVar10 = local_70;
          lVar18 = 0;
          if (local_78 == 0) goto joined_r0x019e6188;
          (*(code *)PTR_free_02bf74b0)();
          local_78 = 0;
          if (iVar6 != 0) {
            return iVar6;
          }
          goto LAB_019e61e8;
        case 9:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          local_78 = 0;
          if (local_8c != 0x2b) goto LAB_019e6110;
          FUN_019e6b1c(lVar10 + 0x938,&local_68);
          iVar6 = FUN_019ec38c(lVar10,local_68,param_1[0x2e],param_1[0x2f],"pop",&local_70,&local_78
                              );
          if (iVar6 == 0) {
            iVar6 = FUN_019e8c44(plVar2,"%s",local_70);
            if (iVar6 == 0) {
              *(int *)plVar3 = 10;
            }
          }
          else if ((iVar6 == 0x3d) && (iVar6 = FUN_019e8c44(plVar2,"%s",&DAT_01e26823), iVar6 == 0))
          {
            *(int *)plVar3 = 0x11;
          }
          break;
        case 10:
          if (local_8c != 0x2b) goto LAB_019e6404;
          iVar6 = FUN_019e8c44(plVar2,"%s",&DAT_01e277f2);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = 0x12;
          goto LAB_019e63a0;
        case 0xb:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          if (local_8c != 0x2b) goto LAB_019e6154;
          iVar6 = thunk_FUN_019eba38(param_1[0x2e],param_1[0x2f],plVar4,&local_70,&local_68);
          if (((iVar6 != 0) || (local_70 == 0)) || (iVar6 = FUN_019e8c44(plVar2,"%s"), iVar6 != 0))
          break;
          iVar12 = 0xc;
          goto LAB_019e62c0;
        case 0xc:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          local_78 = 0;
          if (local_8c != 0x2b) goto LAB_019e6154;
          FUN_019e6b1c(lVar10 + 0x938,&local_68);
          iVar6 = thunk_FUN_019eb8e8(lVar10,local_68,plVar4);
          if (iVar6 == 0) {
            iVar6 = thunk_FUN_019ebaf4(lVar10,param_1[0x2e],param_1[0x2f],plVar4,&local_70,&local_78
                                      );
            goto LAB_019e6294;
          }
          iVar6 = FUN_019e8c44(plVar2,"%s",&DAT_01e26823);
          if (iVar6 == 0) {
            iVar12 = 0x11;
            goto LAB_019e62c0;
          }
          break;
        case 0x10:
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          if (local_8c != 0x2b) goto LAB_019e6154;
          iVar6 = FUN_019eca4c(lVar10,param_1[0x2e],param_1[0x31],&local_70,&local_68);
LAB_019e6294:
          if (((iVar6 == 0) && (local_70 != 0)) && (iVar6 = FUN_019e8c44(plVar2,"%s"), iVar6 == 0))
          {
            iVar12 = 0x12;
LAB_019e62c0:
            *(int *)plVar3 = iVar12;
          }
          break;
        case 0x11:
          lVar17 = *param_1;
          local_70 = 0;
          local_68 = 0;
          local_78 = 0;
          local_88 = local_88 & 0xffffffff00000000;
          local_7c = 0;
          *(uint *)((long)param_1 + 0x5d4) =
               *(uint *)((long)param_1 + 0x5d4) ^ *(uint *)(param_1 + 0xbc);
          iVar6 = FUN_019e6770(param_1,&local_68,&local_70,&local_78,&local_88,&local_7c);
          lVar10 = local_70;
          lVar18 = local_78;
          if (iVar6 != 0) goto joined_r0x019e6188;
          if (local_68 == 0) {
            if (((*(uint *)(param_1 + 0xba) >> 1 & 1) == 0) ||
               ((*(byte *)(param_1 + 0xbb) >> 1 & 1) == 0)) {
              if (((*(uint *)(param_1 + 0xba) & 1) == 0) || ((*(byte *)(param_1 + 0xbb) & 1) == 0))
              {
                FUN_019ca0fc(lVar17,"Authentication cancelled");
                return 0x43;
              }
              iVar6 = FUN_019e6ac4(param_1);
              lVar10 = local_70;
              lVar18 = local_78;
            }
            else {
              iVar6 = FUN_019e69b4(param_1);
              lVar10 = local_70;
              lVar18 = local_78;
            }
            goto joined_r0x019e6188;
          }
          iVar6 = FUN_019e690c(param_1,local_68,local_70,local_78,local_88 & 0xffffffff,local_7c);
          lVar10 = 0;
          lVar18 = local_78;
          if (local_70 == 0) goto joined_r0x019e6188;
          (*(code *)PTR_free_02bf74b0)(local_70);
          goto LAB_019e6184;
        case 0x12:
        case 0x13:
          if (local_8c == 0x2b) goto switchD_019e5b0c_caseD_4;
LAB_019e6404:
          lVar15 = *param_1;
          pcVar9 = "Authentication failed: %d";
LAB_019e6428:
          FUN_019ca0fc(lVar15,pcVar9,local_8c);
          return 0x43;
        case 0x14:
          if (local_8c != 0x2b) goto LAB_019e641c;
          puVar5 = &DAT_01e277f2;
          if ((undefined1 *)param_1[0x2f] != (undefined1 *)0x0) {
            puVar5 = (undefined1 *)param_1[0x2f];
          }
          iVar6 = FUN_019e8c44(plVar2,"PASS %s",puVar5);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = 0x15;
LAB_019e63a0:
          *(int *)plVar3 = iVar6;
          goto LAB_019e63a4;
        case 0x15:
          if (local_8c == 0x2b) goto switchD_019e5b0c_caseD_4;
LAB_019e641c:
          lVar15 = *param_1;
          pcVar9 = "Access denied. %c";
          goto LAB_019e6428;
        case 0x16:
          if (local_8c != 0x2b) {
            *(int *)plVar3 = 0;
            return 0x38;
          }
          lVar15 = *param_1;
          piVar14 = *(int **)(lVar15 + 0x218);
          param_1[0xb9] = 2;
          param_1[0xb8] = 2;
          if (*piVar14 != 0) goto switchD_019e5b0c_caseD_4;
          FUN_019d9cd0(param_1,0,0xffffffffffffffff,0,0,0xffffffff,0);
          lVar10 = param_1[0xa9];
          if (lVar10 == 0) goto switchD_019e5b0c_caseD_4;
          if (*(char *)(lVar15 + 0x517) == '\0') {
            iVar6 = FUN_019e5864(param_1,lVar10,param_1[0xaa]);
            if (iVar6 != 0) {
              return iVar6;
            }
            lVar10 = param_1[0xa9];
            if (lVar10 != 0) goto LAB_019e648c;
          }
          else {
LAB_019e648c:
            (*(code *)PTR_free_02bf74b0)(lVar10);
            param_1[0xa9] = 0;
          }
          param_1[0xaa] = 0;
switchD_019e5b0c_caseD_4:
          *(int *)plVar3 = 0;
          return 0;
        }
        lVar10 = 0;
        lVar18 = local_78;
        if (local_70 != 0) {
          (*(code *)PTR_free_02bf74b0)(local_70);
LAB_019e6184:
          local_70 = 0;
          lVar10 = local_70;
          lVar18 = local_78;
        }
joined_r0x019e6188:
        local_78 = lVar18;
        local_70 = lVar10;
        if (iVar6 != 0) {
          return iVar6;
        }
LAB_019e61e8:
        if ((int)*plVar3 == 0) break;
LAB_019e63a4:
        uVar8 = FUN_019e8a8c(plVar2);
      } while ((uVar8 & 1) != 0);
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_019e8f84(plVar2);
    }
  }
  return iVar6;
code_r0x019e5c20:
  uVar8 = uVar8 - 1;
  __s1 = __s1 + 1;
  if (uVar8 == 0) goto LAB_019e63a4;
  goto LAB_019e5bfc;
}

