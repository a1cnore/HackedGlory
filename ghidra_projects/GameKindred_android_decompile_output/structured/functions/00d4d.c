// functions/00d4d — 65 functions
#include "libGameKindred.h"




bool FUN_00d4d10c(float *param_1,float *param_2,int param_3)

{
  ulong uVar1;
  short *psVar2;
  
  if (param_1[0x641] != 0.0) {
    uVar1 = 0;
    psVar2 = (short *)((long)param_1 + 10);
    do {
      if (((int)psVar2[-1] == (int)(*param_2 / *param_1)) &&
         ((int)*psVar2 == (int)(param_2[2] / *param_1))) {
        return *(int *)(psVar2 + -3) == param_3;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 4;
    } while (uVar1 < (uint)param_1[0x641]);
  }
  return false;
}




bool FUN_00d4d178(float *param_1,float *param_2,int param_3)

{
  ulong uVar1;
  short *psVar2;
  
  if (param_1[0x641] != 0.0) {
    uVar1 = 0;
    psVar2 = (short *)((long)param_1 + 10);
    do {
      if (((int)psVar2[-1] == (int)(*param_2 / *param_1)) &&
         ((int)*psVar2 == (int)(param_2[2] / *param_1))) {
        return *(int *)(psVar2 + -3) == param_3;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 4;
    } while (uVar1 < (uint)param_1[0x641]);
  }
  return true;
}




undefined4 FUN_00d4d1e4(undefined4 *param_1)

{
  return *param_1;
}




void FUN_00d4d1ec(void *param_1)

{
  memset(param_1,0,0x318);
  return;
}




void thunk_FUN_00d4d20c(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  do {
    puVar1 = (undefined4 *)(param_2 + lVar3);
    puVar2 = (undefined4 *)(param_1 + lVar3);
    lVar3 = lVar3 + 4;
    *puVar2 = *puVar1;
    puVar2[0x2d] = puVar1[0x2d];
    puVar2[0x5a] = puVar1[0x5a];
    puVar2[0x87] = puVar1[0x87];
  } while (lVar3 != 0xb4);
  lVar3 = 0x2d0;
  do {
    *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_2 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x310);
  return;
}




void FUN_00d4d20c(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  do {
    puVar1 = (undefined4 *)(param_2 + lVar3);
    puVar2 = (undefined4 *)(param_1 + lVar3);
    lVar3 = lVar3 + 4;
    *puVar2 = *puVar1;
    puVar2[0x2d] = puVar1[0x2d];
    puVar2[0x5a] = puVar1[0x5a];
    puVar2[0x87] = puVar1[0x87];
  } while (lVar3 != 0xb4);
  lVar3 = 0x2d0;
  do {
    *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_2 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x310);
  return;
}




void FUN_00d4d268(void)

{
  return;
}




void FUN_00d4d26c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281d748;
  return;
}




void FUN_00d4d280(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d4d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_00d4d28c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281d778;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  return;
}




undefined8 FUN_00d4d2ac(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar3 = FUN_00ceab48();
    if ((uVar3 & 1) == 0) {
      if ((*(byte *)(param_2 + 0x2fc) & 0x1f) == 0) {
        return 0;
      }
    }
    else {
      uVar2 = FUN_00d55870(*(undefined8 *)(param_1 + 8));
      uVar3 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),uVar2);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
  }
  if ((((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) ||
      (uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f, uVar1 == 0x1f)) ||
     (uVar4 = 0, 1 < *(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_00d4d354(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe | param_2 & 1;
  return;
}




void FUN_00d4d364(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd | (param_2 & 1) << 1;
  return;
}




void FUN_00d4d37c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_0281d7a8;
  param_1[1] = param_2 + 0x28;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}




void FUN_00d4d3a8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d4d3b0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}




void FUN_00d4d3b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




undefined8 FUN_00d4d3c0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_2 + 0x2f4);
  if (((*(uint *)(param_1 + 0x18) & (uVar1 ^ 0xffffffff)) == 0) &&
     (((*(uint *)(param_1 + 0x1c) == 0xffffffff || ((*(uint *)(param_1 + 0x1c) & uVar1) != 0)) &&
      ((*(uint *)(param_1 + 0x20) & uVar1) == 0)))) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 == (long *)0x0) {
      uVar2 = 0;
    }
    else if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
    uVar2 = FUN_00da1690(uVar2,param_2,1);
    return uVar2;
  }
  return 0;
}




