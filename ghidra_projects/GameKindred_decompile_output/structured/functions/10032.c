// functions/10032 — 332 functions
#include "GameKindred.h"




void FUN_100320128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100320e24(param_1,param_2,param_5);
  return;
}




void FUN_100320130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100320fc8(param_1,param_2,param_5);
  return;
}




void FUN_100320138(long param_1)

{
  FUN_10031ffec(param_1 + -0x18);
  return;
}




void FUN_100320140(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x28) == -0x12) {
    pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_EXISTS";
  }
  else {
    if (*(int *)(param_2 + 0x28) == 0) {
      return;
    }
    pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_VALID";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1001e55b0(0x40200000,uVar2,1,1);
  return;
}




void thunk_FUN_100320140(void)

{
  FUN_100320140();
  return;
}




void FUN_100320194(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    uVar1 = FUN_1004e0150("MENU_PARTY_CANNOT_REJECT",0);
    FUN_1001e55b0(0x40200000,uVar1,1,1);
    return;
  }
  return;
}




void thunk_FUN_100320194(void)

{
  FUN_100320194();
  return;
}




void FUN_1003201d4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  FUN_100320200(param_1,*(undefined1 *)(lVar1 + 0x567a));
  return;
}




void FUN_100320200(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x70);
  *(char *)(param_1 + 0x70) = (char)param_2;
  if (cVar1 == '\0' && param_2 != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      do {
        if (*(code **)(lVar2 + 8) == (code *)0x0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
        }
        else {
          (**(code **)(lVar2 + 8))();
        }
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != *(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20);
    }
  }
  else if (((cVar1 != '\0') && ((param_2 & 1) == 0)) && (*(int *)(param_1 + 0x40) != 0)) {
    lVar2 = *(long *)(param_1 + 0x48);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
  }
  if (param_2 != 0) {
    FUN_10012f2d4(1);
    return;
  }
  return;
}




void FUN_1003202d8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  FUN_100320200(param_1 + -0x18,*(undefined1 *)(lVar1 + 0x567a));
  return;
}




void FUN_100320304(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  void *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined1 local_8f;
  undefined8 local_8c;
  undefined4 local_84;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  void *pvStack_60;
  undefined8 local_58;
  long lStack_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((*(int *)(param_2 + 0x40) == 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0xa0) = 1;
    std::string::operator=((string *)(param_1 + 0x88),(string *)(param_2 + 0x28));
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    FUN_1004e313c(&local_a0);
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (void *)0x0;
    lStack_50 = 0;
    local_58 = 0;
    pvStack_60 = (void *)0x0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = (void *)0x0;
    FUN_10015d3ec();
    uVar1 = FUN_100164f34();
    FUN_1000153b4(&local_a0,uVar1);
    lVar2 = FUN_10015d3ec();
    std::string::operator=((string *)&local_b8,(string *)(lVar2 + 0x5508));
    local_8f = 1;
    local_84 = 0;
    local_8c = 1;
    FUN_10032045c(param_1,&local_b8);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar2 + 8) == (code *)0x0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
        }
        else {
          (**(code **)(lVar2 + 8))();
        }
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
    if (local_38 < 0) {
      operator_delete(local_48);
    }
    if (lStack_50 < 0) {
      operator_delete(pvStack_60);
    }
    if (local_68 < 0) {
      operator_delete(local_78);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    if (local_a8 < 0) {
      operator_delete(local_b8);
    }
  }
  return;
}




void FUN_100320530(long param_1)

{
  FUN_100320304(param_1 + -0x18);
  return;
}




void FUN_100320538(long param_1,long param_2)

{
  if ((*(int *)(param_2 + 0xb8) == 0) && (*(char *)(param_2 + 0xbc) != '\0')) {
    std::string::operator=((string *)(param_1 + 0x88),(string *)(param_2 + 0x28));
    return;
  }
  return;
}




void FUN_100320558(long param_1,long param_2)

{
  if ((*(int *)(param_2 + 0xb8) == 0) && (*(char *)(param_2 + 0xbc) != '\0')) {
    std::string::operator=((string *)(param_1 + 0x70),(string *)(param_2 + 0x28));
    return;
  }
  return;
}




void FUN_10032057c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_110 [8];
  void *local_108;
  undefined1 auStack_100 [8];
  void *local_f8;
  void *local_f0;
  void *local_e8;
  char local_d9;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined1 local_af;
  undefined4 local_ac;
  undefined4 local_9c;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  void *pvStack_80;
  undefined8 local_78;
  long lStack_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    FUN_1004e313c(&local_c0);
    local_58 = 0;
    lStack_70 = 0;
    local_78 = 0;
    uStack_60 = 0;
    local_68 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (void *)0x0;
    local_af = 0;
    FUN_1004e3170(&local_f0,param_2 + 0x58);
    FUN_1000153b4(&local_c0,&local_f0);
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    std::string::operator=((string *)&local_d8,(string *)(param_2 + 0x40));
    local_9c = *(undefined4 *)(param_2 + 0xd0);
    std::string::operator=((string *)&local_68,(string *)(param_2 + 0xb8));
    std::string::operator=((string *)&pvStack_80,(string *)(param_2 + 0xa0));
    std::string::operator=((string *)&local_98,(string *)(param_2 + 0x88));
    local_ac = 0;
    uVar2 = FUN_10032045c(param_1,&local_d8);
    FUN_10001549c(&local_f0,"*GameMode_Blitz_Private*");
    lVar3 = FUN_10034ccb8(&local_f0);
    uVar4 = FUN_1004e0150(*(undefined8 *)(lVar3 + 0x78),0);
    if (local_d9 < '\0') {
      operator_delete(local_f0);
    }
    uVar5 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_PARTY",0);
    thunk_FUN_1004e439c(&local_f0,uVar5);
    FUN_1004e3120(auStack_100,"[HANDLE]");
    FUN_1004e3170(auStack_110,param_2 + 0x58);
    FUN_1004e3bc4(&local_f0,0,auStack_100,auStack_110);
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
    }
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
    }
    FUN_1004e3120(auStack_100,"[GAME_MODE_NAME]");
    FUN_1004e3bc4(&local_f0,0,auStack_100,uVar4);
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
    }
    FUN_1001e564c(0,&local_f0,FUN_100320128,uVar2,FUN_100320130,uVar2,param_1,1,0,1);
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
    if (lStack_70 < 0) {
      operator_delete(pvStack_80);
    }
    if (local_88 < 0) {
      operator_delete(local_98);
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
    if (local_c8 < 0) {
      operator_delete(local_d8);
    }
  }
  return;
}




ulong FUN_1003207d0(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x78);
  if (uVar3 != 0) {
    pbVar1 = *(byte **)param_2;
    sVar5 = *(size_t *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      pbVar1 = param_2;
      sVar5 = (ulong)param_2[0x17];
    }
    if (0 < (int)uVar3) {
      uVar11 = 0;
      lVar12 = *(long *)(param_1 + 0x80);
      pbVar13 = (byte *)(lVar12 + 1);
      do {
        puVar9 = (undefined8 *)(lVar12 + uVar11 * 0x88);
        bVar4 = *(byte *)((long)puVar9 + 0x17);
        uVar7 = (ulong)bVar4;
        sVar2 = puVar9[1];
        if (-1 < (char)bVar4) {
          sVar2 = uVar7;
        }
        if (sVar2 == sVar5) {
          if ((char)bVar4 < '\0') {
            if (sVar5 == 0) {
              return uVar11;
            }
            iVar6 = _memcmp((void *)*puVar9,pbVar1,sVar5);
            if (iVar6 == 0) {
              return uVar11;
            }
          }
          else {
            if (sVar5 == 0) {
              return uVar11;
            }
            pbVar10 = pbVar13;
            pbVar8 = pbVar1;
            if ((uint)*pbVar1 == ((uint)(void *)*puVar9 & 0xff)) {
              do {
                uVar7 = uVar7 - 1;
                pbVar8 = pbVar8 + 1;
                if (uVar7 == 0) {
                  return uVar11;
                }
                bVar4 = *pbVar10;
                pbVar10 = pbVar10 + 1;
              } while (bVar4 == *pbVar8);
            }
          }
        }
        uVar11 = uVar11 + 1;
        pbVar13 = pbVar13 + 0x88;
      } while (uVar11 != uVar3);
    }
  }
  return 0xffffffff;
}




void FUN_1003208d4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100156b10(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x88;
  FUN_10003330c(lVar4 + -0x88,param_2);
  thunk_FUN_1004e439c(lVar4 + -0x70,param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar4 + -0x50) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar4 + -0x58) = uVar6;
  *(undefined8 *)(lVar4 + -0x60) = uVar5;
  FUN_10003330c(lVar4 + -0x48,param_2 + 0x40);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x58);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x70);
  return;
}




void FUN_100320998(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar1 = FUN_10015d3ec();
    FUN_100165aa0(uVar1,param_1 + 0x78);
    return;
  }
  return;
}




void FUN_1003209d0(undefined8 param_1,long param_2)

{
  switch(*(undefined4 *)(param_2 + 0x108)) {
  case 0:
    FUN_10032057c();
    return;
  case 1:
    FUN_100320b94();
    return;
  case 2:
    FUN_100320a08();
    return;
  case 3:
    FUN_100320cb8();
    return;
  default:
    return;
  }
}




void FUN_100320a08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_e8 [8];
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined1 local_af;
  undefined8 local_ac;
  undefined4 local_a4;
  void *local_98;
  undefined8 uStack_90;
  long lStack_88;
  void *local_80;
  undefined8 local_78;
  long lStack_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  FUN_100156c78(param_1 + 0x78,0);
  if (*(int *)(param_2 + 0x30) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x38);
      local_d8 = (void *)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_1004e313c(&local_c0);
      local_58 = 0;
      lStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      local_68 = (void *)0x0;
      uStack_90 = 0;
      local_98 = (void *)0x0;
      local_80 = (void *)0x0;
      lStack_88 = 0;
      lVar1 = lVar1 + lVar2;
      local_af = *(undefined1 *)(lVar1 + 0x18);
      FUN_1004e3170(auStack_e8,lVar1);
      FUN_1000153b4(&local_c0,auStack_e8);
      if (local_e0 != (void *)0x0) {
        operator_delete__(local_e0);
      }
      local_a4 = *(undefined4 *)(lVar1 + 0x1c);
      local_ac = NEON_rev64(*(undefined8 *)(lVar1 + 0x20),4);
      FUN_1003208d4(param_1 + 0x78,&local_d8);
      if (local_58 < 0) {
        operator_delete(local_68);
      }
      if (lStack_70 < 0) {
        operator_delete(local_80);
      }
      if (lStack_88 < 0) {
        operator_delete(local_98);
      }
      if (local_b8 != (void *)0x0) {
        operator_delete__(local_b8);
        local_c0 = 0;
        local_b8 = (void *)0x0;
      }
      if (local_c8 < 0) {
        operator_delete(local_d8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (uVar3 < *(uint *)(param_2 + 0x30));
  }
  FUN_100320200(param_1,1);
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
  }
  return;
}




void FUN_100320b94(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  long lVar12;
  
  bVar4 = *(byte *)(param_2 + 0x107);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 0xf8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(param_1 + 0x9f);
  sVar2 = *(size_t *)(param_1 + 0x90);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_2 + 0xf0);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_2 + 0xf0);
    }
    pbVar11 = *(byte **)(param_1 + 0x88);
    if (-1 < (char)bVar5) {
      pbVar11 = (byte *)(param_1 + 0x88);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar11 != ((uint)pvVar10 & 0xff)) {
        return;
      }
      pbVar9 = (byte *)(param_2 + 0xf1);
      while( true ) {
        uVar8 = uVar8 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar8 == 0) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if (bVar4 != *pbVar11) {
          return;
        }
      }
    }
    uVar7 = FUN_1003207d0(param_1,param_2 + 0xd8);
    if (-1 < (int)uVar7) {
      *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)uVar7 * 0x88 + 0x2c) = 3;
    }
    FUN_100320998(param_1);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar12 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar12 + 8) == (code *)0x0) {
          (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x10));
        }
        else {
          (**(code **)(lVar12 + 8))();
        }
        lVar12 = lVar12 + 0x20;
      } while (lVar12 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
  }
  return;
}




void FUN_100320cb8(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  void *pvVar9;
  byte *pbVar10;
  long lVar11;
  
  bVar4 = *(byte *)(param_2 + 0x107);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 0xf8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(param_1 + 0x9f);
  sVar2 = *(size_t *)(param_1 + 0x90);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar9 = *(void **)(param_2 + 0xf0);
    puVar3 = pvVar9;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_2 + 0xf0);
    }
    pbVar7 = *(byte **)(param_1 + 0x88);
    if (-1 < (char)bVar5) {
      pbVar7 = (byte *)(param_1 + 0x88);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar7,sVar1), iVar6 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar7 != ((uint)pvVar9 & 0xff)) {
        return;
      }
      pbVar10 = (byte *)(param_2 + 0xf1);
      while( true ) {
        uVar8 = uVar8 - 1;
        pbVar7 = pbVar7 + 1;
        if (uVar8 == 0) break;
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (bVar4 != *pbVar7) {
          return;
        }
      }
    }
    FUN_100320200(param_1,0);
    FUN_100156c78(param_1 + 0x78,0);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar11 = *(long *)(param_1 + 0x48);
      do {
        if (*(code **)(lVar11 + 8) == (code *)0x0) {
          (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x10));
        }
        else {
          (**(code **)(lVar11 + 8))();
        }
        lVar11 = lVar11 + 0x20;
      } while (lVar11 != *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
    }
  }
  return;
}




void FUN_100320dc8(long param_1)

{
  FUN_1003209d0(param_1 + -0x18);
  return;
}




void FUN_100320dd0(undefined8 param_1,long param_2)

{
  undefined1 auStack_20 [8];
  void *local_18;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_1004e3120(auStack_20,"The party member has been removed.");
    FUN_1001e55b0(0x3fc00000,auStack_20,0,1);
    if (local_18 != (void *)0x0) {
      operator_delete__(local_18);
    }
  }
  return;
}




void thunk_FUN_100320dd0(undefined8 param_1,long param_2)

{
  undefined1 auStack_20 [8];
  void *pvStack_18;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_1004e3120(auStack_20,"The party member has been removed.");
    FUN_1001e55b0(0x3fc00000,auStack_20,0,1);
    if (pvStack_18 != (void *)0x0) {
      operator_delete__(pvStack_18);
    }
  }
  return;
}




void FUN_100320e24(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_100131560();
  if (iVar3 == 0) {
    FUN_10015d3ec();
    dVar8 = (double)FUN_1001664b0();
    uVar4 = FUN_10015d3ec();
    if (dVar8 <= 0.0) {
      FUN_100165b98(uVar4,param_3);
      FUN_100320200(param_1,1);
      return;
    }
    FUN_100165c34();
    FUN_100320200(param_1,0);
    uVar4 = FUN_1004e0150("PARTY_ACCEPT_BANNED_MSG",0);
    thunk_FUN_1004e439c(auStack_40,uVar4);
    uVar4 = FUN_1004e0150("MAIN_BANNED_TITLE",0);
    FUN_10015d3ec();
    dVar8 = (double)FUN_1001664b0();
    FUN_1000f1e20(auStack_50,auStack_40,(long)dVar8,0);
    uVar5 = FUN_1004e0150("MAIN_BANNED_ACCEPT",0);
    FUN_1001e3090(uVar4,auStack_50,uVar5,param_1,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  else if (*(char *)(param_1 + 0xa0) != '\0') {
    if (-1 < (int)param_3) {
      iVar2 = (int)param_3 + -1;
      lVar7 = *(long *)(param_1 + 0x80) + (param_3 & 0xffffffff) * 0x88;
      *(undefined4 *)(lVar7 + 0x2c) = 1;
      iVar3 = *(int *)(param_1 + 0xa8);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = iVar2 / iVar3;
      }
      *(int *)(lVar7 + 0x34) = iVar2 - iVar1 * iVar3;
      uVar6 = (uint)(*(int *)(param_1 + 0xa4) == 0);
      *(uint *)(lVar7 + 0x30) = uVar6;
      *(uint *)(param_1 + 0xa4) = uVar6;
    }
    FUN_100320998(param_1);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar7 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar7 + 8) == (code *)0x0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
        }
        else {
          (**(code **)(lVar7 + 8))();
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
  }
  return;
}




void FUN_100320fc8(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    if (-1 < (int)param_3) {
      *(undefined4 *)(*(long *)(param_1 + 0x80) + (param_3 & 0xffffffff) * 0x88 + 0x2c) = 2;
    }
    return;
  }
  uVar2 = FUN_10015d3ec();
  FUN_100165c34(uVar2,param_3);
  return;
}




void FUN_100321020(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  
  uVar1 = FUN_1003207d0();
  if ((-1 < (int)uVar1) &&
     (piVar3 = (int *)(*(long *)(param_1 + 0x80) + (ulong)uVar1 * 0x88 + 0x2c), *piVar3 != 2)) {
    *piVar3 = 2;
    uVar2 = FUN_10015d3ec();
    FUN_100165eb0(uVar2,*(long *)(param_1 + 0x80) + (ulong)uVar1 * 0x88,param_1 + 0x88);
    lVar4 = *(long *)(param_1 + 0x80) + (ulong)uVar1 * 0x88;
    FUN_1003212a0(param_1 + 0x78,lVar4,lVar4 + 0x88);
    FUN_100320998(param_1);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar4 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar4 + 8) == (code *)0x0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x10));
        }
        else {
          (**(code **)(lVar4 + 8))();
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
  }
  return;
}




void FUN_1003210e4(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = *(char *)(param_1 + 0xa0);
  uVar2 = FUN_10015d3ec();
  if (cVar1 == '\0') {
    FUN_100165afc(uVar2,DAT_101d23880 + 0x88);
  }
  else {
    FUN_1001669b8(uVar2,param_1 + 0x88,param_1 + 0x78);
  }
  FUN_100156c78(param_1 + 0x78,0);
  FUN_100320200(param_1,0);
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
  }
  return;
}




long FUN_1003211bc(long param_1)

{
  return param_1 + 0x78;
}




void FUN_1003211c4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}




void thunk_FUN_100321204(void)

{
  FUN_100321204();
  return;
}




void FUN_1003211d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100321204();
  operator_delete(pvVar1);
  return;
}




void FUN_1003211e4(long param_1)

{
  FUN_100321204(param_1 + -0x18);
  return;
}




void FUN_1003211ec(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100321204(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_100321204(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100321204_101492208;
  param_1[3] = &PTR_FUN_101492278;
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  FUN_100156c78(param_1 + 0xf,1);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 3);
  FUN_1004f0a9c(param_1);
  return;
}




void FUN_1003212a0(uint *param_1,string *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  string *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar2 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  uVar3 = (ulong)*param_1;
  if (*param_1 != iVar2 * -0xf0f0f0f) {
    lVar4 = *(long *)(param_1 + 2);
    psVar6 = (string *)(lVar4 + uVar3 * 0x88);
    lVar1 = (long)psVar6 - (long)param_3;
    psVar5 = param_2;
    if (lVar1 != 0) {
      do {
        std::string::operator=(psVar5,param_3);
        FUN_1000153b4(psVar5 + 0x18,param_3 + 0x18);
        uVar8 = *(undefined8 *)(param_3 + 0x30);
        uVar7 = *(undefined8 *)(param_3 + 0x28);
        *(undefined8 *)(psVar5 + 0x38) = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 *)(psVar5 + 0x30) = uVar8;
        *(undefined8 *)(psVar5 + 0x28) = uVar7;
        std::string::operator=(psVar5 + 0x40,param_3 + 0x40);
        std::string::operator=(psVar5 + 0x58,param_3 + 0x58);
        std::string::operator=(psVar5 + 0x70,param_3 + 0x70);
        param_3 = param_3 + 0x88;
        psVar5 = psVar5 + 0x88;
      } while (param_3 != psVar6);
      uVar3 = (ulong)*param_1;
      lVar4 = *(long *)(param_1 + 2);
    }
    param_2 = param_2 + ((lVar1 >> 3) * -0xf0f0f0f0f0f0f0f & 0xffffffffU) * 0x88;
    psVar5 = (string *)(lVar4 + uVar3 * 0x88);
    if (param_2 != psVar5) {
      do {
        if ((char)param_2[0x87] < '\0') {
          operator_delete(*(void **)(param_2 + 0x70));
        }
        if ((char)param_2[0x6f] < '\0') {
          operator_delete(*(void **)(param_2 + 0x58));
        }
        if ((char)param_2[0x57] < '\0') {
          operator_delete(*(void **)(param_2 + 0x40));
        }
        if (*(void **)(param_2 + 0x20) != (void *)0x0) {
          operator_delete__(*(void **)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x18) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        if ((char)param_2[0x17] < '\0') {
          operator_delete(*(void **)param_2);
        }
        param_2 = param_2 + 0x88;
      } while (param_2 != psVar5);
      uVar3 = (ulong)*param_1;
    }
    *param_1 = (int)uVar3 + iVar2 * 0xf0f0f0f;
    return;
  }
  FUN_100156c78(param_1,1);
  return;
}




void FUN_100321428(int *param_1,int *param_2)

{
  if (*param_2 != 0x11) {
    *param_1 = *param_2;
  }
  if (param_2[1] != 5) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] != 5) {
    param_1[2] = param_2[2];
  }
  if (param_2[3] != 2) {
    param_1[3] = param_2[3];
  }
  return;
}




undefined8 *
FUN_10032146c(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004e313c(param_1 + 8);
  FUN_1004e313c(param_1 + 10);
  FUN_1004e313c(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)param_1 = param_2;
  if (param_3 != (char *)0x0) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
    *(uint *)(param_1 + 5) = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}




undefined8 *
thunk_FUN_10032146c(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004e313c(param_1 + 8);
  FUN_1004e313c(param_1 + 10);
  FUN_1004e313c(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)param_1 = param_2;
  if (param_3 != (char *)0x0) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
    *(uint *)(param_1 + 5) = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}




undefined8 *
FUN_100321544(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004e313c(param_1 + 8);
  FUN_1004e313c(param_1 + 10);
  FUN_1004e313c(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)((long)param_1 + 4) = param_2;
  if (param_3 != (char *)0x0) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
    *(uint *)(param_1 + 5) = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}




undefined8 *
thunk_FUN_100321544(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004e313c(param_1 + 8);
  FUN_1004e313c(param_1 + 10);
  FUN_1004e313c(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)((long)param_1 + 4) = param_2;
  if (param_3 != (char *)0x0) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
    *(uint *)(param_1 + 5) = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}




undefined8 *
FUN_10032161c(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004e313c(param_1 + 8);
  FUN_1004e313c(param_1 + 10);
  FUN_1004e313c(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 1) = param_2;
  if (param_3 != (char *)0x0) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
    *(uint *)(param_1 + 5) = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}




undefined8 *
thunk_FUN_10032161c(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x200000005;
  *param_1 = 0x500000011;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004e313c(param_1 + 8);
  FUN_1004e313c(param_1 + 10);
  FUN_1004e313c(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  *(undefined4 *)((long)param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 1) = param_2;
  if (param_3 != (char *)0x0) {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
    *(uint *)(param_1 + 5) = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}




uint * FUN_1003216f4(uint *param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_3;
  FUN_1004e313c(param_1 + 8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  return param_1;
}




uint * thunk_FUN_1003216f4(uint *param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_3;
  FUN_1004e313c(param_1 + 8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  return param_1;
}




void FUN_100321770(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (long *)register0x00000008;
    do {
      if (*(char *)(param_2 + 0x9d) == '\0') {
        FUN_1003217c4(param_1 + 8);
      }
      param_2 = *plVar1;
      plVar1 = plVar1 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_1003217c4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100321b6c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa8;
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + -0xa0) = param_2[1];
  *(undefined8 *)(lVar4 + -0xa8) = uVar5;
  FUN_10003330c(lVar4 + -0x98,param_2 + 2);
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  *(undefined4 *)(lVar4 + -0x70) = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)(lVar4 + -0x78) = uVar6;
  *(undefined8 *)(lVar4 + -0x80) = uVar5;
  thunk_FUN_1004e439c(lVar4 + -0x68,param_2 + 8);
  thunk_FUN_1004e439c(lVar4 + -0x58,param_2 + 10);
  thunk_FUN_1004e439c(lVar4 + -0x48,param_2 + 0xc);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0xe);
  uVar6 = param_2[0x12];
  uVar5 = param_2[0x11];
  uVar7 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)(lVar4 + -0xf) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)(lVar4 + -0x17) = uVar7;
  *(undefined8 *)(lVar4 + -0x18) = uVar6;
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  return;
}




void FUN_1003218a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




undefined8 FUN_1003218ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




int * FUN_1003218b4(uint *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    piVar1 = *(int **)(param_1 + 2);
    lVar2 = (ulong)*param_1 * 0x38;
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 0xe;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  return (int *)0x0;
}




