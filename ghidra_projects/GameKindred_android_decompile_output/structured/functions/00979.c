// functions/00979 — 17 functions
#include "libGameKindred.h"




void FUN_0097905c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0xe8;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xe8;
        puVar2 = puVar2 + 0x1d;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
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




undefined8 FUN_009790d4(long param_1,byte *param_2,long param_3)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  void *__s1;
  long lVar4;
  long lVar5;
  
  if (*(uint *)(param_1 + 0x58) != 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar5 = lVar4 + (ulong)*(uint *)(param_1 + 0x58) * 0x70;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      bVar1 = *(byte *)(lVar4 + 8);
      uVar3 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar3 = *(ulong *)(lVar4 + 0x10);
      }
      if (uVar3 == __n) {
        __s1 = *(void **)(lVar4 + 0x18);
        if ((bVar1 & 1) == 0) {
          __s1 = (void *)(lVar4 + 9);
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
LAB_0097919c:
            FUN_008fce60(param_3 + 8,(byte *)(lVar4 + 8));
            FUN_008fce60(param_3 + 0x20,lVar4 + 0x20);
            FUN_008fce60(param_3 + 0x38,lVar4 + 0x38);
            FUN_008fce60(param_3 + 0x50,lVar4 + 0x50);
            *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(lVar4 + 0x68);
            *(undefined2 *)(param_3 + 0x6c) = *(undefined2 *)(lVar4 + 0x6c);
            return 1;
          }
          uVar3 = 0;
          while (*(byte *)(lVar4 + uVar3 + 9) == __s2[uVar3]) {
            uVar3 = uVar3 + 1;
            if (bVar1 >> 1 == uVar3) goto LAB_0097919c;
          }
        }
        else if ((__n == 0) || (iVar2 = memcmp(__s1,__s2,__n), iVar2 == 0)) goto LAB_0097919c;
      }
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != lVar5);
  }
  return 0;
}




undefined8 FUN_009791f4(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_0097b75c(param_2,(int *)(param_1 + 0x58));
    return 1;
  }
  return 0;
}




void FUN_00979228(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        FUN_00979944(param_2,lVar1);
      }
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00979280(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == param_3) {
        FUN_00979944(param_2,lVar1);
      }
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_009792e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 1) {
        FUN_00979944(param_2,lVar1);
      }
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar2 != 0);
  }
  return;
}




undefined8 FUN_0097933c(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_0097b974(param_2,(int *)(param_1 + 0x68));
    return 1;
  }
  return 0;
}




void FUN_00979370(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_008fce60(param_2,param_1 + 0x78);
  FUN_008fce60(param_3,param_1 + 0x90);
  return;
}




void FUN_009793a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 2) {
        FUN_00979944(param_2,lVar1);
      }
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00979404(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 3) {
        FUN_00979944(param_2,lVar1);
      }
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00979460(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 4) {
        FUN_00979944(param_2,lVar1);
      }
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_009794bc(long param_1,undefined8 param_2)

{
  FUN_00930d7c(param_2,param_1 + 0xa8);
  return;
}




undefined8 FUN_009794cc(long param_1,byte *param_2,long param_3)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  void *__s1;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar6 = lVar5 + (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      if (*(uint *)(lVar5 + 8) != 0) {
        lVar4 = *(long *)(lVar5 + 0x10);
        lVar7 = lVar4 + (ulong)*(uint *)(lVar5 + 8) * 0xa0;
        do {
          bVar1 = *(byte *)(lVar4 + 0x60);
          uVar3 = (ulong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            uVar3 = *(ulong *)(lVar4 + 0x68);
          }
          if (uVar3 == __n) {
            __s1 = *(void **)(lVar4 + 0x70);
            if ((bVar1 & 1) == 0) {
              __s1 = (void *)(lVar4 + 0x61);
            }
            if ((bVar1 & 1) == 0) {
              if (__n == 0) {
LAB_009795c0:
                FUN_0097b658(param_3 + 8,lVar4 + 8);
                FUN_008fce60(param_3 + 0x18,lVar4 + 0x18);
                uVar8 = *(undefined8 *)(lVar4 + 0x30);
                *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
                *(undefined8 *)(param_3 + 0x30) = uVar8;
                uVar8 = *(undefined8 *)(lVar4 + 0x40);
                *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
                *(undefined8 *)(param_3 + 0x40) = uVar8;
                uVar8 = *(undefined8 *)(lVar4 + 0x50);
                *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(lVar4 + 0x58);
                *(undefined8 *)(param_3 + 0x50) = uVar8;
                FUN_008fce60(param_3 + 0x60,(byte *)(lVar4 + 0x60));
                FUN_00910394(param_3 + 0x78,lVar4 + 0x78);
                FUN_00910394(param_3 + 0x88,lVar4 + 0x88);
                *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(lVar4 + 0x98);
                return 1;
              }
              uVar3 = 0;
              while (*(byte *)(lVar4 + uVar3 + 0x61) == __s2[uVar3]) {
                uVar3 = uVar3 + 1;
                if (bVar1 >> 1 == uVar3) goto LAB_009795c0;
              }
            }
            else if ((__n == 0) || (iVar2 = memcmp(__s1,__s2,__n), iVar2 == 0)) goto LAB_009795c0;
          }
          lVar4 = lVar4 + 0xa0;
        } while (lVar4 != lVar7);
      }
      lVar5 = lVar5 + 0xe8;
    } while (lVar5 != lVar6);
  }
  return 0;
}




