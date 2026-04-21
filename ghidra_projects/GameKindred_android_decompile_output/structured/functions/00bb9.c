// functions/00bb9 — 13 functions
#include "libGameKindred.h"




void FUN_00bb9340(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = 0;
  local_48 = 0;
  uStack_40 = 0;
  do {
    FUN_00cb6184(&local_58,iVar2,1);
    FUN_0090ea30(&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x18);
  local_58 = 0;
  local_50 = (void *)0x0;
  FUN_00b03d8c(param_1,param_2 + 0xcb8,&local_48,&local_58,1);
  FUN_00951534(&local_58,1);
  FUN_0090eb54(&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb940c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6b5ec(*(undefined4 *)(param_1 + 0x40f8),0);
  *(undefined4 *)(param_1 + 0x1d688) = uVar1;
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  return;
}




void FUN_00bb9454(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = FUN_00cb50d8(&DAT_03210718,1);
  FUN_0090ea30(&local_48,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210730,1);
  FUN_0090ea30(&local_48,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210748,1);
  FUN_0090ea30(&local_48,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210760,1);
  FUN_0090ea30(&local_48,uVar2);
  local_58 = 0;
  uStack_50 = 0;
  FUN_008fa54c(local_70,"GUILD_TYPE_CASUAL");
  FUN_0096204c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_008fa54c(local_70,"GUILD_TYPE_MIDCORE");
  FUN_0096204c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_008fa54c(local_70,"GUILD_TYPE_COMPETITIVE");
  FUN_0096204c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_008fa54c(local_70,"GUILD_TYPE_UNIVERSITY");
  FUN_0096204c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_00ac876c(param_1,param_1,0,0x3f800000,0x3f800000,param_2 + 0x43d8,&local_48,&local_58,1,1,0);
  FUN_00951534(&local_58,1);
  FUN_0090eb54(&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb9618(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  uVar1 = FUN_00ac9cd0(param_1 + 0x43d8);
  FUN_008fce60(param_1 + 0x1d690,uVar1);
  return;
}




void FUN_00bb9668(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  do {
    FUN_00cb49ec(&local_70,iVar2,1);
    FUN_0090ea30(&local_48,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    FUN_00cb4ae4(&local_70,iVar2);
    FUN_0096204c(&local_58,&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  FUN_00b03d8c(param_1,param_2 + 0x6fe8,&local_48,&local_58,1);
  FUN_00951534(&local_58,1);
  FUN_0090eb54(&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb9760(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  uVar1 = FUN_00b0423c(param_1 + 0x6fe8);
  FUN_008fce60(param_1 + 0x1d6a8,uVar1);
  return;
}




void FUN_00bb97ac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = FUN_00cb439c(0xffffffff,0,0);
  FUN_0090ea30(&local_58,uVar2);
  FUN_00e70510(&local_68);
  iVar3 = 0;
  iVar4 = 1;
  do {
    FUN_00e70e18(&local_68,&DAT_01bb0650,iVar4);
    uVar2 = FUN_00cb439c(iVar3,1,0);
    FUN_00e70c34(&local_68,uVar2);
    FUN_0090ea30(&local_58,&local_68);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 3;
  } while (iVar4 != 0xb);
  local_78 = 0;
  uStack_70 = 0;
  FUN_00b03d8c(param_1,param_2 + 0xa708,&local_58,&local_78,1);
  FUN_00951534(&local_78,1);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_0090eb54(&local_58,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb98d4(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  iVar1 = *(int *)(param_1 + 0xdb48) * 3 + -3;
  if (*(int *)(param_1 + 0xdb48) == 0) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 0x1d68c) = iVar1;
  return;
}




void FUN_00bb990c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_0090ea30(&local_48,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_0090ea30(&local_48,uVar2);
  local_58 = 0;
  uStack_50 = 0;
  FUN_008fa54c(local_70,"open");
  FUN_0096204c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_008fa54c(local_70,"invite_only");
  FUN_0096204c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_00ac876c(param_1,param_1,0,0x3f800000,0x3f800000,param_2 + 0xde28,&local_48,&local_58,1,1,0);
  FUN_00951534(&local_58,1);
  FUN_0090eb54(&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb9a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00bbadd0(param_1,param_2,param_5);
  return;
}




void FUN_00bb9a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00bbaeb4(param_1,param_2,param_5);
  return;
}




void FUN_00bb9a5c(long param_1)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_70;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00af5fa4();
  uVar4 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar4 & 1,auStack_5c,auStack_60,auStack_64);
  FUN_00bbbbfc(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x9e0);
  FUN_00bbb660(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x4100);
  FUN_00bbbbfc(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x6d10);
  FUN_00bbbbfc(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0xa430);
  FUN_00bbb660(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0xdb50);
  lVar6 = 3;
  lVar5 = param_1 + 0x10760;
  do {
    fVar8 = 80.0;
    FUN_00bbbf18(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,lVar5);
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + 0x3d90;
  } while (lVar6 != 0);
  plVar1 = (long *)(param_1 + 0x1c0c8);
  fVar7 = (float)FUN_00f01c20(plVar1);
  fVar9 = fVar7 * 0.5 + 80.0;
  FUN_00f01c20(plVar1);
  fVar8 = fVar8 * 0.5;
  fVar7 = fVar8 + 60.0;
  pfVar2 = (float *)(param_1 + 0x1c10c);
  if ((*(float *)(param_1 + 0x1c108) != fVar9) || (fVar8 = *pfVar2, fVar8 != fVar7)) {
    *(float *)(param_1 + 0x1c108) = fVar9;
    *pfVar2 = fVar7;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  uVar10 = *(undefined4 *)(param_1 + 0x9d0);
  fVar7 = *pfVar2;
  FUN_00f01c20(plVar1);
  FUN_00f13f08(uVar10,fVar7 + fVar8 + 12.0,param_1 + 0x1c010);
  fVar8 = 0.0;
  FUN_00f0bc10(0,0,0,&local_70);
  FUN_00f0c168(param_1 + 0x908,&local_70);
  (**(code **)(*(long *)(param_1 + 0x908) + 0x90))(param_1 + 0x908);
  FUN_00ed04d8(param_1 + 0x348,0,1);
  uVar10 = *(undefined4 *)(param_1 + 0x9d0);
  fVar7 = *(float *)(param_1 + 0x1c054);
  FUN_00f13e54(param_1 + 0x1c010);
  FUN_00ed02d8(uVar10,fVar7 + fVar8,param_1 + 0x348);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb9ce8(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  size_t sVar4;
  size_t sVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  void *pvVar15;
  ulong local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x1d778);
  *(undefined8 *)(param_1 + 0x1d770) = *param_2;
  FUN_008fce60(pbVar1,param_2 + 1);
  pbVar2 = (byte *)(param_1 + 0x1d790);
  FUN_008fce60(pbVar2,param_2 + 4);
  FUN_008fce60((byte *)(param_1 + 0x1d7a8),param_2 + 7);
  FUN_008fce60((byte *)(param_1 + 0x1d7c0),param_2 + 10);
  FUN_008fce60((byte *)(param_1 + 0x1d7d8),param_2 + 0xd);
  FUN_008fce60((byte *)(param_1 + 0x1d7f0),param_2 + 0x10);
  FUN_008fce60((byte *)(param_1 + 0x1d808),param_2 + 0x13);
  FUN_008fce60((byte *)(param_1 + 0x1d820),param_2 + 0x16);
  FUN_008fce60((byte *)(param_1 + 0x1d838),param_2 + 0x19);
  puVar3 = (undefined1 *)(param_1 + 0x1d858);
  *(undefined1 *)(param_1 + 0x1d850) = *(undefined1 *)(param_2 + 0x1c);
  *puVar3 = 0;
  uVar9 = FUN_00e6b698(*(undefined4 *)param_2,0);
  FUN_00b040b8(param_1 + 0xcb8,uVar9,1,1);
  bVar7 = *(byte *)(param_2 + 1);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[2];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[3];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 9);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 9);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bb9ee8;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bb9ee8;
    FUN_00ac9b30(param_1 + 0x43d8,0,1,1);
    uVar11 = FUN_00ac9cd0(param_1 + 0x43d8);
    FUN_008fce60(pbVar1,uVar11);
    *puVar3 = 1;
  }
  else {
LAB_00bb9ee8:
    FUN_00ac9b64(param_1 + 0x43d8,param_2 + 1,1,1);
  }
  bVar7 = *(byte *)(param_2 + 4);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[5];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[6];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0x21);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0x21);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bb9fd8;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bb9fd8;
    FUN_00b040b8(param_1 + 0x6fe8,0,1,1);
    uVar11 = FUN_00b0423c(param_1 + 0x6fe8);
    FUN_008fce60(pbVar2,uVar11);
    *puVar3 = 1;
  }
  else {
LAB_00bb9fd8:
    FUN_00b040d8(param_1 + 0x6fe8,param_2 + 4,1,1);
  }
  if (*(int *)((long)param_2 + 4) == -1) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)((long)param_2 + 4) / 3 + 1;
  }
  FUN_00b040b8(param_1 + 0xa708,iVar10,1,1);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    pcVar12 = "open";
  }
  else {
    pcVar12 = "invite_only";
  }
  FUN_008fa54c(&local_80,pcVar12);
  FUN_00ac9b64(param_1 + 0xde28,&local_80,1,1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  bVar7 = *(byte *)(param_2 + 10);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[0xb];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[0xc];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0x51);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0x51);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bba168;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bba168;
    uVar11 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_00abc73c(param_1 + 0x10b00,uVar11);
  }
  else {
LAB_00bba168:
    FUN_00e70570(&local_80,param_2 + 10);
    FUN_00abc73c(param_1 + 0x10b00,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  bVar7 = *(byte *)(param_2 + 0x13);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[0x14];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[0x15];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0x99);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0x99);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bba264;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bba264;
    uVar11 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_00abc73c(param_1 + 0x127f8,uVar11);
  }
  else {
LAB_00bba264:
    FUN_00e70570(&local_80,param_2 + 0x13);
    FUN_00abc73c(param_1 + 0x127f8,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  bVar7 = *(byte *)(param_2 + 0xd);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[0xe];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[0xf];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0x69);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0x69);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bba360;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bba360;
    uVar11 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_00abc73c(param_1 + 0x14890,uVar11);
  }
  else {
LAB_00bba360:
    FUN_00e70570(&local_80,param_2 + 0xd);
    FUN_00abc73c(param_1 + 0x14890,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  bVar7 = *(byte *)(param_2 + 0x16);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[0x17];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[0x18];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0xb1);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0xb1);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bba45c;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bba45c;
    uVar11 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_00abc73c(param_1 + 0x16588,uVar11);
  }
  else {
LAB_00bba45c:
    FUN_00e70570(&local_80,param_2 + 0x16);
    FUN_00abc73c(param_1 + 0x16588,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  bVar7 = *(byte *)(param_2 + 0x10);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[0x11];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[0x12];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0x81);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0x81);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bba558;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bba558;
    uVar11 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_00abc73c(param_1 + 0x18620,uVar11);
  }
  else {
LAB_00bba558:
    FUN_00e70570(&local_80,param_2 + 0x10);
    FUN_00abc73c(param_1 + 0x18620,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  bVar7 = *(byte *)(param_2 + 0x19);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = param_2[0x1a];
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar15 = (void *)param_2[0x1b];
    if ((bVar7 & 1) == 0) {
      pvVar15 = (void *)((long)param_2 + 0xc9);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar13 = (char *)((long)param_2 + 0xc9);
        lVar14 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00bba658;
          pcVar13 = pcVar13 + 1;
          lVar14 = lVar14 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar14 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar15,pcVar12,sVar4), iVar10 != 0))
    goto LAB_00bba658;
    uVar11 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_00abc73c(param_1 + 0x1a318,uVar11);
  }
  else {
LAB_00bba658:
    FUN_00e70570(&local_80,param_2 + 0x19);
    FUN_00abc73c(param_1 + 0x1a318,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  *(undefined8 *)(param_1 + 0x1d688) = *(undefined8 *)(param_1 + 0x1d770);
  uVar6 = (ulong)(*pbVar1 >> 1);
  lVar14 = param_1 + 0x1d779;
  if ((*pbVar1 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d780);
    lVar14 = *(long *)(param_1 + 0x1d788);
  }
  FUN_008fcea8(param_1 + 0x1d690,lVar14,uVar6);
  uVar6 = (ulong)(*pbVar2 >> 1);
  lVar14 = param_1 + 0x1d791;
  if ((*pbVar2 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d798);
    lVar14 = *(long *)(param_1 + 0x1d7a0);
  }
  FUN_008fcea8(param_1 + 0x1d6a8,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d7a8);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d7a9;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d7b0);
    lVar14 = *(long *)(param_1 + 0x1d7b8);
  }
  FUN_008fcea8(param_1 + 0x1d6c0,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d7c0);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d7c1;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d7c8);
    lVar14 = *(long *)(param_1 + 0x1d7d0);
  }
  FUN_008fcea8(param_1 + 0x1d6d8,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d7d8);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d7d9;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d7e0);
    lVar14 = *(long *)(param_1 + 0x1d7e8);
  }
  FUN_008fcea8(param_1 + 0x1d6f0,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d7f0);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d7f1;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d7f8);
    lVar14 = *(long *)(param_1 + 0x1d800);
  }
  FUN_008fcea8(param_1 + 0x1d708,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d808);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d809;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d810);
    lVar14 = *(long *)(param_1 + 0x1d818);
  }
  FUN_008fcea8(param_1 + 0x1d720,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d820);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d821;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d828);
    lVar14 = *(long *)(param_1 + 0x1d830);
  }
  FUN_008fcea8(param_1 + 0x1d738,lVar14,uVar6);
  bVar7 = *(byte *)(param_1 + 0x1d838);
  uVar6 = (ulong)(bVar7 >> 1);
  lVar14 = param_1 + 0x1d839;
  if ((bVar7 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x1d840);
    lVar14 = *(long *)(param_1 + 0x1d848);
  }
  FUN_008fcea8(param_1 + 0x1d750,lVar14,uVar6);
  *(undefined1 *)(param_1 + 0x1d768) = *(undefined1 *)(param_1 + 0x1d850);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