void thunk_FUN_1003218ec(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100321ce8(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x38;
  *(undefined4 *)(lVar5 + -0x38) = *param_2;
  FUN_100321df8(lVar5 + -0x30,param_2 + 2);
  *(undefined4 *)(lVar5 + -0x20) = param_2[6];
  thunk_FUN_1004e439c(lVar5 + -0x18,param_2 + 8);
  uVar3 = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(lVar5 + -6) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_1003218ec(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100321ce8(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x38;
  *(undefined4 *)(lVar5 + -0x38) = *param_2;
  FUN_100321df8(lVar5 + -0x30,param_2 + 2);
  *(undefined4 *)(lVar5 + -0x20) = param_2[6];
  thunk_FUN_1004e439c(lVar5 + -0x18,param_2 + 8);
  uVar3 = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(lVar5 + -6) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_1003219a0(undefined8 param_1)

{
  FUN_100202c30(param_1,0);
  return;
}




uint FUN_1003219a8(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  
  uVar2 = *(int *)(param_1 + 0x34) - 2;
  if (uVar2 < 3) {
    iVar4 = *(int *)(&DAT_101158fd0 + (long)(int)uVar2 * 4);
  }
  else {
    iVar4 = 1;
  }
  lVar5 = FUN_10031d43c();
  if (lVar5 == 0) {
    iVar3 = -1;
  }
  else {
    uVar6 = FUN_10031d43c();
    plVar1 = (long *)*(long *)(param_1 + 0x70);
    if (-1 < *(char *)(param_1 + 0x87)) {
      plVar1 = (long *)(param_1 + 0x70);
    }
    iVar3 = FUN_10031e194(uVar6,plVar1);
    if (iVar3 == 0) {
      return 4;
    }
  }
  if ((*(char *)(param_1 + 0x9c) == '\0') && (iVar3 != 1)) {
    return 4;
  }
  switch(*(uint *)(param_1 + 0x34)) {
  case 0:
    return *(uint *)(param_1 + 0x34);
  case 1:
  case 2:
  case 3:
  case 4:
    lVar5 = FUN_10016c2f0();
    if (*(int *)(lVar5 + 0x38) < 1) {
      return 0;
    }
    lVar5 = FUN_10016c2f0();
    if (*(int *)(lVar5 + 0x38) == iVar4) {
      return 0;
    }
    lVar5 = FUN_10016c2f0();
    if (iVar4 < *(int *)(lVar5 + 0x38)) {
      return 2;
    }
    lVar5 = FUN_10016c2f0();
    if (*(int *)(lVar5 + 0x38) < iVar4) {
      return 1;
    }
  case 5:
  case 6:
    uVar7 = FUN_100131560();
    if (((uVar7 & 1) == 0) && (lVar5 = FUN_10015d3ec(), *(uint *)(lVar5 + 0x55d0) < 5)) {
      fVar8 = (float)FUN_1001306bc();
      return (uint)((*(int *)(param_1 + 0x34) != 5 || fVar8 < 1.0) &&
                   (*(int *)(param_1 + 0x34) != 6 || fVar8 < 5.0));
    }
    return 0;
  case 7:
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    FUN_100327e00();
    iVar4 = FUN_100327efc();
    break;
  case 8:
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    FUN_100327e00();
    iVar4 = FUN_100327f04();
    break;
  case 9:
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    lVar5 = FUN_10015d3ec();
    return (uint)(*(uint *)(lVar5 + 0x55d0) < 5);
  default:
    goto switchD_100321a44_caseD_0;
  }
  if (iVar4 != 0) {
    lVar5 = FUN_10015d3ec();
    if (*(int *)(lVar5 + 0x55c8) < 1) {
      return 0;
    }
    return 3;
  }
switchD_100321a44_caseD_0:
  return 1;
}




void FUN_100321ce8(uint *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x38);
    pvVar5 = *(void **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (long)pvVar4 + 0x20;
      lVar8 = (long)pvVar5 + 0x20;
      do {
        *(undefined4 *)(lVar6 + -0x20) = *(undefined4 *)(lVar8 + -0x20);
        FUN_100321df8(lVar6 + -0x18,lVar8 + -0x18);
        *(undefined4 *)(lVar6 + -8) = *(undefined4 *)(lVar8 + -8);
        thunk_FUN_1004e439c(lVar6,lVar8);
        uVar3 = *(undefined2 *)(lVar8 + 0x10);
        *(undefined1 *)(lVar6 + 0x12) = *(undefined1 *)(lVar8 + 0x12);
        *(undefined2 *)(lVar6 + 0x10) = uVar3;
        lVar6 = lVar6 + 0x38;
        pvVar1 = (void *)(lVar8 + 0x18);
        lVar8 = lVar8 + 0x38;
      } while (pvVar1 != (void *)((long)pvVar5 + (ulong)uVar2 * 0x38));
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x38;
        puVar7 = (undefined8 *)((long)pvVar5 + 0x28);
        do {
          if ((void *)*puVar7 != (void *)0x0) {
            operator_delete__((void *)*puVar7);
            puVar7[-1] = 0;
            *puVar7 = 0;
          }
          FUN_100202cb8(puVar7 + -4,1);
          puVar7 = puVar7 + 7;
          lVar6 = lVar6 + -0x38;
        } while (lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




uint * FUN_100321df8(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100321b6c(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      puVar2 = (undefined8 *)(lVar6 + lVar5);
      uVar8 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
      FUN_10003330c(puVar1 + 2,puVar2 + 2);
      uVar9 = puVar2[6];
      uVar8 = puVar2[5];
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar2 + 7);
      puVar1[6] = uVar9;
      puVar1[5] = uVar8;
      thunk_FUN_1004e439c(puVar1 + 8,puVar2 + 8);
      thunk_FUN_1004e439c(puVar1 + 10,puVar2 + 10);
      thunk_FUN_1004e439c(puVar1 + 0xc,puVar2 + 0xc);
      FUN_10003330c(puVar1 + 0xe,puVar2 + 0xe);
      uVar9 = puVar2[0x12];
      uVar8 = puVar2[0x11];
      uVar10 = *(undefined8 *)((long)puVar2 + 0x91);
      *(undefined8 *)((long)puVar1 + 0x99) = *(undefined8 *)((long)puVar2 + 0x99);
      *(undefined8 *)((long)puVar1 + 0x91) = uVar10;
      puVar1[0x12] = uVar9;
      puVar1[0x11] = uVar8;
      lVar5 = lVar5 + 0xa8;
    } while (puVar2 + 0x15 != (undefined8 *)(lVar6 + (ulong)uVar3 * 0xa8));
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100321ee0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  void *local_10b0 [2];
  char local_1099;
  undefined1 auStack_1098 [16];
  void *local_1088;
  char local_1071;
  undefined4 local_1064;
  undefined8 local_1058;
  void *local_1050;
  undefined8 local_1048;
  void *local_1040;
  undefined8 local_1038;
  void *local_1030;
  void *local_1028;
  char local_1011;
  undefined1 auStack_ff0 [16];
  void *local_fe0;
  char local_fc9;
  undefined4 local_fbc;
  undefined8 local_fb0;
  void *local_fa8;
  undefined8 local_fa0;
  void *local_f98;
  undefined8 local_f90;
  void *local_f88;
  void *local_f80;
  char local_f69;
  undefined1 auStack_f48 [16];
  void *local_f38;
  char local_f21;
  undefined4 local_f14;
  undefined8 local_f08;
  void *local_f00;
  undefined8 local_ef8;
  void *local_ef0;
  undefined8 local_ee8;
  void *local_ee0;
  void *local_ed8;
  char local_ec1;
  undefined1 auStack_ea0 [16];
  void *local_e90;
  char local_e79;
  undefined4 local_e6c;
  undefined8 local_e60;
  void *local_e58;
  undefined8 local_e50;
  void *local_e48;
  undefined8 local_e40;
  void *local_e38;
  void *local_e30;
  char local_e19;
  undefined1 auStack_df8 [16];
  void *local_de8;
  char local_dd1;
  undefined8 local_db8;
  void *local_db0;
  undefined8 local_da8;
  void *local_da0;
  undefined8 local_d98;
  void *local_d90;
  void *local_d88;
  char local_d71;
  undefined1 auStack_d50 [16];
  void *local_d40;
  char local_d29;
  undefined8 local_d10;
  void *local_d08;
  undefined8 local_d00;
  void *local_cf8;
  undefined8 local_cf0;
  void *local_ce8;
  void *local_ce0;
  char local_cc9;
  undefined4 local_cc8;
  char *local_cc0;
  undefined4 local_cb8;
  undefined1 auStack_ca8 [16];
  void *local_c98;
  char local_c81;
  undefined8 local_c68;
  void *local_c60;
  undefined8 local_c58;
  void *local_c50;
  undefined8 local_c48;
  void *local_c40;
  void *local_c38;
  char local_c21;
  undefined4 local_c20;
  char *local_c18;
  undefined4 local_c10;
  undefined1 auStack_c00 [16];
  void *local_bf0;
  char local_bd9;
  undefined8 local_bc0;
  void *local_bb8;
  undefined8 local_bb0;
  void *local_ba8;
  undefined8 local_ba0;
  void *local_b98;
  void *local_b90;
  char local_b79;
  undefined4 local_b78;
  char *local_b70;
  undefined4 local_b68;
  undefined1 auStack_b58 [16];
  void *local_b48;
  char local_b31;
  undefined8 local_b18;
  void *local_b10;
  undefined8 local_b08;
  void *local_b00;
  undefined8 local_af8;
  void *local_af0;
  void *local_ae8;
  char local_ad1;
  undefined4 local_ad0;
  char *local_ac8;
  undefined4 local_ac0;
  undefined1 local_aba;
  undefined1 auStack_ab0 [16];
  void *local_aa0;
  char local_a89;
  undefined4 local_a7c;
  undefined8 local_a70;
  void *local_a68;
  undefined8 local_a60;
  void *local_a58;
  undefined8 local_a50;
  void *local_a48;
  void *local_a40;
  char local_a29;
  undefined4 local_a28;
  char *local_a20;
  undefined4 local_a18;
  undefined1 local_a12;
  undefined1 auStack_a08 [16];
  void *local_9f8;
  char local_9e1;
  undefined8 local_9c8;
  void *local_9c0;
  undefined8 local_9b8;
  void *local_9b0;
  undefined8 local_9a8;
  void *local_9a0;
  void *local_998;
  char local_981;
  undefined4 local_980;
  char *local_978;
  undefined1 local_968;
  undefined1 auStack_960 [16];
  void *local_950;
  char local_939;
  undefined8 local_920;
  void *local_918;
  undefined8 local_910;
  void *local_908;
  undefined8 local_900;
  void *local_8f8;
  void *local_8f0;
  char local_8d9;
  undefined4 local_8d8;
  char *local_8d0;
  undefined1 local_8c0;
  undefined1 auStack_8b8 [16];
  void *local_8a8;
  char local_891;
  undefined8 local_878;
  void *local_870;
  undefined8 local_868;
  void *local_860;
  undefined8 local_858;
  void *local_850;
  void *local_848;
  char local_831;
  undefined4 local_830;
  char *local_828;
  undefined1 local_818;
  undefined1 auStack_810 [16];
  void *local_800;
  char local_7e9;
  undefined4 local_7dc;
  undefined8 local_7d0;
  void *local_7c8;
  undefined8 local_7c0;
  void *local_7b8;
  undefined8 local_7b0;
  void *local_7a8;
  void *local_7a0;
  char local_789;
  undefined4 local_788;
  char *local_780;
  undefined4 local_778;
  undefined1 local_770;
  undefined1 auStack_768 [16];
  void *local_758;
  char local_741;
  undefined4 local_734;
  undefined8 local_728;
  void *local_720;
  undefined8 local_718;
  void *local_710;
  undefined8 local_708;
  void *local_700;
  void *local_6f8 [2];
  char local_6e1;
  undefined4 local_6e0;
  char *local_6d8;
  undefined4 local_6d0;
  undefined1 local_6cc;
  undefined1 auStack_6c0 [16];
  void *local_6b0;
  char local_699;
  undefined4 local_68c;
  undefined8 local_680;
  void *local_678;
  undefined8 local_670;
  void *local_668;
  undefined8 local_660;
  void *local_658;
  void *local_650 [2];
  char local_639;
  undefined4 local_638;
  char *local_630;
  undefined4 local_628;
  undefined1 local_624;
  undefined1 auStack_618 [16];
  void *local_608;
  char local_5f1;
  undefined4 local_5e4;
  undefined8 local_5d8;
  void *local_5d0;
  undefined8 local_5c8;
  void *local_5c0;
  undefined8 local_5b8;
  void *local_5b0;
  void *local_5a8 [2];
  char local_591;
  undefined4 local_590;
  char *local_588;
  undefined4 local_580;
  undefined1 local_57c;
  undefined1 auStack_570 [16];
  void *local_560;
  char local_549;
  undefined4 local_53c;
  undefined8 local_530;
  void *local_528;
  undefined8 local_520;
  void *local_518;
  undefined8 local_510;
  void *local_508;
  void *local_500 [2];
  char local_4e9;
  undefined4 local_4e8;
  char *local_4e0;
  undefined4 local_4d8;
  undefined1 local_4d4;
  undefined1 auStack_4c8 [16];
  void *local_4b8;
  char local_4a1;
  undefined4 local_494;
  undefined8 local_488;
  void *local_480;
  undefined8 local_478;
  void *local_470;
  undefined8 local_468;
  void *local_460;
  void *local_458 [2];
  char local_441;
  undefined4 local_440;
  char *local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined1 auStack_420 [16];
  void *local_410;
  char local_3f9;
  undefined4 local_3ec;
  undefined8 local_3e0;
  void *local_3d8;
  undefined8 local_3d0;
  void *local_3c8;
  undefined8 local_3c0;
  void *local_3b8;
  void *local_3b0 [2];
  char local_399;
  undefined4 local_398;
  char *local_390;
  undefined4 local_388;
  undefined1 auStack_378 [16];
  void *local_368;
  char local_351;
  undefined8 local_338;
  void *local_330;
  undefined8 local_328;
  void *local_320;
  undefined8 local_318;
  void *local_310;
  void *local_308 [2];
  char local_2f1;
  undefined4 local_2f0;
  char *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined1 auStack_2d0 [16];
  void *local_2c0;
  char local_2a9;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  void *local_260 [2];
  char local_249;
  undefined4 local_248;
  char *local_240;
  undefined4 local_238;
  undefined1 auStack_228 [16];
  void *local_218;
  char local_201;
  undefined8 local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  void *local_1b8;
  char local_1a1;
  undefined4 local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined1 local_18a;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  void *local_158;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  void *local_120;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  void *local_e8;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  void *local_b0;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  void *local_78;
  undefined1 local_6f;
  
  thunk_FUN_1003216f4(auStack_a0,"gameplayMode",0);
  thunk_FUN_1003216f4(auStack_d8,"casualOrRankedStep",0);
  thunk_FUN_1003216f4(auStack_110,"botTypeStep",0);
  thunk_FUN_1003216f4(auStack_148,"botdifficultyStep",1);
  thunk_FUN_1003216f4(auStack_180,"tutorialChoiceStep",1);
  thunk_FUN_10032146c(auStack_228,0,"casualOrRankedStep",0xffffffff,0);
  thunk_FUN_10032146c(auStack_2d0,3,0,0xffffffff,4);
  thunk_FUN_10032146c(auStack_378,4,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_420,6,0,0xffffffff,5);
  thunk_FUN_10032146c(auStack_4c8,5,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_570,8,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_618,7,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_6c0,9,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_768,1,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_810,2,0,0xffffffff,0xffffffff);
  thunk_FUN_100321544(auStack_8b8,3,"botTypeStep",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_960,10,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_a08,0x11,PTR_s_tutorialLevelGwen_101854b08,0xffffffff,0xffffffff);
  thunk_FUN_100321544(auStack_ab0,1,0,0xffffffff,3);
  thunk_FUN_100321544(auStack_b58,0,0,0xffffffff,0);
  thunk_FUN_10032146c(auStack_c00,0,"botdifficultyStep",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_ca8,3,"botdifficultyStep",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_d50,2,"botdifficultyStep",0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_df8,0,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_ea0,1,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_f48,2,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_ff0,3,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_1098,4,0,0xffffffff,0xffffffff);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1000153b4(&local_1e8,uVar2);
  local_18a = 1;
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_1d8,uVar2);
  local_1a0 = 0;
  local_198 = "playmode_5v5_casual";
  local_190 = 0x19;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_CASUAL_TITLE",0);
  FUN_1000153b4(&local_b18,uVar2);
  local_aba = 1;
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_b08,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_b08,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_b08,uVar2);
  local_ad0 = 0;
  local_ac8 = "playmode_5v5_casual";
  local_ac0 = 0x19;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_RANKED_TITLE",0);
  FUN_1000153b4(&local_a70,uVar2);
  local_a12 = 1;
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_a60,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_a60,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_a60,uVar2);
  local_a20 = "playmode_5v5_ranked";
  local_a18 = 0x19;
  local_a28 = 0;
  local_a7c = 7;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_TITLE",0);
  FUN_1000153b4(&local_290,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_280,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_280,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_280,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_280,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_TALENTS_MODE_LABEL",0);
  FUN_1004e372c(&local_280,uVar2);
  local_248 = 0;
  local_240 = "playmode_blitz";
  local_238 = 5;
  FUN_10001549c(local_10b0,"blitz_ranked");
  std::string::operator=((string *)local_260,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_REVAMP_TITLE",0);
  FUN_1000153b4(&local_338,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_328,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_328,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_328,uVar2);
  local_2f0 = 0;
  local_2e8 = "playmode_blitzreloaded";
  local_2e0 = 2;
  FUN_10001549c(local_10b0,"blitz_revamp");
  std::string::operator=((string *)local_308,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_2dc = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_ARAL_TITLE",0);
  FUN_1000153b4(&local_3e0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_TALENTS_MODE_LABEL",0);
  FUN_1004e372c(&local_3d0,uVar2);
  local_398 = 0;
  local_390 = "playmode_aral";
  local_388 = 10;
  FUN_10001549c(local_10b0,"aral_casual");
  std::string::operator=((string *)local_3b0,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_3ec = 9;
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1000153b4(&local_7d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_7c0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_7c0,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_RANKED_TITLE",0);
  FUN_1004e372c(&local_7c0,uVar2);
  local_780 = "playmode_3v3";
  local_778 = 0x14;
  local_788 = 0;
  local_7dc = 8;
  local_770 = 1;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_SOLOBOTS_TITLE",0);
  FUN_1000153b4(&local_878,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_SOLOBOTS_SUBTEXT",0);
  FUN_1000153b4(&local_868,uVar2);
  local_830 = 0;
  local_828 = "playmode_solobots";
  local_818 = 1;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_PRACTICE_TITLE",0);
  FUN_1000153b4(&local_920,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_PRACTICE_SUBTEXT",0);
  FUN_1000153b4(&local_910,uVar2);
  local_8d8 = 0;
  local_8d0 = "playmode_practice";
  local_8c0 = 1;
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1000153b4(&local_bc0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_bb0,uVar2);
  local_b78 = 0;
  local_b70 = "playmode_5v5_ranked";
  local_b68 = 0x19;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_TITLE",0);
  FUN_1000153b4(&local_c68,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_c58,uVar2);
  local_c20 = 0;
  local_c18 = "playmode_blitz";
  local_c10 = 5;
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1000153b4(&local_d10,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_d00,uVar2);
  local_cc8 = 0;
  local_cc0 = "playmode_3v3";
  local_cb8 = 0x14;
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1000153b4(&local_728,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_718,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_718,uVar2);
  uVar2 = FUN_1004e0150("MENU_PLAY_MENU_MODE_STANDARD_CASUAL_OPTION_TITLE",0);
  FUN_1004e372c(&local_718,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_708,uVar2);
  local_6e0 = 0;
  local_734 = 9;
  local_6d8 = "playmode_3v3";
  local_6d0 = 0x14;
  FUN_10001549c(local_10b0,"casual_3v3");
  std::string::operator=((string *)local_6f8,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_6cc = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_RUMBLE_TITLE",0);
  FUN_1000153b4(&local_488,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_478,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_478,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_478,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_468,uVar2);
  local_440 = 0;
  local_494 = 9;
  local_438 = "playmode_rumble";
  local_430 = 10;
  FUN_10001549c(local_10b0,"rumble");
  std::string::operator=((string *)local_458,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_42c = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_ONE_FOR_ALL_TITLE",0);
  FUN_1000153b4(&local_530,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_520,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_520,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_520,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_510,uVar2);
  local_4e8 = 0;
  local_4e0 = "playmode_oneforall";
  local_4d8 = 0x14;
  FUN_10001549c(local_10b0,"one_for_all");
  std::string::operator=((string *)local_500,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_53c = 9;
  local_4d4 = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_PURE_BLITZ_TITLE",0);
  FUN_1000153b4(&local_680,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_670,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_670,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_670,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_660,uVar2);
  local_638 = 0;
  local_630 = "playmode_blitz";
  local_628 = 5;
  FUN_10001549c(local_10b0,"blitz_pure");
  std::string::operator=((string *)local_650,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_68c = 9;
  local_624 = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_ARAM_TITLE",0);
  FUN_1000153b4(&local_5d8,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_5c8,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_5c8,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_5c8,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_5b8,uVar2);
  local_590 = 0;
  local_588 = "playmode_aram";
  local_580 = 0xf;
  FUN_10001549c(local_10b0,"aram");
  std::string::operator=((string *)local_5a8,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_5e4 = 9;
  local_57c = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_TUTORIAL_TITLE",0);
  FUN_1000153b4(&local_9c8,uVar2);
  local_980 = 0;
  local_978 = "PlayMode_Tutorial";
  local_968 = 1;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_VERY_EASY_ITLE",0);
  FUN_1000153b4(&local_db8,uVar2);
  FUN_1000153b4(&local_da8,&DAT_101d91650);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_EASY_ITLE",0);
  FUN_1000153b4(&local_e60,uVar2);
  FUN_1000153b4(&local_e50,&DAT_101d91650);
  local_e6c = 5;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_MEDIUM_TITLE",0);
  FUN_1000153b4(&local_f08,uVar2);
  FUN_1000153b4(&local_ef8,&DAT_101d91650);
  local_f14 = 5;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_HARD_TITLE",0);
  FUN_1000153b4(&local_fb0,uVar2);
  FUN_1000153b4(&local_fa0,&DAT_101d91650);
  local_fbc = 6;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_VERY_HARD_TITLE",0);
  FUN_1000153b4(&local_1058,uVar2);
  FUN_1000153b4(&local_1048,&DAT_101d91650);
  local_1064 = 6;
  iVar1 = FUN_10012709c();
  if (iVar1 == 0) {
    puVar3 = auStack_378;
  }
  else {
    puVar3 = auStack_228;
  }
  FUN_100321770(auStack_a0,puVar3);
  FUN_100321770(auStack_a0,auStack_4c8);
  FUN_100321770(auStack_a0,auStack_810);
  FUN_100321770(auStack_d8,auStack_b58);
  FUN_100321770(auStack_110,auStack_c00);
  FUN_100321770(auStack_148,auStack_df8);
  local_6f = 1;
  thunk_FUN_1003218ec(param_1,auStack_a0);
  thunk_FUN_1003218ec(param_1,auStack_d8);
  thunk_FUN_1003218ec(param_1,auStack_110);
  thunk_FUN_1003218ec(param_1,auStack_148);
  thunk_FUN_1003218ec(param_1,auStack_180);
  FUN_100323894(param_1,PTR_s_tutorialLevelGwen_101854b08,0);
  FUN_100323ba8(param_1,PTR_s_tutorialLevelKoshka_101854b00);
  if (local_1011 < '\0') {
    operator_delete(local_1028);
  }
  if (local_1030 != (void *)0x0) {
    operator_delete__(local_1030);
    local_1038 = 0;
    local_1030 = (void *)0x0;
  }
  if (local_1040 != (void *)0x0) {
    operator_delete__(local_1040);
    local_1048 = 0;
    local_1040 = (void *)0x0;
  }
  if (local_1050 != (void *)0x0) {
    operator_delete__(local_1050);
    local_1058 = 0;
    local_1050 = (void *)0x0;
  }
  if (local_1071 < '\0') {
    operator_delete(local_1088);
  }
  if (local_f69 < '\0') {
    operator_delete(local_f80);
  }
  if (local_f88 != (void *)0x0) {
    operator_delete__(local_f88);
    local_f88 = (void *)0x0;
    local_f90 = 0;
  }
  if (local_f98 != (void *)0x0) {
    operator_delete__(local_f98);
    local_fa0 = 0;
    local_f98 = (void *)0x0;
  }
  if (local_fa8 != (void *)0x0) {
    operator_delete__(local_fa8);
    local_fb0 = 0;
    local_fa8 = (void *)0x0;
  }
  if (local_fc9 < '\0') {
    operator_delete(local_fe0);
  }
  if (local_ec1 < '\0') {
    operator_delete(local_ed8);
  }
  if (local_ee0 != (void *)0x0) {
    operator_delete__(local_ee0);
    local_ee0 = (void *)0x0;
    local_ee8 = 0;
  }
  if (local_ef0 != (void *)0x0) {
    operator_delete__(local_ef0);
    local_ef8 = 0;
    local_ef0 = (void *)0x0;
  }
  if (local_f00 != (void *)0x0) {
    operator_delete__(local_f00);
    local_f08 = 0;
    local_f00 = (void *)0x0;
  }
  if (local_f21 < '\0') {
    operator_delete(local_f38);
  }
  if (local_e19 < '\0') {
    operator_delete(local_e30);
  }
  if (local_e38 != (void *)0x0) {
    operator_delete__(local_e38);
    local_e38 = (void *)0x0;
    local_e40 = 0;
  }
  if (local_e48 != (void *)0x0) {
    operator_delete__(local_e48);
    local_e50 = 0;
    local_e48 = (void *)0x0;
  }
  if (local_e58 != (void *)0x0) {
    operator_delete__(local_e58);
    local_e60 = 0;
    local_e58 = (void *)0x0;
  }
  if (local_e79 < '\0') {
    operator_delete(local_e90);
  }
  if (local_d71 < '\0') {
    operator_delete(local_d88);
  }
  if (local_d90 != (void *)0x0) {
    operator_delete__(local_d90);
    local_d90 = (void *)0x0;
    local_d98 = 0;
  }
  if (local_da0 != (void *)0x0) {
    operator_delete__(local_da0);
    local_da8 = 0;
  }
  if (local_db0 != (void *)0x0) {
    operator_delete__(local_db0);
    local_db8 = 0;
  }
  if (local_dd1 < '\0') {
    operator_delete(local_de8);
  }
  if (local_cc9 < '\0') {
    operator_delete(local_ce0);
  }
  if (local_ce8 != (void *)0x0) {
    operator_delete__(local_ce8);
    local_ce8 = (void *)0x0;
    local_cf0 = 0;
  }
  if (local_cf8 != (void *)0x0) {
    operator_delete__(local_cf8);
    local_d00 = 0;
  }
  if (local_d08 != (void *)0x0) {
    operator_delete__(local_d08);
    local_d10 = 0;
  }
  if (local_d29 < '\0') {
    operator_delete(local_d40);
  }
  if (local_c21 < '\0') {
    operator_delete(local_c38);
  }
  if (local_c40 != (void *)0x0) {
    operator_delete__(local_c40);
    local_c40 = (void *)0x0;
    local_c48 = 0;
  }
  if (local_c50 != (void *)0x0) {
    operator_delete__(local_c50);
    local_c58 = 0;
  }
  if (local_c60 != (void *)0x0) {
    operator_delete__(local_c60);
    local_c68 = 0;
  }
  if (local_c81 < '\0') {
    operator_delete(local_c98);
  }
  if (local_b79 < '\0') {
    operator_delete(local_b90);
  }
  if (local_b98 != (void *)0x0) {
    operator_delete__(local_b98);
    local_b98 = (void *)0x0;
    local_ba0 = 0;
  }
  if (local_ba8 != (void *)0x0) {
    operator_delete__(local_ba8);
    local_bb0 = 0;
  }
  if (local_bb8 != (void *)0x0) {
    operator_delete__(local_bb8);
    local_bc0 = 0;
  }
  if (local_bd9 < '\0') {
    operator_delete(local_bf0);
  }
  if (local_ad1 < '\0') {
    operator_delete(local_ae8);
  }
  if (local_af0 != (void *)0x0) {
    operator_delete__(local_af0);
    local_af0 = (void *)0x0;
    local_af8 = 0;
  }
  if (local_b00 != (void *)0x0) {
    operator_delete__(local_b00);
    local_b08 = 0;
  }
  if (local_b10 != (void *)0x0) {
    operator_delete__(local_b10);
    local_b18 = 0;
  }
  if (local_b31 < '\0') {
    operator_delete(local_b48);
  }
  if (local_a29 < '\0') {
    operator_delete(local_a40);
  }
  if (local_a48 != (void *)0x0) {
    operator_delete__(local_a48);
    local_a48 = (void *)0x0;
    local_a50 = 0;
  }
  if (local_a58 != (void *)0x0) {
    operator_delete__(local_a58);
    local_a60 = 0;
  }
  if (local_a68 != (void *)0x0) {
    operator_delete__(local_a68);
    local_a70 = 0;
  }
  if (local_a89 < '\0') {
    operator_delete(local_aa0);
  }
  if (local_981 < '\0') {
    operator_delete(local_998);
  }
  if (local_9a0 != (void *)0x0) {
    operator_delete__(local_9a0);
    local_9a0 = (void *)0x0;
    local_9a8 = 0;
  }
  if (local_9b0 != (void *)0x0) {
    operator_delete__(local_9b0);
    local_9b0 = (void *)0x0;
    local_9b8 = 0;
  }
  if (local_9c0 != (void *)0x0) {
    operator_delete__(local_9c0);
    local_9c8 = 0;
  }
  if (local_9e1 < '\0') {
    operator_delete(local_9f8);
  }
  if (local_8d9 < '\0') {
    operator_delete(local_8f0);
  }
  if (local_8f8 != (void *)0x0) {
    operator_delete__(local_8f8);
    local_8f8 = (void *)0x0;
    local_900 = 0;
  }
  if (local_908 != (void *)0x0) {
    operator_delete__(local_908);
    local_910 = 0;
  }
  if (local_918 != (void *)0x0) {
    operator_delete__(local_918);
    local_920 = 0;
  }
  if (local_939 < '\0') {
    operator_delete(local_950);
  }
  if (local_831 < '\0') {
    operator_delete(local_848);
  }
  if (local_850 != (void *)0x0) {
    operator_delete__(local_850);
    local_850 = (void *)0x0;
    local_858 = 0;
  }
  if (local_860 != (void *)0x0) {
    operator_delete__(local_860);
    local_868 = 0;
  }
  if (local_870 != (void *)0x0) {
    operator_delete__(local_870);
    local_878 = 0;
  }
  if (local_891 < '\0') {
    operator_delete(local_8a8);
  }
  if (local_789 < '\0') {
    operator_delete(local_7a0);
  }
  if (local_7a8 != (void *)0x0) {
    operator_delete__(local_7a8);
    local_7a8 = (void *)0x0;
    local_7b0 = 0;
  }
  if (local_7b8 != (void *)0x0) {
    operator_delete__(local_7b8);
    local_7c0 = 0;
  }
  if (local_7c8 != (void *)0x0) {
    operator_delete__(local_7c8);
    local_7d0 = 0;
  }
  if (local_7e9 < '\0') {
    operator_delete(local_800);
  }
  if (local_6e1 < '\0') {
    operator_delete(local_6f8[0]);
  }
  if (local_700 != (void *)0x0) {
    operator_delete__(local_700);
    local_708 = 0;
  }
  if (local_710 != (void *)0x0) {
    operator_delete__(local_710);
    local_718 = 0;
  }
  if (local_720 != (void *)0x0) {
    operator_delete__(local_720);
    local_728 = 0;
  }
  if (local_741 < '\0') {
    operator_delete(local_758);
  }
  if (local_639 < '\0') {
    operator_delete(local_650[0]);
  }
  if (local_658 != (void *)0x0) {
    operator_delete__(local_658);
    local_660 = 0;
  }
  if (local_668 != (void *)0x0) {
    operator_delete__(local_668);
    local_670 = 0;
  }
  if (local_678 != (void *)0x0) {
    operator_delete__(local_678);
    local_680 = 0;
  }
  if (local_699 < '\0') {
    operator_delete(local_6b0);
  }
  if (local_591 < '\0') {
    operator_delete(local_5a8[0]);
  }
  if (local_5b0 != (void *)0x0) {
    operator_delete__(local_5b0);
    local_5b8 = 0;
  }
  if (local_5c0 != (void *)0x0) {
    operator_delete__(local_5c0);
    local_5c8 = 0;
  }
  if (local_5d0 != (void *)0x0) {
    operator_delete__(local_5d0);
    local_5d8 = 0;
  }
  if (local_5f1 < '\0') {
    operator_delete(local_608);
  }
  if (local_4e9 < '\0') {
    operator_delete(local_500[0]);
  }
  if (local_508 != (void *)0x0) {
    operator_delete__(local_508);
    local_510 = 0;
  }
  if (local_518 != (void *)0x0) {
    operator_delete__(local_518);
    local_520 = 0;
  }
  if (local_528 != (void *)0x0) {
    operator_delete__(local_528);
    local_530 = 0;
  }
  if (local_549 < '\0') {
    operator_delete(local_560);
  }
  if (local_441 < '\0') {
    operator_delete(local_458[0]);
  }
  if (local_460 != (void *)0x0) {
    operator_delete__(local_460);
    local_468 = 0;
  }
  if (local_470 != (void *)0x0) {
    operator_delete__(local_470);
    local_478 = 0;
  }
  if (local_480 != (void *)0x0) {
    operator_delete__(local_480);
    local_488 = 0;
  }
  if (local_4a1 < '\0') {
    operator_delete(local_4b8);
  }
  if (local_399 < '\0') {
    operator_delete(local_3b0[0]);
  }
  if (local_3b8 != (void *)0x0) {
    operator_delete__(local_3b8);
    local_3b8 = (void *)0x0;
    local_3c0 = 0;
  }
  if (local_3c8 != (void *)0x0) {
    operator_delete__(local_3c8);
    local_3d0 = 0;
  }
  if (local_3d8 != (void *)0x0) {
    operator_delete__(local_3d8);
    local_3e0 = 0;
  }
  if (local_3f9 < '\0') {
    operator_delete(local_410);
  }
  if (local_2f1 < '\0') {
    operator_delete(local_308[0]);
  }
  if (local_310 != (void *)0x0) {
    operator_delete__(local_310);
    local_310 = (void *)0x0;
    local_318 = 0;
  }
  if (local_320 != (void *)0x0) {
    operator_delete__(local_320);
    local_328 = 0;
  }
  if (local_330 != (void *)0x0) {
    operator_delete__(local_330);
    local_338 = 0;
  }
  if (local_351 < '\0') {
    operator_delete(local_368);
  }
  if (local_249 < '\0') {
    operator_delete(local_260[0]);
  }
  if (local_268 != (void *)0x0) {
    operator_delete__(local_268);
    local_268 = (void *)0x0;
    local_270 = 0;
  }
  if (local_278 != (void *)0x0) {
    operator_delete__(local_278);
    local_280 = 0;
  }
  if (local_288 != (void *)0x0) {
    operator_delete__(local_288);
    local_290 = 0;
  }
  if (local_2a9 < '\0') {
    operator_delete(local_2c0);
  }
  if (local_1a1 < '\0') {
    operator_delete(local_1b8);
  }
  if (local_1c0 != (void *)0x0) {
    operator_delete__(local_1c0);
    local_1c0 = (void *)0x0;
    local_1c8 = 0;
  }
  if (local_1d0 != (void *)0x0) {
    operator_delete__(local_1d0);
    local_1d8 = 0;
  }
  if (local_1e0 != (void *)0x0) {
    operator_delete__(local_1e0);
    local_1e8 = 0;
  }
  if (local_201 < '\0') {
    operator_delete(local_218);
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_158 = (void *)0x0;
    local_160 = 0;
  }
  FUN_100202cb8(auStack_178,1);
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_120 = (void *)0x0;
    local_128 = 0;
  }
  FUN_100202cb8(auStack_140,1);
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  FUN_100202cb8(auStack_108,1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  FUN_100202cb8(auStack_d0,1);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  FUN_100202cb8(auStack_98,1);
  return;
}




void FUN_100323894(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_210 [8];
  void *local_208;
  undefined1 auStack_200 [8];
  void *local_1f8;
  undefined1 auStack_1f0 [16];
  void *local_1e0;
  char local_1c9;
  undefined8 local_1bc;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  void *local_180;
  char local_169;
  undefined4 local_168;
  char *local_160;
  undefined1 local_151;
  undefined1 auStack_148 [16];
  void *local_138;
  char local_121;
  undefined8 local_114;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  char local_c1;
  undefined4 local_c0;
  char *local_b8;
  undefined1 local_a9;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  void *local_78;
  undefined1 local_6f;
  undefined1 local_6e;
  
  thunk_FUN_1003216f4(auStack_a0,param_2,0);
  thunk_FUN_10032146c(auStack_148,0xf,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_1f0,0x10,0,0xffffffff,0xffffffff);
  uVar1 = FUN_1004e0150("5V5_ALT_TUTORIAL_TITLE_1",0);
  FUN_1000153b4(&local_108,uVar1);
  uVar1 = FUN_1004e0150("5V5_ALT_TUTORIAL_SUB_TITLE",0);
  FUN_1000153b4(&local_f8,uVar1);
  FUN_1004e313c(auStack_200);
  FUN_1004e38ac(auStack_200,"%d");
  FUN_1004e3120(auStack_210,"[AMOUNT]");
  FUN_1004e3bc4(&local_f8,0,auStack_210,auStack_200);
  if (local_208 != (void *)0x0) {
    operator_delete__(local_208);
  }
  local_c0 = 3;
  local_b8 = "game_mode_setting_tutorial_2";
  local_114 = 0x400000001;
  local_a9 = 1;
  FUN_100321770(auStack_a0,auStack_148);
  uVar1 = FUN_1004e0150("5V5_ALT_TUTORIAL_TITLE_2",0);
  FUN_1000153b4(&local_1b0,uVar1);
  uVar1 = FUN_1004e0150("5V5_ALT_TUTORIAL_SUB_TITLE",0);
  FUN_1000153b4(&local_1a0,uVar1);
  FUN_1004e38ac(auStack_200,"%d");
  FUN_1004e3120(auStack_210,"[AMOUNT]");
  FUN_1004e3bc4(&local_1a0,0,auStack_210,auStack_200);
  if (local_208 != (void *)0x0) {
    operator_delete__(local_208);
  }
  local_168 = 3;
  local_160 = "game_mode_setting_tutorial_3";
  local_1bc = 0x500000002;
  local_151 = 1;
  FUN_100321770(auStack_a0,auStack_1f0);
  local_6e = 1;
  uVar1 = FUN_1004e0150("5V5_TUTORIAL_SUB_TITLE_1",0);
  FUN_1000153b4(&local_80,uVar1);
  local_6f = param_3;
  thunk_FUN_1003218ec(param_1,auStack_a0);
  if (local_1f8 != (void *)0x0) {
    operator_delete__(local_1f8);
  }
  if (local_169 < '\0') {
    operator_delete(local_180);
  }
  if (local_188 != (void *)0x0) {
    operator_delete__(local_188);
    local_190 = 0;
    local_188 = (void *)0x0;
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = 0;
    local_198 = (void *)0x0;
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
    local_1b0 = 0;
    local_1a8 = (void *)0x0;
  }
  if (local_1c9 < '\0') {
    operator_delete(local_1e0);
  }
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  if (local_100 != (void *)0x0) {
    operator_delete__(local_100);
    local_108 = 0;
    local_100 = (void *)0x0;
  }
  if (local_121 < '\0') {
    operator_delete(local_138);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  FUN_100202cb8(auStack_98,1);
  return;
}




void FUN_100323ba8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_318 [16];
  void *local_308;
  char local_2f1;
  undefined4 local_2e4;
  undefined8 local_2d8;
  void *local_2d0;
  undefined8 local_2c8;
  void *local_2c0;
  undefined8 local_2b8;
  void *local_2b0;
  void *local_2a8;
  char local_291;
  undefined4 local_290;
  char *local_288;
  undefined1 local_279;
  undefined1 auStack_270 [16];
  void *local_260;
  char local_249;
  undefined4 local_23c;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  void *local_200;
  char local_1e9;
  undefined4 local_1e8;
  char *local_1e0;
  undefined1 local_1d1;
  undefined1 auStack_1c8 [16];
  void *local_1b8;
  char local_1a1;
  undefined4 local_194;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  void *local_160;
  void *local_158;
  char local_141;
  undefined4 local_140;
  char *local_138;
  undefined1 local_129;
  undefined1 auStack_120 [16];
  void *local_110;
  char local_f9;
  undefined8 local_ec;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  char local_99;
  undefined4 local_98;
  char *local_90;
  undefined1 local_81;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  void *local_50;
  undefined1 local_47;
  undefined1 local_46;
  
  thunk_FUN_1003216f4(auStack_78,param_2,0);
  thunk_FUN_10032146c(auStack_120,0xb,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_1c8,0xc,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_270,0xd,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_318,0xe,0,0xffffffff,0xffffffff);
  lVar2 = FUN_1001340f8();
  iVar1 = *(int *)(lVar2 + 0x24);
  if (iVar1 == 1) {
LAB_100323cc4:
    uVar3 = FUN_1004e0150("5V5_TUTORIAL_TITLE_2",0);
    FUN_1000153b4(&local_188,uVar3);
    uVar3 = FUN_1004e0150("5V5_TUTORIAL_SUB_TITLE_2",0);
    FUN_1000153b4(&local_178,uVar3);
    local_138 = "game_mode_setting_tutorial_2";
    local_140 = 3;
    local_194 = 2;
    local_129 = 1;
    FUN_100321770(auStack_78,auStack_1c8);
    if (iVar1 != 3) goto LAB_100323d38;
  }
  else {
    uVar3 = FUN_1004e0150("5V5_TUTORIAL_TITLE_1",0);
    FUN_1000153b4(&local_e0,uVar3);
    uVar3 = FUN_1004e0150("5V5_TUTORIAL_SUB_TITLE_1",0);
    FUN_1000153b4(&local_d0,uVar3);
    local_98 = 3;
    local_90 = "game_mode_setting_tutorial_1";
    local_ec = 0x300000001;
    local_81 = 1;
    FUN_100321770(auStack_78,auStack_120);
    if (iVar1 != 2) goto LAB_100323cc4;
LAB_100323d38:
    uVar3 = FUN_1004e0150("5V5_TUTORIAL_TITLE_3",0);
    FUN_1000153b4(&local_230,uVar3);
    uVar3 = FUN_1004e0150("5V5_TUTORIAL_SUB_TITLE_3",0);
    FUN_1000153b4(&local_220,uVar3);
    local_1e0 = "game_mode_setting_tutorial_3";
    local_1e8 = 3;
    local_23c = 3;
    local_1d1 = 1;
    FUN_100321770(auStack_78,auStack_270);
    if (iVar1 == 4) goto LAB_100323e1c;
  }
  uVar3 = FUN_1004e0150("5V5_TUTORIAL_TITLE_4",0);
  FUN_1000153b4(&local_2d8,uVar3);
  uVar3 = FUN_1004e0150("5V5_TUTORIAL_SUB_TITLE_4",0);
  FUN_1000153b4(&local_2c8,uVar3);
  local_288 = "game_mode_setting_tutorial_4";
  local_290 = 3;
  local_2e4 = 4;
  local_279 = 1;
  FUN_100321770(auStack_78,auStack_318);
LAB_100323e1c:
  local_46 = 1;
  uVar3 = FUN_1004e0150("5V5_TUTORIAL_SUB_TITLE_1",0);
  FUN_1000153b4(&local_58,uVar3);
  local_47 = 1;
  thunk_FUN_1003218ec(param_1,auStack_78);
  if (local_291 < '\0') {
    operator_delete(local_2a8);
  }
  if (local_2b0 != (void *)0x0) {
    operator_delete__(local_2b0);
    local_2b8 = 0;
    local_2b0 = (void *)0x0;
  }
  if (local_2c0 != (void *)0x0) {
    operator_delete__(local_2c0);
    local_2c8 = 0;
    local_2c0 = (void *)0x0;
  }
  if (local_2d0 != (void *)0x0) {
    operator_delete__(local_2d0);
    local_2d8 = 0;
    local_2d0 = (void *)0x0;
  }
  if (local_2f1 < '\0') {
    operator_delete(local_308);
  }
  if (local_1e9 < '\0') {
    operator_delete(local_200);
  }
  if (local_208 != (void *)0x0) {
    operator_delete__(local_208);
    local_210 = 0;
    local_208 = (void *)0x0;
  }
  if (local_218 != (void *)0x0) {
    operator_delete__(local_218);
    local_220 = 0;
    local_218 = (void *)0x0;
  }
  if (local_228 != (void *)0x0) {
    operator_delete__(local_228);
    local_230 = 0;
    local_228 = (void *)0x0;
  }
  if (local_249 < '\0') {
    operator_delete(local_260);
  }
  if (local_141 < '\0') {
    operator_delete(local_158);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_168 = 0;
    local_160 = (void *)0x0;
  }
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
    local_188 = 0;
    local_180 = (void *)0x0;
  }
  if (local_1a1 < '\0') {
    operator_delete(local_1b8);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_b8 = (void *)0x0;
    local_c0 = 0;
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_c8 = (void *)0x0;
    local_d0 = 0;
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_d8 = (void *)0x0;
    local_e0 = 0;
  }
  if (local_f9 < '\0') {
    operator_delete(local_110);
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_100202cb8(auStack_70,1);
  return;
}




void FUN_100323fdc(undefined8 param_1,undefined8 param_2)

{
  FUN_100323894(param_1,param_2,1);
  return;
}




void FUN_100323fe4(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_1d8 [16];
  void *local_1c8;
  char local_1b1;
  undefined4 local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  void *local_168;
  char local_151;
  undefined4 local_150;
  char *local_148;
  undefined1 auStack_130 [16];
  void *local_120;
  char local_109;
  undefined4 local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_a8;
  char *local_a0;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  void *local_60;
  undefined2 local_58;
  undefined1 local_56;
  
  thunk_FUN_1003216f4(auStack_88,"areYouNew",0);
  lVar2 = FUN_1001340f8();
  pcVar1 = "gameplayMode";
  if (*(int *)(lVar2 + 0x20) != 1) {
    pcVar1 = "tutorialLevel";
  }
  thunk_FUN_10032146c(auStack_130,0x11,"tutorialLevel",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_1d8,0x11,pcVar1,0xffffffff,0xffffffff);
  uVar3 = FUN_1004e0150("PLAYMENU_OPTION_I_AM_NEW_TITLE",0);
  FUN_1000153b4(&local_f0,uVar3);
  uVar3 = FUN_1004e0150("PLAYMENU_OPTION_I_AM_EXPERIENCED_TITLE",0);
  FUN_1000153b4(&local_198,uVar3);
  lVar2 = FUN_1001340f8();
  if (*(int *)(lVar2 + 0x20) == 1) {
    uVar3 = FUN_1004e0150("PLAYMENU_OPTION_I_AM_NEW_SUBTEXT",0);
    FUN_1000153b4(&local_e0,uVar3);
    uVar3 = FUN_1004e0150("PLAYMENU_OPTION_I_AM_EXPERIENCED_SUBTEXT",0);
    FUN_1000153b4(&local_188,uVar3);
  }
  local_a0 = "game_mode_i_am_new";
  local_148 = "game_mode_i_am_experienced";
  local_a8 = 3;
  local_f8 = 1;
  local_150 = 3;
  local_1a0 = 2;
  FUN_100321770(auStack_88,auStack_130);
  uVar3 = FUN_1004e0150("PLAYMENU_TITLE_ARE_YOU_NEW",0);
  FUN_1000153b4(&local_68,uVar3);
  local_58 = 0x101;
  local_56 = 1;
  thunk_FUN_1003218ec(param_1,auStack_88);
  FUN_100323894(param_1,"tutorialLevel",1);
  FUN_100321ee0(param_1);
  if (local_151 < '\0') {
    operator_delete(local_168);
  }
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
    local_188 = 0;
    local_180 = (void *)0x0;
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
    local_198 = 0;
    local_190 = (void *)0x0;
  }
  if (local_1b1 < '\0') {
    operator_delete(local_1c8);
  }
  if (local_a9 < '\0') {
    operator_delete(local_c0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  if (local_109 < '\0') {
    operator_delete(local_120);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_100202cb8(auStack_80,1);
  return;
}




void FUN_10032426c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  mach_header *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char *pcStack_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  
  FUN_100324d98(param_1,0);
  uVar1 = FUN_1004e0150("GENERIC_5V5",0);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  uVar3 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_TITLE",0);
  uVar4 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_REVAMP_TITLE",0);
  uVar5 = FUN_1004e0150("PLAYMENU_OPTION_ARAL_TITLE",0);
  uVar6 = FUN_1004e0150("PLAYMENU_OPTION_ONE_FOR_ALL_TITLE",0);
  uVar7 = FUN_1004e0150("PLAYMENU_OPTION_PURE_BLITZ_TITLE",0);
  uVar8 = FUN_1004e0150("PLAYMENU_OPTION_RUMBLE_TITLE",0);
  uVar9 = FUN_1004e0150("PLAYMENU_OPTION_ARAM_TITLE",0);
  uVar10 = FUN_1004e0150("PLAYMENU_OPTION_RANKED_TITLE",0);
  uVar11 = FUN_1004e0150("PLAYMENU_OPTION_CASUAL_TITLE",0);
  uVar12 = FUN_1004e0150("PLAYMENU_OPTION_SOLOBOTS_TITLE",0);
  uVar13 = FUN_1004e0150("PLAYMENU_OPTION_PRACTICE_TITLE",0);
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x0;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_pvp_casual";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar11);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = &__mh_execute_header;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_pvp_ranked";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar10);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000003;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "blitz_pvp_ranked";
  thunk_FUN_1004e439c(&local_80,uVar3);
  thunk_FUN_1004e439c(&local_70,uVar11);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000004;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "blitz_pvp_revamp";
  thunk_FUN_1004e439c(&local_80,uVar4);
  thunk_FUN_1004e439c(&local_70,uVar11);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000006;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "casual_aral";
  thunk_FUN_1004e439c(&local_80,uVar5);
  thunk_FUN_1004e439c(&local_70,uVar11);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000005;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_rumble_casual";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar8);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000007;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_aram_casual";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar9);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000008;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_pvp_oneforall";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar6);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000009;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "blitz_pvp_pure";
  thunk_FUN_1004e439c(&local_80,uVar2);
  thunk_FUN_1004e439c(&local_70,uVar7);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000001;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "casual";
  thunk_FUN_1004e439c(&local_80,uVar2);
  thunk_FUN_1004e439c(&local_70,uVar11);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000002;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "ranked";
  thunk_FUN_1004e439c(&local_80,uVar2);
  thunk_FUN_1004e439c(&local_70,uVar10);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x300000000;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_bots_solo";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar12);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x300000003;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "blitz_bots_solo";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar12);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x300000002;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "solo_bots";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar12);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x50000000a;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "5v5_practice";
  thunk_FUN_1004e439c(&local_80,uVar1);
  thunk_FUN_1004e439c(&local_70,uVar13);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x50000000f;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "single_player_tutorial_01_joystick";
  thunk_FUN_1004e439c(&local_80,&DAT_101d91650);
  thunk_FUN_1004e439c(&local_70,&DAT_101d91650);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x500000010;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "single_player_tutorial_02_joystick";
  thunk_FUN_1004e439c(&local_80,&DAT_101d91650);
  thunk_FUN_1004e439c(&local_70,&DAT_101d91650);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x50000000b;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "single_player_tutorial_01";
  thunk_FUN_1004e439c(&local_80,&DAT_101d91650);
  thunk_FUN_1004e439c(&local_70,&DAT_101d91650);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x50000000c;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "single_player_tutorial_02";
  thunk_FUN_1004e439c(&local_80,&DAT_101d91650);
  thunk_FUN_1004e439c(&local_70,&DAT_101d91650);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  uStack_a8 = 0x200000005;
  local_b0 = (mach_header *)0x50000000e;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "single_player_tutorial_05_5v5";
  thunk_FUN_1004e439c(&local_80,&DAT_101d91650);
  thunk_FUN_1004e439c(&local_70,&DAT_101d91650);
  FUN_100324e34(param_1,&local_b0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  return;
}




void FUN_100324e34(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100324f80(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar10 = *(long *)(param_1 + 2);
  lVar11 = (ulong)(uVar3 + 1) - 1;
  puVar4 = (undefined8 *)(lVar10 + lVar11 * 0x50);
  uVar12 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar12;
  if ((char)*(byte *)((long)param_2 + 0x27) < '\0') {
    uVar6 = param_2[3];
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_100324f74();
    }
    puVar7 = (undefined8 *)param_2[2];
  }
  else {
    puVar7 = param_2 + 2;
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x27);
  }
  puVar8 = puVar4 + 2;
  if (uVar6 < 0x17) {
    *(char *)((long)puVar4 + 0x27) = (char)uVar6;
    puVar4 = puVar8;
    if (uVar6 == 0) goto LAB_100324f30;
  }
  else {
    uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
    puVar4 = operator_new(uVar9);
    *puVar8 = puVar4;
    lVar5 = lVar10 + lVar11 * 0x50;
    *(ulong *)(lVar5 + 0x18) = uVar6;
    *(ulong *)(lVar5 + 0x20) = uVar9 | 0x8000000000000000;
  }
  _memcpy(puVar4,puVar7,uVar6);
  puVar8 = puVar4;
LAB_100324f30:
  *(undefined1 *)((long)puVar8 + uVar6) = 0;
  lVar10 = lVar10 + lVar11 * 0x50;
  *(undefined8 *)(lVar10 + 0x28) = param_2[5];
  thunk_FUN_1004e439c(lVar10 + 0x30,param_2 + 6);
  thunk_FUN_1004e439c(lVar10 + 0x40,param_2 + 8);
  return;
}




void FUN_100324f74(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 FUN_100325144(undefined8 param_1)

{
  FUN_100324d98(param_1,1);
  return param_1;
}




void FUN_10032516c(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101e46a90 != (undefined8 *)0x0) {
    return;
  }
  puVar1 = operator_new(0x70);
  lVar2 = FUN_10014f4a0();
  FUN_1004f0a20(lVar2 + 0x18);
  *puVar1 = &PTR_thunk_FUN_100325248_101492610;
  puVar1[3] = &PTR_FUN_1014929b0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x65) = 0;
  *(undefined8 *)((long)puVar1 + 0x5d) = 0;
  DAT_101e46a90 = puVar1;
  FUN_10032426c(&DAT_101e46a80);
  return;
}




void FUN_1003251e4(void)

{
  FUN_10032426c(&DAT_101e46a80);
  return;
}




void FUN_1003251f0(void)

{
  if (DAT_101e46a90 != (long *)0x0) {
    (**(code **)(*DAT_101e46a90 + 8))();
    DAT_101e46a90 = (long *)0x0;
    FUN_100324d98(&DAT_101e46a80,0);
    return;
  }
  return;
}




undefined8 FUN_10032523c(void)

{
  return DAT_101e46a90;
}




void FUN_100325248(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100325248_101492610;
  param_1[3] = &PTR_FUN_1014929b0;
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_100325248(void)

{
  FUN_100325248();
  return;
}




void FUN_1003252bc(long param_1)

{
  FUN_100325248(param_1 + -0x18);
  return;
}




void FUN_1003252c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100325248();
  operator_delete(pvVar1);
  return;
}




void FUN_1003252d8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100325248(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




undefined4 FUN_1003252f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




undefined4 FUN_1003252f8(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




undefined4 FUN_100325300(void)

{
  long lVar1;
  
  lVar1 = FUN_1004f0338();
  return *(undefined4 *)(lVar1 + 0xf8);
}




bool FUN_100325318(long param_1)

{
  return *(uint *)(param_1 + 0x60) < 2;
}




void FUN_100325328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  uVar1 = FUN_10015d3ec();
  FUN_10001549c(local_48,param_2);
  FUN_10001549c(local_60,param_3);
  FUN_1001654bc(uVar1,local_48,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1003253a8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100165784(uVar1,1);
  return;
}




char * FUN_1003253c0(int *param_1)

{
  int *piVar1;
  
  if ((uint)DAT_101e46a80 == 0) {
    return "";
  }
  piVar1 = DAT_101e46a88;
  while ((*piVar1 != *param_1 || (piVar1[1] != param_1[1]))) {
    piVar1 = piVar1 + 0x14;
    if (DAT_101e46a88 + (ulong)(uint)DAT_101e46a80 * 0x14 <= piVar1) {
      return "";
    }
  }
  return *(char **)(piVar1 + 10);
}




undefined8 * FUN_100325424(char *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((uint)DAT_101e46a80 != 0) {
    puVar3 = (undefined8 *)(DAT_101e46a88 + 0x30);
    do {
      iVar2 = _strcmp((char *)puVar3[-1],param_1);
      if (iVar2 == 0) {
        return puVar3;
      }
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 10;
    } while (puVar1 < (undefined8 *)(DAT_101e46a88 + (ulong)(uint)DAT_101e46a80 * 0x50));
  }
  return &DAT_101d91650;
}




undefined8 * FUN_1003254bc(char *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((uint)DAT_101e46a80 != 0) {
    puVar3 = (undefined8 *)(DAT_101e46a88 + 0x40);
    do {
      iVar2 = _strcmp((char *)puVar3[-3],param_1);
      if (iVar2 == 0) {
        return puVar3;
      }
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 10;
    } while (puVar1 < (undefined8 *)(DAT_101e46a88 + (ulong)(uint)DAT_101e46a80 * 0x50));
  }
  return &DAT_101d91650;
}




void FUN_100325554(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  long local_40;
  code *pcStack_38;
  
  lVar5 = FUN_10015d3ec();
  uVar2 = *(undefined4 *)(lVar5 + 0x55cc);
  piVar7 = (int *)(param_1 + 0x60);
  iVar1 = *piVar7;
  piVar8 = (int *)(param_1 + 100);
  *piVar8 = iVar1;
  iVar6 = 0;
  bVar4 = false;
  bVar3 = false;
  switch(uVar2) {
  case 0:
  case 1:
  case 3:
    break;
  case 2:
    bVar3 = false;
    iVar6 = 1;
    bVar4 = true;
    break;
  case 4:
    bVar4 = false;
    bVar3 = false;
    iVar6 = 2;
    break;
  default:
    goto switchD_1003255b0_caseD_5;
  case 6:
  case 7:
  case 8:
    bVar4 = false;
    bVar3 = true;
    iVar6 = 3;
  }
  *piVar7 = iVar6;
  if (iVar1 != iVar6) {
    if (iVar1 == 1 || !bVar4) {
      if (iVar1 != 3) {
        if (iVar1 == 1) {
          if (!bVar4) {
            pcStack_38 = thunk_FUN_1003257fc;
            local_40 = param_1;
            FUN_100643a8c(&local_40);
            *(undefined1 *)(param_1 + 0x6c) = 0;
          }
        }
        else if (bVar3) {
          FUN_100102cac();
        }
      }
    }
    else {
      FUN_1003257a4(param_1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x38);
      do {
        if ((code *)*puVar9 == (code *)0x0) {
          (*(code *)puVar9[3])(puVar9[2],piVar8);
        }
        else {
          (*(code *)*puVar9)(piVar8);
        }
        puVar9 = puVar9 + 4;
      } while (puVar9 != (undefined8 *)
                         (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x48);
      do {
        if ((code *)*puVar9 == (code *)0x0) {
          (*(code *)puVar9[3])(puVar9[2],piVar7);
        }
        else {
          (*(code *)*puVar9)(piVar7);
        }
        puVar9 = puVar9 + 4;
      } while (puVar9 != (undefined8 *)
                         (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20));
    }
  }
switchD_1003255b0_caseD_5:
  return;
}




void FUN_1003256e4(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x60);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    do {
      if ((code *)*puVar2 == (code *)0x0) {
        (*(code *)puVar2[3])(puVar2[2],param_1 + 100);
      }
      else {
        (*(code *)*puVar2)(param_1 + 100);
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    do {
      if ((code *)*puVar2 == (code *)0x0) {
        (*(code *)puVar2[3])(puVar2[2],puVar1);
      }
      else {
        (*(code *)*puVar2)(puVar1);
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20));
  }
  return;
}




void FUN_10032579c(long param_1)

{
  FUN_1003256e4(param_1 + -0x18);
  return;
}




void FUN_1003257a4(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    pcStack_28 = thunk_FUN_1003257fc;
    local_30 = param_1;
    FUN_100643618(0x3dcccccd,&local_30,0,1);
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  return;
}




void FUN_1003257fc(float param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int local_24;
  
  fVar3 = *(float *)(param_2 + 0x68);
  param_1 = fVar3 + param_1;
  *(float *)(param_2 + 0x68) = param_1;
  fVar2 = (float)(int)param_1;
  if (((float)(int)fVar3 != fVar2) && (local_24 = (int)fVar2, *(int *)(param_2 + 0x50) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x58);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],&local_24);
      }
      else {
        (*(code *)*puVar1)(&local_24);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_2 + 0x58) + (ulong)*(uint *)(param_2 + 0x50) * 0x20));
  }
  return;
}




void thunk_FUN_1003257fc(float param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iStack_24;
  
  fVar3 = *(float *)(param_2 + 0x68);
  param_1 = fVar3 + param_1;
  *(float *)(param_2 + 0x68) = param_1;
  fVar2 = (float)(int)param_1;
  if (((float)(int)fVar3 != fVar2) && (iStack_24 = (int)fVar2, *(int *)(param_2 + 0x50) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x58);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],&iStack_24);
      }
      else {
        (*(code *)*puVar1)(&iStack_24);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_2 + 0x58) + (ulong)*(uint *)(param_2 + 0x50) * 0x20));
  }
  return;
}




void FUN_10032588c(void)

{
  DAT_101e46908 = 0xff;
  DAT_101e4690a = 0xffff;
  DAT_101e4690c = 0xffff;
  DAT_101e4690e = 0xffbc9c44;
  DAT_101e46912 = 0xff1166f2;
  DAT_101e46916 = 0xffe0e0e0;
  DAT_101e4691a = 0xffa0a0a0;
  DAT_101e4691e = 0xff8c8c8c;
  DAT_101e46922 = 0xff322213;
  DAT_101e46926 = 0xff091911;
  DAT_101e4692a = 0xff170c19;
  DAT_101e4692e = 0xff241a14;
  DAT_101e46932 = 0xff14171c;
  DAT_101e46936 = 0xff221911;
  DAT_101e4693a = 0xff1a1416;
  DAT_101e4693e = 0xff121414;
  DAT_101e46942 = 0xff1a1809;
  DAT_101e46946 = 0xff141414;
  DAT_101e4694a = 0xff141414;
  DAT_101e4694e = 0xff2929c0;
  DAT_101e46952 = 0xff283082;
  DAT_101e46956 = 0xff5262cc;
  DAT_101e4695a = 0xff283082;
  DAT_101e4695e = 0xff5262cc;
  DAT_101e46962 = 0xff745c42;
  DAT_101e46966 = 0xff184155;
  DAT_101e4696a = 0xff92665e;
  DAT_101e4696e = 0xffbc9c44;
  DAT_101e46972 = 0xffbbae56;
  DAT_101e46976 = 0xff8b7b01;
  DAT_101e4697a = 0xff90b3ef;
  DAT_101e4697e = 0xff728ebe;
  DAT_101e46982 = 0xff19459d;
  DAT_101e46986 = 0xff9d877b;
  DAT_101e4698a = 0xffcbb1a3;
  DAT_101e4698e = 0xff3f6fb5;
  DAT_101e46992 = 0xffc5c5c5;
  DAT_101e46996 = 0xff4fc1f1;
  DAT_101e4699a = 0xff606060;
  DAT_101e4699e = 0xffc5ff7b;
  DAT_101e469a2 = 0xff5271eb;
  DAT_101e469a6 = 0xfffae076;
  DAT_101e469aa = 0xff3ac8f6;
  DAT_101e469ae = 0xffaaaaaa;
  DAT_101e469b2 = 0xffe19400;
  DAT_101e469b6 = 0xffe19400;
  DAT_101e469ba = 0xffe550b2;
  DAT_101e469be = 0xfff22ae8;
  DAT_101e469c2 = 0xff005ae1;
  DAT_101e469c6 = 0xff1addfa;
  DAT_101e469ca = 0xff2424b3;
  DAT_101e469ce = 0xff2424b3;
  DAT_101e469d2 = 0xff646464;
  DAT_101e469d6 = 0xff92665e;
  DAT_101e469da = 0xff646037;
  DAT_101e469e0 = 0xffffffff;
  DAT_101e469e4 = 0xff1111a1;
  DAT_101e469e8 = 0xff321ee1;
  DAT_101e469ec = 0xffc8c8c8;
  DAT_101e469f0 = 0xff321ee1;
  DAT_101e469f4 = 0xff7fe801;
  DAT_101e469f8 = 0xffffffff;
  DAT_101e469fc = 0xff6259b3;
  DAT_101e46a00 = 0xff506e73;
  DAT_101e46a04 = 0xff9dbf86;
  DAT_101e46a08 = 0xffa35244;
  DAT_101e46a0c = 0xffca828e;
  DAT_101e46a10 = 0xffa6a6a6;
  DAT_101e46a14 = 0xffa6a6a6;
  DAT_101e46a18 = 0xffffffff;
  DAT_101e46a1c = 0xff88ea2f;
  DAT_101e46a20 = 0xff8c8c8c;
  DAT_101e46a24 = 0xffffb400;
  DAT_101e46a28 = 0xffff00ff;
  DAT_101e46a2c = 0xff00aded;
  DAT_101e46a30 = 0xff33d3ff;
  DAT_101e46a34 = 0xff7fe801;
  DAT_101e46a38 = 0xff282828;
  DAT_101e46a3c = 0xfff0f0f0;
  DAT_101e46a40 = 0xffa4781e;
  DAT_101e46a44 = 0xffa6654b;
  DAT_101e46a48 = 0xff93435b;
  DAT_101e46a4c = 0xff387f9c;
  DAT_101e46a50 = 0xffa3781e;
  DAT_101e46a54 = 0xffffd18a;
  DAT_101e46a58 = 0xffff61f7;
  DAT_101e46a5c = 0xff5de1f2;
  DAT_101e46a60 = 0xff80eaff;
  DAT_101e46a64 = 0xff32e00e;
  DAT_101e46a68 = 0xff5a3c10;
  DAT_101e46a6c = 0xff330b03;
  DAT_101e46a70 = 0xff33031d;
  DAT_101e46a74 = 0xff032433;
  DAT_101e46a78 = 0xff9e8e8d;
  DAT_101e46a80 = 0;
  DAT_101e46a88 = 0;
  ___cxa_atexit(FUN_100325144,&DAT_101e46a80,0x100000000);
  return;
}




void thunk_FUN_100325f64(void)

{
  FUN_100325f64();
  return;
}




void FUN_100325f64(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar1 = (uint *)0x0;
  if (DAT_101e46a98 != 0) {
    puVar1 = (uint *)(DAT_101e46a98 + 0x60);
  }
  if (*puVar1 != 0) {
    lVar2 = *(long *)(puVar1 + 2);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  FUN_1003271e0(param_1);
  return;
}




void FUN_100325fe0(long param_1)

{
  FUN_100325f64(param_1 + -0x18);
  return;
}




void thunk_FUN_100325f64(void)

{
  FUN_100325f64();
  return;
}




void FUN_100325fec(long param_1)

{
  FUN_100325f64(param_1 + -0x18);
  return;
}




void FUN_100325ff4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  string *psVar13;
  ulong uVar14;
  string *psVar15;
  undefined8 *puVar16;
  void *local_e8 [2];
  char local_d1;
  long *local_d0;
  void *local_c8;
  long local_78;
  ulong local_70;
  void *local_68;
  
  local_70 = 0;
  local_68 = (void *)0x0;
  puVar9 = (uint *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x38);
  uVar1 = 0;
  do {
    uVar12 = uVar1;
    if (*puVar9 == uVar12) goto LAB_100326058;
    uVar1 = uVar12 + 1;
  } while (*(int *)(lVar8 + (ulong)uVar12 * 8 + 4) == -1);
  if (*puVar9 + 1 == uVar12 + 1) {
LAB_100326058:
    FUN_1003265f8(puVar9);
    if (*(int *)(param_2 + 0x28) != 0) {
      psVar13 = *(string **)(param_2 + 0x30);
      do {
        operator_new(0xe0);
        local_78 = thunk_FUN_100319bb0();
        std::string::operator=((string *)(local_78 + 0x48),psVar13);
        psVar15 = psVar13 + 0x18;
        if ((char)psVar13[0x2f] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        lVar8 = 0;
        do {
          iVar4 = _strcmp((&PTR_s_player_101854b10)[lVar8],(char *)psVar15);
          if (iVar4 == 0) break;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 10);
        *(int *)(local_78 + 0x40) = (int)lVar8;
        psVar15 = psVar13 + 0x30;
        if ((char)psVar13[0x47] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        lVar8 = 0;
        do {
          iVar4 = _strcmp((&PTR_s_generic_quest_101854b60)[lVar8],(char *)psVar15);
          if (iVar4 == 0) break;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 10);
        *(int *)(local_78 + 0x44) = (int)lVar8;
        *(undefined2 *)(local_78 + 0xd8) = *(undefined2 *)(psVar13 + 0x10c);
        *(undefined4 *)(local_78 + 200) = *(undefined4 *)(psVar13 + 0x108);
        *(undefined4 *)(local_78 + 0xcc) = *(undefined4 *)(psVar13 + 0xf8);
        *(undefined8 *)(local_78 + 0xd0) = *(undefined8 *)(psVar13 + 0x100);
        std::string::operator=((string *)(local_78 + 0x60),psVar13 + 0xc0);
        if (*(int *)(psVar13 + 0xe8) != 0) {
          plVar10 = *(long **)(psVar13 + 0xf0);
          do {
            local_d0 = plVar10;
            if (*(char *)((long)plVar10 + 0x17) < '\0') {
              local_d0 = (long *)*plVar10;
            }
            FUN_1001bc880(local_78 + 0x10,&local_d0,plVar10 + 3);
            plVar10 = plVar10 + 4;
          } while (plVar10 !=
                   (long *)(*(long *)(psVar13 + 0xf0) + (ulong)*(uint *)(psVar13 + 0xe8) * 0x20));
        }
        FUN_1003266b8(local_78,*(undefined4 *)(psVar13 + 0xd8));
        if (*(int *)(psVar13 + 0xd8) != 0) {
          puVar16 = *(undefined8 **)(psVar13 + 0xe0);
          do {
            lVar8 = local_78;
            puVar11 = puVar16;
            if (*(char *)((long)puVar16 + 0x17) < '\0') {
              puVar11 = (undefined8 *)*puVar16;
            }
            if (*(char *)((long)puVar16 + 0x2f) < '\0') {
              puVar7 = (undefined8 *)puVar16[3];
            }
            else {
              puVar7 = puVar16 + 3;
            }
            FUN_10001549c(local_e8,puVar7);
            thunk_FUN_100319fa0(&local_d0,puVar11,"",local_e8);
            FUN_1003267b4(lVar8,&local_d0);
            thunk_FUN_100319ff4(&local_d0);
            if (local_d1 < '\0') {
              operator_delete(local_e8[0]);
            }
            puVar16 = puVar16 + 6;
          } while (puVar16 !=
                   (undefined8 *)
                   (*(long *)(psVar13 + 0xe0) + (ulong)*(uint *)(psVar13 + 0xd8) * 0x30));
        }
        psVar15 = psVar13 + 0x48;
        if ((char)psVar13[0x5f] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        FUN_100319c30(&local_d0,local_78,psVar15);
        FUN_1000153b4(local_78 + 0x78,&local_d0);
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
        psVar15 = psVar13 + 0x60;
        if ((char)psVar13[0x77] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        FUN_100319c30(&local_d0,local_78,psVar15);
        FUN_1000153b4(local_78 + 0x88,&local_d0);
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
        psVar15 = psVar13 + 0x78;
        if ((char)psVar13[0x8f] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        FUN_100319c30(&local_d0,local_78,psVar15);
        FUN_1000153b4(local_78 + 0x98,&local_d0);
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
        psVar15 = psVar13 + 0x90;
        if ((char)psVar13[0xa7] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        FUN_100319c30(&local_d0,local_78,psVar15);
        FUN_1000153b4(local_78 + 0xa8,&local_d0);
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
        psVar15 = psVar13 + 0xa8;
        if ((char)psVar13[0xbf] < '\0') {
          psVar15 = *(string **)psVar15;
        }
        FUN_100319c30(&local_d0,local_78,psVar15);
        FUN_1000153b4(local_78 + 0xb8,&local_d0);
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
        local_d0 = (long *)(local_78 + 0x48);
        if (*(char *)(local_78 + 0x5f) < '\0') {
          local_d0 = (long *)*local_d0;
        }
        FUN_10032685c(puVar9,&local_d0,&local_78);
        psVar13 = psVar13 + 0x110;
      } while (psVar13 !=
               (string *)(*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x28) * 0x110));
    }
    if ((int)local_70 != 0) {
      lVar8 = 0;
      uVar14 = 0;
      do {
        local_d0 = (long *)(*(long *)((long)local_68 + lVar8) + 0x48);
        if (*(char *)(*(long *)((long)local_68 + lVar8) + 0x5f) < '\0') {
          local_d0 = (long *)*local_d0;
        }
        plVar10 = (long *)FUN_1003268c4(puVar9,&local_d0);
        if (plVar10 == (long *)0x0) {
          local_d0 = (long *)(*(long *)((long)local_68 + lVar8) + 0x48);
          if (*(char *)(*(long *)((long)local_68 + lVar8) + 0x5f) < '\0') {
            local_d0 = (long *)*local_d0;
          }
          FUN_10032685c(puVar9,&local_d0);
        }
        else {
          *(undefined1 *)(*plVar10 + 0xda) = 1;
          if (*(long *)((long)local_68 + lVar8) != 0) {
            pvVar5 = (void *)FUN_10032770c();
            operator_delete(pvVar5);
          }
        }
        *(undefined8 *)((long)local_68 + lVar8) = 0;
        uVar14 = uVar14 + 1;
        lVar8 = lVar8 + 8;
      } while (uVar14 < (local_70 & 0xffffffff));
    }
    if (local_68 != (void *)0x0) {
      local_70 = local_70 & 0xffffffff00000000;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    puVar9 = (uint *)0x0;
    if (DAT_101e46a98 != 0) {
      puVar9 = (uint *)(DAT_101e46a98 + 0x60);
    }
    if (*puVar9 != 0) {
      lVar8 = *(long *)(puVar9 + 2);
      do {
        if (*(code **)(lVar8 + 8) == (code *)0x0) {
          (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          (**(code **)(lVar8 + 8))();
        }
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != *(long *)(puVar9 + 2) + (ulong)*puVar9 * 0x20);
    }
    if (*(char *)(param_1 + 0x81) != '\0') {
      uVar6 = FUN_10015d3ec();
      FUN_100166e1c(uVar6,1);
      *(undefined1 *)(param_1 + 0x81) = 0;
    }
    FUN_100326994(param_1);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    return;
  }
  do {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) +
                           (ulong)*(uint *)(lVar8 + (ulong)uVar12 * 8 + 4) * 8) + 0xda) == '\0') {
      pvVar5 = (void *)FUN_10032770c();
      operator_delete(pvVar5);
      *(undefined8 *)
       (*(long *)(param_1 + 0x50) +
       (ulong)*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar12 * 8 + 4) * 8) = 0;
    }
    else {
      FUN_100326578(&local_70);
    }
    uVar2 = *puVar9;
    uVar1 = uVar2;
    if (uVar2 <= uVar12 + 1) {
      uVar1 = uVar12 + 1;
    }
    do {
      uVar12 = uVar12 + 1;
      uVar3 = uVar1;
      if (uVar2 <= uVar12) break;
      uVar3 = uVar12;
    } while (*(int *)(*(long *)(param_1 + 0x38) + (ulong)uVar12 * 8 + 4) == -1);
    uVar12 = uVar3;
    if (uVar2 == uVar12) goto LAB_100326058;
    lVar8 = *(long *)(param_1 + 0x38);
  } while( true );
}




void FUN_100326578(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100327978(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1003265f8(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




long FUN_100326668(char *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = _strcmp((&PTR_s_player_101854b10)[lVar2],param_1);
    if (iVar1 == 0) {
      return lVar2;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  return 10;
}




void FUN_1003266b8(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x58);
    pvVar5 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        lVar1 = (long)pvVar4 + lVar6;
        lVar2 = (long)pvVar5 + lVar6;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        FUN_1003279f4(lVar1 + 0x48,lVar2 + 0x48);
        lVar6 = lVar6 + 0x58;
      } while ((ulong)uVar3 * 0x58 - lVar6 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x58;
        do {
          thunk_FUN_100319ff4(pvVar5);
          pvVar5 = (void *)((long)pvVar5 + 0x58);
          lVar6 = lVar6 + -0x58;
        } while (lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_1003267b4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1003266b8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  FUN_10003330c(lVar4 + -0x58,param_2);
  FUN_10003330c(lVar4 + -0x40,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x28,param_2 + 0x30);
  FUN_1003279f4(lVar4 + -0x10,param_2 + 0x48);
  return;
}




void FUN_10032685c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  lVar2 = FUN_100034344(param_1,uVar3);
  uVar1 = FUN_100327ab4(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




long FUN_1003268c4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 8;
    }
  }
  return 0;
}




long FUN_10032697c(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (DAT_101e46a98 != 0) {
    lVar1 = DAT_101e46a98 + 0x60;
  }
  return lVar1;
}




void FUN_100326994(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    if (uVar1 == uVar6) goto LAB_1003269dc;
    uVar2 = uVar6 + 1;
  } while (*(int *)(lVar5 + (ulong)uVar6 * 8 + 4) == -1);
  if (uVar1 + 1 == uVar6 + 1) {
LAB_1003269dc:
    iVar9 = 0;
    iVar8 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x50) +
                       (ulong)*(uint *)(lVar5 + (ulong)uVar6 * 8 + 4) * 8);
      if (((*(char *)(lVar7 + 0xd8) != '\0') && (*(char *)(lVar7 + 0xd9) == '\0')) &&
         (uVar2 = *(uint *)(lVar7 + 0x40), uVar2 < 10)) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x23bU) == 0) {
          if (uVar2 == 2) {
            iVar9 = iVar9 + 1;
          }
          else if (uVar2 == 7) {
            iVar8 = iVar8 + 1;
          }
        }
        else {
          iVar4 = iVar4 + 1;
        }
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar6 + 1) {
        uVar2 = uVar6 + 1;
      }
      do {
        uVar6 = uVar6 + 1;
        uVar3 = uVar2;
        if (uVar1 <= uVar6) break;
        uVar3 = uVar6;
      } while (*(int *)(lVar5 + (ulong)uVar6 * 8 + 4) == -1);
      uVar6 = uVar3;
    } while (uVar1 != uVar6);
  }
  FUN_1000165f0(param_1 + 0x88,iVar4);
  FUN_1000165f0(param_1 + 0xa8,iVar9);
  FUN_1000165f0(param_1 + 200,iVar8);
  return;
}




void FUN_100326ac4(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint *local_70;
  undefined1 local_68;
  
  if (DAT_101e46a98 == 0) {
    puVar12 = (uint *)0x0;
  }
  else {
    plVar13 = (long *)*(long *)(param_2 + 0x38);
    if (-1 < *(char *)(param_2 + 0x4f)) {
      plVar13 = (long *)(param_2 + 0x38);
    }
    puVar12 = (uint *)FUN_100326dcc(DAT_101e46a98,plVar13);
    if ((puVar12 != (uint *)0x0) && (*(char *)(param_2 + 0x68) != '\0')) {
      puVar12[0x33] = *(uint *)(param_2 + 0x60);
      *(undefined2 *)((long)puVar12 + 0xd9) = 1;
      if (*puVar12 != 0) {
        puVar20 = *(undefined8 **)(puVar12 + 2);
        do {
          uVar8 = *(uint *)(param_2 + 0x50);
          if (uVar8 != 0) {
            uVar24 = 0;
            lVar22 = *(long *)(param_2 + 0x58);
            bVar9 = *(byte *)((long)puVar20 + 0x17);
            sVar4 = puVar20[1];
            if (-1 < (char)bVar9) {
              sVar4 = (ulong)bVar9;
            }
            do {
              pbVar2 = (byte *)(lVar22 + uVar24 * 0x40);
              bVar10 = pbVar2[0x17];
              sVar5 = *(size_t *)(pbVar2 + 8);
              if (-1 < (char)bVar10) {
                sVar5 = (ulong)bVar10;
              }
              if (sVar4 == sVar5) {
                puVar6 = (void *)*puVar20;
                if (-1 < (char)bVar9) {
                  puVar6 = puVar20;
                }
                pbVar7 = *(byte **)pbVar2;
                if (-1 < (char)bVar10) {
                  pbVar7 = pbVar2;
                }
                if ((char)bVar9 < '\0') {
                  if ((sVar4 == 0) || (iVar11 = _memcmp(puVar6,pbVar7,sVar4), iVar11 == 0))
                  goto LAB_100326bf8;
                }
                else {
                  if (sVar4 == 0) {
LAB_100326bf8:
                    lVar23 = lVar22 + (uVar24 & 0xffffffff) * 0x40;
                    plVar13 = (long *)(lVar23 + 0x18);
                    if (*(char *)(lVar23 + 0x2f) < '\0') {
                      plVar13 = (long *)*plVar13;
                    }
                    FUN_10031a054(puVar20,plVar13);
                    lVar22 = lVar22 + (uVar24 & 0xffffffff) * 0x40;
                    puVar21 = (uint *)(lVar22 + 0x30);
                    FUN_10031a05c(puVar20,*puVar21);
                    if (*puVar21 != 0) {
                      lVar23 = 0;
                      uVar24 = 0;
                      do {
                        lVar19 = *(long *)(lVar22 + 0x38);
                        lVar14 = lVar19 + lVar23;
                        if (*(char *)(lVar14 + 0x17) < '\0') {
                          lVar14 = *(long *)(lVar19 + lVar23);
                        }
                        lVar15 = lVar19 + lVar23;
                        if (*(char *)(lVar15 + 0x2f) < '\0') {
                          lVar15 = *(long *)(lVar15 + 0x18);
                        }
                        else {
                          lVar15 = lVar15 + 0x18;
                        }
                        lVar3 = lVar19 + lVar23;
                        if (*(char *)(lVar3 + 0x47) < '\0') {
                          lVar16 = *(long *)(lVar3 + 0x30);
                        }
                        else {
                          lVar16 = lVar3 + 0x30;
                        }
                        lVar17 = lVar19 + lVar23;
                        if (*(char *)(lVar17 + 0x5f) < '\0') {
                          lVar17 = *(long *)(lVar17 + 0x48);
                        }
                        else {
                          lVar17 = lVar17 + 0x48;
                        }
                        FUN_10031a284(puVar20,lVar14,lVar15,*(undefined4 *)(lVar3 + 0x60),lVar16,
                                      lVar17,*(undefined4 *)(lVar19 + lVar23 + 100));
                        uVar24 = uVar24 + 1;
                        lVar23 = lVar23 + 0x68;
                      } while (uVar24 < *puVar21);
                    }
                    break;
                  }
                  if ((uint)*pbVar7 == ((uint)(void *)*puVar20 & 0xff)) {
                    uVar18 = 1;
                    do {
                      if (bVar9 == uVar18) {
                        if (lVar22 == 0) goto LAB_100326cc0;
                        goto LAB_100326bf8;
                      }
                      pbVar2 = (byte *)((long)puVar20 + uVar18);
                      pbVar1 = pbVar7 + uVar18;
                      uVar18 = uVar18 + 1;
                    } while (*pbVar2 == *pbVar1);
                  }
                }
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar8);
          }
LAB_100326cc0:
          puVar20 = puVar20 + 0xb;
        } while (puVar20 != (undefined8 *)(*(long *)(puVar12 + 2) + (ulong)*puVar12 * 0x58));
      }
    }
  }
  local_68 = *(undefined1 *)(param_2 + 0x68);
  puVar21 = (uint *)0x0;
  if (DAT_101e46a98 != 0) {
    puVar21 = (uint *)(DAT_101e46a98 + 0x70);
  }
  local_70 = puVar12;
  if (*puVar21 != 0) {
    puVar20 = *(undefined8 **)(puVar21 + 2);
    do {
      if ((code *)*puVar20 == (code *)0x0) {
        (*(code *)puVar20[3])(puVar20[2],&local_70);
      }
      else {
        (*(code *)*puVar20)(&local_70);
      }
      puVar20 = puVar20 + 4;
    } while (puVar20 != (undefined8 *)(*(long *)(puVar21 + 2) + (ulong)*puVar21 * 0x20));
  }
  if (local_70 != (uint *)0x0) {
    FUN_100107be0(local_70);
  }
  FUN_1003271e0(DAT_101e46a98);
  return;
}




void FUN_100326d78(undefined8 param_1)

{
  if (DAT_101e46a98 != 0) {
    FUN_100326dcc(DAT_101e46a98,param_1);
    return;
  }
  return;
}




long FUN_100326d90(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (DAT_101e46a98 != 0) {
    lVar1 = DAT_101e46a98 + 0x70;
  }
  return lVar1;
}




void FUN_100326da8(void)

{
  FUN_1003271e0(DAT_101e46a98);
  return;
}




void FUN_100326db4(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x2d) != '\0') {
    FUN_1003271e0(DAT_101e46a98);
    return;
  }
  return;
}




undefined8 FUN_100326dcc(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar3 = FUN_1004d2524(param_2);
  uVar4 = FUN_100015208(param_2,uVar3,0x12345678);
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar7 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar6 = *(long *)(param_1 + 0x38);
    if (*(uint *)(lVar6 + uVar7 * 8) != uVar4) {
      do {
        if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar7) {
          uVar2 = (uint)uVar7;
        }
        uVar7 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar6 + uVar7 * 8) != uVar4);
      if ((int)uVar7 == -1) {
        return 0;
      }
    }
    if (*(int *)(lVar6 + uVar7 * 8 + 4) != -1) {
      puVar5 = (undefined8 *)FUN_100326e9c((uint *)(param_1 + 0x30),&local_28);
      return *puVar5;
    }
  }
  return 0;
}




