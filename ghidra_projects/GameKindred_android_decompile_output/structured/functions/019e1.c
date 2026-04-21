// functions/019e1 — 7 functions
#include "libGameKindred.h"




undefined8 FUN_019e1a68(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  switch(iVar1) {
  case 0:
    return param_1;
  case -0x13:
  case -0x12:
  case -0xb:
  case -10:
    return 0x33;
  case -0x11:
  case -0x10:
  case -0xe:
  case -0xd:
  case -0xc:
  case -8:
  case -5:
  case -4:
  case -3:
  case -2:
    goto switchD_019e1a84_caseD_0;
  case -0xf:
    return 0x43;
  case -9:
    return 0x1c;
  case -7:
    return 0x37;
  case -6:
    return 0x1b;
  case -1:
    return 7;
  default:
    if (iVar1 == -0x25) {
      return 0x51;
    }
    if (iVar1 == -0x1e) {
      return 0x1c;
    }
switchD_019e1a84_caseD_0:
    return 0x4f;
  }
}




undefined4 FUN_019e1b28(uint param_1)

{
  if (param_1 < 0x13) {
    return *(undefined4 *)(&DAT_01e25810 + (long)(int)param_1 * 4);
  }
  return 0x4f;
}




undefined8 FUN_019e1b48(long *param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  void *__s1;
  size_t sVar2;
  undefined1 *__dest;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  int local_44;
  
  __s1 = (void *)FUN_019d4834(*param_1,*(undefined8 *)(*param_1 + 0x8ae8),0,&local_44);
  if (__s1 == (void *)0x0) {
LAB_019e1cd8:
    uVar3 = 0x1b;
  }
  else {
    pvVar4 = __s1;
    if ((*(uint *)(param_1[100] + 0x78) >> 4 & 1) != 0) {
      __dest = (undefined1 *)(*(code *)PTR_malloc_02bf74a8)((long)local_44 + 1);
      if (__dest != (undefined1 *)0x0) {
        puVar5 = __dest;
        if ((local_44 < 4) || (iVar1 = memcmp(__s1,&DAT_01e261d4,3), iVar1 != 0)) {
          sVar2 = (size_t)(local_44 + 1);
        }
        else {
          sVar2 = (long)local_44 + 1;
          pvVar4 = (void *)((long)__s1 + 3);
        }
        goto LAB_019e1ca0;
      }
      goto LAB_019e1cc4;
    }
    puVar5 = (undefined1 *)0x0;
    if ((*(uint *)(param_1[100] + 0x78) >> 5 & 1) != 0) {
      lVar6 = (long)local_44;
      if ((local_44 < 2) || (*(char *)((long)__s1 + 1) != '~')) {
        __dest = (undefined1 *)(*(code *)PTR_malloc_02bf74a8)((long)(local_44 + 1));
        if (__dest == (undefined1 *)0x0) goto LAB_019e1cc4;
        sVar2 = (long)local_44 + 1;
        puVar5 = __dest;
LAB_019e1ca0:
        memcpy(__dest,pvVar4,sVar2);
      }
      else {
        sVar2 = strlen(param_2);
        puVar5 = (undefined1 *)(*(code *)PTR_malloc_02bf74a8)(sVar2 + 1 + lVar6);
        if (puVar5 == (undefined1 *)0x0) {
LAB_019e1cc4:
          (*(code *)PTR_free_02bf74b0)(__s1);
          goto LAB_019e1cd8;
        }
        memcpy(puVar5,param_2,sVar2);
        puVar5[sVar2] = 0x2f;
        puVar5[sVar2 + 1] = 0;
        if (3 < local_44) {
          __dest = puVar5 + sVar2 + 1;
          sVar2 = (long)local_44 - 2;
          pvVar4 = (void *)((long)__s1 + 3);
          goto LAB_019e1ca0;
        }
      }
    }
    (*(code *)PTR_free_02bf74b0)(__s1);
    uVar3 = 0;
    *param_3 = puVar5;
  }
  return uVar3;
}