undefined8 FUN_0097963c(long param_1,byte *param_2,long param_3)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  void *__s1;
  long lVar4;
  long lVar5;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar5 = lVar4 + (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      bVar1 = *(byte *)(lVar4 + 0xa8);
      uVar3 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar3 = *(ulong *)(lVar4 + 0xb0);
      }
      if (uVar3 == __n) {
        __s1 = *(void **)(lVar4 + 0xb8);
        if ((bVar1 & 1) == 0) {
          __s1 = (void *)(lVar4 + 0xa9);
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
LAB_00979704:
            FUN_009782bc(param_3 + 8,lVar4 + 8);
            FUN_00910394(param_3 + 0x18,lVar4 + 0x18);
            FUN_00910394(param_3 + 0x28,lVar4 + 0x28);
            FUN_00910394(param_3 + 0x38,lVar4 + 0x38);
            FUN_008fce60(param_3 + 0x48,lVar4 + 0x48);
            FUN_008fce60(param_3 + 0x60,lVar4 + 0x60);
            FUN_008fce60(param_3 + 0x78,lVar4 + 0x78);
            FUN_008fce60(param_3 + 0x90,lVar4 + 0x90);
            FUN_008fce60(param_3 + 0xa8,(byte *)(lVar4 + 0xa8));
            FUN_008fce60(param_3 + 0xc0,lVar4 + 0xc0);
            *(undefined8 *)(param_3 + 0xd8) = *(undefined8 *)(lVar4 + 0xd8);
            *(undefined8 *)(param_3 + 0xde) = *(undefined8 *)(lVar4 + 0xde);
            return 1;
          }
          uVar3 = 0;
          while (*(byte *)(lVar4 + uVar3 + 0xa9) == __s2[uVar3]) {
            uVar3 = uVar3 + 1;
            if (bVar1 >> 1 == uVar3) goto LAB_00979704;
          }
        }
        else if ((__n == 0) || (iVar2 = memcmp(__s1,__s2,__n), iVar2 == 0)) goto LAB_00979704;
      }
      lVar4 = lVar4 + 0xe8;
    } while (lVar4 != lVar5);
  }
  return 0;
}




undefined8 FUN_009797a4(long param_1,byte *param_2,long param_3)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  void *__s1;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar6 = lVar5 + (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      uVar1 = *(uint *)(lVar5 + 8);
      if (uVar1 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = lVar7 + (ulong)uVar1 * 0xa0;
        do {
          bVar2 = *(byte *)(lVar7 + 0x60);
          uVar4 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar4 = *(ulong *)(lVar7 + 0x68);
          }
          if (uVar4 == __n) {
            __s1 = *(void **)(lVar7 + 0x70);
            if ((bVar2 & 1) == 0) {
              __s1 = (void *)(lVar7 + 0x61);
            }
            if ((bVar2 & 1) == 0) {
              if (__n == 0) {
LAB_0097989c:
                FUN_009782bc(param_3 + 8,(uint *)(lVar5 + 8));
                FUN_00910394(param_3 + 0x18,lVar5 + 0x18);
                FUN_00910394(param_3 + 0x28,lVar5 + 0x28);
                FUN_00910394(param_3 + 0x38,lVar5 + 0x38);
                FUN_008fce60(param_3 + 0x48,lVar5 + 0x48);
                FUN_008fce60(param_3 + 0x60,lVar5 + 0x60);
                FUN_008fce60(param_3 + 0x78,lVar5 + 0x78);
                FUN_008fce60(param_3 + 0x90,lVar5 + 0x90);
                FUN_008fce60(param_3 + 0xa8,lVar5 + 0xa8);
                FUN_008fce60(param_3 + 0xc0,lVar5 + 0xc0);
                *(undefined8 *)(param_3 + 0xd8) = *(undefined8 *)(lVar5 + 0xd8);
                *(undefined8 *)(param_3 + 0xde) = *(undefined8 *)(lVar5 + 0xde);
                return 1;
              }
              uVar4 = 0;
              while (*(byte *)(lVar7 + uVar4 + 0x61) == __s2[uVar4]) {
                uVar4 = uVar4 + 1;
                if (bVar2 >> 1 == uVar4) goto LAB_0097989c;
              }
            }
            else if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_0097989c;
          }
          lVar7 = lVar7 + 0xa0;
        } while (lVar7 != lVar8);
      }
      lVar5 = lVar5 + 0xe8;
    } while (lVar5 != lVar6);
  }
  return 0;
}




void FUN_00979944(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_0097bc3c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xe8;
  *(undefined ***)(lVar4 + -0xe8) = &PTR_FUN_027bcab8;
  FUN_0097bdb4(lVar4 + -0xe0,param_2 + 8);
  thunk_FUN_00e7051c(lVar4 + -0xd0,param_2 + 0x18);
  thunk_FUN_00e7051c(lVar4 + -0xc0,param_2 + 0x28);
  thunk_FUN_00e7051c(lVar4 + -0xb0,param_2 + 0x38);
  FUN_008fcdb8(lVar4 + -0xa0,param_2 + 0x48);
  FUN_008fcdb8(lVar4 + -0x88,param_2 + 0x60);
  FUN_008fcdb8(lVar4 + -0x70,param_2 + 0x78);
  FUN_008fcdb8(lVar4 + -0x58,param_2 + 0x90);
  FUN_008fcdb8(lVar4 + -0x40,param_2 + 0xa8);
  FUN_008fcdb8(lVar4 + -0x28,param_2 + 0xc0);
  *(undefined8 *)(lVar4 + -10) = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0xd8);
  return;
}