long FUN_100326e9c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100326f34:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_100326f34;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 8;
}




void FUN_100326f4c(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *(uint *)(param_2 + 0x30);
  lVar4 = *(long *)(param_2 + 0x38);
  uVar1 = 0;
  do {
    uVar5 = uVar1;
    if (uVar3 == uVar5) {
      return;
    }
    uVar1 = uVar5 + 1;
  } while (*(int *)(lVar4 + (ulong)uVar5 * 8 + 4) == -1);
  if (uVar3 + 1 == uVar5 + 1) {
    return;
  }
  do {
    if (*(int *)(*(long *)(*(long *)(param_2 + 0x50) +
                          (ulong)*(uint *)(lVar4 + (ulong)uVar5 * 8 + 4) * 8) + 0x40) == param_3) {
      FUN_100326578(param_1);
      uVar3 = *(uint *)(param_2 + 0x30);
    }
    uVar1 = uVar3;
    if (uVar3 <= uVar5 + 1) {
      uVar1 = uVar5 + 1;
    }
    do {
      uVar5 = uVar5 + 1;
      uVar2 = uVar1;
      if (uVar3 <= uVar5) break;
      uVar2 = uVar5;
    } while (*(int *)(*(long *)(param_2 + 0x38) + (ulong)uVar5 * 8 + 4) == -1);
    uVar5 = uVar2;
    if (uVar3 == uVar5) {
      return;
    }
    lVar4 = *(long *)(param_2 + 0x38);
  } while( true );
}