undefined8 FUN_019e1d04(long *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined *puVar5;
  size_t sVar6;
  long lVar7;
  char *__s;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  
  pcVar10 = (char *)*param_1;
  sVar6 = strspn(pcVar10," \t\r\n");
  puVar5 = PTR_malloc_02bf74a8;
  pcVar10 = pcVar10 + sVar6;
  if (*pcVar10 == '\0') {
    *param_1 = (long)pcVar10;
  }
  else {
    sVar6 = strlen(pcVar10);
    lVar7 = (*(code *)puVar5)(sVar6 + 1);
    *param_2 = lVar7;
    if (lVar7 == 0) {
      return 0x1b;
    }
    cVar2 = *pcVar10;
    if ((cVar2 != '\'') && (cVar2 != '\"')) {
      __s = strpbrk(pcVar10," \t\r\n");
      if (__s == (char *)0x0) {
        sVar6 = strlen(pcVar10);
        __s = pcVar10 + sVar6;
      }
      sVar6 = strspn(__s," \t\r\n");
      *param_1 = (long)(__s + sVar6);
      memcpy((void *)*param_2,pcVar10,(long)__s - (long)pcVar10);
      *(undefined1 *)(*param_2 + ((long)__s - (long)pcVar10)) = 0;
      return 0;
    }
    uVar11 = 0;
    uVar9 = 0;
    pcVar10 = pcVar10 + 1;
    uVar8 = 0;
    while (cVar3 = pcVar10[uVar11], cVar3 != cVar2) {
      if (cVar3 == '\\') {
        uVar9 = uVar9 + 1;
        bVar4 = pcVar10[uVar9];
        if ((0x3a < bVar4 - 0x22) ||
           ((1L << ((ulong)(bVar4 - 0x22) & 0x3f) & 0x400000000000021U) == 0)) goto LAB_019e1eb0;
      }
      else {
        if (cVar3 == '\0') goto LAB_019e1eb0;
        bVar4 = pcVar10[uVar9];
      }
      uVar1 = uVar8 + 1;
      uVar9 = uVar9 + 1;
      uVar11 = (ulong)uVar9;
      *(byte *)(*param_2 + (ulong)uVar8) = bVar4;
      sVar6 = strlen(pcVar10);
      uVar8 = uVar1;
      if (sVar6 < uVar11) goto joined_r0x019e1eac;
    }
    uVar11 = (ulong)(uVar9 + 1);
    *(undefined1 *)(*param_2 + (ulong)uVar8) = 0;
    uVar1 = uVar8;
joined_r0x019e1eac:
    if (uVar1 != 0) {
      sVar6 = strspn(pcVar10 + uVar11," \t\r\n");
      *param_1 = (long)(pcVar10 + uVar11 + sVar6);
      return 0;
    }
LAB_019e1eb0:
    if (*param_2 == 0) {
      return 0x15;
    }
    (*(code *)PTR_free_02bf74b0)();
  }
  *param_2 = 0;
  return 0x15;
}




char * FUN_019e1ee8(int param_1)

{
  if (param_1 - 2U < 0x14) {
    return (&PTR_s_No_such_file_or_directory_02bb05e0)[(int)(param_1 - 2U)];
  }
  return "Unknown error in libssh2";
}




long FUN_019e1f20(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *in_x4;
  
  lVar2 = libssh2_channel_read_ex(*(undefined8 *)(param_1 + 0x658),0);
  if (lVar2 == -0x25) {
    uVar1 = libssh2_session_block_directions(*(undefined8 *)(param_1 + 0x650));
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0x670);
    }
    else {
      uVar1 = uVar1 & 3;
    }
    *(uint *)(param_1 + 0x69c) = uVar1;
    lVar2 = -1;
    *in_x4 = 0x51;
  }
  else {
    *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x670);
  }
  return lVar2;
}




long FUN_019e1f88(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *in_x4;
  
  lVar3 = libssh2_channel_write_ex(*(undefined8 *)(param_1 + 0x658),0);
  if (lVar3 == -0x25) {
    uVar1 = libssh2_session_block_directions(*(undefined8 *)(param_1 + 0x650));
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0x670);
    }
    else {
      uVar1 = uVar1 & 3;
    }
    lVar3 = 0;
    *(uint *)(param_1 + 0x69c) = uVar1;
    uVar2 = 0x51;
  }
  else {
    *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x670);
    if (-1 < lVar3) {
      return lVar3;
    }
    uVar2 = FUN_019e1a68();
    lVar3 = -1;
  }
  *in_x4 = uVar2;
  return lVar3;
}