void FUN_00979a64(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint *puVar12;
  char *pcVar13;
  size_t sVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  ulong uVar23;
  uint *puVar24;
  byte *pbVar25;
  long *plVar26;
  byte *pbVar27;
  double dVar28;
  double dVar29;
  byte local_1c8 [16];
  char *local_1b8;
  byte local_1b0 [16];
  char *local_1a0;
  byte local_198 [8];
  ulong local_190;
  void *local_188;
  undefined **local_180;
  ulong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  byte local_168;
  undefined7 uStack_167;
  byte local_160;
  undefined7 uStack_15f;
  void *local_158;
  byte local_150;
  undefined7 uStack_14f;
  byte local_148;
  void *local_140;
  float local_138;
  float fStack_134;
  uint local_130;
  void *local_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined1 auStack_118 [8];
  void *local_110;
  char *local_98;
  void *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  uVar6 = 0;
  if (((int)param_2[0xb] != 0) || (uVar6 = 0, (int)param_2[2] != 3)) goto LAB_0097aa9c;
  lVar7 = FUN_008fd190(param_2,"items");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar7) {
    local_180 = (undefined **)0x1b93df9;
    local_170 = 0x100005;
    local_178 = 5;
    lVar7 = FUN_008feca4(param_2,&local_180);
    uVar6 = 0;
    if (*(int *)(lVar7 + 0x10) != 4) goto LAB_0097aa9c;
    lVar7 = FUN_008fd190(param_2,"timestamp");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar7) {
      local_180 = (undefined **)0x1b96f45;
      local_170 = 0x100005;
      local_178 = 9;
      lVar7 = FUN_008feca4(param_2,&local_180);
      if ((*(byte *)(lVar7 + 0x11) >> 6 & 1) == 0) {
        local_180 = (undefined **)0x1b96f45;
        local_170 = 0x100005;
        local_178 = 9;
        lVar7 = FUN_008feca4(param_2,&local_180);
        uVar6 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) goto LAB_0097aa9c;
      }
      (**(code **)(*param_1 + 0x10))(param_1);
      local_180 = (undefined **)0x1b93df9;
      local_170 = 0x100005;
      local_178 = 5;
      plVar8 = (long *)FUN_008feca4(param_2,&local_180);
      if ((int)plVar8[1] != 0) {
        uVar16 = 0;
        do {
          lVar7 = *plVar8;
          plVar26 = (long *)(lVar7 + uVar16 * 0x18);
          if ((int)plVar26[2] != 3) goto LAB_0097aa98;
          lVar9 = FUN_008fd190(plVar26,"category");
          puVar24 = (uint *)(lVar7 + uVar16 * 0x18 + 8);
          if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar9) goto LAB_0097aa98;
          local_180 = (undefined **)0x1b9727c;
          local_170 = 0x100005;
          local_178 = 8;
          lVar7 = FUN_008feca4(plVar26,&local_180);
          if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_0097aa98;
          lVar7 = FUN_008fd190(plVar26,"category");
          if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) {
            puVar10 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_180 = (undefined **)0x1b9727c;
            local_170 = 0x100005;
            local_178 = 8;
            lVar7 = FUN_008feca4(plVar26,&local_180);
            puVar10 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
              local_180 = (undefined **)0x1b9727c;
              local_170 = 0x100005;
              local_178 = 8;
              puVar10 = (undefined8 *)FUN_008feca4(plVar26,&local_180);
              if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar10;
              }
            }
          }
          FUN_008fa54c(local_198,puVar10);
          uVar18 = (ulong)(local_198[0] >> 1);
          uVar19 = uVar18;
          if ((local_198[0] & 1) != 0) {
            uVar19 = local_190;
          }
          if (uVar19 == 4) {
            iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,&DAT_01b9230f,4);
            if (iVar5 != 0) {
              uVar18 = (ulong)(local_198[0] >> 1);
              goto LAB_00979dcc;
            }
            lVar7 = FUN_008fd190(plVar26,&DAT_01b9725b);
            if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) goto LAB_0097aa5c;
            local_180 = (undefined **)&DAT_01b9725b;
            local_170 = 0x100005;
            local_178 = 4;
            lVar7 = FUN_008feca4(plVar26,&local_180);
            if ((*(int *)(lVar7 + 0x10) != 4) ||
               (lVar7 = FUN_008fd190(plVar26,"symbol"), *plVar26 + (ulong)*puVar24 * 0x30 == lVar7))
            goto LAB_0097aa5c;
            local_180 = (undefined **)0x1ba3ebe;
            uVar15 = 6;