void FUN_100327024(undefined8 *param_1,uint *param_2)

{
  ulong uVar1;
  uint local_40 [2];
  void *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      FUN_100326f4c(local_40,DAT_101e46a98,*(undefined4 *)(*(long *)(param_2 + 2) + uVar1 * 4));
      FUN_1001f50a4(param_1,param_1[1],local_38,(void *)((long)local_38 + (ulong)local_40[0] * 8));
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  return;
}




void FUN_1003270b0(undefined8 param_1)

{
  FUN_100326f4c(DAT_101e46a98,param_1);
  return;
}




void FUN_1003270c0(undefined8 param_1)

{
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  
  local_30 = 0;
  local_28 = (void *)0x0;
  local_34 = 3;
  FUN_100327160(&local_30,&local_34);
  local_34 = 5;
  FUN_100327160(&local_30,&local_34);
  local_34 = 0;
  FUN_100327160(&local_30,&local_34);
  local_34 = 1;
  FUN_100327160(&local_30,&local_34);
  local_34 = 4;
  FUN_100327160(&local_30,&local_34);
  FUN_100327024(param_1,&local_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_100327160(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100327c18(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_1003271e0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    uVar3 = FUN_100166e1c(uVar2,1);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
  }
  return;
}




undefined * FUN_10032721c(int param_1)

{
  return (&PTR_s_player_101854b10)[param_1];
}




void FUN_10032722c(string *param_1,int param_2)

{
  size_t sVar1;
  undefined8 ****ppppuVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  undefined8 ***local_98;
  size_t local_90;
  byte local_81;
  undefined8 ***local_80;
  size_t local_78;
  undefined8 uStack_70;
  undefined8 ***local_68;
  size_t local_60;
  ulong uStack_58;
  
  FUN_10001549c(&local_98,"[");
  pcVar3 = (&PTR_s_player_101854b10)[param_2];
  local_78 = 0;
  uStack_70 = 0;
  local_80 = (undefined8 ****)0x0;
  if ((char)local_81 < '\0') {
    sVar1 = _strlen(pcVar3);
    uVar4 = local_90;
    ppppuVar5 = (undefined8 ****)local_98;
  }
  else {
    uVar4 = (ulong)local_81;
    sVar1 = _strlen(pcVar3);
    ppppuVar5 = &local_98;
  }
  uVar6 = uVar4 + sVar1;
  if (0xffffffffffffffef < uVar6) {
LAB_1003273fc:
                    /* WARNING: Subroutine does not return */
    FUN_10032781c();
  }
  if (uVar6 < 0x17) {
    ppppuVar2 = &local_80;
    uStack_70 = CONCAT17((char)uVar4,(undefined7)uStack_70);
  }
  else {
    uVar6 = uVar6 + 0x10 & 0xfffffffffffffff0;
    ppppuVar2 = operator_new(uVar6);
    uStack_70 = uVar6 | 0x8000000000000000;
    local_80 = ppppuVar2;
    local_78 = uVar4;
  }
  if (uVar4 != 0) {
    _memcpy(ppppuVar2,ppppuVar5,uVar4);
  }
  *(undefined1 *)((long)ppppuVar2 + uVar4) = 0;
  std::string::append((char *)&local_80,(ulong)pcVar3);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (undefined8 ****)0x0;
  ppppuVar5 = (undefined8 ****)local_80;
  sVar1 = local_78;
  if (-1 < (long)uStack_70) {
    ppppuVar5 = &local_80;
    sVar1 = uStack_70 >> 0x38;
  }
  if (0xffffffffffffffef < sVar1 + 1) goto LAB_1003273fc;
  if (sVar1 + 1 < 0x17) {
    ppppuVar2 = &local_68;
    uStack_58 = sVar1 << 0x38;
    if (sVar1 == 0) goto LAB_10032738c;
  }
  else {
    uVar4 = sVar1 + 0x11 & 0xfffffffffffffff0;
    ppppuVar2 = operator_new(uVar4);
    uStack_58 = uVar4 | 0x8000000000000000;
    local_68 = ppppuVar2;
    local_60 = sVar1;
  }
  _memcpy(ppppuVar2,ppppuVar5,sVar1);
LAB_10032738c:
  *(undefined1 *)((long)ppppuVar2 + sVar1) = 0;
  std::string::append((char *)&local_68,0x1013d45ce);
  std::string::string(param_1,(string *)&local_68);
  if ((long)uStack_58 < 0) {
    operator_delete(local_68);
  }
  if ((long)uStack_70 < 0) {
    operator_delete(local_80);
  }
  if ((char)local_81 < '\0') {
    operator_delete(local_98);
  }
  return;
}




char * FUN_100327400(int param_1)

{
  if (param_1 == 10) {
    return "";
  }
  return (&PTR_s_generic_quest_101854b60)[param_1];
}




void FUN_100327424(void)

{
  operator_new(0xe8);
  DAT_101e46a98 = FUN_100327828();
  operator_new(0x70);
  DAT_101e46aa0 = thunk_FUN_10030a46c();
  return;
}




void FUN_10032745c(void)

{
  if (DAT_101e46aa0 != (long *)0x0) {
    (**(code **)(*DAT_101e46aa0 + 8))();
  }
  DAT_101e46aa0 = (long *)0x0;
  if (DAT_101e46a98 != (long *)0x0) {
    (**(code **)(*DAT_101e46a98 + 8))();
  }
  DAT_101e46a98 = (long *)0x0;
  return;
}




void FUN_1003274ac(void)

{
  FUN_100325f64(DAT_101e46a98);
  FUN_1003271e0(DAT_101e46a98);
  return;
}




void FUN_1003274d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  uVar1 = FUN_10015d3ec();
  FUN_10001549c(local_48,param_1);
  FUN_10001549c(local_60,param_2);
  FUN_100166f70(uVar1,local_48,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




bool FUN_100327554(void)

{
  if (DAT_101e46a98 != 0) {
    return *(char *)(DAT_101e46a98 + 0x80) != '\0';
  }
  return false;
}




undefined8 FUN_100327578(void)

{
  return DAT_101e46aa0;
}




void FUN_100327584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014929e0;
  param_1[3] = &PTR_FUN_101492d88;
  thunk_FUN_10001653c(param_1 + 0x19);
  thunk_FUN_10001653c(param_1 + 0x15);
  thunk_FUN_10001653c(param_1 + 0x11);
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_1003278f0(param_1 + 6);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_100327604(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014929e0;
  param_1[3] = &PTR_FUN_101492d88;
  thunk_FUN_10001653c(param_1 + 0x19);
  thunk_FUN_10001653c(param_1 + 0x15);
  thunk_FUN_10001653c(param_1 + 0x11);
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_1003278f0(param_1 + 6);
  FUN_1004f0a9c(param_1 + 3);
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100327688(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_1014929e0;
  *param_1 = &PTR_FUN_101492d88;
  thunk_FUN_10001653c(param_1 + 0x16);
  thunk_FUN_10001653c(param_1 + 0x12);
  thunk_FUN_10001653c(param_1 + 0xe);
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_1003278f0(param_1 + 3);
  FUN_1004f0a9c(param_1);
  FUN_10014f51c(param_1 + -3);
  return;
}




void FUN_100327704(long param_1)

{
  FUN_100327604(param_1 + -0x18);
  return;
}




long FUN_10032770c(long param_1)

{
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  FUN_1001bca68(param_1 + 0x10);
  FUN_1003277b0(param_1,1);
  return param_1;
}




void FUN_1003277b0(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x58;
      do {
        lVar1 = thunk_FUN_100319ff4(lVar1);
        lVar1 = lVar1 + 0x58;
        lVar2 = lVar2 + -0x58;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10032781c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_100327828(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_FUN_1014929e0;
  param_1[3] = &PTR_FUN_101492d88;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  FUN_1000164dc(param_1 + 0x11);
  FUN_1000164dc(param_1 + 0x15);
  FUN_1000164dc(param_1 + 0x19);
  FUN_100016648(param_1 + 0x11,"QUESTS.DAILYQUESTS.COLLECT",0);
  FUN_100016648(param_1 + 0x15,"ACCOUNT.LEVEL_UP_REWARDS",0);
  FUN_100016648(param_1 + 0x19,"QUESTS.7DAYLOGIN.COLLECT",0);
  return param_1;
}




uint * FUN_1003278f0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_100327978(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint * FUN_1003279f4(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10031a13c(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x38,lVar2 + 0x38);
      FUN_10003330c(lVar1 + 0x50,lVar2 + 0x50);
      *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar2 + 0x68);
      lVar5 = lVar5 + 0x70;
    } while ((ulong)uVar3 * 0x70 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100327ab4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100327b1c(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_100327b1c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100327b9c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100327b9c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100327c18(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100327c94(void)

{
  undefined **local_298 [5];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  void *pvStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 auStack_218 [296];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  
  operator_new(0xc0);
  DAT_101e46aa8 = (long *)FUN_100327e0c();
  FUN_1004f1580(local_298);
  local_298[0] = &PTR_FUN_10145b860;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  pvStack_248 = (void *)0x0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  local_220 = 0;
  FUN_100168aa8(auStack_218);
  local_e0 = 0xffffffff;
  local_f0 = 0xffffffffffffffff;
  uStack_e8 = 0xffffffffffffffff;
  uStack_d4 = 0x3f4000003e800000;
  local_dc = 0;
  local_c4 = 0;
  local_cc = 0;
  local_bc = 0;
  local_b0 = 0xffffffff;
  local_b8 = 0xffffffffffffffff;
  uStack_a4 = 0x3f4000003e800000;
  local_ac = 0;
  local_94 = 0;
  local_9c = 0;
  local_8c = 0;
  (**(code **)(*DAT_101e46aa8 + 0x18))(DAT_101e46aa8,local_298);
  local_298[0] = &PTR_FUN_10145b860;
  FUN_10015613c(auStack_218);
  FUN_100156080(&uStack_240,1);
  if (pvStack_248 != (void *)0x0) {
    operator_delete__(pvStack_248);
    local_250 = 0;
    pvStack_248 = (void *)0x0;
  }
  FUN_100155f24(&uStack_260,1);
  FUN_100155eac(&local_270,1);
  FUN_1004f15a8(local_298);
  return;
}




void FUN_100327dcc(void)

{
  if (DAT_101e46aa8 != (long *)0x0) {
    (**(code **)(*DAT_101e46aa8 + 8))();
  }
  DAT_101e46aa8 = (long *)0x0;
  return;
}




undefined8 FUN_100327e00(void)

{
  return DAT_101e46aa8;
}




void FUN_100327e0c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_10014f4a0();
  *puVar2 = &PTR_thunk_FUN_100327ea8_101492db8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  lVar3 = 0x28;
  do {
    puVar1 = (undefined8 *)((long)puVar2 + lVar3);
    *puVar1 = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined8 *)((long)puVar1 + 0x14) = 0x3f4000003e800000;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0x765dc60f;
    lVar3 = lVar3 + 0x30;
  } while (puVar1 + 6 != puVar2 + 0x17);
  return;
}




void FUN_100327e78(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f4000003e800000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0x765dc60f;
  return;
}




void FUN_100327ea8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100327ea8_101492db8;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_100327ea8(void)

{
  FUN_100327ea8();
  return;
}




void FUN_100327ee8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100327ea8();
  operator_delete(pvVar1);
  return;
}




undefined1 FUN_100327efc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}




undefined1 FUN_100327f04(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb9);
}




undefined8 FUN_100327f0c(void)

{
  return 0xe;
}




undefined8 FUN_100327f14(void)

{
  return 8;
}




undefined8 FUN_100327f1c(void)

{
  return 10;
}




undefined8 FUN_100327f24(void)

{
  return 10;
}




long FUN_100327f2c(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x30 + 0x28;
}




void FUN_100327f3c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar1 = FUN_100328074(param_1,param_2 + 0x1b0,param_1 + 0x28);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  FUN_1003281ac(uVar1,param_2 + 0x1e0,param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x218);
  FUN_100102240("skillTier5v5",*(undefined4 *)(param_1 + 0x2c),1);
  FUN_100102240("eloTier5v5",*(undefined4 *)(param_1 + 0x28),1);
  FUN_100102240("skillTier3v3",*(undefined4 *)(param_1 + 0x5c),1);
  FUN_100102240("eloTier3v3",*(undefined4 *)(param_1 + 0x58),1);
  fVar3 = (float)*(int *)(param_1 + 0x2c);
  if ((float)*(int *)(param_1 + 0x2c) <= (float)*(int *)(param_1 + 0x5c)) {
    fVar3 = (float)*(int *)(param_1 + 0x5c);
  }
  FUN_100102240("highestSkillTier",(int)fVar3,1);
  fVar3 = (float)*(int *)(param_1 + 0x28);
  if ((float)*(int *)(param_1 + 0x28) <= (float)*(int *)(param_1 + 0x58)) {
    fVar3 = (float)*(int *)(param_1 + 0x58);
  }
  FUN_100102240("highestEloTier",(int)fVar3,1);
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  return;
}




void FUN_100328074(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_10012c8f0("new5v5RankedDataEloBucket",0);
  uVar3 = *(undefined4 *)(param_2 + 4);
  param_3[1] = uVar1;
  param_3[2] = uVar3;
  iVar2 = FUN_10012c8f0("new5v5RankedDataEloBucket",0);
  param_3[7] = (float)iVar2;
  uVar3 = FUN_10012c8f0("new5v5RankedDataEloBucket",0);
  *param_3 = uVar3;
  fVar4 = *(float *)(param_2 + 0x10);
  fVar5 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0xc),0x3f800000);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_3[3] = fVar5;
  param_3[4] = fVar4;
  fVar6 = *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 0x18);
  param_3[5] = fVar6;
  param_3[6] = fVar5;
  param_3[8] = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_2 + 0x28);
  if ((fVar4 < 0.0) || (1.0 <= fVar4)) {
    param_3[4] = 0x3dcccccd;
    fVar4 = 0.1;
  }
  if ((fVar6 <= 0.0) || (1.0 <= fVar6)) {
    param_3[5] = 0x3ecccccd;
    fVar6 = 0.4;
  }
  if ((fVar5 <= 0.0) || (1.0 <= fVar5)) {
    param_3[6] = 0x3f333333;
    fVar5 = 0.7;
  }
  if (fVar6 <= fVar4) {
    fVar6 = fVar4 + 0.1;
    param_3[5] = fVar6;
  }
  if (fVar5 <= fVar6) {
    param_3[6] = 0x3f800000;
  }
  return;
}