void FUN_00d4d478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281d7d8;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0xfe;
  *(undefined1 *)((long)param_1 + 0x12) = 0xff;
  return;
}




undefined8 FUN_00d4d4b4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00d4d2ac();
  if ((((uVar2 & 1) != 0) &&
      ((uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (1 < *(ushort *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) &&
     (((*(byte *)(param_1 + 0x11) & 1) == 0 ||
      (uVar2 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),*(undefined1 *)(param_1 + 0x12)),
      (uVar2 & 1) != 0)))) {
    uVar3 = FUN_00cedce4();
    uVar3 = FUN_00ced2e0(uVar3,param_2);
    return uVar3;
  }
  return 0;
}




void FUN_00d4d538(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x12) = param_2;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return;
}




void FUN_00d4d54c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281d808;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0xfe;
  *(undefined1 *)((long)param_1 + 0x12) = 0xff;
  return;
}




void FUN_00d4d588(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x12) = param_2;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return;
}




undefined8 FUN_00d4d59c(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00d4d2ac();
  uVar3 = 0;
  if (((uVar2 & 1) != 0) && (uVar3 = 0, (*(byte *)(param_2 + 0x2f4) >> 1 & 1) != 0)) {
    if (((*(byte *)(param_1 + 0x11) & 1) != 0) &&
       (cVar1 = FUN_00d55870(param_2), cVar1 != *(char *)(param_1 + 0x12))) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}




byte FUN_00d4d600(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00d4d2ac();
  bVar1 = 0;
  if ((uVar2 & 1) != 0) {
    bVar1 = *(byte *)(param_2 + 0x2f5) >> 5 & 1;
  }
  return bVar1;
}




void FUN_00d4d634(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0281d838;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}




void FUN_00d4d66c(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_00d4d678(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d4d680(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}




undefined8 FUN_00d4d68c(long param_1,long param_2)

{
  int iVar1;
  char *__s2;
  undefined8 uVar2;
  char *__s1;
  
  iVar1 = FUN_00d5cf60(param_2);
  if ((iVar1 == *(int *)(param_1 + 0x14)) &&
     ((*(char *)(param_1 + 0x20) == '\0' || ((*(byte *)(param_2 + 0x2f7) >> 2 & 1) != 0)))) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_00d4d710:
      uVar2 = FUN_00d4d2ac(param_1,param_2);
      return uVar2;
    }
    FUN_00d5bc2c(param_2);
    iVar1 = FUN_00e6a474();
    if (iVar1 != 0) {
      __s1 = *(char **)(param_1 + 0x18);
      __s2 = (char *)FUN_00d5bc2c(param_2);
      iVar1 = strcmp(__s1,__s2);
      if (iVar1 == 0) goto LAB_00d4d710;
    }
  }
  return 0;
}




void FUN_00d4d728(float param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)((long)param_2 + 0x11) = param_3;
  *param_2 = &PTR_FUN_0281d868;
  param_2[1] = 0;
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 3;
  *(undefined8 *)((long)param_2 + 0x14) = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(float *)(param_2 + 4) = param_1 * param_1;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 1;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar1;
  return;
}