LAB_0097a0d8:
            local_170 = 0x100005;
            local_178 = (ulong)uVar15;
            lVar7 = FUN_008feca4(plVar26,&local_180);
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
LAB_0097a28c:
              FUN_0097b188(&local_180,plVar26);
              FUN_00979944(param_1 + 9,&local_180);
              FUN_009767f4(&local_180);
            }
          }
          else {
LAB_00979dcc:
            uVar19 = uVar18;
            if ((local_198[0] & 1) != 0) {
              uVar19 = local_190;
            }
            if (uVar19 == 4) {
              iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,"hero",4);
              if (iVar5 != 0) {
                uVar18 = (ulong)(local_198[0] >> 1);
                goto LAB_00979e0c;
              }
              lVar7 = FUN_008fd190(plVar26,"title");
              if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) goto LAB_0097aa5c;
              local_180 = (undefined **)0x1b96f62;
              local_170 = 0x100005;
              local_178 = 5;
              lVar7 = FUN_008feca4(plVar26,&local_180);
              if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) ||
                 (lVar7 = FUN_008fd190(plVar26,&DAT_01b9725b),
                 *plVar26 + (ulong)*puVar24 * 0x30 == lVar7)) goto LAB_0097aa5c;
              local_180 = (undefined **)&DAT_01b9725b;
              local_170 = 0x100005;
              local_178 = 4;
              lVar7 = FUN_008feca4(plVar26,&local_180);
              if ((*(int *)(lVar7 + 0x10) != 4) ||
                 (lVar7 = FUN_008fd190(plVar26,"symbol"), *plVar26 + (ulong)*puVar24 * 0x30 == lVar7
                 )) goto LAB_0097aa5c;
              local_180 = (undefined **)0x1ba3ebe;
              local_170 = 0x100005;
              local_178 = 6;
              lVar7 = FUN_008feca4(plVar26,&local_180);
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_0097aa5c;
LAB_0097a1f4:
              lVar7 = FUN_008fd190(plVar26,"image");
              if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) goto LAB_0097aa5c;
              local_180 = (undefined **)0x1bf2a9c;
              uVar15 = 5;
              goto LAB_0097a0d8;
            }
LAB_00979e0c:
            uVar19 = uVar18;
            if ((local_198[0] & 1) != 0) {
              uVar19 = local_190;
            }
            if (uVar19 == 6) {
              iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,"bundle",6);
              if (iVar5 != 0) {
                uVar18 = (ulong)(local_198[0] >> 1);
                goto LAB_00979e4c;
              }
              lVar7 = FUN_008fd190(plVar26,&DAT_01b9725b);
              if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) goto LAB_0097aa5c;
              local_180 = (undefined **)&DAT_01b9725b;
              local_170 = 0x100005;
              local_178 = 4;
              lVar7 = FUN_008feca4(plVar26,&local_180);
              if (*(int *)(lVar7 + 0x10) != 4) goto LAB_0097aa5c;
              goto LAB_0097a28c;
            }