void FUN_1003281ac(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_10012c8f0("new3v3RankedDataEloBucket",0);
  uVar3 = *(undefined4 *)(param_2 + 4);
  param_3[1] = uVar1;
  param_3[2] = uVar3;
  iVar2 = FUN_10012c8f0("new3v3RankedDataEloBucket",0);
  param_3[7] = (float)iVar2;
  uVar3 = FUN_10012c8f0("new3v3RankedDataEloBucket",0);
  *param_3 = uVar3;
  fVar4 = *(float *)(param_2 + 0x10);
  fVar5 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0xc),0x3f800000);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_3[3] = fVar5;
  param_3[4] = fVar4;
  fVar6 = *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 0x18);
  param_3[5] = fVar6;
  param_3[6] = fVar5;
  param_3[8] = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_2 + 0x28);
  if ((fVar4 < 0.0) || (1.0 <= fVar4)) {
    param_3[4] = 0x3dcccccd;
    fVar4 = 0.1;
  }
  if ((fVar6 <= 0.0) || (1.0 <= fVar6)) {
    param_3[5] = 0x3ecccccd;
    fVar6 = 0.4;
  }
  if ((fVar5 <= 0.0) || (1.0 <= fVar5)) {
    param_3[6] = 0x3f333333;
    fVar5 = 0.7;
  }
  if (fVar6 <= fVar4) {
    fVar6 = fVar4 + 0.1;
    param_3[5] = fVar6;
  }
  if (fVar5 <= fVar6) {
    param_3[6] = 0x3f800000;
  }
  return;
}




void FUN_1003282e4(void)

{
  if (DAT_101e46ab0 == 0) {
    operator_new(0x230);
    DAT_101e46ab0 = FUN_100328358();
  }
  return;
}




void FUN_100328318(void)

{
  if (DAT_101e46ab0 != (long *)0x0) {
    (**(code **)(*DAT_101e46ab0 + 8))();
    DAT_101e46ab0 = (long *)0x0;
  }
  return;
}




undefined8 FUN_10032834c(void)

{
  return DAT_101e46ab0;
}




long FUN_100328358(long param_1)

{
  undefined8 *puVar1;
  long local_30;
  code *pcStack_28;
  
  puVar1 = (undefined8 *)FUN_1004f0a20();
  *puVar1 = &PTR_thunk_FUN_1003284b4_101493150;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1004f1580(puVar1 + 9);
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_101493180;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 **)(param_1 + 0xa0) = (undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 **)(param_1 + 0xd0) = (undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_1004f1580(param_1 + 0xf0);
  *(undefined ***)(param_1 + 0xf0) = &PTR_FUN_1014931b0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_1004f1580(param_1 + 0x150);
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_10145bb90;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 **)(param_1 + 0x1b0) = (undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(long *)(param_1 + 0x1c8) = param_1 + 0x1d0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 **)(param_1 + 0x1e0) = (undefined8 *)(param_1 + 0x1e8);
  *(long *)(param_1 + 0x1f8) = param_1 + 0x200;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x225) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  pcStack_28 = FUN_10032982c;
  local_30 = param_1;
  FUN_100643618(0xcd,&local_30,0,1);
  return param_1;
}




void FUN_1003284b4(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1003284b4_101493150;
  pcStack_28 = FUN_10032982c;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if (*(char *)((long)param_1 + 0x227) < '\0') {
    operator_delete((void *)param_1[0x42]);
  }
  FUN_10032902c(param_1 + 0x3f,param_1[0x40]);
  FUN_10032902c(param_1 + 0x3c,param_1[0x3d]);
  FUN_10032906c(param_1 + 0x39,param_1[0x3a]);
  FUN_10032906c(param_1 + 0x36,param_1[0x37]);
  param_1[0x2a] = &PTR_FUN_10145bb90;
  if (*(char *)((long)param_1 + 0x1a7) < '\0') {
    operator_delete((void *)param_1[0x32]);
  }
  FUN_1004f15a8(param_1 + 0x2a);
  param_1[0x1e] = &PTR_FUN_1014931b0;
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    operator_delete((void *)param_1[0x26]);
  }
  FUN_1004f15a8(param_1 + 0x1e);
  param_1[9] = &PTR_FUN_101493180;
  FUN_10032906c(param_1 + 0x1a,param_1[0x1b]);
  FUN_10032906c(param_1 + 0x17,param_1[0x18]);
  FUN_10032902c(param_1 + 0x14,param_1[0x15]);
  FUN_10032902c(param_1 + 0x11,param_1[0x12]);
  FUN_1004f15a8(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1004f0a9c(param_1);
  return;
}




void FUN_100328608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014931b0;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100328644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101493180;
  FUN_10032906c(param_1 + 0x11,param_1[0x12]);
  FUN_10032906c(param_1 + 0xe,param_1[0xf]);
  FUN_10032902c(param_1 + 0xb,param_1[0xc]);
  FUN_10032902c(param_1 + 8,param_1[9]);
  FUN_1004f15a8(param_1);
  return;
}




void thunk_FUN_1003284b4(void)

{
  FUN_1003284b4();
  return;
}




void FUN_1003286a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003284b4();
  operator_delete(pvVar1);
  return;
}




undefined1 FUN_1003286b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22c);
}




void FUN_1003286bc(long param_1)

{
  if (*(char *)(param_1 + 0x22c) != '\0') {
    return;
  }
  FUN_1003286cc();
  return;
}




void FUN_1003286cc(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if ((iVar1 != 0) && (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) {
    FUN_1004f0248(param_1 + 0x48);
    return;
  }
  return;
}




bool FUN_100328708(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,*param_2);
  lVar1 = FUN_100329858(param_1 + 0x1c8,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1 + 0x1d0 != lVar1;
}




ulong FUN_100328764(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *local_38 [2];
  char local_21;
  
  if (*(int *)(param_2 + 4) != 0) {
    FUN_10001549c(local_38,*param_2);
    lVar1 = FUN_100329858(param_1 + 0x1b0,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    return (ulong)(param_1 + 0x1b8 != lVar1);
  }
  uVar2 = FUN_10015d3ec();
  uVar3 = FUN_1001665d4(uVar2,param_2[2],1);
  return uVar3;
}




void FUN_1003287e8(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  long *plVar14;
  
  iVar4 = FUN_1004f1698(param_1 + 0x48);
  if ((iVar4 != 0) && (iVar4 = FUN_1004f1680(param_1 + 0x48), iVar4 != 0)) {
    FUN_1003290c8(param_1 + 0x1c8,*(undefined8 *)(param_1 + 0xb8),param_1 + 0xc0);
    FUN_1003290c8(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0xd0),param_1 + 0xd8);
    FUN_10032902c(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(long *)(param_1 + 0x1e0) = param_1 + 0x1e8;
    plVar14 = *(long **)(param_1 + 0x88);
    while (plVar14 != (long *)(param_1 + 0x90)) {
      FUN_1003295ac(param_1 + 0x1e0,param_1 + 0x1e8,(long)plVar14 + 0x1c,(long)plVar14 + 0x1c);
      plVar7 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        plVar7 = plVar14 + 2;
        bVar3 = *(long **)*plVar7 != plVar14;
        plVar14 = (long *)*plVar7;
        if (bVar3) {
          do {
            lVar8 = *plVar7;
            plVar7 = (long *)(lVar8 + 0x10);
            plVar14 = (long *)*plVar7;
          } while (*plVar14 != lVar8);
        }
      }
      else {
        do {
          plVar14 = plVar7;
          plVar7 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    }
    FUN_10032902c(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(long *)(param_1 + 0x1f8) = param_1 + 0x200;
    *(undefined8 *)(param_1 + 0x200) = 0;
    plVar14 = *(long **)(param_1 + 0xa0);
    while (plVar14 != (long *)(param_1 + 0xa8)) {
      FUN_1003295ac(param_1 + 0x1f8,param_1 + 0x200,(long)plVar14 + 0x1c,(long)plVar14 + 0x1c);
      plVar7 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        plVar7 = plVar14 + 2;
        bVar3 = *(long **)*plVar7 != plVar14;
        plVar14 = (long *)*plVar7;
        if (bVar3) {
          do {
            lVar8 = *plVar7;
            plVar7 = (long *)(lVar8 + 0x10);
            plVar14 = (long *)*plVar7;
          } while (*plVar14 != lVar8);
        }
      }
      else {
        do {
          plVar14 = plVar7;
          plVar7 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    }
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x22c) = 1;
    uVar6 = FUN_10015d3ec();
    FUN_100163470(uVar6,param_1 + 0x70);
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x20);
      do {
        if ((code *)*puVar12 == (code *)0x0) {
          (*(code *)puVar12[3])(puVar12[2],param_1);
        }
        else {
          (*(code *)*puVar12)(param_1);
        }
        puVar12 = puVar12 + 4;
      } while (puVar12 !=
               (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
    }
    if (*(long **)(param_1 + 0x1b0) == (long *)(param_1 + 0x1b8)) {
      iVar10 = 0;
      iVar4 = 0;
      iVar11 = 0;
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar11 = 0;
      iVar4 = 0;
      iVar10 = 0;
      plVar14 = *(long **)(param_1 + 0x1b0);
      do {
        lVar8 = FUN_10032c624(plVar14 + 4);
        iVar1 = iVar13;
        iVar2 = iVar11;
        if (lVar8 != 0) {
          iVar5 = FUN_10032c988();
          if (iVar5 == 0) {
            iVar5 = *(int *)(lVar8 + 0xa0);
            if (iVar5 == 1) {
              iVar1 = iVar13 + 1;
            }
            if (iVar5 == 2) {
              iVar1 = iVar13;
              iVar2 = iVar11 + 1;
            }
            if (iVar5 == 3) {
              iVar10 = iVar10 + 1;
              iVar1 = iVar13;
              iVar2 = iVar11;
            }
          }
          else {
            iVar4 = iVar4 + 1;
          }
        }
        iVar11 = iVar2;
        iVar13 = iVar1;
        plVar7 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          plVar7 = plVar14 + 2;
          plVar9 = (long *)*plVar7;
          if ((long *)*plVar9 != plVar14) {
            do {
              lVar8 = *plVar7;
              plVar7 = (long *)(lVar8 + 0x10);
              plVar9 = (long *)*plVar7;
            } while (*plVar9 != lVar8);
          }
        }
        else {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar14 = plVar9;
      } while (plVar9 != (long *)(param_1 + 0x1b8));
    }
    FUN_100102240("numLimitedSkinsUnlocked",iVar4,1);
    FUN_100102240("numTier1SkinsUnlocked",iVar13,1);
    FUN_100102240("numTier2SkinsUnlocked",iVar11,1);
    FUN_100102240("numTier3SkinsUnlocked",iVar10,1);
    return;
  }
  return;
}




void FUN_100328b10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_1004f1698(param_1 + 0xf0);
  if ((iVar1 != 0) && (iVar1 = FUN_1004f1680(param_1 + 0xf0), iVar1 != 0)) {
    if (*(char *)(param_1 + 0x148) != '\0') {
      FUN_1003298d8(param_1 + 0x1c8,param_1 + 0x130);
    }
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x120);
    uVar2 = FUN_10015d3ec();
    FUN_100163470(uVar2,param_1 + 0x118);
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      do {
        if ((code *)*puVar3 == (code *)0x0) {
          (*(code *)puVar3[3])(puVar3[2],param_1);
        }
        else {
          (*(code *)*puVar3)(param_1);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
      do {
        if ((code *)*puVar3 == (code *)0x0) {
          (*(code *)puVar3[3])(puVar3[2],param_1);
        }
        else {
          (*(code *)*puVar3)(param_1);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x38) * 0x20));
    }
  }
  return;
}




void FUN_100328bfc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_1004f1698(param_1 + 0x150);
  if ((iVar1 != 0) && (iVar1 = FUN_1004f1680(param_1 + 0x150), iVar1 != 0)) {
    if (*(char *)(param_1 + 0x1a8) != '\0') {
      FUN_100329a40(param_1 + 0x1b0,param_1 + 400,param_1 + 400);
    }
    if (*(char *)(param_1 + 0x1a9) == '\0') {
      FUN_1003298d8(param_1 + 0x1c8,param_1 + 400);
    }
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x180);
    uVar2 = FUN_10015d3ec();
    FUN_100163470(uVar2,param_1 + 0x178);
    uVar2 = FUN_10015d3ec();
    FUN_100166fcc(uVar2,param_1 + 400);
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      do {
        if ((code *)*puVar3 == (code *)0x0) {
          (*(code *)puVar3[3])(puVar3[2],param_1);
        }
        else {
          (*(code *)*puVar3)(param_1);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      do {
        if ((code *)*puVar3 == (code *)0x0) {
          (*(code *)puVar3[3])(puVar3[2],param_1);
        }
        else {
          (*(code *)*puVar3)(param_1);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20));
    }
  }
  return;
}




void FUN_100328d0c(long param_1,string *param_2)

{
  FUN_1004f0260(param_2,param_1 + 0xf0);
  std::string::operator=((string *)(param_1 + 0x210),param_2);
  return;
}




void FUN_100328d40(long param_1,string *param_2)

{
  FUN_1004f06b0(param_2,param_1 + 0x150);
  std::string::operator=((string *)(param_1 + 0x210),param_2);
  return;
}




void FUN_100328d74(long param_1)

{
  *(undefined1 *)(param_1 + 0x22c) = 0;
  FUN_1003286cc();
  return;
}




undefined4 FUN_100328d7c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}




undefined4 FUN_100328d84(long param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x1e8);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    lVar4 = param_1 + 0x1e8;
    do {
      if (iVar1 <= *(int *)(lVar3 + 0x1c)) {
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)(*(int *)(lVar3 + 0x1c) < iVar1) * 8);
    } while (lVar3 != 0);
    if ((lVar4 != param_1 + 0x1e8) && (*(int *)(lVar4 + 0x1c) <= iVar1)) {
      puVar2 = (undefined4 *)FUN_100328dec(param_1 + 0x1e0);
      return *puVar2;
    }
  }
  return 0;
}




long * FUN_100328dec(long param_1,int *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    do {
      while (*(int *)((long)plVar1 + 0x1c) <= *param_2) {
        if (*param_2 <= *(int *)((long)plVar1 + 0x1c)) {
          if (plVar1 != (long *)0x0) {
            return plVar1 + 4;
          }
          goto LAB_100328e3c;
        }
        plVar1 = (long *)plVar1[1];
        if (plVar1 == (long *)0x0) goto LAB_100328e3c;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
LAB_100328e3c:
                    /* WARNING: Subroutine does not return */
  FUN_100329b70();
}




undefined4 FUN_100328e40(long param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x200);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    lVar4 = param_1 + 0x200;
    do {
      if (iVar1 <= *(int *)(lVar3 + 0x1c)) {
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)(*(int *)(lVar3 + 0x1c) < iVar1) * 8);
    } while (lVar3 != 0);
    if ((lVar4 != param_1 + 0x200) && (*(int *)(lVar4 + 0x1c) <= iVar1)) {
      puVar2 = (undefined4 *)FUN_100328dec(param_1 + 0x1f8);
      return *puVar2;
    }
  }
  return 0;
}




void FUN_100328ea8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_100329a40(param_1 + 0x1b0,param_2,param_2);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_1);
      }
      else {
        (*(code *)*puVar1)(param_1);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
  }
  return;
}




void FUN_100328f14(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_100329a40(param_1 + 0x1c8,param_2,param_2);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_1);
      }
      else {
        (*(code *)*puVar1)(param_1);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
  }
  return;
}




