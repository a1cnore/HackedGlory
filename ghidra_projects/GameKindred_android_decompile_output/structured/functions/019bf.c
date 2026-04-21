// functions/019bf — 3 functions
#include "libGameKindred.h"




ulong FUN_019bf128(ulong param_1,sigaction *param_2)

{
  char cVar1;
  uint uVar2;
  _union_1457 local_40;
  undefined8 uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x534);
  *(char *)((param_2->sa_mask).__val + 3) = cVar1;
  if (cVar1 != '\0') {
    return param_1;
  }
  (param_2->sa_mask).__val[0] = 0;
  (param_2->__sigaction_handler).sa_handler = (__sighandler_t)0x0;
  (param_2->sa_mask).__val[2] = 0;
  (param_2->sa_mask).__val[1] = 0;
  sigaction(0xd,(sigaction *)0x0,param_2);
  local_40.sa_handler = *(__sighandler_t *)&param_2->__sigaction_handler;
  uStack_28 = (param_2->sa_mask).__val[2];
  local_30 = (param_2->sa_mask).__val[1];
  uStack_38 = 1;
  uVar2 = sigaction(0xd,(sigaction *)&local_40,(sigaction *)0x0);
  return (ulong)uVar2;
}




undefined4 FUN_019bf19c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  long *plVar14;
  uint *puVar15;
  long local_70;
  char local_64 [4];
  undefined8 local_60;
  undefined8 local_58;
  char local_48 [4];
  char local_44 [4];
  
  local_44[0] = '\0';
  local_48[0] = '\0';
  local_64[0] = '\0';
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8c50) != -0x3f212453)) {
    return 2;
  }
  pcVar8 = (char *)(param_4 + 0x8ad1);
  local_60 = param_2;
  local_58 = param_3;
  if (*pcVar8 != '\0') {
    FUN_019c9f64(param_4,"Pipe broke: handle 0x%p, url = %s\n",param_4,
                 *(undefined8 *)(param_4 + 0x8ae8));
    uVar13 = *(uint *)(param_4 + 0x18);
    if (uVar13 < 0x10) {
      if (uVar13 != 2) {
        *(uint *)(param_4 + 0x18) = 2;
      }
      uVar5 = 0xffffffff;
      uVar13 = 2;
      *(undefined4 *)(param_4 + 0x1c) = 0;
    }
    else {
      uVar5 = 0;
    }
    *pcVar8 = '\0';
    *(undefined8 *)(param_4 + 0x10) = 0;
    goto LAB_019bf29c;
  }
  plVar14 = (long *)(param_4 + 0x10);
  puVar15 = (uint *)(param_4 + 0x18);
  uVar13 = *puVar15;
  if ((long *)*plVar14 != (long *)0x0) {
    if (uVar13 - 3 < 0xd) {
      *(long *)*plVar14 = param_4;
    }
    else if (0xd < uVar13 - 2) goto LAB_019bf338;
    lVar6 = FUN_019bccd8(param_4,&local_60,uVar13 < 8);
    uVar13 = *(uint *)(param_4 + 0x18);
    if (-1 < lVar6) goto LAB_019bf338;
    if (uVar13 == 4) {
      uVar7 = FUN_019c33ec(local_60,local_58,*(undefined8 *)(param_4 + 0x838),
                           *(undefined8 *)(param_4 + 0x840));
      pcVar8 = "Connection timed out after %ld milliseconds";
LAB_019bf3e4:
      FUN_019ca0fc(param_4,pcVar8,uVar7);
    }
    else {
      if (uVar13 == 3) {
        uVar7 = FUN_019c33ec(local_60,local_58,*(undefined8 *)(param_4 + 0x838),
                             *(undefined8 *)(param_4 + 0x840));
        pcVar8 = "Resolving timed out after %ld milliseconds";
        goto LAB_019bf3e4;
      }
      if (*(long *)(param_4 + 0x78) == -1) {
        uVar7 = FUN_019c33ec(local_60,local_58,*(undefined8 *)(param_4 + 0x838),
                             *(undefined8 *)(param_4 + 0x840));
        FUN_019ca0fc(param_4,"Operation timed out after %ld milliseconds with %ld bytes received",
                     uVar7,*(undefined8 *)(param_4 + 0x98));
      }
      else {
        uVar7 = FUN_019c33ec(*(undefined8 *)(param_4 + 200),*(undefined8 *)(param_4 + 0xd0),
                             *(undefined8 *)(param_4 + 0x838),*(undefined8 *)(param_4 + 0x840));
        FUN_019ca0fc(param_4,
                     "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                     ,uVar7,*(undefined8 *)(param_4 + 0x98),*(undefined8 *)(param_4 + 0x78));
      }
    }
    *(undefined1 *)(*(long *)(param_4 + 0x10) + 0x2e0) = 1;
    uVar13 = *(uint *)(param_4 + 0x18);
    *(undefined4 *)(param_4 + 0x1c) = 0x1c;
    goto LAB_019bfb38;
  }
  if (uVar13 - 3 < 0xc) {
    FUN_019ca0fc(param_4,"In state %d with no easy_conn, bail out!\n");
    return 4;
  }
LAB_019bf338:
  uVar5 = 0;
  bVar2 = false;
  uVar12 = 0;
  switch(uVar13) {
  case 0:
    iVar4 = FUN_019d9374(param_4);
    *(int *)(param_4 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      if (*puVar15 != 2) {
        *puVar15 = 2;
      }
      FUN_019c4488(param_4,1);
      goto LAB_019bfd84;
    }
    break;
  case 1:
    goto switchD_019bf360_caseD_1;
  case 2:
    FUN_019c4488(param_4,2);
    iVar4 = FUN_019d0194(param_4,plVar14,&local_70,local_44);
    *(int *)(param_4 + 0x1c) = iVar4;
    if (iVar4 != 0) {
      if (iVar4 == 0x59) {
        if (*puVar15 != 1) {
          *puVar15 = 1;
        }
        iVar4 = FUN_019da3c4(*(long *)(param_1 + 0x28),
                             *(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_4);
        bVar2 = false;
        uVar5 = 0;
        if (iVar4 == 0) {
          *(undefined4 *)(param_4 + 0x1c) = 0x1b;
        }
        else {
          *(undefined4 *)(param_4 + 0x1c) = 0;
        }
        goto LAB_019bfa80;
      }
      break;
    }
    iVar4 = FUN_019c230c(param_4,*(undefined8 *)(param_4 + 0x10));
    *(int *)(param_4 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      if ((char)local_70 != '\0') {
        uVar13 = 3;
        if (*puVar15 == 3) goto LAB_019bfa6c;
        goto LAB_019bfbcc;
      }
      if (local_44[0] != '\0') goto LAB_019bf61c;
      uVar10 = *puVar15;
      if (*(int *)(*plVar14 + 0x6b8) == 1) {
LAB_019bfe30:
        uVar13 = 5;
        if (uVar10 != 5) goto LAB_019bf74c;
      }
      else {
        uVar13 = 4;
        if (uVar10 != 4) goto LAB_019bf74c;
      }
      goto LAB_019bf750;
    }
LAB_019bf6fc:
    uVar5 = 0;
    bVar2 = true;
    goto LAB_019bfa80;
  case 3:
    lVar6 = *(long *)(param_4 + 0x10);
    if (*(long *)(param_4 + 0x70) != 0) {
      FUN_019c1238(param_4,3,2);
    }
    lVar6 = FUN_019c3668(lVar6,*(undefined8 *)(lVar6 + 0xc0),*(undefined4 *)(lVar6 + 0xf0),&local_70
                        );
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      *(undefined4 *)(param_4 + 0x1c) = 0;
      FUN_019c9f64(param_4,"Hostname was found in DNS cache\n");
    }
    if ((int)local_70 != 0) {
      FUN_019c9f64(param_4,"Hostname in DNS cache was stale, zapped\n");
    }
    if (*(long *)(param_4 + 0x70) != 0) {
      FUN_019c1288(param_4,3);
    }
    if (lVar6 == 0) {
      *(undefined4 *)(param_4 + 0x1c) = 6;
      FUN_019be6c8(param_1,param_4);
      uVar13 = *(uint *)(param_4 + 0x1c);
      uVar5 = 0;
LAB_019bf98c:
      bVar2 = uVar13 != 0;
      goto LAB_019bfa80;
    }
    FUN_019be6c8(param_1,param_4);
    *(undefined4 *)(param_4 + 0x1c) = 0;
    if (local_44[0] == '\0') {
      if (*(int *)(*plVar14 + 0x6b8) == 1) {
        if (*puVar15 != 5) {
          uVar13 = 5;
LAB_019bfd80:
          *puVar15 = uVar13;
        }
      }
      else if (*puVar15 != 4) {
        uVar13 = 4;
        goto LAB_019bfd80;
      }
    }
    else {
      uVar13 = 7;
      if (*(char *)(param_1 + 0x58) == '\0') {
        uVar13 = 8;
      }
      if (*puVar15 != uVar13) goto LAB_019bfd80;
    }
LAB_019bfd84:
    bVar2 = false;
    uVar5 = 0xffffffff;
    goto LAB_019bfa80;
  case 4:
    iVar4 = FUN_019bd09c(*(undefined8 *)(param_4 + 0x10),0,&local_70);
    *(int *)(param_4 + 0x1c) = iVar4;
    if ((iVar4 == 0) && ((char)local_70 != '\0')) {
      iVar4 = FUN_019cffb8(*(undefined8 *)(param_4 + 0x10),local_44);
      *(int *)(param_4 + 0x1c) = iVar4;
    }
    if (*(char *)(*plVar14 + 0x2f6) != '\0') {
LAB_019bf5e4:
      uVar13 = 2;
      *(undefined4 *)(param_4 + 0x1c) = 0;
      if (*(int *)(param_4 + 0x18) != 2) goto LAB_019bf74c;
      goto LAB_019bf750;
    }
    if (iVar4 != 0) goto LAB_019bf6fc;
    if ((char)local_70 != '\0') {
      if (local_44[0] != '\0') goto LAB_019bf61c;
      uVar10 = *puVar15;
      if (*(int *)(*plVar14 + 0x6b8) == 1) goto LAB_019bfe30;
      uVar13 = 6;
      if (uVar10 != 6) goto LAB_019bf74c;
      goto LAB_019bf750;
    }
    break;
  case 5:
    iVar4 = FUN_019c77b0(*(undefined8 *)(param_4 + 0x10),local_44);
    *(int *)(param_4 + 0x1c) = iVar4;
    if (*(char *)(*(long *)(param_4 + 0x10) + 0x2f6) != '\0') goto LAB_019bf5e4;
    if ((iVar4 == 0) && (*(int *)(*(long *)(param_4 + 0x10) + 0x6b8) == 2)) {
      uVar13 = 4;
      if (*puVar15 == 4) goto LAB_019bfa6c;
      goto LAB_019bfbcc;
    }
    break;
  case 6:
    iVar4 = FUN_019cff68(*(undefined8 *)(param_4 + 0x10),local_44);
    *(int *)(param_4 + 0x1c) = iVar4;
    if ((iVar4 == 0) && (local_44[0] != '\0')) {
LAB_019bf61c:
      cVar1 = *(char *)(param_1 + 0x58);
      uVar10 = *puVar15;
      uVar13 = 7;
LAB_019bf6c0:
      if (cVar1 == '\0') {
        uVar13 = uVar13 + 1;
      }
      if (uVar10 != uVar13) goto LAB_019bf74c;
      goto LAB_019bf750;
    }
    if (iVar4 == 0) break;
    FUN_019d94c8(param_4);
    bVar2 = true;
    FUN_019d2460(plVar14,*(undefined4 *)(param_4 + 0x1c),1);
    goto LAB_019bfa7c;
  case 7:
    lVar6 = *plVar14;
    if (((*(char *)(lVar6 + 0x395) == '\0') && ((long *)**(long **)(lVar6 + 0x398) != (long *)0x0))
       && (*(long *)**(long **)(lVar6 + 0x398) == param_4)) {
      uVar13 = 8;
      *(undefined1 *)(lVar6 + 0x395) = 1;
LAB_019bf74c:
      *puVar15 = uVar13;
      goto LAB_019bf750;
    }
    break;
  case 8:
    if (*(char *)(param_4 + 0x539) == '\0') {
      iVar4 = FUN_019d26ec(plVar14,local_48);
      *(int *)(param_4 + 0x1c) = iVar4;
      if (iVar4 == 0x37) {
        if (*(char *)(*plVar14 + 0x2e1) != '\0') {
          local_70 = 0;
          iVar4 = FUN_019d9bc0(*plVar14,&local_70);
          bVar2 = iVar4 != 0;
          if (bVar2) {
            *(int *)(param_4 + 0x1c) = iVar4;
          }
          bVar3 = local_70 == 0;
          uVar13 = (uint)bVar2;
          FUN_019d94c8(param_4);
          iVar4 = FUN_019d2460(plVar14,*(undefined4 *)(param_4 + 0x1c),0);
          if (bVar2 || bVar3) {
            uVar13 = 1;
            uVar5 = 0;
          }
          else if (((iVar4 == 0x37) || (iVar4 == 0)) &&
                  (iVar4 = FUN_019d94d0(param_4,local_70,2), iVar4 == 0)) {
            if (*puVar15 != 2) {
              *puVar15 = 2;
            }
            *(undefined4 *)(param_4 + 0x1c) = 0;
            uVar5 = 0xffffffff;
          }
          else {
            *(int *)(param_4 + 0x1c) = iVar4;
            (*(code *)PTR_free_02bf74b0)(local_70);
            uVar5 = 0;
          }
          goto LAB_019bf98c;
        }
      }
      else if (iVar4 == 0) {
        if (local_48[0] == '\0') {
          if ((*(char *)(param_4 + 0x708) != '\0') && ((*(uint *)(param_4 + 0x8b30) | 2) == 6)) {
            FUN_019d2460(plVar14,0,0);
            goto LAB_019bfe00;
          }
          uVar13 = 9;
          if (*puVar15 == 9) goto LAB_019bfa6c;
        }
        else {
          if (*(char *)(*plVar14 + 0x2e8) == '\0') {
            uVar13 = 0xb;
            if (*puVar15 != 0xb) goto LAB_019bf74c;
            goto LAB_019bf750;
          }
          uVar13 = 10;
          if (*puVar15 == 10) {
LAB_019bfa6c:
            uVar5 = 0;
            bVar2 = false;
            goto switchD_019bf360_caseD_1;
          }
        }
        goto LAB_019bfbcc;
      }
      FUN_019d94c8(param_4);
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_019bf6fc;
LAB_019bf6ec:
      FUN_019d2460(plVar14,*(undefined4 *)(param_4 + 0x1c),0);
      goto LAB_019bf6fc;
    }
    uVar13 = 0xf;
    *(undefined1 *)(*plVar14 + 0x2e0) = 0;
    puVar15[0] = 0xf;
    puVar15[1] = 0;
    goto LAB_019bf750;
  case 9:
    iVar4 = FUN_019cff90(*(undefined8 *)(param_4 + 0x10),local_48);
    *(int *)(param_4 + 0x1c) = iVar4;
    if (iVar4 != 0) {
LAB_019bf6e4:
      FUN_019d94c8(param_4);
      goto LAB_019bf6ec;
    }
    if (local_48[0] != '\0') {
      uVar10 = *puVar15;
      cVar1 = *(char *)(*plVar14 + 0x2e8);
      uVar13 = 10;
      goto LAB_019bf6c0;
    }
    break;
  case 10:
    iVar4 = FUN_019d27ac(*(undefined8 *)(param_4 + 0x10),&local_70);
    *(int *)(param_4 + 0x1c) = iVar4;
    if (iVar4 != 0) goto LAB_019bf6e4;
    if ((int)local_70 != 0) {
      uVar13 = 0xb;
      if ((int)local_70 != 1) {
        uVar13 = 9;
      }
      if (*puVar15 != uVar13) goto LAB_019bf74c;
      goto LAB_019bf750;
    }
    break;
  case 0xb:
    FUN_019c2374(param_4,*(undefined8 *)(param_4 + 0x10));
    FUN_019c0d1c(param_1);
    if ((*(int *)(*(long *)(param_4 + 0x10) + 0x338) == -1) &&
       (*(int *)(*(long *)(param_4 + 0x10) + 0x33c) == -1)) {
LAB_019bfe00:
      uVar13 = 0xf;
      if (*puVar15 != 0xf) goto LAB_019bf74c;
    }
    else {
      uVar13 = 0xc;
      if (*puVar15 != 0xc) goto LAB_019bf74c;
    }
LAB_019bf750:
    bVar2 = false;
    uVar5 = 0xffffffff;
    goto switchD_019bf360_caseD_1;
  case 0xc:
    lVar6 = *plVar14;
    if (((*(char *)(lVar6 + 0x394) == '\0') && ((long *)**(long **)(lVar6 + 0x3a0) != (long *)0x0))
       && (*(long *)**(long **)(lVar6 + 0x3a0) == param_4)) {
      uVar13 = 0xd;
      *(undefined1 *)(lVar6 + 0x394) = 1;
      goto LAB_019bf74c;
    }
    break;
  case 0xd:
    local_70 = 0;
    lVar6 = *(long *)(param_4 + 0x398);
    if (((0 < lVar6) && (lVar9 = *(long *)(param_4 + 0x7f0), lVar6 < lVar9)) ||
       ((lVar6 = *(long *)(param_4 + 0x3a0), 0 < lVar6 &&
        (lVar9 = *(long *)(param_4 + 0x7e8), lVar6 < lVar9)))) {
      *(undefined4 *)(param_4 + 0x18) = 0xe;
      uVar5 = 0x4000;
      if (*(long *)(param_4 + 0x4c8) != 0) {
        uVar5 = (undefined4)*(long *)(param_4 + 0x4c8);
      }
      uVar7 = FUN_019d9310(lVar6,lVar9,uVar5);
      FUN_019c0bd8(param_4,uVar7);
      break;
    }
    iVar4 = FUN_019d8580(*(undefined8 *)(param_4 + 0x10),local_64);
    uVar13 = *(uint *)(param_4 + 0x1e4);
    *(int *)(param_4 + 0x1c) = iVar4;
    if ((uVar13 & 1) == 0) {
      *(undefined1 *)(*plVar14 + 0x394) = 0;
    }
    if ((uVar13 >> 1 & 1) == 0) {
      *(undefined1 *)(*plVar14 + 0x395) = 0;
    }
    if ((iVar4 == 0x38) || (local_64[0] != '\0')) {
      iVar4 = FUN_019d9bc0(*plVar14,&local_70);
      if ((iVar4 != 0) || (local_70 == 0)) {
        iVar4 = *(int *)(param_4 + 0x1c);
        goto LAB_019bfc6c;
      }
      bVar2 = true;
      *(undefined4 *)(param_4 + 0x1c) = 0;
      local_64[0] = '\x01';
LAB_019bfcb0:
      FUN_019d94c8(param_4);
      FUN_019cfd64(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x3a0));
      puVar11 = (undefined8 *)**(undefined8 **)(*(long *)(param_4 + 0x10) + 0x3a0);
      if (puVar11 != (undefined8 *)0x0) {
        FUN_019c0bd8(*puVar11,1);
      }
      FUN_019c0d1c(param_1);
      lVar6 = *(long *)(param_4 + 0x1f8);
      if (!(bool)(lVar6 == 0 & (bVar2 ^ 1U))) {
        if (bVar2) {
          uVar5 = 2;
        }
        else {
          uVar5 = 3;
          *(undefined8 *)(param_4 + 0x1f8) = 0;
          local_70 = lVar6;
        }
        iVar4 = FUN_019d2460(plVar14,0,0);
        *(int *)(param_4 + 0x1c) = iVar4;
        if (iVar4 == 0) {
          iVar4 = FUN_019d94d0(param_4,local_70,uVar5);
          *(int *)(param_4 + 0x1c) = iVar4;
          if (iVar4 == 0) {
            if (*puVar15 != 2) {
              *puVar15 = 2;
            }
            local_70 = 0;
            goto LAB_019bfd84;
          }
        }
        goto LAB_019bfdc8;
      }
      lVar6 = *(long *)(param_4 + 0x1f0);
      if (lVar6 == 0) {
        bVar2 = false;
      }
      else {
        if (local_70 != 0) {
          (*(code *)PTR_free_02bf74b0)();
          lVar6 = *(long *)(param_4 + 0x1f0);
        }
        *(undefined8 *)(param_4 + 0x1f0) = 0;
        bVar2 = true;
        local_70 = lVar6;
        iVar4 = FUN_019d94d0(param_4,lVar6,1);
        *(int *)(param_4 + 0x1c) = iVar4;
        if (iVar4 == 0) {
          bVar2 = false;
          local_70 = 0;
        }
      }
      if (*puVar15 != 0xf) {
        *puVar15 = 0xf;
      }
      uVar5 = 0xffffffff;
    }
    else {
LAB_019bfc6c:
      if (iVar4 == 0) {
        if (local_64[0] != '\0') {
          bVar2 = false;
          goto LAB_019bfcb0;
        }
      }
      else {
        if ((*(byte *)(*(long *)(*plVar14 + 800) + 0x7c) >> 1 & 1) == 0) {
          *(undefined1 *)(*plVar14 + 0x2e0) = 1;
        }
        FUN_019d94c8(param_4);
        FUN_019d2460(plVar14,*(undefined4 *)(param_4 + 0x1c),0);
      }
LAB_019bfdc8:
      bVar2 = false;
      uVar5 = 0;
    }
    if (local_70 != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    goto LAB_019bfa80;
  case 0xe:
    iVar4 = FUN_019c3f38(*plVar14);
    if (iVar4 == 0) {
      uVar5 = FUN_019d45a4(param_4,local_60,local_58);
    }
    else {
      uVar5 = 0x2a;
    }
    *(undefined4 *)(param_4 + 0x1c) = uVar5;
    if (((*(long *)(param_4 + 0x398) != 0) &&
        (*(long *)(param_4 + 0x398) <= *(long *)(param_4 + 0x7f0))) ||
       ((*(long *)(param_4 + 0x3a0) != 0 &&
        (*(long *)(param_4 + 0x3a0) <= *(long *)(param_4 + 0x7e8))))) break;
    uVar13 = 0xd;
    if (*puVar15 == 0xd) goto LAB_019bfa6c;
LAB_019bfbcc:
    uVar5 = 0;
    bVar2 = false;
    *puVar15 = uVar13;
    goto switchD_019bf360_caseD_1;
  case 0xf:
    if (*plVar14 != 0) {
      FUN_019cfd64(param_4,*(undefined8 *)(*plVar14 + 0x3a0));
      FUN_019c0d1c(param_1);
      uVar5 = FUN_019d2460(plVar14,*(undefined4 *)(param_4 + 0x1c),0);
      if (*(int *)(param_4 + 0x1c) == 0) {
        *(undefined4 *)(param_4 + 0x1c) = uVar5;
      }
      if (*plVar14 != 0) {
        *plVar14 = 0;
      }
    }
    if ((*(char *)(param_4 + 0x708) != '\0') && (*(int *)(param_4 + 0x8b30) != 6)) {
      if (*puVar15 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        *puVar15 = 0;
      }
      goto LAB_019bf750;
    }
    if (*puVar15 != 0x10) {
      *(undefined4 *)(param_4 + 0x18) = 0x10;
      *(int *)(*(long *)(param_4 + 0x60) + 0x1c) = *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
      goto LAB_019bfd84;
    }
    goto LAB_019bf2a8;
  case 0x10:
    *(undefined8 *)(param_4 + 0x10) = 0;
    FUN_019be274(param_4,0);
    break;
  case 0x11:
    goto switchD_019bf360_caseD_11;
  default:
    return 4;
  }
  bVar2 = false;
LAB_019bfa7c:
  uVar5 = 0;
LAB_019bfa80:
  uVar13 = *puVar15;
  if (uVar13 < 0x10) {
switchD_019bf360_caseD_1:
    if (*(int *)(param_4 + 0x1c) == 0) {
      if (*plVar14 == 0) {
        return uVar5;
      }
      iVar4 = FUN_019c3f38();
      if (iVar4 == 0) {
        uVar13 = *puVar15;
      }
      else {
        *(undefined4 *)(param_4 + 0x1c) = 0x2a;
        *(undefined1 *)(*(long *)(param_4 + 0x10) + 0x2e0) = 1;
        uVar13 = *(uint *)(param_4 + 0x18);
        uVar10 = 0xf;
        if (0xe < uVar13) {
          uVar10 = 0x10;
        }
        if (uVar13 == uVar10) {
          uVar5 = 0xffffffff;
        }
        else {
          *puVar15 = uVar10;
          if (uVar13 < 0xf) {
            uVar5 = 0xffffffff;
            uVar13 = 0xf;
          }
          else {
            uVar5 = 0xffffffff;
            uVar13 = 0x10;
            *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
          }
        }
      }
      goto LAB_019bf29c;
    }
    *pcVar8 = '\0';
    lVar6 = *plVar14;
    if (lVar6 == 0) {
      if (uVar13 == 2) {
        FUN_019d94c8(param_4);
      }
    }
    else {
      *(undefined2 *)(lVar6 + 0x394) = 0;
      FUN_019cfd64(param_4,*(undefined8 *)(lVar6 + 0x398));
      FUN_019cfd64(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x3a0));
      FUN_019c0d1c(param_1);
      if (bVar2) {
        FUN_019cf8e8(*plVar14,0);
        *plVar14 = 0;
      }
    }
    uVar13 = *puVar15;
LAB_019bfb38:
    if (uVar13 != 0x10) {
      *(undefined4 *)(param_4 + 0x18) = 0x10;
      *(int *)(*(long *)(param_4 + 0x60) + 0x1c) = *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
    }
  }
  else {
LAB_019bf29c:
    if (uVar13 != 0x10) {
      return uVar5;
    }
  }