LAB_00979e4c:
            uVar19 = uVar18;
            if ((local_198[0] & 1) != 0) {
              uVar19 = local_190;
            }
            if (uVar19 == 5) {
              iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,"boost",5);
              if (iVar5 == 0) {
                lVar7 = FUN_008fd190(plVar26,"symbol");
                if (*plVar26 + (ulong)*puVar24 * 0x30 != lVar7) {
                  local_180 = (undefined **)0x1ba3ebe;
                  local_170 = 0x100005;
                  local_178 = 6;
                  lVar7 = FUN_008feca4(plVar26,&local_180);
                  if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) &&
                     (lVar7 = FUN_008fd190(plVar26,"title"),
                     *plVar26 + (ulong)*puVar24 * 0x30 != lVar7)) {
                    local_180 = (undefined **)0x1b96f62;
                    local_170 = 0x100005;
                    local_178 = 5;
                    lVar7 = FUN_008feca4(plVar26,&local_180);
                    if (((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) &&
                       (lVar7 = FUN_008fd190(plVar26,"description"),
                       *plVar26 + (ulong)*puVar24 * 0x30 != lVar7)) {
                      local_180 = (undefined **)0x1e2b204;
                      local_170 = 0x100005;
                      local_178 = 0xb;
                      lVar7 = FUN_008feca4(plVar26,&local_180);
                      if ((*(int *)(lVar7 + 0x10) == 4) &&
                         (lVar7 = FUN_008fd190(plVar26,&DAT_01b9725b),
                         *plVar26 + (ulong)*puVar24 * 0x30 != lVar7)) {
                        local_180 = (undefined **)&DAT_01b9725b;
                        local_170 = 0x100005;
                        local_178 = 4;
                        lVar7 = FUN_008feca4(plVar26,&local_180);
                        if (*(int *)(lVar7 + 0x10) == 4) goto LAB_0097a1f4;
                      }
                    }
                  }
                }
                goto LAB_0097aa5c;
              }
              uVar18 = (ulong)(local_198[0] >> 1);
            }
            uVar19 = uVar18;
            if ((local_198[0] & 1) != 0) {
              uVar19 = local_190;
            }
            if (uVar19 == 3) {
              iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,&DAT_01b97349,3);
              if (iVar5 != 0) {
                uVar18 = (ulong)(local_198[0] >> 1);
                goto LAB_00979ecc;
              }
              lVar7 = FUN_008fd190(plVar26,"productID");
              if (*plVar26 + (ulong)*puVar24 * 0x30 != lVar7) {
                local_180 = (undefined **)0x1b923af;
                local_170 = 0x100005;
                local_178 = 9;
                lVar7 = FUN_008feca4(plVar26,&local_180);
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  FUN_0097b2d0(&local_180,plVar26);
                  FUN_0097b1f8(param_1 + 0xb,&local_180);
                  local_180 = &PTR_FUN_027bca68;
                  if ((local_130 & 1) != 0) {
                    operator_delete((void *)CONCAT71(uStack_11f,local_120));
                  }
                  if ((local_148 & 1) != 0) {
                    operator_delete((void *)CONCAT44(fStack_134,local_138));
                  }
                  if ((local_160 & 1) != 0) {
                    operator_delete((void *)CONCAT71(uStack_14f,local_150));
                  }
                  if ((local_178 & 1) != 0) {
                    operator_delete((void *)CONCAT71(uStack_167,local_168));
                  }
                  FUN_0097b388(&local_180);
                  lVar7 = FUN_008fd190(plVar26,"productID");
                  if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) {
                    puVar10 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_98 = "productID";
                    local_88 = 0x100005;
                    local_90 = (void *)0x9;
                    lVar7 = FUN_008feca4(plVar26,&local_98);
                    puVar10 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_98 = "productID";
                      local_88 = 0x100005;
                      local_90 = (void *)0x9;
                      puVar10 = (undefined8 *)FUN_008feca4(plVar26,&local_98);
                      if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                        puVar10 = (undefined8 *)*puVar10;
                      }
                    }
                  }
                  FUN_008fa54c(&local_98,puVar10);
                  FUN_008fce60(&local_180,&local_98);
                  if (((ulong)local_98 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_84,local_88));
                  }
                  lVar7 = FUN_008fd190(plVar26,"priceGiantCNY");
                  dVar29 = 0.0;
                  dVar28 = 0.0;
                  if (*plVar26 + (ulong)*puVar24 * 0x30 != lVar7) {
                    local_98 = "priceGiantCNY";
                    local_88 = 0x100005;
                    local_90 = (void *)0xd;
                    lVar7 = FUN_008feca4(plVar26,&local_98);
                    dVar28 = 0.0;
                    if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
                      local_98 = "priceGiantCNY";
                      local_88 = 0x100005;
                      local_90 = (void *)0xd;
                      FUN_008feca4(plVar26,&local_98);
                      dVar28 = (double)FUN_008fc0f0();
                    }
                  }
                  fStack_134 = (float)dVar28;
                  lVar7 = FUN_008fd190(plVar26,"priceAnalyticsUSD");
                  if (*plVar26 + (ulong)*puVar24 * 0x30 != lVar7) {
                    local_98 = "priceAnalyticsUSD";
                    local_88 = 0x100005;
                    local_90 = (void *)0x11;
                    lVar7 = FUN_008feca4(plVar26,&local_98);
                    if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
                      local_98 = "priceAnalyticsUSD";
                      local_88 = 0x100005;
                      local_90 = (void *)0x11;
                      FUN_008feca4(plVar26,&local_98);
                      dVar29 = (double)FUN_008fc0f0();
                    }
                  }
                  local_138 = (float)dVar29;
                  lVar7 = FUN_008fd190(plVar26,"amount");
                  if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) {
                    uVar15 = 0;
                  }
                  else {
                    local_98 = "amount";
                    local_88 = 0x100005;
                    local_90 = (void *)0x6;
                    lVar7 = FUN_008feca4(plVar26,&local_98);
                    uVar15 = 0;
                    if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                      local_98 = "amount";
                      local_88 = 0x100005;
                      local_90 = (void *)0x6;
                      puVar12 = (uint *)FUN_008feca4(plVar26,&local_98);
                      uVar15 = *puVar12;
                    }
                  }
                  local_130 = uVar15;
                  FUN_008fa54c(local_1b0,"description_en");
                  FUN_008fa54c(local_1c8,"description_");
                  pcVar13 = (char *)FUN_00939a50();
                  sVar14 = strlen(pcVar13);
                  FUN_0090de84(local_1c8,pcVar13,sVar14);
                  pcVar13 = (char *)((ulong)local_1c8 | 1);
                  if ((local_1c8[0] & 1) != 0) {
                    pcVar13 = local_1b8;
                  }
                  lVar7 = FUN_008fd190(plVar26,pcVar13);
                  if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) {
LAB_0097a7d0:
                    pcVar13 = (char *)((ulong)local_1b0 | 1);
                    if ((local_1b0[0] & 1) != 0) {
                      pcVar13 = local_1a0;
                    }
                    lVar7 = FUN_008fd190(plVar26,pcVar13);
                    if (*plVar26 + (ulong)*puVar24 * 0x30 != lVar7) {
                      pcVar17 = pcVar13 + -1;
                      do {
                        pcVar17 = pcVar17 + 1;
                      } while (*pcVar17 != '\0');
                      local_88 = 0x100005;
                      local_90 = (void *)(ulong)(uint)((int)pcVar17 - (int)pcVar13);
                      local_98 = pcVar13;
                      lVar7 = FUN_008feca4(plVar26,&local_98);
                      if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                        pcVar13 = (char *)((ulong)local_1b0 | 1);
                        if ((local_1b0[0] & 1) != 0) {
                          pcVar13 = local_1a0;
                        }
                        lVar7 = FUN_008fd190(plVar26,pcVar13);
                        if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) goto LAB_0097a9b4;
                        pcVar22 = pcVar13 + -1;
                        pcVar17 = pcVar22;
                        do {
                          pcVar17 = pcVar17 + 1;
                        } while (*pcVar17 != '\0');
                        local_88 = 0x100005;
                        local_90 = (void *)(ulong)(uint)((int)pcVar17 - (int)pcVar13);
                        local_98 = pcVar13;
                        lVar7 = FUN_008feca4(plVar26,&local_98);
                        puVar10 = (undefined8 *)&DAT_01e277f2;
                        if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                          do {
                            pcVar22 = pcVar22 + 1;
                          } while (*pcVar22 != '\0');
                          goto LAB_0097a97c;
                        }
                        goto LAB_0097a9bc;
                      }
                    }
                    FUN_00e705c8(&local_98,"Vainglory product");
                    FUN_00910394(&local_158,&local_98);
                    if (local_90 != (void *)0x0) {
                      operator_delete__(local_90);
                      local_98 = (char *)0x0;
                      local_90 = (void *)0x0;
                    }
                  }
                  else {
                    pcVar17 = pcVar13 + -1;
                    do {
                      pcVar17 = pcVar17 + 1;
                    } while (*pcVar17 != '\0');
                    local_88 = 0x100005;
                    local_90 = (void *)(ulong)(uint)((int)pcVar17 - (int)pcVar13);
                    local_98 = pcVar13;
                    lVar7 = FUN_008feca4(plVar26,&local_98);
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_0097a7d0;
                    pcVar13 = (char *)((ulong)local_1c8 | 1);
                    if ((local_1c8[0] & 1) != 0) {
                      pcVar13 = local_1b8;
                    }
                    lVar7 = FUN_008fd190(plVar26,pcVar13);
                    if (*plVar26 + (ulong)*puVar24 * 0x30 == lVar7) {
LAB_0097a9b4:
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                    }
                    else {
                      pcVar22 = pcVar13 + -1;
                      pcVar17 = pcVar22;
                      do {
                        pcVar17 = pcVar17 + 1;
                      } while (*pcVar17 != '\0');
                      local_88 = 0x100005;
                      local_90 = (void *)(ulong)(uint)((int)pcVar17 - (int)pcVar13);
                      local_98 = pcVar13;
                      lVar7 = FUN_008feca4(plVar26,&local_98);
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                      if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                        do {
                          pcVar22 = pcVar22 + 1;
                        } while (*pcVar22 != '\0');
LAB_0097a97c:
                        local_88 = 0x100005;
                        local_90 = (void *)(ulong)(uint)((int)pcVar22 - (int)pcVar13);
                        local_98 = pcVar13;
                        puVar10 = (undefined8 *)FUN_008feca4(plVar26,&local_98);
                        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                          puVar10 = (undefined8 *)*puVar10;
                        }
                      }
                    }