void FUN_00d4d770(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d4d778(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = param_2 & 1;
  return;
}




void FUN_00d4d784(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_90;
  float fStack_8c;
  uint local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  ulong local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d4d2ac();
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    cVar2 = FUN_00d55870(param_2);
    uVar4 = 0;
    if ((cVar2 != *(char *)(param_1 + 0x11)) &&
       (uVar4 = 0, (*(byte *)(param_2 + 0x2f5) >> 4 & 1) == 0)) {
      FUN_00d55794(param_2,local_48,0);
      local_48[1] = 0.0;
      uVar4 = 0;
      fVar6 = local_48[0] - *(float *)(param_1 + 0x14);
      fVar7 = 0.0 - *(float *)(param_1 + 0x18);
      fVar8 = local_48[2] - *(float *)(param_1 + 0x1c);
      if (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= *(float *)(param_1 + 0x20)) {
        for (lVar5 = *(long *)(param_2 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_0312ec00) {
            uVar3 = FUN_00d7d234(lVar5,*(undefined1 *)(param_1 + 0x11),1,0);
            if (((uVar3 & 1) != 0) ||
               (uVar3 = FUN_00d7d234(lVar5,*(undefined1 *)(param_1 + 0x11),1,1), (uVar3 & 1) != 0))
            {
              uVar3 = FUN_00d7d288(lVar5,*(undefined1 *)(param_1 + 0x11),4);
              uVar4 = 0;
              if ((uVar3 & 1) == 0) goto LAB_00d4d86c;
            }
            if (*(char *)(param_1 + 0x30) != '\0') {
              local_60 = *(undefined4 *)(param_1 + 0x1c);
              local_68 = *(ulong *)(param_1 + 0x14);
              local_78 = 0;
              local_70 = 0;
              if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = FUN_00d7d300(), (uVar3 & 1) != 0)) {
                local_58 = *(undefined4 *)(param_1 + 0x14);
                local_54 = *(undefined4 *)(param_1 + 0x1c);
                local_80 = local_48[0];
                fStack_7c = local_48[2];
                uVar4 = FUN_00d7d370(*(undefined8 *)(param_1 + 0x28));
                uVar3 = FUN_00d6326c(uVar4,&local_58,&local_80,&local_88);
                if ((uVar3 & 1) != 0) {
                  local_68 = (ulong)local_88;
                  local_60 = uStack_84;
                }
              }
              uVar3 = FUN_00ef01b8(1,&local_68,local_48,0,&local_58,&local_78);
              if ((uVar3 & 1) == 0) {
                uVar3 = FUN_00d7d300(lVar5);
                if ((uVar3 & 1) == 0) break;
                local_80 = local_48[0];
                fStack_7c = local_48[2];
                local_88 = (uint)local_68;
                uStack_84 = local_60;
                uVar4 = FUN_00d7d370(lVar5);
                uVar3 = FUN_00d6326c(uVar4,&local_80,&local_88,&local_90);
                if ((uVar3 & 1) != 0) {
                  local_48[0] = local_90;
                  local_48[1] = 0.0;
                  local_48[2] = fStack_8c;
                }
                uVar3 = FUN_00ef01b8(1,local_48,&local_68,0,&local_58,&local_78);
                if ((uVar3 & 1) == 0) break;
              }
            }
            uVar4 = 1;
            goto LAB_00d4d86c;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_00d4d86c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d4d9e8(undefined8 *param_1)

{
  long lVar1;
  
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[9] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *param_1 = &PTR_FUN_0281d898;
  param_1[1] = 0;
  param_1[7] = 0xbf800000c0000000;
  param_1[6] = 0xbf800000bf800000;
  *(undefined1 *)((long)param_1 + 0x44) = 0xff;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0x4100;
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xe1 | 0x14;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc | 1;
  lVar1 = FUN_00d70a78();
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xfe | *(byte *)(lVar1 + 0xe5)
  ;
  return;
}




void FUN_00d4dabc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_00d4dac4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}




void FUN_00d4dacc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d4dad4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x44) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xffdf | 0x10;
  return;
}




void FUN_00d4daf4(long param_1,ushort param_2,ushort param_3,ushort param_4,long param_5)

{
  if (param_5 != 0) {
    *(long *)(param_1 + 8) = param_5;
  }
  *(ushort *)(param_1 + 0x58) =
       (param_2 & 1) << 4 | (param_3 & 1) << 5 | (param_4 & 1) << 6 |
       *(ushort *)(param_1 + 0x58) & 0xff8f;
  return;
}




void FUN_00d4db30(long param_1)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x80;
  return;
}




void FUN_00d4db40(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00d4db48(float param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(float *)(param_2 + 0x30) = param_1 * param_1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8000;
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}




void FUN_00d4db70(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8000;
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}




void FUN_00d4db94(float param_1,long param_2)

{
  *(float *)(param_2 + 0x34) = param_1 * param_1;
  return;
}




void FUN_00d4dba0(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = cosf(param_1 * 0.017453292);
  *(float *)(param_2 + 0x38) = fVar1;
  return;
}




void FUN_00d4dbe0(long param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = atan2f(param_2[1],*param_2);
  *(float *)(param_1 + 0x3c) = fVar1;
  if (fVar1 < 0.0) {
    *(float *)(param_1 + 0x3c) = fVar1 + 6.2831855;
  }
  return;
}




void FUN_00d4dc24(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfeff | (param_2 & 1) << 8;
  return;
}




void FUN_00d4dc44(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfdff | (param_2 & 1) << 9;
  return;
}




void FUN_00d4dc64(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfbff | (param_2 & 1) << 10;
  return;
}




void FUN_00d4dc84(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xf7ff | (param_2 & 1) << 0xb;
  return;
}




void FUN_00d4dca4(long param_1,undefined8 param_2,ushort param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfffc | param_3 & 3;
  return;
}




void FUN_00d4dcb8(long param_1,undefined8 param_2,ushort param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff3 | (param_3 & 3) << 2;
  return;
}




void FUN_00d4dcdc(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xdfff | (param_2 & 1) << 0xd;
  return;
}




void FUN_00d4dcfc(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xbfff | (param_2 & 1) << 0xe;
  return;
}




void FUN_00d4dd1c(long param_1,uint param_2)

{
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x5a) =
       *(byte *)(param_1 + 0x5a) & 0xfd | (byte)(((param_2 & 1) << 0x11) >> 0x10);
  return;
}