void FUN_100328f80(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101493180;
  FUN_10032906c(param_1 + 0x11,param_1[0x12]);
  FUN_10032906c(param_1 + 0xe,param_1[0xf]);
  FUN_10032902c(param_1 + 0xb,param_1[0xc]);
  FUN_10032902c(param_1 + 8,param_1[9]);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100328fdc(void)

{
  return 0x3a;
}




void FUN_100328fe4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014931b0;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100329024(void)

{
  return 0x3b;
}




void FUN_10032902c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10032902c(param_1,*param_2);
    FUN_10032902c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10032906c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10032906c(param_1,*param_2);
    FUN_10032906c(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1003290bc(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1003290c8(long *param_1,long *param_2,long *param_3)

{
  string *this;
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *local_68;
  long local_60;
  long local_58;
  
  if (param_1[2] != 0) {
    local_60 = *param_1;
    plVar4 = param_1 + 1;
    *param_1 = (long)plVar4;
    *(undefined8 *)(*plVar4 + 0x10) = 0;
    param_1[2] = 0;
    *plVar4 = 0;
    lVar5 = *(long *)(local_60 + 8);
    if (lVar5 != 0) {
      local_60 = lVar5;
    }
    local_68 = param_1;
    FUN_1003292c0(&local_68);
    if ((local_58 != 0) && (plVar6 = param_2, param_2 != param_3)) {
      do {
        lVar5 = local_58;
        this = (string *)(local_58 + 0x20);
        std::string::operator=(this,(string *)(plVar6 + 4));
        plVar7 = (long *)*plVar4;
        plVar3 = plVar4;
        while (plVar8 = plVar3, plVar7 != (long *)0x0) {
          while (plVar8 = plVar7, iVar2 = FUN_100329374(this,plVar8 + 4), iVar2 == 0) {
            plVar7 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              plVar3 = plVar8 + 1;
              goto LAB_100329198;
            }
          }
          plVar3 = plVar8;
          plVar7 = (long *)*plVar8;
        }
LAB_100329198:
        FUN_100329320(param_1,plVar8,plVar3,lVar5);
        FUN_1003292c0(&local_68);
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar3 = plVar6 + 2;
          param_2 = (long *)*plVar3;
          if ((long *)*param_2 != plVar6) {
            do {
              lVar5 = *plVar3;
              plVar3 = (long *)(lVar5 + 0x10);
              param_2 = (long *)*plVar3;
            } while (*param_2 != lVar5);
          }
        }
        else {
          do {
            param_2 = plVar3;
            plVar3 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        plVar6 = param_2;
      } while (local_58 != 0 && param_2 != param_3);
    }
    plVar4 = local_68;
    FUN_10032906c(local_68,local_58);
    lVar5 = local_60;
    if (local_60 != 0) {
      for (; *(long *)(lVar5 + 0x10) != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      }
      FUN_10032906c(plVar4);
    }
  }
  while (param_2 != param_3) {
    FUN_1003293f4(param_1,param_2 + 4);
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar4 = param_2 + 2;
      bVar1 = *(long **)*plVar4 != param_2;
      param_2 = (long *)*plVar4;
      if (bVar1) {
        do {
          lVar5 = *plVar4;
          plVar4 = (long *)(lVar5 + 0x10);
          param_2 = (long *)*plVar4;
        } while (*param_2 != lVar5);
      }
    }
    else {
      do {
        param_2 = plVar4;
        plVar4 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}




void FUN_1003292c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[2];
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      if (puVar2 == puVar3) {
        *puVar1 = 0;
        while (puVar3 = (undefined8 *)puVar1[1], (undefined8 *)puVar1[1] != (undefined8 *)0x0) {
          do {
            puVar1 = puVar3;
            puVar3 = (undefined8 *)*puVar1;
          } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
        }
      }
      else {
        puVar1[1] = 0;
        while (puVar2 != (undefined8 *)0x0) {
          do {
            puVar1 = puVar2;
            puVar2 = (undefined8 *)*puVar1;
          } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
          puVar2 = (undefined8 *)puVar1[1];
        }
      }
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}




void FUN_100329320(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




uint FUN_100329374(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_1003293e4;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_1003293e4:
  return uVar8 >> 0x1f;
}




long FUN_1003293f4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long local_48 [3];
  
  FUN_1003294a0(local_48);
  lVar2 = local_48[0];
  plVar5 = (long *)(param_1 + 8);
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    lVar1 = local_48[0] + 0x20;
    plVar3 = (long *)*plVar5;
    do {
      while (plVar5 = plVar3, iVar4 = FUN_100329374(lVar1,plVar5 + 4), iVar4 != 0) {
        plVar6 = plVar5;
        plVar3 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_100329468;
      }
      plVar3 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar6 = plVar5 + 1;
  }
LAB_100329468:
  FUN_100329320(param_1,plVar5,plVar6,lVar2);
  lVar2 = local_48[0];
  local_48[0] = 0;
  FUN_100329560(local_48);
  return lVar2;
}




void FUN_1003294a0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = operator_new(0x38);
  *param_1 = pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
    uVar3 = param_3[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1003290bc();
    }
    param_3 = (undefined8 *)*param_3;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar3 < 0x17) {
    pvVar2 = (void *)((long)pvVar1 + 0x20);
    *(char *)((long)pvVar1 + 0x37) = (char)uVar3;
    if (uVar3 == 0) goto LAB_10032953c;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar4);
    *(ulong *)((long)pvVar1 + 0x28) = uVar3;
    *(ulong *)((long)pvVar1 + 0x30) = uVar4 | 0x8000000000000000;
    *(void **)((long)pvVar1 + 0x20) = pvVar2;
  }
  _memcpy(pvVar2,param_3,uVar3);
LAB_10032953c:
  *(undefined1 *)((long)pvVar2 + uVar3) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}




undefined8 * FUN_100329560(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && (*(char *)((long)pvVar1 + 0x37) < '\0')) {
      operator_delete(*(void **)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
  }
  return param_1;
}




undefined1  [16]
FUN_1003295ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_100329630(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x28);
    *(undefined8 *)((long)pvVar3 + 0x1c) = *param_4;
    FUN_100329770(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_100329630(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 + 1 != param_2) {
    iVar1 = *param_5;
    if (*(int *)((long)param_2 + 0x1c) <= iVar1) {
      if (iVar1 <= *(int *)((long)param_2 + 0x1c)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 == param_1 + 1) || (iVar1 < *(int *)((long)plVar4 + 0x1c))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar4;
          return plVar4;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_100329754;
    }
  }
  plVar4 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar2 = plVar4;
    if (plVar4 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar5 = *plVar3;
          plVar3 = (long *)(lVar5 + 0x10);
        } while (*(long *)*plVar3 == lVar5);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    if (*param_5 <= *(int *)((long)plVar3 + 0x1c)) {
LAB_100329754:
      plVar3 = (long *)FUN_1003297c4(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar4 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




void FUN_100329770(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_1003297c4(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < *(int *)((long)plVar3 + 0x1c)) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= *(int *)((long)plVar3 + 0x1c)) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




void FUN_10032982c(undefined8 param_1)

{
  FUN_1003287e8();
  FUN_100328b10(param_1);
  FUN_100328bfc(param_1);
  return;
}




long * FUN_100329858(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_100329374(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_100329374(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




bool FUN_1003298d8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_10032991c();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    FUN_10032999c(param_1,lVar2);
  }
  return bVar1;
}




long * FUN_10032991c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_100329374(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_100329374(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




long * FUN_10032999c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete(*(void **)((long)param_2 + 0x20));
  }
  operator_delete(param_2);
  return plVar3;
}




undefined1  [16] FUN_100329a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_50 [3];
  undefined8 local_38;
  
  plVar2 = (long *)FUN_100329acc(param_1,&local_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1003294a0(local_50,param_1,param_3);
    FUN_100329320(param_1,local_38,plVar2,local_50[0]);
    lVar3 = local_50[0];
    local_50[0] = 0;
    FUN_100329560(local_50);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_100329acc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_100329374(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_100329374(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_100329b70(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_100329b7c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar2 = param_2[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_100329c2c();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100329c04;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar3);
    param_1[1] = uVar2;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,param_2,uVar2);
LAB_100329c04:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  return param_1;
}




undefined8 * FUN_100329c28(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar2 = param_2[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_100329c2c();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100329c04;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar3);
    param_1[1] = uVar2;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,param_2,uVar2);
LAB_100329c04:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  return param_1;
}




void FUN_100329c2c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100329c38(void)

{
  void *pvVar1;
  
  operator_new(0x38);
  DAT_101d23888 = FUN_100329ce0();
  pvVar1 = operator_new(0x40);
  FUN_1004e4464(pvVar1,0);
  DAT_101e46ab8 = pvVar1;
  return;
}




void FUN_100329c80(void)

{
  pthread_mutex_t *ppVar1;
  
  if (DAT_101d23888 != (long *)0x0) {
    (**(code **)(*DAT_101d23888 + 8))();
  }
  ppVar1 = DAT_101e46ab8;
  DAT_101d23888 = (long *)0x0;
  if (DAT_101e46ab8 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_destroy(DAT_101e46ab8);
    operator_delete(ppVar1);
  }
  DAT_101e46ab8 = (pthread_mutex_t *)0x0;
  return;
}




undefined8 FUN_100329cd4(void)

{
  return DAT_101d23888;
}




undefined8 * FUN_100329ce0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_100329d50_1014931e0;
  FUN_1004f1580(param_1 + 1);
  param_1[1] = &PTR_thunk_FUN_1004f15a8_101493200;
  iVar1 = FUN_10052b78c();
  if (iVar1 != 0) {
    pcStack_28 = thunk_FUN_100329dc4;
    local_30 = param_1;
    FUN_100643618(0x3dcccccd,&local_30,0,1);
  }
  return param_1;
}




undefined8 * FUN_100329d50(undefined8 *param_1)

{
  int iVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_100329d50_1014931e0;
  iVar1 = FUN_10052b78c();
  if (iVar1 != 0) {
    pcStack_28 = thunk_FUN_100329dc4;
    local_30 = param_1;
    FUN_100643a8c(&local_30);
  }
  FUN_1004f15a8(param_1 + 1);
  return param_1;
}




void thunk_FUN_100329d50(void)

{
  FUN_100329d50();
  return;
}




void FUN_100329db0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100329d50();
  operator_delete(pvVar1);
  return;
}




void FUN_100329dc4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **local_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 local_38;
  
  iVar1 = FUN_1004f1698(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
  _pthread_mutex_lock(DAT_101e46ab8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x18);
  local_60 = &PTR_thunk_FUN_1004f15a8_101493200;
  local_58 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  _pthread_mutex_unlock(DAT_101e46ab8);
  iVar1 = FUN_1004f1680(&local_60);
  if (iVar1 != 0) {
    if ((int)local_38 - 2U < 2) {
      uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
      pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_WRONG_CREDENTIALS";
    }
    else {
      if ((int)local_38 == 4) {
        FUN_10052b83c(1);
        FUN_100223034();
        FUN_10012dd60();
        FUN_10014e160();
        FUN_10014e16c();
        goto LAB_100329ef8;
      }
      if ((int)local_38 == 1) {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_ALREADY_LINKED";
      }
      else {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_GENERIC_FAILURE";
      }
    }
    uVar4 = FUN_1004e0150(pcVar3,0);
    uVar5 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_BUTTON_TEXT",0);
    FUN_1001e3090(uVar2,uVar4,uVar5,param_1,thunk_FUN_100329f18);
  }
LAB_100329ef8:
  FUN_1004f15a8(&local_60);
  return;
}




void thunk_FUN_100329f18(void)

{
  FUN_100329f18();
  return;
}




void FUN_100329f18(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_10052b78c();
  if ((iVar1 != 0) && (uVar2 = FUN_10052b834(), (uVar2 & 1) == 0)) {
    FUN_100223034();
    FUN_100222fe8("");
    return;
  }
  return;
}




void FUN_100329f4c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  iVar3 = FUN_10052b78c();
  if ((iVar3 != 0) && (uVar4 = FUN_10052b834(), (uVar4 & 1) == 0)) {
    FUN_10014e6d4(local_48);
    FUN_10052b2d4(local_60);
    FUN_10052b794(local_78);
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    plVar2 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar2 = param_3;
    }
    FUN_1004ef128(local_48,local_60,local_78,plVar1,plVar2,param_1 + 8);
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_10032a00c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f15a8();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10032a020(void)

{
  return 4;
}




void thunk_FUN_100329dc4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = FUN_1004f1698(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
  _pthread_mutex_lock(DAT_101e46ab8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x18);
  ppuStack_60 = &PTR_thunk_FUN_1004f15a8_101493200;
  uStack_58 = 0;
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  _pthread_mutex_unlock(DAT_101e46ab8);
  iVar1 = FUN_1004f1680(&ppuStack_60);
  if (iVar1 != 0) {
    if ((int)uStack_38 - 2U < 2) {
      uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
      pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_WRONG_CREDENTIALS";
    }
    else {
      if ((int)uStack_38 == 4) {
        FUN_10052b83c(1);
        FUN_100223034();
        FUN_10012dd60();
        FUN_10014e160();
        FUN_10014e16c();
        goto LAB_100329ef8;
      }
      if ((int)uStack_38 == 1) {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_ALREADY_LINKED";
      }
      else {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_GENERIC_FAILURE";
      }
    }
    uVar4 = FUN_1004e0150(pcVar3,0);
    uVar5 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_BUTTON_TEXT",0);
    FUN_1001e3090(uVar2,uVar4,uVar5,param_1,thunk_FUN_100329f18);
  }
LAB_100329ef8:
  FUN_1004f15a8(&ppuStack_60);
  return;
}




void FUN_10032a02c(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = operator_new(0x68);
  lVar2 = FUN_10014f4a0();
  FUN_1004f0a20(lVar2 + 0x18);
  *puVar1 = &PTR_FUN_101493230;
  puVar1[3] = &PTR_FUN_1014935d0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  DAT_101e46ac0 = puVar1;
  return;
}




void FUN_10032a088(void)

{
  if (DAT_101e46ac0 != (long *)0x0) {
    (**(code **)(*DAT_101e46ac0 + 8))();
  }
  DAT_101e46ac0 = (long *)0x0;
  return;
}




undefined8 FUN_10032a0bc(void)

{
  return DAT_101e46ac0;
}




void FUN_10032a0c8(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_10032a660(param_1 + 0x50,0);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_10032a100(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_10032a660(param_1 + 0x38,0);
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}




void FUN_10032a138(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  void *local_100;
  undefined8 uStack_f8;
  long lStack_f0;
  void *local_e8;
  undefined8 local_e0;
  long lStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  int local_88 [2];
  void *local_80;
  undefined1 auStack_78 [8];
  long local_70;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_10032a660(param_1 + 0x50,0);
  FUN_100155c18(local_88,param_2 + 0x48);
  FUN_100155c7c(auStack_78,param_2 + 0x58);
  if (local_88[0] != 0) {
    uVar2 = 0;
    do {
      pvStack_b8 = (void *)0x0;
      local_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
      lStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      local_d0 = (void *)0x0;
      uStack_f8 = 0;
      local_100 = (void *)0x0;
      local_e8 = (void *)0x0;
      lStack_f0 = 0;
      lVar3 = local_70 + uVar2 * 0x90;
      std::string::operator=((string *)&local_100,(string *)(lVar3 + 0x18));
      std::string::operator=((string *)&local_e8,(string *)(lVar3 + 0x30));
      std::string::operator=((string *)&local_d0,(string *)(lVar3 + 0x48));
      std::string::operator=((string *)&pvStack_b8,(string *)(lVar3 + 0x60));
      uStack_98 = *(undefined8 *)(lVar3 + 0x80);
      local_a0 = *(undefined8 *)(lVar3 + 0x78);
      local_90 = *(undefined4 *)(lVar3 + 0x88);
      FUN_10032a2f8((undefined4 *)(param_1 + 0x40),&local_a0,&local_100);
      if (lStack_a8 < 0) {
        operator_delete(pvStack_b8);
      }
      if (local_c0 < 0) {
        operator_delete(local_d0);
      }
      if (lStack_d8 < 0) {
        operator_delete(local_e8);
      }
      if (lStack_f0 < 0) {
        operator_delete(local_100);
      }
      uVar1 = uVar2 + 1;
      uVar2 = uVar1 & 0xffffffff;
    } while (local_88[0] != (int)uVar1);
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20);
  }
  FUN_100156080(auStack_78,1);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




void FUN_10032a2f8(uint *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint local_34;
  
  local_34 = FUN_100015208(0,0,*param_2);
  lVar3 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar3 + uVar6 * 4) <= local_34) goto LAB_10032a360;
        iVar4 = (int)uVar6;
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_10032a360:
    uVar5 = (uint)uVar6;
    if ((int)(uint)uVar6 < (int)uVar2) {
      do {
        uVar5 = (uint)uVar6;
        if (local_34 <= *(uint *)(lVar3 + uVar6 * 4)) break;
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar5 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar3 + (long)(int)uVar5 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_10032a70c(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar5 * 0x78,param_3,param_3 + 0x78)
  ;
  return;
}




undefined8 FUN_10032a3d4(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  local_24 = param_2;
  iVar1 = FUN_10032a420(param_1 + 0x40,&local_24);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10032ac34(param_1 + 0x40,&local_24);
  }
  return uVar2;
}




bool FUN_10032a420(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) goto LAB_10032a478;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
      uVar5 = 0;
    }
LAB_10032a478:
    if ((int)uVar5 < (int)uVar1) {
      do {
        uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
        if (uVar3 <= uVar2) {
          return uVar2 == uVar3;
        }
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar2;
      } while (uVar1 != uVar2);
    }
  }
  return false;
}




void FUN_10032a4b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101493230;
  param_1[3] = &PTR_FUN_1014935d0;
  FUN_10032a660(param_1 + 10,1);
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_10032a51c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101493230;
  param_1[3] = &PTR_FUN_1014935d0;
  FUN_10032a660(param_1 + 10,1);
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10032a58c(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_101493230;
  *param_1 = &PTR_FUN_1014935d0;
  FUN_10032a660(param_1 + 7,1);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1004f0a9c(param_1);
  FUN_10014f51c(param_1 + -3);
  return;
}




void FUN_10032a5f4(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-3] = &PTR_FUN_101493230;
  *param_1 = &PTR_FUN_1014935d0;
  FUN_10032a660(param_1 + 7,1);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1004f0a9c(param_1);
  pvVar1 = (void *)FUN_10014f51c(param_1 + -3);
  operator_delete(pvVar1);
  return;
}




string * FUN_10032a70c(uint *param_1,string *param_2,string *param_3,string *param_4)

{
  long lVar1;
  string *psVar2;
  string *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  string *psVar11;
  long lVar12;
  string *psVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_3 != param_4) {
    uVar10 = ((long)param_4 - (long)param_3 >> 3) * -0x1111111111111111;
    psVar13 = *(string **)(param_1 + 2);
    uVar15 = ((long)param_2 - (long)psVar13 >> 3) * -0x1111111111111111;
    uVar4 = *param_1;
    uVar14 = (ulong)uVar4;
    uVar5 = param_1[1];
    uVar9 = (uint)uVar10;
    if (uVar5 - uVar4 < uVar9) {
      uVar4 = uVar4 + uVar9;
      uVar9 = 0;
      if (uVar5 != 0xffffffff) {
        uVar9 = uVar5 + (~uVar5 | 0xfffffff0) + 0x11;
      }
      if (uVar5 < 0x20) {
        uVar9 = uVar5 << 1;
      }
      uVar5 = uVar4;
      if (uVar4 <= uVar9) {
        uVar5 = uVar9;
      }
      pvVar8 = operator_new__((ulong)uVar5 * 0x78);
      if (psVar13 != param_2) {
        lVar12 = 0;
        do {
          lVar1 = (long)pvVar8 + lVar12;
          psVar11 = psVar13 + lVar12;
          FUN_10003330c(lVar1,psVar11);
          FUN_10003330c(lVar1 + 0x18,psVar11 + 0x18);
          FUN_10003330c(lVar1 + 0x30,psVar11 + 0x30);
          FUN_10003330c(lVar1 + 0x48,psVar11 + 0x48);
          uVar18 = *(undefined8 *)(psVar11 + 0x68);
          uVar17 = *(undefined8 *)(psVar11 + 0x60);
          *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(psVar11 + 0x70);
          *(undefined8 *)(lVar1 + 0x68) = uVar18;
          *(undefined8 *)(lVar1 + 0x60) = uVar17;
          lVar12 = lVar12 + 0x78;
        } while (psVar13 + lVar12 != param_2);
      }
      lVar12 = 0;
      uVar14 = uVar15 & 0xffffffff;
      do {
        lVar1 = (long)pvVar8 + lVar12 + uVar14 * 0x78;
        psVar13 = param_3 + lVar12;
        FUN_10003330c(lVar1,psVar13);
        FUN_10003330c(lVar1 + 0x18,psVar13 + 0x18);
        FUN_10003330c(lVar1 + 0x30,psVar13 + 0x30);
        FUN_10003330c(lVar1 + 0x48,psVar13 + 0x48);
        uVar17 = *(undefined8 *)(psVar13 + 0x60);
        *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(psVar13 + 0x68);
        *(undefined8 *)(lVar1 + 0x60) = uVar17;
        *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(psVar13 + 0x70);
        lVar12 = lVar12 + 0x78;
      } while (param_3 + lVar12 != param_4);
      psVar13 = (string *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x78);
      if (psVar13 != param_2) {
        lVar12 = 0;
        do {
          lVar1 = (long)pvVar8 + lVar12 + (uVar10 & 0xffffffff) * 0x78 + uVar14 * 0x78;
          psVar11 = param_2 + lVar12;
          FUN_10003330c(lVar1,psVar11);
          FUN_10003330c(lVar1 + 0x18,psVar11 + 0x18);
          FUN_10003330c(lVar1 + 0x30,psVar11 + 0x30);
          FUN_10003330c(lVar1 + 0x48,psVar11 + 0x48);
          uVar17 = *(undefined8 *)(psVar11 + 0x60);
          *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(psVar11 + 0x68);
          *(undefined8 *)(lVar1 + 0x60) = uVar17;
          *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(psVar11 + 0x70);
          lVar12 = lVar12 + 0x78;
        } while (param_2 + lVar12 != psVar13);
      }
      FUN_10032a660(param_1,1);
      *(void **)(param_1 + 2) = pvVar8;
      *param_1 = uVar4;
      param_1[1] = uVar5;
    }
    else {
      psVar11 = psVar13 + uVar14 * 0x78;
      uVar16 = ((long)psVar11 - (long)param_2 >> 3) * -0x1111111111111111;
      if (uVar9 < (uint)uVar16) {
        uVar10 = uVar10 & 0xffffffff;
        if (uVar10 != 0) {
          lVar12 = 0;
          do {
            psVar13 = psVar11 + lVar12;
            psVar2 = psVar11 + lVar12 + uVar10 * -0x78;
            FUN_10003330c(psVar13,psVar2);
            FUN_10003330c(psVar13 + 0x18,psVar2 + 0x18);
            FUN_10003330c(psVar13 + 0x30,psVar2 + 0x30);
            FUN_10003330c(psVar13 + 0x48,psVar2 + 0x48);
            uVar18 = *(undefined8 *)(psVar2 + 0x68);
            uVar17 = *(undefined8 *)(psVar2 + 0x60);
            *(undefined4 *)(psVar13 + 0x70) = *(undefined4 *)(psVar2 + 0x70);
            *(undefined8 *)(psVar13 + 0x68) = uVar18;
            *(undefined8 *)(psVar13 + 0x60) = uVar17;
            lVar12 = lVar12 + 0x78;
          } while (uVar10 * 0x78 - lVar12 != 0);
          uVar14 = (ulong)*param_1;
          psVar13 = *(string **)(param_1 + 2);
        }
        psVar11 = psVar13 + ((uVar14 - uVar10) * 0x78 - (long)param_2);
        if (psVar11 != (string *)0x0) {
          lVar12 = 0;
          do {
            lVar7 = lVar12 + uVar10 * 0x78;
            lVar1 = lVar12 + (uVar14 - uVar10) * 0x78;
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x78),psVar13 + lVar1 + -0x78);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x60),psVar13 + lVar1 + -0x60);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x48),psVar13 + lVar1 + -0x48);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x30),psVar13 + lVar1 + -0x30);
            uVar6 = *(undefined4 *)(psVar13 + lVar1 + -8);
            uVar17 = *(undefined8 *)(psVar13 + lVar1 + -0x18);
            *(undefined8 *)(param_2 + (long)(psVar11 + lVar7 + -0x10)) =
                 *(undefined8 *)(psVar13 + lVar1 + -0x10);
            *(undefined8 *)(param_2 + (long)(psVar11 + lVar7 + -0x18)) = uVar17;
            *(undefined4 *)(param_2 + (long)(psVar11 + lVar7 + -8)) = uVar6;
            lVar12 = lVar12 + -0x78;
          } while ((string *)-lVar12 != psVar11);
        }
        do {
          std::string::operator=(param_2,param_3);
          std::string::operator=(param_2 + 0x18,param_3 + 0x18);
          std::string::operator=(param_2 + 0x30,param_3 + 0x30);
          std::string::operator=(param_2 + 0x48,param_3 + 0x48);
          uVar6 = *(undefined4 *)(param_3 + 0x70);
          uVar17 = *(undefined8 *)(param_3 + 0x60);
          *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
          *(undefined8 *)(param_2 + 0x60) = uVar17;
          *(undefined4 *)(param_2 + 0x70) = uVar6;
          param_3 = param_3 + 0x78;
          param_2 = param_2 + 0x78;
        } while (param_3 != param_4);
      }
      else {
        if (psVar11 != param_2) {
          psVar13 = param_2;
          do {
            psVar2 = psVar13 + (uVar10 & 0xffffffff) * 0x78;
            FUN_10003330c(psVar2,psVar13);
            FUN_10003330c(psVar2 + 0x18,psVar13 + 0x18);
            FUN_10003330c(psVar2 + 0x30,psVar13 + 0x30);
            FUN_10003330c(psVar2 + 0x48,psVar13 + 0x48);
            uVar18 = *(undefined8 *)(psVar13 + 0x68);
            uVar17 = *(undefined8 *)(psVar13 + 0x60);
            *(undefined4 *)(psVar2 + 0x70) = *(undefined4 *)(psVar13 + 0x70);
            *(undefined8 *)(psVar2 + 0x68) = uVar18;
            *(undefined8 *)(psVar2 + 0x60) = uVar17;
            psVar13 = psVar13 + 0x78;
          } while (psVar13 != psVar11);
          uVar14 = (ulong)*param_1;
          psVar13 = *(string **)(param_1 + 2);
        }
        uVar16 = uVar16 & 0xffffffff;
        psVar11 = param_3 + uVar16 * 0x78;
        if (psVar11 != param_4) {
          lVar12 = 0;
          do {
            psVar2 = psVar13 + lVar12 + uVar14 * 0x78;
            psVar3 = psVar11 + lVar12;
            FUN_10003330c(psVar2,psVar3);
            FUN_10003330c(psVar2 + 0x18,psVar3 + 0x18);
            FUN_10003330c(psVar2 + 0x30,psVar3 + 0x30);
            FUN_10003330c(psVar2 + 0x48,psVar3 + 0x48);
            uVar18 = *(undefined8 *)(psVar3 + 0x68);
            uVar17 = *(undefined8 *)(psVar3 + 0x60);
            *(undefined4 *)(psVar2 + 0x70) = *(undefined4 *)(psVar3 + 0x70);
            *(undefined8 *)(psVar2 + 0x68) = uVar18;
            *(undefined8 *)(psVar2 + 0x60) = uVar17;
            lVar12 = lVar12 + 0x78;
          } while (psVar11 + lVar12 != param_4);
        }
        if (uVar16 != 0) {
          do {
            std::string::operator=(param_2,param_3);
            std::string::operator=(param_2 + 0x18,param_3 + 0x18);
            std::string::operator=(param_2 + 0x30,param_3 + 0x30);
            std::string::operator=(param_2 + 0x48,param_3 + 0x48);
            uVar6 = *(undefined4 *)(param_3 + 0x70);
            uVar17 = *(undefined8 *)(param_3 + 0x60);
            *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
            *(undefined8 *)(param_2 + 0x60) = uVar17;
            *(undefined4 *)(param_2 + 0x70) = uVar6;
            param_3 = param_3 + 0x78;
            param_2 = param_2 + 0x78;
          } while (param_3 != psVar11);
        }
      }
      *param_1 = *param_1 + uVar9;
      pvVar8 = *(void **)(param_1 + 2);
    }
    param_2 = (string *)((long)pvVar8 + (uVar15 & 0xffffffff) * 0x78);
  }
  return param_2;
}




long FUN_10032ac34(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)uVar1 * (ulong)uVar3;
    uVar6 = uVar5 >> 0x20;
    if (0 < (int)(uVar5 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar3) goto LAB_10032ac8c;
        iVar4 = (int)uVar6;
        uVar2 = iVar4 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_10032ac8c:
    uVar5 = uVar6;
    if ((int)uVar6 < (int)uVar1) {
      do {
        uVar5 = uVar6;
        if (uVar3 <= *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4)) break;
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != uVar2);
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 0x78;
}




void FUN_10032acd0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20));
  }
  return;
}




undefined4 FUN_10032ad3c(void)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  return *(undefined4 *)(lVar1 + 0x5454);
}