LAB_0097a9bc:
                    FUN_00e705c8(&local_98,puVar10);
                    FUN_00910394(&local_158,&local_98);
                    if (local_90 != (void *)0x0) {
                      operator_delete__(local_90);
                      local_98 = (char *)0x0;
                      local_90 = (void *)0x0;
                    }
                  }
                  FUN_0097b3d0(param_1 + 0x15,&local_180);
                  if ((local_1c8[0] & 1) != 0) {
                    operator_delete(local_1b8);
                  }
                  if ((local_1b0[0] & 1) != 0) {
                    operator_delete(local_1a0);
                  }
                  if (local_140 != (void *)0x0) {
                    operator_delete__(local_140);
                    local_148 = 0;
                    local_140 = (void *)0x0;
                  }
                  if ((void *)CONCAT71(uStack_14f,local_150) != (void *)0x0) {
                    operator_delete__((void *)CONCAT71(uStack_14f,local_150));
                    local_158 = (void *)0x0;
                    uStack_14f = 0;
                    local_150 = 0;
                  }
                  if ((void *)CONCAT71(uStack_15f,local_160) != (void *)0x0) {
                    operator_delete__((void *)CONCAT71(uStack_15f,local_160));
                    uStack_167 = 0;
                    local_168 = 0;
                    uStack_15f = 0;
                    local_160 = 0;
                  }
                  if (((ulong)local_180 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_16c,local_170));
                  }
                }
              }
            }
            else {
LAB_00979ecc:
              uVar19 = uVar18;
              if ((local_198[0] & 1) != 0) {
                uVar19 = local_190;
              }
              if (uVar19 == 0xd) {
                iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,"socialActions",0xd);
                if (iVar5 == 0) goto LAB_0097a28c;
                uVar18 = (ulong)(local_198[0] >> 1);
              }
              if ((local_198[0] & 1) != 0) {
                uVar18 = local_190;
              }
              if (((uVar18 == 0xf) &&
                  (iVar5 = FUN_0090d610(local_198,0,0xffffffffffffffff,"ascensionReward",0xf),
                  iVar5 == 0)) &&
                 (lVar7 = FUN_008fd190(plVar26,"level"), *plVar26 + (ulong)*puVar24 * 0x30 != lVar7)
                 ) {
                local_180 = (undefined **)0x1bc67e6;
                local_170 = 0x100005;
                local_178 = 5;
                lVar7 = FUN_008feca4(plVar26,&local_180);
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_180 = (undefined **)0x1bc67e6;
                  local_170 = 0x100005;
                  local_178 = 5;
                  piVar11 = (int *)FUN_008feca4(plVar26,&local_180);
                  if (*piVar11 != 0) {
                    FUN_0097b580(&local_180,plVar26);
                    FUN_0097b498(param_1 + 0xd,&local_180);
                    local_180 = &PTR_FUN_027bcae0;
                    FUN_00977f18(auStack_118,1);
                    if ((local_130 & 1) != 0) {
                      operator_delete((void *)CONCAT71(uStack_11f,local_120));
                    }
                    if ((local_148 & 1) != 0) {
                      operator_delete((void *)CONCAT44(fStack_134,local_138));
                    }
                    if ((void *)CONCAT71(uStack_14f,local_150) != (void *)0x0) {
                      operator_delete__((void *)CONCAT71(uStack_14f,local_150));
                      local_158 = (void *)0x0;
                      uStack_14f = 0;
                      local_150 = 0;
                    }
                    if ((void *)CONCAT71(uStack_15f,local_160) != (void *)0x0) {
                      operator_delete__((void *)CONCAT71(uStack_15f,local_160));
                      uStack_167 = 0;
                      local_168 = 0;
                      uStack_15f = 0;
                      local_160 = 0;
                    }
                    if ((void *)CONCAT44(uStack_16c,local_170) != (void *)0x0) {
                      operator_delete__((void *)CONCAT44(uStack_16c,local_170));
                      local_178 = 0;
                      uStack_16c = 0;
                      local_170 = 0;
                    }
                  }
                }
              }
            }
          }