void FUN_00d4dd44(long param_1,uint param_2)

{
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x5a) =
       *(byte *)(param_1 + 0x5a) & 0xfb | (byte)(((param_2 & 1) << 0x12) >> 0x10);
  return;
}




void FUN_00d4dd6c(long param_1,uint param_2)

{
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x5a) =
       *(byte *)(param_1 + 0x5a) & 0xf7 | (byte)(((param_2 & 1) << 0x13) >> 0x10);
  return;
}




void FUN_00d4dd94(long param_1,uint param_2)

{
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x5a) =
       *(byte *)(param_1 + 0x5a) & 0xef | (byte)(((param_2 & 1) << 0x14) >> 0x10);
  return;
}




void FUN_00d4ddbc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}




void FUN_00d4ddc4(long param_1)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x1000;
  return;
}




void FUN_00d4ddd4(void)

{
  return;
}




bool FUN_00d4ddd8(long param_1)

{
  return 0.0 <= *(float *)(param_1 + 0x30);
}




undefined1  [16] FUN_00d4dde8(long param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  fVar2 = SQRT(*(float *)(param_1 + 0x30));
  if (NAN(fVar2)) {
    auVar1._0_4_ = sqrtf(*(float *)(param_1 + 0x30));
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)fVar2);
}




uint FUN_00d4de04(long *param_1,long param_2)