void FUN_10032ad58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101493600;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void FUN_10032ad94(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101493600;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10032add4(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined * FUN_10032ae04(void)

{
  return &DAT_101d23890;
}




string * FUN_10032ae10(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10001549c(local_38,PTR_s_all_101854bb0);
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




void FUN_10032ae6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *local_140;
  undefined8 local_138;
  void *pvStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  char local_100 [8];
  void *pvStack_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  
  uStack_78 = 0;
  local_80 = (void *)0x0;
  pvStack_88 = (void *)0x0;
  local_90 = 0;
  local_70 = 0;
  uStack_68 = 0x400;
  local_60 = 0;
  local_58 = 0;
  puVar1 = operator_new(0x28);
  *puVar1 = 0;
  puVar1[1] = 0x10000;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 3;
  local_d0 = (undefined8 ***)0x0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_2 = (undefined8 *)*param_2;
  }
  uVar4 = 0;
  do {
    uVar7 = uVar4;
    uVar4 = uVar7 + 1;
  } while (*(char *)((long)param_2 + uVar7) != '\0');
  local_a0 = puVar1;
  local_98 = puVar1;
  if ((uint)uVar7 < 0x10) {
    pppuVar2 = &local_d0;
    local_c0 = 0x700005;
    local_c8 = (ulong)(byte)(0xf - (char)uVar7) << 0x38;
  }
  else {
    local_c0 = 0x300005;
    local_c8 = CONCAT44(0xf000000,(uint)uVar7);
    pppuVar2 = (undefined8 ***)FUN_1000f9128(puVar1,uVar7 + 1 & 0xffffffff);
    local_d0 = pppuVar2;
  }
  _memcpy(pppuVar2,param_2,uVar7 & 0xffffffff);
  *(undefined1 *)((long)pppuVar2 + (uVar7 & 0xffffffff)) = 0;
  pvStack_130._0_4_ = 0x100005;
  local_140 = "GuildPushCooldown";
  local_138 = 0x11;
  FUN_10032b704(&local_b8,&local_140,&local_d0,puVar1);
  if (DAT_101e46ac8 == '\x01') {
    uVar3 = FUN_100316150();
    uVar4 = FUN_100316174(uVar3,0x19);
    local_100[0] = '\0';
    local_100[1] = '\0';
    local_100[2] = '\0';
    local_100[3] = '\0';
    local_100[4] = '\0';
    local_100[5] = '\0';
    local_100[6] = '\0';
    local_100[7] = '\0';
    pvStack_f8 = (void *)0x0;
    uVar6 = 0x101;
    if ((uVar4 & 1) != 0) {
      uVar6 = 0x102;
    }
    local_f0 = (void *)CONCAT44(local_f0._4_4_,uVar6);
    pvStack_130 = (void *)CONCAT44(pvStack_130._4_4_,0x100005);
    local_140 = "onboardingAssistantPreference";
    local_138 = 0x1d;
    FUN_10032b704(&local_b8,&local_140,local_100,puVar1);
  }
  pvStack_f8 = (void *)0x0;
  local_100[0] = '\0';
  local_100[1] = '\0';
  local_100[2] = '\0';
  local_100[3] = '\0';
  local_100[4] = '\0';
  local_100[5] = '\0';
  local_100[6] = '\0';
  local_100[7] = '\0';
  uStack_e8 = 0;
  local_f0 = (void *)0x0;
  local_e0 = 0;
  uStack_d8 = 0x100;
  local_140 = local_100;
  pvStack_130 = (void *)0x0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0;
  uStack_110 = 0x200;
  local_108 = 0;
  FUN_100110914(&local_b8,&local_140);
  uVar3 = FUN_100110e38(local_100);
  FUN_10001549c(param_1,uVar3);
  _free(local_128);
  if (pvStack_130 != (void *)0x0) {
    operator_delete(pvStack_130);
  }
  _free(local_f0);
  if (pvStack_f8 != (void *)0x0) {
    operator_delete(pvStack_f8);
  }
  if (local_98 != (undefined8 *)0x0) {
    pvVar5 = (void *)FUN_1000f7b54();
    operator_delete(pvVar5);
  }
  _free(local_80);
  if (pvStack_88 != (void *)0x0) {
    operator_delete(pvStack_88);
  }
  return;
}




void FUN_10032b0a0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar4 = param_2 + 0x30;
  lVar2 = FUN_1000e86c0(lVar4,"playerConfig");
  if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 == lVar2)
  goto LAB_10032b2ac;
  local_48 = 0x100005;
  local_58 = "playerConfig";
  uStack_50 = 0xc;
  lVar2 = FUN_1000e87dc(lVar4,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) goto LAB_10032b2ac;
  local_48 = 0x100005;
  local_58 = "playerConfig";
  uStack_50 = 0xc;
  plVar3 = (long *)FUN_1000e87dc(lVar4,&local_58);
  puVar5 = (undefined8 *)PTR_s_all_101854bb0;
  lVar4 = FUN_1000e86c0(plVar3,"GuildPushCooldown");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar4) {
    local_48 = 0x100005;
    local_58 = "GuildPushCooldown";
    uStack_50 = 0x11;
    lVar4 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "GuildPushCooldown";
      uStack_50 = 0x11;
      puVar5 = (undefined8 *)FUN_1000e87dc(plVar3,&local_58);
      if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
        puVar5 = (undefined8 *)*puVar5;
      }
    }
  }
  FUN_10001549c(&local_58,puVar5);
  std::string::operator=((string *)&DAT_101d23890,(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar4 = FUN_1000e86c0(plVar3,"onboardingAssistantPreference");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar4) {
    uVar6 = FUN_100316150();
    lVar4 = FUN_1000e86c0(plVar3,"onboardingAssistantPreference");
    if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar4) {
LAB_10032b260:
      bVar1 = false;
    }
    else {
      local_48 = 0x100005;
      local_58 = "onboardingAssistantPreference";
      uStack_50 = 0x1d;
      lVar4 = FUN_1000e87dc(plVar3,&local_58);
      if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_10032b260;
      local_48 = 0x100005;
      local_58 = "onboardingAssistantPreference";
      uStack_50 = 0x1d;
      lVar4 = FUN_1000e87dc(plVar3,&local_58);
      bVar1 = *(int *)(lVar4 + 0x10) == 0x102;
    }
    FUN_100316360(uVar6,0x19,bVar1);
    DAT_101e46ac8 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
LAB_10032b2ac:
  FUN_10032b2c8();
  return;
}




void FUN_10032b2c8(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10032b4b4();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_101d23890);
  }
  return;
}




void FUN_10032b310(void)

{
  DAT_101e46ac8 = 0;
  return;
}




void FUN_10032b31c(long param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_10015d3f8();
  if (iVar4 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_10015d3ec();
    bVar2 = *(char *)(lVar1 + 0x567c) != '\0';
  }
  if ((*(char *)(param_1 + 0x30) != '\0') && ((DAT_101e46ac8 & 1) == 0 && !bVar2)) {
    lVar1 = FUN_10015d3ec();
    if (*(uint *)(lVar1 + 0x55d0) < 4) {
      lVar1 = FUN_1001340f8();
      bVar2 = *(char *)(lVar1 + 0x39) != '\0';
    }
    else {
      uVar5 = FUN_100316150();
      bVar3 = FUN_100316174(uVar5,0x19);
      bVar2 = (bool)(bVar3 & 1);
    }
    uVar5 = FUN_100316150();
    FUN_100316360(uVar5,0x19,bVar2);
    DAT_101e46ac8 = 1;
  }
  return;
}




void FUN_10032b3c4(long param_1)

{
  FUN_10032b31c(param_1 + -0x18);
  return;
}




void FUN_10032b3cc(void)

{
  return;
}




void FUN_10032b3d0(void)

{
  return;
}




void FUN_10032b3d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = operator_new(0x38);
  lVar2 = FUN_1004f0a20();
  FUN_10014f4a0(lVar2 + 0x18);
  *puVar1 = &PTR_FUN_1014939c0;
  puVar1[3] = &PTR_FUN_101493a00;
  *(undefined1 *)(puVar1 + 6) = 0;
  DAT_101d238a8 = puVar1;
  return;
}




void FUN_10032b424(void)

{
  if (DAT_101d238a8 != (long *)0x0) {
    (**(code **)(*DAT_101d238a8 + 8))();
  }
  DAT_101d238a8 = (long *)0x0;
  return;
}




void FUN_10032b458(void)

{
  int iVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    FUN_10032ae6c(local_38,&DAT_101d23890);
    FUN_100166cd4(uVar2,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




undefined8 * FUN_10032b4b4(void)

{
  void *pvVar1;
  
  if (DAT_101e46ad0 == (undefined8 *)0x0) {
    DAT_101e46ad0 = operator_new(0x18);
    *DAT_101e46ad0 = 0;
    DAT_101e46ad0[1] = 0;
    *(undefined4 *)(DAT_101e46ad0 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e46ad8 = pvVar1;
  }
  return DAT_101e46ad0;
}




undefined8 * FUN_10032b50c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_10032b588_101493998;
  plVar5 = (long *)FUN_10032b4b4();
  ppVar4 = DAT_101e46ad8;
  _pthread_mutex_lock(DAT_101e46ad8);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_10032b588(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_10032b588_101493998;
  uVar2 = FUN_10032b4b4();
  ppVar1 = DAT_101e46ad8;
  _pthread_mutex_lock(DAT_101e46ad8);
  FUN_10032b5e8(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_10032b5e8(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_10032b588(void)

{
  FUN_10032b588();
  return;
}




void FUN_10032b64c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10032b588();
  operator_delete(pvVar1);
  return;
}




void FUN_10032b660(long param_1)

{
  FUN_10014f51c(param_1 + 0x18);
  FUN_1004f0a9c(param_1);
  return;
}




void FUN_10032b688(long param_1)

{
  void *pvVar1;
  
  FUN_10014f51c(param_1 + 0x18);
  pvVar1 = (void *)FUN_1004f0a9c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10032b6b4(long param_1)

{
  FUN_10014f51c();
  FUN_1004f0a9c(param_1 + -0x18);
  return;
}




void FUN_10032b6d8(long param_1)

{
  void *pvVar1;
  
  FUN_10014f51c();
  pvVar1 = (void *)FUN_1004f0a9c(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10032b700(void)

{
  return;
}




long * FUN_10032b704(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) < uVar2) {
    lVar3 = *param_1;
  }
  else {
    if (uVar2 == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x10;
      lVar3 = FUN_1000f9128(param_4,0x300);
    }
    else {
      uVar1 = uVar2 + (uVar2 + 1 >> 1);
      *(uint *)((long)param_1 + 0xc) = uVar1;
      lVar3 = FUN_10032b7e0(param_4,*param_1,(ulong)uVar2 * 0x30,(ulong)uVar1 * 0x30);
    }
    *param_1 = lVar3;
  }
  puVar4 = (undefined8 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x30);
  uVar5 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar5;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  lVar3 = *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30;
  uVar5 = *param_3;
  *(undefined8 *)(lVar3 + 0x20) = param_3[1];
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_3 + 2) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return param_1;
}




void * FUN_10032b7e0(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  void *pvVar2;
  ulong *puVar3;
  
  if (param_2 == (void *)0x0) {
    pvVar2 = (void *)FUN_1000f9128(param_1,param_4);
    return pvVar2;
  }
  if (param_4 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = param_2;
    if (param_3 <= param_4 && param_4 - param_3 != 0) {
      puVar3 = (ulong *)*param_1;
      if (((void *)((long)puVar3 + (puVar3[1] - param_3) + 0x18) == param_2) &&
         (uVar1 = puVar3[1] + ((param_4 - param_3) + 7 & 0xfffffffffffffff8), uVar1 <= *puVar3)) {
        puVar3[1] = uVar1;
      }
      else {
        pvVar2 = (void *)FUN_1000f9128(param_1,param_4);
        if (param_3 != 0) {
          _memcpy(pvVar2,param_2,param_3);
        }
      }
    }
  }
  return pvVar2;
}




void FUN_10032b88c(void)

{
  FUN_10032ae10(&DAT_101d23890);
  ___cxa_atexit(FUN_10032add4,&DAT_101d23890,0x100000000);
  return;
}




undefined8 * FUN_10032b8c8(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 FUN_10032b8f8(undefined8 param_1)

{
  FUN_1002697ac(param_1,1);
  return param_1;
}




undefined8 * FUN_10032b920(undefined8 *param_1)

{
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 FUN_10032b970(undefined8 param_1)

{
  FUN_10032f64c(param_1,1);
  return param_1;
}




long FUN_10032b998(long param_1)

{
  FUN_100330e10(param_1 + 0x10,1);
  FUN_100330d84(param_1,1);
  return param_1;
}




void FUN_10032b9d0(void)

{
  uint uVar1;
  
  FUN_100319e64();
  FUN_100143b0c();
  FUN_1000fd580();
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    FUN_100339b50();
  }
  FUN_100341ca8();
  FUN_100327424();
  FUN_100319254();
  return;
}




void FUN_10032ba00(void)

{
  ulong uVar1;
  
  FUN_1003192cc();
  FUN_10032745c();
  FUN_100341d0c();
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    FUN_100339b74();
  }
  FUN_1000fd5a4();
  FUN_100143b90();
  FUN_100319ee0();
  FUN_10032ba48(&DAT_101e46c88);
  FUN_10032bb28(&DAT_101e46cc8);
  return;
}




void FUN_10032ba48(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x18) + uVar3 * 8);
      if (puVar2 == (undefined8 *)0x0) goto LAB_10032bacc;
      if ((void *)puVar2[7] != (void *)0x0) {
        operator_delete__((void *)puVar2[7]);
        puVar2[6] = 0;
        puVar2[7] = 0;
      }
      if (*(char *)((long)puVar2 + 0x2f) < '\0') {
        operator_delete((void *)puVar2[3]);
      }
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        operator_delete((void *)*puVar2);
      }
      operator_delete(puVar2);
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
LAB_10032bacc:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x28) + uVar3 * 8) == 0) goto LAB_10032bb10;
      pvVar1 = (void *)FUN_100332200();
      operator_delete(pvVar1);
      *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
LAB_10032bb10:
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_10032bb28(uint *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xf8;
      do {
        lVar1 = FUN_100332324(lVar1);
        lVar1 = lVar1 + 0xf8;
        lVar2 = lVar2 + -0xf8;
      } while (lVar2 != 0);
    }
    *param_1 = 0;
  }
  FUN_1004e3004(param_1 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}




void FUN_10032bb84(void)

{
  FUN_10032bb98("*KindredSkinManifest*","build://Progression/KindredSkinManifest.def");
  return;
}




void FUN_10032bb98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




long FUN_10032bbf4(char *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)FUN_10032bb98("*KindredSkinManifest*",
                                 "build://Progression/KindredSkinManifest.def");
  puVar3 = *(undefined8 **)*plVar2;
  plVar2 = (long *)*plVar2;
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _strcmp((char *)*puVar3,param_1);
    if (iVar1 == 0) break;
    puVar3 = (undefined8 *)plVar2[1];
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}




long FUN_10032bc58(int *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int local_28 [2];
  
  plVar1 = (long *)FUN_10032bb98("*KindredSkinManifest*",
                                 "build://Progression/KindredSkinManifest.def");
  puVar2 = *(undefined8 **)*plVar1;
  plVar1 = (long *)*plVar1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_10034cb1c(local_28,*puVar2);
    if (local_28[0] == *param_1) break;
    puVar2 = (undefined8 *)plVar1[1];
    plVar1 = plVar1 + 1;
  }
  return *plVar1;
}




undefined8 FUN_10032bcd0(string *param_1)

{
  string *psVar1;
  undefined8 *******pppppppuVar2;
  string *psVar3;
  string *psVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *local_70 [2];
  char local_59;
  undefined8 ******local_58 [2];
  char local_41;
  
  uVar6 = *(ulong *)(param_1 + 8);
  psVar3 = *(string **)param_1;
  if (-1 < (char)param_1[0x17]) {
    uVar6 = (ulong)(byte)param_1[0x17];
    psVar3 = param_1;
  }
  if (9 < (long)uVar6) {
    psVar1 = psVar3 + uVar6;
    psVar4 = psVar3;
    do {
      psVar4 = _memchr(psVar4,99,uVar6 - 9);
      if (psVar4 == (string *)0x0) {
        return 0;
      }
      if (*(long *)psVar4 == 0x696b735f64726163 && *(short *)(psVar4 + 8) == 0x5f6e) {
        if (psVar4 == psVar1) {
          return 0;
        }
        if (psVar4 == psVar3) {
          std::string::string((string *)local_70,param_1,10,0xffffffffffffffff,(allocator *)param_1)
          ;
          std::string::string((string *)local_58,(string *)local_70);
          if (local_59 < '\0') {
            operator_delete(local_70[0]);
          }
          pppppppuVar2 = (undefined8 *******)local_58[0];
          if (-1 < local_41) {
            pppppppuVar2 = local_58;
          }
          uVar5 = FUN_10032bbf4(pppppppuVar2);
          if (local_41 < '\0') {
            operator_delete(local_58[0]);
            return uVar5;
          }
          return uVar5;
        }
        return 0;
      }
      psVar4 = psVar4 + 1;
      uVar6 = (long)psVar1 - (long)psVar4;
    } while (9 < (long)uVar6);
  }
  return 0;
}




long FUN_10032bdf8(char *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_10032bb98("*KindredSkinManifest*",
                                 "build://Progression/KindredSkinManifest.def");
  lVar3 = *(long *)*plVar2;
  plVar2 = (long *)*plVar2;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = _strcmp(*(char **)(lVar3 + 0x10),param_1);
    if ((iVar1 == 0) && (*(int *)(*plVar2 + 0x20) == 0)) break;
    lVar3 = plVar2[1];
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}




void FUN_10032be60(undefined8 param_1,long param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(param_1,&DAT_101d91650);
  if (*(int *)(param_2 + 0x20) == 0) {
    pcVar1 = "CHAR_INFO_DEFAULT_SKIN";
  }
  else {
    pcVar1 = *(char **)(param_2 + 0x18);
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1000153b4(param_1,uVar2);
  if (param_3 != 0) {
    if (*(char *)(param_2 + 0x34) == '\0') {
      if (*(char *)(param_2 + 0x35) == '\0') {
        return;
      }
      FUN_1004e3120(auStack_40," (");
      FUN_1004e372c(param_1,auStack_40);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      pcVar1 = "MENU_SKINS_SPECIAL_EDITION_SHORT_NAME";
    }
    else {
      FUN_1004e3120(auStack_40," (");
      FUN_1004e372c(param_1,auStack_40);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      pcVar1 = "MENU_SKINS_LIMITED_EDITION_SHORT_NAME";
    }
    uVar2 = FUN_1004e0150(pcVar1,0);
    FUN_1004e372c(param_1,uVar2);
    FUN_1004e3120(auStack_40,")");
    FUN_1004e372c(param_1,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_10032bf84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(param_1,&DAT_101d91650);
  lVar1 = FUN_10032bbf4(param_2);
  if (lVar1 != 0) {
    FUN_10032be60(auStack_40,lVar1,param_3);
    FUN_1000153b4(param_1,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_10032bff8(void)

{
  FUN_10032c00c("*KindredCardManifest*","build://Progression/KindredCardManifest.def");
  return;
}




void FUN_10032c00c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




long FUN_10032c068(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long lVar11;
  
  puVar5 = (undefined8 *)
           FUN_10032c00c("*KindredCardManifest*","build://Progression/KindredCardManifest.def");
  plVar10 = (long *)*puVar5;
  lVar11 = *plVar10;
  if (lVar11 != 0) {
    do {
      bVar3 = param_1[0x17];
      uVar6 = (ulong)bVar3;
      sVar1 = *(size_t *)(param_1 + 8);
      if (-1 < (char)bVar3) {
        sVar1 = uVar6;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 == sVar2) {
        pbVar9 = *(byte **)param_1;
        pbVar8 = pbVar9;
        if (-1 < (char)bVar3) {
          pbVar8 = param_1;
        }
        pbVar7 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar7 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar3 < '\0') {
          if ((sVar1 != 0) && (iVar4 = _memcmp(pbVar8,pbVar7,sVar1), pbVar8 = pbVar9, iVar4 != 0))
          goto LAB_10032c144;
        }
        else if (sVar1 != 0) {
          pbVar8 = param_1;
          if ((uint)*pbVar7 == ((uint)pbVar9 & 0xff)) {
            do {
              uVar6 = uVar6 - 1;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
              if (uVar6 == 0) goto LAB_10032c154;
            } while (*pbVar8 == *pbVar7);
            goto LAB_10032c134;
          }
          goto LAB_10032c144;
        }
      }
      else {
LAB_10032c134:
        pbVar8 = *(byte **)param_1;
        if (-1 < (char)bVar3) {
          pbVar8 = param_1;
        }
LAB_10032c144:
        iVar4 = _strcmp((char *)pbVar8,*(char **)(lVar11 + 8));
        if (iVar4 == 0) {
          return *plVar10;
        }
      }
LAB_10032c154:
      plVar10 = plVar10 + 1;
      lVar11 = *plVar10;
    } while (lVar11 != 0);
  }
  return 0;
}




undefined * FUN_10032c190(void)

{
  return &DAT_101e46c88;
}




undefined1 FUN_10032c19c(void)

{
  return DAT_101e46cc0;
}




undefined8 * FUN_10032c1a8(void)

{
  return &DAT_101e46cc8;
}




void FUN_10032c1b4(undefined8 param_1)

{
  FUN_10032c1c4(&DAT_101e46cc8,param_1);
  return;
}




undefined8 * FUN_10032c1c4(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar3 = *param_1;
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 2);
    pbVar13 = (byte *)(lVar12 + 1);
    do {
      puVar10 = (undefined8 *)(lVar12 + uVar11 * 0xf8);
      bVar4 = *(byte *)((long)puVar10 + 0x17);
      uVar7 = (ulong)bVar4;
      sVar2 = puVar10[1];
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if (sVar5 == 0) {
            return puVar10;
          }
          iVar6 = _memcmp((void *)*puVar10,pbVar1,sVar5);
          if (iVar6 == 0) {
            return puVar10;
          }
        }
        else {
          if (sVar5 == 0) {
            return puVar10;
          }
          pbVar9 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)(void *)*puVar10 & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) {
                return puVar10;
              }
              bVar4 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      pbVar13 = pbVar13 + 0xf8;
    } while (uVar11 != uVar3);
  }
  return (undefined8 *)0x0;
}




void FUN_10032c2c8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_3 == 0) {
    if (param_3[2] == 0) {
      if (param_3[1] == 0) {
        if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
          FUN_10003330c(param_1,&DAT_101d91198);
          return;
        }
        goto LAB_10032c3d0;
      }
      pcVar1 = "%s_SILVER_%d";
    }
    else {
      pcVar1 = "%s_OPAL_%d";
    }
  }
  else {
    pcVar1 = "%s_ICE_%d";
  }
  FUN_1004d2698(auStack_128,pcVar1);
  FUN_10001549c(param_1,auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
LAB_10032c3d0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10032c3d4(string *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_1d0 [16];
  void *local_1c0 [2];
  char local_1a9;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  void *local_178 [2];
  char local_161;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined4 local_140;
  undefined1 auStack_138 [8];
  int local_130;
  long local_128;
  
  FUN_1000eb06c(auStack_138);
  FUN_1000fd6fc(param_1);
  if (((param_2 != 0) && (iVar2 = FUN_100136d44(param_2,auStack_138), lVar1 = local_128, iVar2 != 0)
      ) && (local_130 != 0)) {
    FUN_100142768(auStack_1d0,local_128 + 8);
    FUN_10003330c(local_1c0,lVar1 + 0x18);
    uStack_1a0 = *(undefined8 *)(lVar1 + 0x38);
    local_1a8 = *(undefined8 *)(lVar1 + 0x30);
    uStack_190 = *(undefined8 *)(lVar1 + 0x48);
    local_198 = *(undefined8 *)(lVar1 + 0x40);
    uStack_180 = *(undefined8 *)(lVar1 + 0x58);
    local_188 = *(undefined8 *)(lVar1 + 0x50);
    FUN_10003330c(local_178,lVar1 + 0x60);
    thunk_FUN_1004e439c(&local_160,lVar1 + 0x78);
    thunk_FUN_1004e439c(&local_150,lVar1 + 0x88);
    local_140 = *(undefined4 *)(lVar1 + 0x98);
    std::string::operator=(param_1,(string *)(local_128 + 0x18));
    uVar6 = *(undefined8 *)(local_128 + 0x48);
    uVar5 = *(undefined8 *)(local_128 + 0x40);
    uVar4 = *(undefined8 *)(local_128 + 0x58);
    uVar3 = *(undefined8 *)(local_128 + 0x50);
    uVar7 = *(undefined8 *)(local_128 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(local_128 + 0x38);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    if (local_148 != (void *)0x0) {
      operator_delete__(local_148);
      local_150 = 0;
      local_148 = (void *)0x0;
    }
    if (local_158 != (void *)0x0) {
      operator_delete__(local_158);
      local_160 = 0;
      local_158 = (void *)0x0;
    }
    if (local_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (local_1a9 < '\0') {
      operator_delete(local_1c0[0]);
    }
    FUN_1001423e4(auStack_1d0,1);
  }
  FUN_1000eb120(auStack_138);
  return;
}




undefined8 * FUN_10032c538(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  size_t sVar5;
  byte bVar6;
  size_t sVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  lVar9 = DAT_101e46ca0;
  uVar8 = DAT_101e46c98;
  pbVar4 = *(byte **)param_1;
  sVar7 = *(size_t *)(param_1 + 8);
  if (-1 < (char)param_1[0x17]) {
    pbVar4 = param_1;
    sVar7 = (ulong)param_1[0x17];
  }
  if (DAT_101e46c98 != 0) {
    uVar13 = 0;
    do {
      puVar12 = *(undefined8 **)(lVar9 + uVar13 * 8);
      if (puVar12 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      bVar6 = *(byte *)((long)puVar12 + 0x17);
      sVar5 = puVar12[1];
      if (-1 < (char)bVar6) {
        sVar5 = (ulong)bVar6;
      }
      if (sVar5 == sVar7) {
        if ((char)bVar6 < '\0') {
          if (sVar7 == 0) {
            return puVar12;
          }
          iVar10 = _memcmp((void *)*puVar12,pbVar4,sVar7);
          if (iVar10 == 0) {
            return puVar12;
          }
        }
        else {
          if (sVar7 == 0) {
            return puVar12;
          }
          if ((uint)*pbVar4 == ((uint)(void *)*puVar12 & 0xff)) {
            uVar11 = 1;
            do {
              if (bVar6 == uVar11) {
                return puVar12;
              }
              pbVar1 = (byte *)((long)puVar12 + uVar11);
              pbVar2 = pbVar4 + uVar11;
              uVar11 = uVar11 + 1;
            } while (*pbVar1 == *pbVar2);
          }
        }
      }
      uVar3 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar3;
    } while (uVar3 != uVar8);
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10032c624(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  size_t sVar5;
  byte bVar6;
  size_t sVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  lVar9 = DAT_101e46cb0;
  uVar8 = DAT_101e46ca8;
  if (DAT_101e46cc0 != '\0') {
    pbVar4 = *(byte **)param_1;
    sVar7 = *(size_t *)(param_1 + 8);
    if (-1 < (char)param_1[0x17]) {
      pbVar4 = param_1;
      sVar7 = (ulong)param_1[0x17];
    }
    if (DAT_101e46ca8 != 0) {
      uVar13 = 0;
      do {
        puVar12 = *(undefined8 **)(lVar9 + uVar13 * 8);
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        bVar6 = *(byte *)((long)puVar12 + 0x17);
        sVar5 = puVar12[1];
        if (-1 < (char)bVar6) {
          sVar5 = (ulong)bVar6;
        }
        if (sVar5 == sVar7) {
          if ((char)bVar6 < '\0') {
            if (sVar7 == 0) {
              return puVar12;
            }
            iVar10 = _memcmp((void *)*puVar12,pbVar4,sVar7);
            if (iVar10 == 0) {
              return puVar12;
            }
          }
          else {
            if (sVar7 == 0) {
              return puVar12;
            }
            if ((uint)*pbVar4 == ((uint)(void *)*puVar12 & 0xff)) {
              uVar11 = 1;
              do {
                if (bVar6 == uVar11) {
                  return puVar12;
                }
                pbVar1 = (byte *)((long)puVar12 + uVar11);
                pbVar2 = pbVar4 + uVar11;
                uVar11 = uVar11 + 1;
              } while (*pbVar1 == *pbVar2);
            }
          }
        }
        uVar3 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar3;
      } while (uVar3 != uVar8);
    }
  }
  return (undefined8 *)0x0;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10032c71c(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 *******local_68;
  size_t local_60;
  byte local_51;
  
  bVar5 = param_1[0x17];
  uVar9 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar5) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pbVar10 = *(byte **)param_1;
    if (-1 < (char)bVar5) {
      pbVar10 = param_1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return 0;
      }
      iVar7 = _memcmp(pbVar10,pbVar11,sVar2);
      bVar6 = iVar7 == 0;
    }
    else {
      if (sVar2 == 0) {
        return 0;
      }
      pbVar10 = param_1;
      if ((uint)*pbVar11 != ((uint)*(byte **)param_1 & 0xff)) goto LAB_10032c7d8;
      do {
        uVar9 = uVar9 - 1;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
        if (uVar9 == 0) break;
      } while (*pbVar10 == *pbVar11);
      bVar6 = uVar9 == 0;
    }
    bVar6 = !bVar6;
  }
  else {
LAB_10032c7d8:
    bVar6 = true;
  }
  if (!bVar6) {
    return 0;
  }
  if (DAT_101e46cc0 == '\0') {
    return 0;
  }
  if (DAT_101e46ca8 != 0) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(DAT_101e46cb0 + uVar9 * 8);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_10032c2c8(&local_68,lVar8,param_2);
      uVar12 = (ulong)local_51;
      sVar2 = local_60;
      if (-1 < (char)local_51) {
        sVar2 = uVar12;
      }
      bVar5 = param_1[0x17];
      sVar3 = *(size_t *)(param_1 + 8);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar2 == sVar3) {
        pppppppuVar4 = local_68;
        if (-1 < (char)local_51) {
          pppppppuVar4 = &local_68;
        }
        pbVar10 = *(byte **)param_1;
        if (-1 < (char)bVar5) {
          pbVar10 = param_1;
        }
        if (-1 < (char)local_51) {
          if (sVar2 == 0) goto LAB_10032c914;
          pbVar11 = (byte *)((ulong)&local_68 | 1);
          if ((uint)*pbVar10 != ((uint)local_68 & 0xff)) goto LAB_10032c8c8;
          do {
            uVar12 = uVar12 - 1;
            pbVar10 = pbVar10 + 1;
            bVar6 = uVar12 == 0;
            if (uVar12 == 0) break;
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 == *pbVar10);
          goto LAB_10032c8cc;
        }
        if (sVar2 == 0) {
          operator_delete(local_68);
          goto LAB_10032c914;
        }
        iVar7 = _memcmp(pppppppuVar4,pbVar10,sVar2);
        bVar6 = iVar7 == 0;
LAB_10032c8ec:
        operator_delete(local_68);
        if (bVar6) {
LAB_10032c914:
          return *(undefined8 *)(DAT_101e46cb0 + uVar9 * 8);
        }
      }
      else {
LAB_10032c8c8:
        bVar6 = false;
LAB_10032c8cc:
        if ((char)local_51 < '\0') goto LAB_10032c8ec;
        if (bVar6) goto LAB_10032c914;
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
    } while (uVar1 < DAT_101e46ca8);
  }
  return 0;
}




bool FUN_10032c944(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x98) < 1) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_1004f1a74(0);
    bVar1 = lVar2 < *(long *)(param_1 + 0x98);
  }
  return bVar1;
}




bool FUN_10032c988(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x90) < 1) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_1004f1a74(0);
    bVar1 = lVar2 < *(long *)(param_1 + 0x90);
  }
  return bVar1;
}




bool FUN_10032c9cc(long param_1,long param_2)

{
  return *(uint *)(param_1 + 0xa0) < *(uint *)(param_2 + 0xa0);
}