LAB_019bf2a8:
  *(undefined4 *)(param_4 + 0x20) = 1;
  *(long *)(param_4 + 0x28) = param_4;
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_4 + 0x1c);
  iVar4 = FUN_019da3c4(*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  uVar12 = 3;
  if (iVar4 != 0) {
    uVar12 = 0;
  }
  if (*(int *)(param_4 + 0x18) != 0x11) {
    *(int *)(param_4 + 0x18) = 0x11;
  }
switchD_019bf360_caseD_11:
  return uVar12;
}




void FUN_019bff64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  plVar5 = *(long **)(param_4 + 0x8ab8);
  puVar1 = (undefined8 *)(param_4 + 0x8a78);
  puVar6 = (undefined8 *)*plVar5;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      puVar7 = (undefined8 *)puVar6[2];
      lVar2 = FUN_019c33ec(*(undefined8 *)*puVar6,((undefined8 *)*puVar6)[1],param_1,param_2);
      if (0 < lVar2) break;
      FUN_019da474(plVar5,puVar6,0);
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    plVar4 = (long *)*plVar5;
    if (plVar4 != (long *)0x0) {
      uVar3 = *(undefined8 *)*plVar4;
      *(undefined8 *)(param_4 + 0x8a80) = ((undefined8 *)*plVar4)[1];
      *puVar1 = uVar3;
      FUN_019da474(plVar5,plVar4,0);
      uVar3 = FUN_019c19a8(*puVar1,*(undefined8 *)(param_4 + 0x8a80),*(undefined8 *)(param_3 + 0x48)
                           ,param_4 + 0x8a88);
      *(undefined8 *)(param_3 + 0x48) = uVar3;
      return;
    }
  }
  *puVar1 = 0;
  *(undefined8 *)(param_4 + 0x8a80) = 0;
  return;
}