{
  long lVar1;
  uint3 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  char *__s2;
  uint uVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float local_54;
  float fStack_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar8 = 0;
  if (*(float *)(param_1 + 6) == 0.0) goto LAB_00d4e25c;
  uVar11 = FUN_00d4d2ac(param_1,param_2);
  uVar8 = 0;
  if (((uVar11 & 1) == 0) ||
     ((*(int *)((long)param_1 + 0x54) != -1 &&
      (uVar8 = 0, *(int *)((long)param_1 + 0x54) == *(int *)(param_2 + 0x260))))) goto LAB_00d4e25c;
  uVar7 = (uint)*(byte *)((long)param_1 + 0x44);
  if ((*(byte *)((long)param_1 + 0x44) == 0xff) && (param_1[1] != 0)) {
    uVar7 = FUN_00d55870();
  }
  if (((*(ushort *)(param_1 + 0xb) >> 7 & 1) == 0) || (cVar6 = FUN_00d55870(param_2), cVar6 != '\0')
     ) {
    uVar2 = *(uint3 *)(param_1 + 0xb);
    uVar12 = (uint)uVar2;
    uVar8 = (uint)uVar2;
    if ((uVar7 & 0xff) != 0xff) {
      uVar8 = uVar12;
      if ((*(byte *)((long)param_1 + 0x5a) & 3) != 1) {
        if ((*(uint3 *)(param_1 + 0xb) & 0x10) == 0) {
          uVar8 = FUN_00d55870(param_2);
          uVar12 = (uint)*(uint3 *)(param_1 + 0xb);
          if (((uVar7 & 0xff) == (uVar8 & 0xff)) &&
             ((uVar8 = 0, (*(uint3 *)(param_1 + 0xb) & 0x40) == 0 ||
              (uVar8 = 0, param_1[1] != param_2)))) goto LAB_00d4e25c;
        }
        uVar8 = uVar12;
        if ((uVar12 >> 5 & 1) == 0) {
          uVar12 = FUN_00d55870(param_2);
          uVar8 = 0;
          if ((uVar7 & 0xff) != (uVar12 & 0xff)) goto LAB_00d4e25c;
          uVar8 = (uint)*(uint3 *)(param_1 + 0xb);
        }
      }
      if (((((uVar8 >> 0x10 & 1) == 0) || ((uVar8 & 0x60000) != 0)) && ((uVar8 >> 6 & 1) == 0)) &&
         (param_1[1] == param_2)) goto LAB_00d4e258;
    }
    if (((uVar8 >> 0xc & 1) != 0) && (iVar9 = FUN_00d5cf60(param_1[1]), iVar9 == -1)) {
      iVar9 = FUN_00d5cf60(param_2);
      uVar8 = 0;
      if (iVar9 != *(int *)(param_1[1] + 0x260)) goto LAB_00d4e25c;
    }
    if (((*(ushort *)(param_1 + 0xb) >> 0xc & 1) != 0) &&
       (iVar9 = FUN_00d5cf60(param_1[1]), iVar9 != -1)) {
      iVar9 = FUN_00d5cf60(param_2);
      iVar10 = FUN_00d5cf60(param_1[1]);
      uVar8 = 0;
      if (iVar9 != iVar10) goto LAB_00d4e25c;
    }
    uVar12 = *(uint *)(param_2 + 0x2f4);
    uVar8 = 0;
    if (((*(uint *)(param_1 + 9) & (uVar12 ^ 0xffffffff)) != 0) ||
       (((*(uint *)((long)param_1 + 0x4c) != 0xffffffff &&
         (uVar8 = 0, (*(uint *)((long)param_1 + 0x4c) & uVar12) == 0)) ||
        (uVar8 = 0, (*(uint *)(param_1 + 10) & uVar12) != 0)))) goto LAB_00d4e25c;
    uVar2 = *(uint3 *)(param_1 + 0xb);
    uVar12 = (uint)*(uint3 *)(param_1 + 0xb);
    if (((uVar2 & 0x100) != 0) && (uVar8 = 0, (*(byte *)(param_2 + 0x2f9) & 1) != 0))
    goto LAB_00d4e25c;
    if ((uVar7 & 0xff) != 0xff) {
      if ((uVar2 & 0x200) != 0) {
        uVar11 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),uVar7);
        uVar8 = 0;
        if ((uVar11 & 1) == 0) goto LAB_00d4e25c;
        uVar12 = (uint)*(uint3 *)(param_1 + 0xb);
      }
      if ((uVar12 >> 10 & 1) != 0) {
        uVar11 = FUN_00d7d0a0(*(undefined8 *)(param_2 + 0x80),uVar7);
        uVar8 = 0;
        if ((uVar11 & 1) != 0) goto LAB_00d4e25c;
        uVar12 = (uint)*(uint3 *)(param_1 + 0xb);
      }
    }
    if ((uVar12 >> 0xb & 1) != 0) {
      uVar8 = 0;
      uVar7 = *(ushort *)(param_2 + 0x88) & 0x1f;
      if ((uVar7 == 0x1f) || (uVar8 = 0, *(short *)(param_2 + (ulong)uVar7 * 0x38 + 0x90) != 2))
      goto LAB_00d4e25c;
    }
    if ((uVar12 >> 0xe & 1) == 0) {
      uVar11 = FUN_00da2ddc(param_2);
      uVar8 = 0;
      if ((uVar11 & 1) != 0) goto LAB_00d4e25c;
    }
    if ((param_1[1] != 0) && ((((uint)*(byte *)((long)param_1 + 0x5a) << 0x10) >> 0x13 & 1) != 0)) {
      uVar8 = FUN_00da2eb4();
      uVar11 = FUN_00da2f14(param_2,&local_4c);
      if (((uVar11 & 1) == 0) || (uVar8 != local_4c)) {
        FUN_00d55794(param_2,&local_58,0);
        local_68 = 0x461c3c003e800000;
        local_60 = 0x3e800000;
        uVar11 = FUN_00ef00a0(uVar8,&local_58,0,&local_68);
        if ((uVar11 & 1) == 0) goto LAB_00d4e258;
      }
    }
    pcVar13 = (char *)param_1[4];
    if (pcVar13 != (char *)0x0) {
      __s2 = (char *)FUN_00d5bc2c(param_2);
      iVar9 = strcmp(pcVar13,__s2);
      if (((iVar9 != 0) && (uVar8 = 0, (*(ushort *)(param_1 + 0xb) & 3) == 0)) ||
         (((*(ushort *)(param_1 + 0xb) & 3) == 1 && (uVar8 = 0, iVar9 == 0)))) goto LAB_00d4e25c;
    }
    if (param_1[5] != 0) {
      pcVar13 = (char *)FUN_00d5e87c(param_2);
      uVar8 = 0;
      if (pcVar13 == (char *)0x0) goto LAB_00d4e25c;
      if (*pcVar13 == '\0') goto LAB_00d4e258;
      iVar9 = strcmp((char *)param_1[5],pcVar13);
      if (((iVar9 != 0) && (uVar8 = 0, (*(ushort *)(param_1 + 0xb) & 0xc) == 0)) ||
         (((*(ushort *)(param_1 + 0xb) & 0xc) == 4 && (uVar8 = 0, iVar9 == 0)))) goto LAB_00d4e25c;
    }
    FUN_00d55794(param_2,&local_58,0);
    if ((*(byte *)((long)param_1 + 0x5a) & 0x10) != 0) {
      local_54 = *(float *)(param_1 + 3);
    }
    fVar15 = *(float *)(param_1 + 6);
    if (0.0 < fVar15) {
      if ((*(ushort *)(param_1 + 0xb) & 0x2000) == 0) {
        fVar14 = local_58 - *(float *)((long)param_1 + 0x14);
        fVar16 = local_54 - (float)param_1[3];
        fVar17 = fStack_50 - (float)((ulong)param_1[3] >> 0x20);
        fVar14 = fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17;
        bVar4 = NAN(fVar14) || NAN(fVar15);
        bVar3 = fVar14 == fVar15;
        bVar5 = fVar14 < fVar15;
      }
      else {
        fVar14 = SQRT(fVar15);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar15);
        }
        fVar18 = *(float *)(*(long *)(param_2 + 0x38) + 100);
        fVar15 = local_58 - *(float *)((long)param_1 + 0x14);
        fVar16 = local_54 - (float)param_1[3];
        fVar17 = fStack_50 - (float)((ulong)param_1[3] >> 0x20);
        fVar14 = fVar14 + *(float *)(param_1 + 8) *
                          ((*(float *)(*(long *)(param_2 + 0x38) + 0x68) *
                           (fVar18 + *(float *)(param_2 + 0x2e8))) / fVar18);
        fVar15 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
        fVar14 = fVar14 * fVar14;
        bVar5 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15) && !NAN(fVar14)) {
          bVar5 = fVar15 < fVar14;
          bVar3 = fVar15 == fVar14;
          bVar4 = false;
        }
      }
      uVar8 = 0;
      if (!bVar3 && bVar5 == bVar4) goto LAB_00d4e25c;
    }
    fVar15 = *(float *)((long)param_1 + 0x34);
    if (0.0 < fVar15) {
      if ((*(ushort *)(param_1 + 0xb) >> 0xd & 1) == 0) {
        local_58 = local_58 - *(float *)((long)param_1 + 0x14);
        fVar14 = local_54 - (float)param_1[3];
        fStack_50 = fStack_50 - (float)((ulong)param_1[3] >> 0x20);
        fVar14 = local_58 * local_58 + fVar14 * fVar14 + fStack_50 * fStack_50;
        bVar5 = fVar15 <= fVar14;
        bVar4 = fVar14 == fVar15;
      }
      else {
        fVar14 = SQRT(fVar15);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar15);
        }
        fVar16 = *(float *)(*(long *)(param_2 + 0x38) + 100);
        local_58 = local_58 - *(float *)((long)param_1 + 0x14);
        fVar15 = local_54 - (float)param_1[3];
        fStack_50 = fStack_50 - (float)((ulong)param_1[3] >> 0x20);
        fVar14 = fVar14 + *(float *)(param_1 + 8) *
                          ((*(float *)(*(long *)(param_2 + 0x38) + 0x68) *
                           (fVar16 + *(float *)(param_2 + 0x2e8))) / fVar16);
        fVar15 = local_58 * local_58 + fVar15 * fVar15 + fStack_50 * fStack_50;
        fVar14 = fVar14 * fVar14;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar15) && !NAN(fVar14)) {
          bVar4 = fVar15 == fVar14;
          bVar5 = fVar14 <= fVar15;
        }
      }
      uVar8 = 0;
      if (!bVar5 || bVar4) goto LAB_00d4e25c;
    }
    uVar8 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  else {
LAB_00d4e258:
    uVar8 = 0;
  }
LAB_00d4e25c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8 & 1;
}