void FUN_10032c9e0(uint *param_1,code *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  uint *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  void *pvVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  code *local_140;
  code *local_138;
  undefined4 local_130;
  char local_129;
  undefined4 local_128;
  void *local_120 [2];
  char local_109;
  void *local_108;
  void *local_100 [2];
  char local_e9;
  void *local_e8 [2];
  char local_d1;
  long local_d0;
  ulong local_c8;
  int local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined8 local_70;
  
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
  uStack_80 = 0x400;
  local_78 = 0;
  local_70 = 0;
  local_b8 = operator_new(0x28);
  *local_b8 = 0;
  local_b8[1] = 0x10000;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[2] = 0;
  local_140 = param_2;
  local_138 = param_2;
  local_b0 = local_b8;
  FUN_1000f7bd0(&local_d0,&local_140);
  if ((local_78 == 0) && (FUN_10032ba48(param_1), local_c0 == 3)) {
    lVar6 = FUN_1000e86c0(&local_d0,"themes");
    if (local_d0 + (local_c8 & 0xffffffff) * 0x30 != lVar6) {
      local_130 = 0x100005;
      local_140 = (code *)0x1013f3e07;
      local_138 = (code *)0x6;
      lVar6 = FUN_1000e87dc(&local_d0,&local_140);
      if (*(int *)(lVar6 + 0x10) == 4) {
        local_130 = 0x100005;
        local_140 = (code *)0x1013f3e07;
        local_138 = (code *)0x6;
        plVar7 = (long *)FUN_1000e87dc(&local_d0,&local_140);
        if ((int)plVar7[1] != 0) {
          lVar6 = 0;
          uVar21 = 0;
          do {
            plVar19 = (long *)(*plVar7 + lVar6);
            lVar8 = FUN_1000e86c0(plVar19,"themeKey");
            if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar8) {
              local_130 = 0x100005;
              local_140 = (code *)0x1013f3e0e;
              local_138 = (code *)0x8;
              lVar8 = FUN_1000e87dc(plVar19,&local_140);
              if (((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) &&
                 (lVar8 = FUN_1000e86c0(plVar19,"heroKey"),
                 *plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar8)) {
                local_130 = 0x100005;
                local_140 = (code *)0x1013f3e17;
                local_138 = (code *)0x7;
                lVar8 = FUN_1000e87dc(plVar19,&local_140);
                if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                  pcVar9 = operator_new(0x40);
                  local_130 = 0x100005;
                  local_140 = (code *)0x1013f3e0e;
                  local_138 = (code *)0x8;
                  plVar10 = (long *)FUN_1000e87dc(plVar19,&local_140);
                  plVar11 = (long *)*plVar10;
                  if ((*(uint *)(plVar10 + 2) & 0x400000) != 0) {
                    plVar11 = plVar10;
                  }
                  FUN_10001549c(local_e8,plVar11);
                  local_130 = 0x100005;
                  local_140 = (code *)0x1013f3e17;
                  local_138 = (code *)0x7;
                  plVar11 = (long *)FUN_1000e87dc(plVar19,&local_140);
                  plVar19 = (long *)*plVar11;
                  if ((*(uint *)(plVar11 + 2) & 0x400000) != 0) {
                    plVar19 = plVar11;
                  }
                  FUN_10001549c(local_100,plVar19);
                  FUN_10003330c(pcVar9,local_e8);
                  FUN_10003330c(pcVar9 + 0x18,local_100);
                  *(undefined8 *)(pcVar9 + 0x30) = 0;
                  *(undefined8 *)(pcVar9 + 0x38) = 0;
                  if (local_e9 < '\0') {
                    operator_delete(local_100[0]);
                  }
                  if (local_d1 < '\0') {
                    operator_delete(local_e8[0]);
                  }
                  local_140 = pcVar9;
                  FUN_10032d944(param_1 + 4,&local_140);
                }
              }
            }
            uVar21 = uVar21 + 1;
            lVar6 = lVar6 + 0x18;
          } while (uVar21 < *(uint *)(plVar7 + 1));
        }
      }
    }
    lVar6 = FUN_1000e86c0(&local_d0,"skins");
    if (local_d0 + (local_c8 & 0xffffffff) * 0x30 != lVar6) {
      local_130 = 0x100005;
      local_140 = (code *)0x1013e7e3f;
      local_138 = (code *)0x5;
      lVar6 = FUN_1000e87dc(&local_d0,&local_140);
      if (*(int *)(lVar6 + 0x10) == 4) {
        local_130 = 0x100005;
        local_140 = (code *)0x1013e7e3f;
        local_138 = (code *)0x5;
        plVar7 = (long *)FUN_1000e87dc(&local_d0,&local_140);
        if ((int)plVar7[1] != 0) {
          uVar21 = 0;
          bVar2 = true;
          do {
            plVar19 = (long *)(*plVar7 + uVar21 * 0x18);
            lVar6 = FUN_1000e86c0(plVar19,"skinKey");
            puVar13 = (uint *)(plVar19 + 1);
            if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
              local_130 = 0x100005;
              local_140 = (code *)0x1013f3e1f;
              local_138 = (code *)0x7;
              lVar6 = FUN_1000e87dc(plVar19,&local_140);
              if (((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) &&
                 (lVar6 = FUN_1000e86c0(plVar19,"heroKey"),
                 *plVar19 + (ulong)*puVar13 * 0x30 != lVar6)) {
                local_130 = 0x100005;
                local_140 = (code *)0x1013f3e17;
                local_138 = (code *)0x7;
                lVar6 = FUN_1000e87dc(plVar19,&local_140);
                if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                  FUN_10001549c(local_e8,"");
                  lVar6 = FUN_1000e86c0(plVar19,"visible");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 == lVar6) {
                    bVar3 = true;
                  }
                  else {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e27;
                    local_138 = (code *)0x7;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) == 0) {
                      bVar3 = true;
                    }
                    else {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e27;
                      local_138 = (code *)0x7;
                      lVar6 = FUN_1000e87dc(plVar19,&local_140);
                      bVar3 = *(int *)(lVar6 + 0x10) == 0x102;
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"obtainable");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 == lVar6) {
                    bVar4 = true;
                  }
                  else {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e2f;
                    local_138 = (code *)0xa;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) == 0) {
                      bVar4 = true;
                    }
                    else {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e2f;
                      local_138 = (code *)0xa;
                      lVar6 = FUN_1000e87dc(plVar19,&local_140);
                      bVar4 = *(int *)(lVar6 + 0x10) == 0x102;
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"tier");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 == lVar6) {
                    local_150 = 0;
                  }
                  else {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e3a;
                    local_138 = (code *)0x4;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) {
                      local_150 = 0;
                    }
                    else {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e3a;
                      local_138 = (code *)0x4;
                      piVar12 = (int *)FUN_1000e87dc(plVar19,&local_140);
                      local_150 = *piVar12;
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"limitedEditionEndEpoch");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 == lVar6) {
LAB_10032cfe8:
                    local_158 = 0;
                  }
                  else {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e3f;
                    local_138 = (code *)0x16;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) >> 4 & 1) == 0) goto LAB_10032cfe8;
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e3f;
                    local_138 = (code *)0x16;
                    puVar18 = (undefined8 *)FUN_1000e87dc(plVar19,&local_140);
                    local_158 = *puVar18;
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"availableOnEpoch");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 == lVar6) {
                    local_160 = 0;
                  }
                  else {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e56;
                    local_138 = (code *)0x10;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) >> 4 & 1) == 0) {
                      local_160 = 0;
                    }
                    else {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e56;
                      local_138 = (code *)0x10;
                      puVar18 = (undefined8 *)FUN_1000e87dc(plVar19,&local_140);
                      local_160 = *puVar18;
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"imageName");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013dd569;
                    local_138 = (code *)0x9;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013dd569;
                      local_138 = (code *)0x9;
                      plVar10 = (long *)FUN_1000e87dc(plVar19,&local_140);
                      plVar11 = (long *)*plVar10;
                      if ((*(uint *)(plVar10 + 2) & 0x400000) != 0) {
                        plVar11 = plVar10;
                      }
                      FUN_10001549c(&local_140,plVar11);
                      std::string::operator=((string *)local_e8,(string *)&local_140);
                      if (local_129 < '\0') {
                        operator_delete(local_140);
                      }
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"allowWeave");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 == lVar6) {
LAB_10032d174:
                    bVar5 = false;
                  }
                  else {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e67;
                    local_138 = (code *)0xa;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) == 0) goto LAB_10032d174;
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e67;
                    local_138 = (code *)0xa;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    bVar5 = *(int *)(lVar6 + 0x10) == 0x102;
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"singleCard");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e72;
                    local_138 = (code *)0xa;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e72;
                      local_138 = (code *)0xa;
                      FUN_1000e87dc(plVar19,&local_140);
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"canProrate");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e7d;
                    local_138 = (code *)0xa;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e7d;
                      local_138 = (code *)0xa;
                      FUN_1000e87dc(plVar19,&local_140);
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"advertiseComingSoon");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e88;
                    local_138 = (code *)0x13;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e88;
                      local_138 = (code *)0x13;
                      FUN_1000e87dc(plVar19,&local_140);
                    }
                  }
                  lVar6 = FUN_1000e86c0(plVar19,"seasonChestUnlock");
                  if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                    local_130 = 0x100005;
                    local_140 = (code *)0x1013f3e9c;
                    local_138 = (code *)0x11;
                    lVar6 = FUN_1000e87dc(plVar19,&local_140);
                    if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e9c;
                      local_138 = (code *)0x11;
                      FUN_1000e87dc(plVar19,&local_140);
                    }
                  }
                  pvVar17 = operator_new(0xd8);
                  local_130 = 0x100005;
                  local_140 = (code *)0x1013f3e1f;
                  local_138 = (code *)0x7;
                  plVar10 = (long *)FUN_1000e87dc(plVar19,&local_140);
                  plVar11 = (long *)*plVar10;
                  if ((*(uint *)(plVar10 + 2) & 0x400000) != 0) {
                    plVar11 = plVar10;
                  }
                  FUN_10001549c(local_100,plVar11);
                  local_130 = 0x100005;
                  local_140 = (code *)0x1013f3e17;
                  local_138 = (code *)0x7;
                  plVar10 = (long *)FUN_1000e87dc(plVar19,&local_140);
                  plVar11 = (long *)*plVar10;
                  if ((*(uint *)(plVar10 + 2) & 0x400000) != 0) {
                    plVar11 = plVar10;
                  }
                  FUN_10001549c(&local_140,plVar11);
                  FUN_10003330c(local_120,local_e8);
                  FUN_10032db34(pvVar17,local_100,&local_140,local_158,local_150,bVar3,bVar4,
                                local_160,local_120,bVar5);
                  if (local_109 < '\0') {
                    operator_delete(local_120[0]);
                  }
                  if (local_129 < '\0') {
                    operator_delete(local_140);
                  }
                  if (local_e9 < '\0') {
                    operator_delete(local_100[0]);
                  }
                  local_108 = pvVar17;
                  if (local_150 == 0) {
                    puVar13 = param_1 + 8;
                    if (bVar2) {
LAB_10032d588:
                      FUN_10032d9c4(puVar13,&local_108);
LAB_10032d590:
                      bVar2 = true;
                    }
                    else {
                      bVar2 = false;
                    }
                  }
                  else {
                    lVar6 = FUN_1000e86c0(plVar19,"prereq");
                    if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3eae;
                      local_138 = (code *)0x6;
                      lVar6 = FUN_1000e87dc(plVar19,&local_140);
                      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                        local_130 = 0x100005;
                        local_140 = (code *)0x1013f3eae;
                        local_138 = (code *)0x6;
                        plVar10 = (long *)FUN_1000e87dc(plVar19,&local_140);
                        plVar11 = (long *)*plVar10;
                        if ((*(uint *)(plVar10 + 2) & 0x400000) != 0) {
                          plVar11 = plVar10;
                        }
                        FUN_10001549c(&local_140,plVar11);
                        std::string::operator=
                                  ((string *)((long)local_108 + 0x48),(string *)&local_140);
                        if (local_129 < '\0') {
                          operator_delete(local_140);
                        }
                      }
                    }
                    lVar6 = FUN_1000e86c0(plVar19,"themeKey");
                    if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                      local_130 = 0x100005;
                      local_140 = (code *)0x1013f3e0e;
                      local_138 = (code *)0x8;
                      lVar6 = FUN_1000e87dc(plVar19,&local_140);
                      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                        local_130 = 0x100005;
                        local_138 = (code *)0x8;
                        local_140 = (code *)0x1013f3e0e;
                        plVar10 = (long *)FUN_1000e87dc(plVar19,&local_140);
                        plVar11 = (long *)*plVar10;
                        if ((*(uint *)(plVar10 + 2) & 0x400000) != 0) {
                          plVar11 = plVar10;
                        }
                        FUN_10001549c(&local_140,plVar11);
                        std::string::operator=
                                  ((string *)((long)local_108 + 0xb0),(string *)&local_140);
                        if (local_129 < '\0') {
                          operator_delete(local_140);
                        }
                        lVar6 = FUN_1000e86c0(plVar19,"cardCosts");
                        if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                          local_130 = 0x100005;
                          local_140 = (code *)0x1013f3eb5;
                          local_138 = (code *)0x9;
                          lVar6 = FUN_1000e87dc(plVar19,&local_140);
                          if (*(int *)(lVar6 + 0x10) == 4) {
                            local_130 = 0x100005;
                            local_140 = (code *)0x1013f3eb5;
                            local_138 = (code *)0x9;
                            plVar11 = (long *)FUN_1000e87dc(plVar19,&local_140);
                            if ((int)plVar11[1] != 0) {
                              lVar6 = 0;
                              uVar20 = 0;
                              do {
                                lVar8 = *plVar11;
                                local_130 = 0x100005;
                                local_140 = (code *)0x1013f3ebf;
                                local_138 = (code *)0x6;
                                plVar14 = (long *)FUN_1000e87dc(lVar8 + lVar6,&local_140);
                                plVar10 = (long *)*plVar14;
                                if ((*(uint *)(plVar14 + 2) & 0x400000) != 0) {
                                  plVar10 = plVar14;
                                }
                                FUN_10001549c(local_100,plVar10);
                                local_130 = 0x100005;
                                local_140 = (code *)0x1013d404a;
                                local_138 = (code *)0x6;
                                puVar15 = (undefined4 *)FUN_1000e87dc(lVar8 + lVar6,&local_140);
                                uVar1 = *puVar15;
                                lVar8 = (long)local_108 + 200;
                                FUN_10003330c(&local_140,local_100);
                                local_128 = uVar1;
                                FUN_1000f6ab8(lVar8,&local_140);
                                if (local_129 < '\0') {
                                  operator_delete(local_140);
                                }
                                if (local_e9 < '\0') {
                                  operator_delete(local_100[0]);
                                }
                                uVar20 = uVar20 + 1;
                                lVar6 = lVar6 + 0x18;
                              } while (uVar20 < *(uint *)(plVar11 + 1));
                            }
                          }
                        }
                        if (bVar2) {
                          FUN_10032d9c4(param_1 + 8,&local_108);
                          lVar6 = FUN_1000e86c0(plVar19,"themeKey");
                          if (*plVar19 + (ulong)*puVar13 * 0x30 != lVar6) {
                            local_130 = 0x100005;
                            local_140 = (code *)0x1013f3e0e;
                            local_138 = (code *)0x8;
                            lVar6 = FUN_1000e87dc(plVar19,&local_140);
                            if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                              local_130 = 0x100005;
                              local_140 = (code *)0x1013f3e0e;
                              local_138 = (code *)0x8;
                              plVar11 = (long *)FUN_1000e87dc(plVar19,&local_140);
                              plVar19 = (long *)*plVar11;
                              if ((*(uint *)(plVar11 + 2) & 0x400000) != 0) {
                                plVar19 = plVar11;
                              }
                              FUN_10001549c(&local_140,plVar19);
                              lVar6 = FUN_10032c538(&local_140);
                              if (local_129 < '\0') {
                                operator_delete(local_140);
                              }
                              if (lVar6 != 0) {
                                puVar13 = (uint *)(lVar6 + 0x30);
                                goto LAB_10032d588;
                              }
                              goto LAB_10032d590;
                            }
                          }
                          bVar2 = true;
                        }
                        else {
                          bVar2 = false;
                        }
                        goto LAB_10032d7dc;
                      }
                    }
                    bVar2 = false;
                  }
LAB_10032d7dc:
                  if (local_d1 < '\0') {
                    operator_delete(local_e8[0]);
                  }
                }
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(plVar7 + 1));
        }
      }
    }
    if ((param_1[8] != 0) && (param_1[4] != 0)) {
      uVar16 = FUN_1004d29d0();
      *(undefined8 *)(param_1 + 0xc) = uVar16;
      *(undefined1 *)(param_1 + 0xe) = 1;
      if (*param_1 != 0) {
        puVar18 = *(undefined8 **)(param_1 + 2);
        do {
          if ((code *)*puVar18 == (code *)0x0) {
            (*(code *)puVar18[3])(puVar18[2],param_1);
          }
          else {
            (*(code *)*puVar18)(param_1);
          }
          puVar18 = puVar18 + 4;
        } while (puVar18 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
      }
      if (param_1[4] != 0) {
        uVar21 = 0;
        do {
          lVar8 = *(long *)(*(long *)(param_1 + 6) + uVar21 * 8);
          lVar6 = *(long *)(lVar8 + 0x38);
          local_140 = FUN_10032c9cc;
          FUN_100332770(lVar6,lVar6 + (ulong)*(uint *)(lVar8 + 0x30) * 8,&local_140);
          uVar21 = uVar21 + 1;
        } while (uVar21 < param_1[4]);
      }
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
    pvVar17 = (void *)FUN_1000f7b54();
    operator_delete(pvVar17);
  }
  _free(local_98);
  if (pvStack_a0 != (void *)0x0) {
    operator_delete(pvStack_a0);
  }
  return;
}




void FUN_10032d944(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100332678(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10032d9c4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1003326f4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_10032da44(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 0;
  }
  else {
    uVar5 = 0;
    iVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + uVar5 * 8);
      if (lVar4 == 0) {
        return iVar3;
      }
      uVar2 = FUN_10015d3ec();
      uVar2 = FUN_100166518(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + uVar5 * 8));
      iVar1 = FUN_10032dac0(lVar4,uVar2);
      iVar3 = iVar3 + iVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x20));
  }
  return iVar3;
}




bool FUN_10032dac0(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0xa5) == '\0') || (*(char *)(param_1 + 0xa4) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x90) < 1;
    if ((*(long *)(param_1 + 0x90) < 1) && ((param_2 & 1) == 0)) {
      if (*(long *)(param_1 + 0x98) < 1) {
        bVar1 = true;
      }
      else {
        lVar2 = FUN_1004f1a74(0);
        bVar1 = *(long *)(param_1 + 0x98) <= lVar2;
      }
    }
  }
  return bVar1;
}




long FUN_10032db34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  
  lVar1 = FUN_10003330c();
  FUN_10003330c(lVar1 + 0x18,param_9);
  FUN_10003330c(param_1 + 0x30,param_3);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = param_4;
  *(undefined8 *)(param_1 + 0x98) = param_8;
  *(undefined4 *)(param_1 + 0xa0) = param_5;
  *(undefined1 *)(param_1 + 0xa4) = param_6;
  *(undefined1 *)(param_1 + 0xa5) = param_7;
  *(undefined1 *)(param_1 + 0xa6) = (undefined1)param_10;
  *(undefined1 *)(param_1 + 0xa7) = param_10._1_1_;
  *(undefined1 *)(param_1 + 0xa8) = param_10._2_1_;
  *(undefined1 *)(param_1 + 0xa9) = param_10._3_1_;
  *(undefined1 *)(param_1 + 0xaa) = param_10._4_1_;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return param_1;
}




undefined1 FUN_10032dc1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}




void FUN_10032dc24(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar1 = FUN_1004d29d0();
  *(long *)(param_1 + 0x18) = lVar1 * 0x708;
  return;
}




void FUN_10032f09c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100332598(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar5 + -0x28,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(lVar5 + -8) = *(undefined2 *)(param_2 + 0x20);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_10032f134(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 5;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_10032f1ac(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x90);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x98);
    pbVar13 = (byte *)(lVar12 + 1);
    do {
      puVar10 = (undefined8 *)(lVar12 + uVar11 * 0x28);
      bVar4 = *(byte *)((long)puVar10 + 0x17);
      uVar7 = (ulong)bVar4;
      sVar2 = puVar10[1];
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if (sVar5 == 0) {
            return puVar10;
          }
          iVar6 = _memcmp((void *)*puVar10,pbVar1,sVar5);
          if (iVar6 == 0) {
            return puVar10;
          }
        }
        else {
          if (sVar5 == 0) {
            return puVar10;
          }
          pbVar9 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)(void *)*puVar10 & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) {
                return puVar10;
              }
              bVar4 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      pbVar13 = pbVar13 + 0x28;
    } while (uVar11 != uVar3);
  }
  return (undefined8 *)0x0;
}




void FUN_10032f2b0(long param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  long local_58;
  ulong local_50;
  void *local_48;
  ulong local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  piVar1 = (int *)(param_1 + 0x90);
  if (*piVar1 == 0) {
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_10032f09c(&local_40,*(long *)(param_1 + 0x98) + lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (uVar3 < *(uint *)(param_1 + 0x90));
    local_50 = 0;
    local_48 = (void *)0x0;
    if ((int)local_40 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        local_58 = local_38 + lVar2;
        FUN_10032f720(&local_50,&local_58);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x28;
      } while (uVar3 < (local_40 & 0xffffffff));
      if ((int)local_50 != 0) {
        _qsort(local_48,local_50 & 0xffffffff,8,(int *)FUN_10032f7a0);
      }
    }
  }
  FUN_10032f134(piVar1,0);
  if ((int)local_50 != 0) {
    uVar3 = 0;
    do {
      FUN_10032f09c(piVar1,*(undefined8 *)((long)local_48 + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (local_50 & 0xffffffff));
    if ((int)local_50 != 0) {
      _qsort(local_48,local_50 & 0xffffffff,8,(int *)FUN_10032f84c);
    }
  }
  FUN_10032f134(param_1 + 0xa0,0);
  if ((int)local_50 != 0) {
    uVar3 = 0;
    do {
      FUN_10032f09c(param_1 + 0xa0,*(undefined8 *)((long)local_48 + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (local_50 & 0xffffffff));
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  FUN_10032f134(&local_40,1);
  return;
}




void FUN_10032f424(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1003323c8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xf8;
  FUN_10003330c(lVar4 + -0xf8,param_2);
  FUN_10003330c(lVar4 + -0xe0,param_2 + 0x18);
  FUN_10003330c(lVar4 + -200,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0xb0,param_2 + 0x48);
  FUN_10003330c(lVar4 + -0x98,param_2 + 0x60);
  FUN_10003330c(lVar4 + -0x80,param_2 + 0x78);
  FUN_100332518(lVar4 + -0x68,param_2 + 0x90);
  FUN_100332518(lVar4 + -0x58,param_2 + 0xa0);
  FUN_1000a72a4(lVar4 + -0x48,param_2 + 0xb0);
  uVar6 = *(undefined8 *)(param_2 + 200);
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  uVar8 = *(undefined8 *)(param_2 + 0xd8);
  uVar7 = *(undefined8 *)(param_2 + 0xd0);
  uVar10 = *(undefined8 *)(param_2 + 0xe8);
  uVar9 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0xf0);
  *(undefined8 *)(lVar4 + -0x10) = uVar10;
  *(undefined8 *)(lVar4 + -0x18) = uVar9;
  *(undefined8 *)(lVar4 + -0x20) = uVar8;
  *(undefined8 *)(lVar4 + -0x28) = uVar7;
  *(undefined8 *)(lVar4 + -0x30) = uVar6;
  *(undefined8 *)(lVar4 + -0x38) = uVar5;
  return;
}




void FUN_10032f528(uint *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar1) {
      FUN_100333070(param_1,param_2);
    }
    uVar2 = (ulong)*param_1;
    if (*param_1 < uVar1) {
      do {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar2 * 8) = param_3;
        uVar2 = uVar2 + 1;
      } while ((param_2 & 0xffffffff) != uVar2);
    }
    *param_1 = uVar1;
  }
  return;
}




uint FUN_10032f5a8(long *param_1,long *param_2)

{
  ulong uVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar10 = *param_1;
  iVar3 = *(int *)(lVar10 + 0xe8);
  lVar11 = *param_2;
  iVar4 = *(int *)(lVar11 + 0xe8);
  bVar6 = SBORROW4(iVar3,iVar4);
  bVar7 = iVar3 - iVar4 < 0;
  if (iVar3 == iVar4) {
    lVar12 = *(long *)(lVar10 + 0xc0);
    lVar13 = *(long *)(lVar11 + 0xc0);
    bVar6 = SBORROW8(lVar12,lVar13);
    bVar7 = lVar12 - lVar13 < 0;
    if (lVar12 == lVar13) {
      uVar1 = *(ulong *)(lVar11 + 0x38);
      puVar5 = *(void **)(lVar11 + 0x30);
      if (-1 < (char)*(byte *)(lVar11 + 0x47)) {
        uVar1 = (ulong)*(byte *)(lVar11 + 0x47);
        puVar5 = (undefined8 *)(lVar11 + 0x30);
      }
      if ((char)*(byte *)(lVar10 + 0x47) < '\0') {
        pvVar9 = *(void **)(lVar10 + 0x30);
        uVar14 = *(ulong *)(lVar10 + 0x38);
      }
      else {
        pvVar9 = (void *)(lVar10 + 0x30);
        uVar14 = (ulong)*(byte *)(lVar10 + 0x47);
      }
      sVar2 = uVar1;
      if (uVar14 <= uVar1) {
        sVar2 = uVar14;
      }
      if ((sVar2 != 0) && (uVar8 = _memcmp(pvVar9,puVar5,sVar2), uVar8 != 0)) {
        return uVar8;
      }
      if (uVar1 <= uVar14) {
        return (uint)(uVar1 < uVar14);
      }
      return 0xffffffff;
    }
  }
  uVar8 = 1;
  if (bVar7 != bVar6) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}




void FUN_10032f64c(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xf8;
      do {
        lVar1 = FUN_100332324(lVar1);
        lVar1 = lVar1 + 0xf8;
        lVar2 = lVar2 + -0xf8;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




int FUN_10032f6b8(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x90);
  if (*(uint *)(param_1 + 0x90) != 0) {
    iVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x98) + 0x18);
    do {
      iVar1 = *piVar2 + iVar1;
      uVar3 = uVar3 - 1;
      piVar2 = piVar2 + 10;
    } while (uVar3 != 0);
    return iVar1;
  }
  return 0;
}




int FUN_10032f6ec(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x90);
  if (*(uint *)(param_1 + 0x90) != 0) {
    iVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x98) + 0x1c);
    do {
      iVar1 = *piVar2 + iVar1;
      uVar3 = uVar3 - 1;
      piVar2 = piVar2 + 10;
    } while (uVar3 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_10032f720(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1003330ec(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_10032f7a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)FUN_10032c068(*param_1);
  piVar3 = (int *)FUN_10032c068(*param_2);
  if (piVar2 == (int *)0x0 && piVar3 == (int *)0x0) {
    iVar1 = 1;
    if (param_1 < param_2) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
    if (piVar2 != (int *)0x0) {
      iVar1 = -1;
    }
    if (piVar2 != (int *)0x0 && piVar3 != (int *)0x0) {
      if (*piVar2 == *piVar3) {
        iVar1 = _strcmp(*(char **)(piVar2 + 8),*(char **)(piVar3 + 8));
        if (iVar1 == 0) {
          iVar1 = _strcmp(*(char **)(piVar2 + 10),*(char **)(piVar3 + 10));
          return iVar1;
        }
      }
      else {
        iVar1 = -1;
        if (*piVar2 < *piVar3) {
          iVar1 = 1;
        }
      }
    }
  }
  return iVar1;
}




int FUN_10032f84c(long *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(*param_1 + 0x1c) != *(int *)(*param_2 + 0x1c)) {
    if (*(int *)(*param_1 + 0x1c) == 0) {
      return 1;
    }
    if (*(int *)(*param_2 + 0x1c) == 0) {
      return -1;
    }
  }
  piVar2 = (int *)FUN_10032c068();
  piVar3 = (int *)FUN_10032c068(*param_2);
  if (piVar2 == (int *)0x0 && piVar3 == (int *)0x0) {
    iVar1 = 1;
    if (param_1 < param_2) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
    if (piVar2 != (int *)0x0) {
      iVar1 = -1;
    }
    if (piVar2 != (int *)0x0 && piVar3 != (int *)0x0) {
      if (*piVar2 == *piVar3) {
        iVar1 = _strcmp(*(char **)(piVar2 + 8),*(char **)(piVar3 + 8));
        if (iVar1 == 0) {
          iVar1 = _strcmp(*(char **)(piVar2 + 10),*(char **)(piVar3 + 10));
          return iVar1;
        }
      }
      else {
        iVar1 = -1;
        if (*piVar2 < *piVar3) {
          iVar1 = 1;
        }
      }
    }
  }
  return iVar1;
}




undefined8 * FUN_10032f924(void)

{
  return &DAT_101e46c70;
}