LAB_0097aa5c:
          if ((local_198[0] & 1) != 0) {
            operator_delete(local_188);
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar15;
        } while (uVar15 < *(uint *)(plVar8 + 1));
      }
      pbVar25 = (byte *)(param_1 + 0xf);
      if ((*pbVar25 & 1) == 0) {
        pbVar25[0] = 0;
        pbVar25[1] = 0;
      }
      else {
        *(undefined1 *)param_1[0x11] = 0;
        param_1[0x10] = 0;
      }
      pbVar27 = (byte *)(param_1 + 0x12);
      if ((*pbVar27 & 1) == 0) {
        pbVar27[0] = 0;
        pbVar27[1] = 0;
      }
      else {
        *(undefined1 *)param_1[0x14] = 0;
        param_1[0x13] = 0;
      }
      lVar7 = FUN_008fd190(param_2,"gamefeed");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar7) {
        local_180 = (undefined **)0x1b9732e;
        local_170 = 0x100005;
        local_178 = 8;
        lVar7 = FUN_008feca4(param_2,&local_180);
        if (*(int *)(lVar7 + 0x10) == 3) {
          local_180 = (undefined **)0x1b9732e;
          local_170 = 0x100005;
          local_178 = 8;
          plVar8 = (long *)FUN_008feca4(param_2,&local_180);
          lVar7 = FUN_008fd190(plVar8,"sections");
          if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
            local_180 = (undefined **)0x1b97337;
            local_170 = 0x100005;
            local_178 = 8;
            lVar7 = FUN_008feca4(plVar8,&local_180);
            if (*(int *)(lVar7 + 0x10) == 4) {
              local_180 = (undefined **)0x1b97337;
              local_170 = 0x100005;
              local_178 = 8;
              plVar8 = (long *)FUN_008feca4(plVar8,&local_180);
              if ((int)plVar8[1] != 0) {
                uVar16 = 0;
                do {
                  plVar26 = (long *)(*plVar8 + uVar16 * 0x18);
                  lVar7 = FUN_008fd190(plVar26,"title");
                  if (*plVar26 + (ulong)*(uint *)(plVar26 + 1) * 0x30 == lVar7) {
                    puVar10 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_180 = (undefined **)0x1b96f62;
                    local_170 = 0x100005;
                    local_178 = 5;
                    lVar7 = FUN_008feca4(plVar26,&local_180);
                    puVar10 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_180 = (undefined **)0x1b96f62;
                      local_170 = 0x100005;
                      local_178 = 5;
                      puVar10 = (undefined8 *)FUN_008feca4(plVar26,&local_180);
                      if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                        puVar10 = (undefined8 *)*puVar10;
                      }
                    }
                  }
                  FUN_008fa54c(&local_98,puVar10);
                  pvVar3 = (void *)((ulong)local_98 >> 1 & 0x7f);
                  if (((ulong)local_98 & 1) != 0) {
                    pvVar3 = local_90;
                  }
                  if ((pvVar3 == (void *)0x1e) &&
                     (iVar5 = FUN_0090d610(&local_98,0,0xffffffffffffffff,
                                           "MENU_MARKET_TAB_NAME_AD_REWARD",0x1e), iVar5 == 0)) {
                    plVar26 = (long *)(*plVar8 + uVar16 * 0x18);
                    lVar7 = FUN_008fd190(plVar26,"items");
                    if (*plVar26 + (ulong)*(uint *)(plVar26 + 1) * 0x30 == lVar7) goto LAB_0097b0d8;
                    local_180 = (undefined **)0x1b93df9;
                    local_170 = 0x100005;
                    local_178 = 5;
                    lVar7 = FUN_008feca4(plVar26,&local_180);
                    if (*(int *)(lVar7 + 0x10) != 4) goto LAB_0097b0d8;
                    local_180 = (undefined **)0x1b93df9;
                    local_170 = 0x100005;
                    local_178 = 5;
                    plVar26 = (long *)FUN_008feca4(*plVar8 + uVar16 * 0x18,&local_180);
                    if ((int)plVar26[1] != 0) {
                      uVar19 = 0;
                      do {
                        plVar20 = (long *)(*plVar26 + uVar19 * 0x18);
                        lVar7 = FUN_008fd190(plVar20,"ctaGroups");
                        if (*plVar20 + (ulong)*(uint *)(plVar20 + 1) * 0x30 != lVar7) {
                          local_180 = (undefined **)0x1b97154;
                          local_170 = 0x100005;
                          local_178 = 9;
                          lVar7 = FUN_008feca4(plVar20,&local_180);
                          if (*(int *)(lVar7 + 0x10) == 4) {
                            local_180 = (undefined **)0x1b97154;
                            local_170 = 0x100005;
                            local_178 = 9;
                            plVar20 = (long *)FUN_008feca4(*plVar26 + uVar19 * 0x18,&local_180);
                            if ((int)plVar20[1] != 0) {
                              uVar18 = 0;
                              do {
                                plVar21 = (long *)(*plVar20 + uVar18 * 0x18);
                                lVar7 = FUN_008fd190(plVar21,"buttons");
                                if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar7) {
                                  local_180 = (undefined **)0x1b96b68;
                                  local_170 = 0x100005;
                                  local_178 = 7;
                                  lVar7 = FUN_008feca4(plVar21,&local_180);
                                  if (*(int *)(lVar7 + 0x10) == 4) {
                                    local_180 = (undefined **)0x1b96b68;
                                    local_170 = 0x100005;
                                    local_178 = 7;
                                    plVar21 = (long *)FUN_008feca4(*plVar20 + uVar18 * 0x18,
                                                                   &local_180);
                                    if ((int)plVar21[1] != 0) {
                                      lVar7 = 0;
                                      uVar23 = 0;
                                      do {
                                        plVar1 = (long *)(*plVar21 + lVar7);
                                        lVar9 = FUN_008fd190(plVar1,"campaignId");
                                        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9)
                                        {
                                          puVar10 = (undefined8 *)&DAT_01e277f2;
                                        }
                                        else {
                                          local_180 = (undefined **)0x1b92234;
                                          local_170 = 0x100005;
                                          local_178 = 10;
                                          lVar9 = FUN_008feca4(plVar1,&local_180);
                                          puVar10 = (undefined8 *)&DAT_01e277f2;
                                          if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                                            local_180 = (undefined **)0x1b92234;
                                            local_170 = 0x100005;
                                            local_178 = 10;
                                            puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_180);
                                            if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                                              puVar10 = (undefined8 *)*puVar10;
                                            }
                                          }
                                        }
                                        FUN_008fa54c(local_198,puVar10);
                                        lVar9 = FUN_008fd190(plVar1,"skuId");
                                        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9)
                                        {
                                          puVar10 = (undefined8 *)&DAT_01e277f2;
                                        }
                                        else {
                                          local_180 = (undefined **)0x1b93019;
                                          local_170 = 0x100005;
                                          local_178 = 5;
                                          lVar9 = FUN_008feca4(plVar1,&local_180);
                                          puVar10 = (undefined8 *)&DAT_01e277f2;
                                          if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                                            local_180 = (undefined **)0x1b93019;
                                            local_170 = 0x100005;
                                            local_178 = 5;
                                            puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_180);
                                            if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                                              puVar10 = (undefined8 *)*puVar10;
                                            }
                                          }
                                        }
                                        FUN_008fa54c(&local_180,puVar10);
                                        uVar2 = (ulong)(local_198[0] >> 1);
                                        if ((local_198[0] & 1) != 0) {
                                          uVar2 = local_190;
                                        }
                                        if (uVar2 != 0) {
                                          uVar2 = (ulong)local_180 >> 1 & 0x7f;
                                          if (((ulong)local_180 & 1) != 0) {
                                            uVar2 = local_178;
                                          }
                                          if (uVar2 != 0) {
                                            FUN_008fce60(pbVar25,&local_180);
                                            FUN_008fce60(pbVar27,local_198);
                                          }
                                        }
                                        if (((ulong)local_180 & 1) != 0) {
                                          operator_delete((void *)CONCAT44(uStack_16c,local_170));
                                        }
                                        if ((local_198[0] & 1) != 0) {
                                          operator_delete(local_188);
                                        }
                                        uVar23 = uVar23 + 1;
                                        lVar7 = lVar7 + 0x18;
                                      } while (uVar23 < *(uint *)(plVar21 + 1));
                                    }
                                  }
                                }
                                uVar18 = uVar18 + 1;
                              } while (uVar18 < *(uint *)(plVar20 + 1));
                            }
                          }
                        }
                        uVar19 = uVar19 + 1;
                      } while (uVar19 < *(uint *)(plVar26 + 1));
                    }
                  }
                  else {
LAB_0097b0d8:
                    FUN_00978928(&local_180,*plVar8 + uVar16 * 0x18);
                    FUN_00978858(param_1 + 1,&local_180);
                    local_180 = &PTR_FUN_027bca40;
                    if ((local_120 & 1) != 0) {
                      operator_delete(local_110);
                    }
                    if (((uint)local_138 & 1) != 0) {
                      operator_delete(local_128);
                    }
                    if ((local_150 & 1) != 0) {
                      operator_delete(local_140);
                    }
                    if ((local_168 & 1) != 0) {
                      operator_delete(local_158);
                    }
                    FUN_00977e28(&local_178,1);
                  }
                  if (((ulong)local_98 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_84,local_88));
                  }
                  uVar6 = 1;
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *(uint *)(plVar8 + 1));
                goto LAB_0097aa9c;
              }
            }
          }
        }
      }
      uVar6 = 1;
      goto LAB_0097aa9c;
    }
  }
LAB_0097aa98:
  uVar6 = 0;
LAB_0097aa9c:
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

