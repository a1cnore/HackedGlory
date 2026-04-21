// functions/0095e — 24 functions
#include "libGameKindred.h"




void FUN_0095e038(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3b78);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e830b4(param_1 + 0x3b78);
  return;
}




void FUN_0095e074(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x37b8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82e58(param_1 + 0x37b8);
  return;
}




undefined8 FUN_0095e0b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4010);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82c58(param_1 + 0x4010);
  return uVar2;
}




void FUN_0095e0f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3770);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82e24(param_1 + 0x3770);
  return;
}




void FUN_0095e12c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0096589c(param_1 + 0x18,1);
  FUN_00960168(param_1);
  thunk_FUN_00938b64();
  uVar2 = FUN_009482e4();
  FUN_008fcdb8(local_40,uVar2);
  FUN_0094800c();
  FUN_009480a8();
  FUN_00948078();
  FUN_009482f4(local_40);
  FUN_009481cc(1);
  FUN_00948018();
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095e1c8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x5450);
  iVar2 = FUN_00e6aee0(puVar1,param_2,0x18);
  if (iVar2 != 0) {
    *(undefined8 *)(param_1 + 0x5460) = param_2[2];
    uVar3 = *param_2;
    *(undefined8 *)(param_1 + 0x5458) = param_2[1];
    *puVar1 = uVar3;
    FUN_00949240(puVar1);
    return;
  }
  return;
}




void FUN_0095e21c(long param_1,byte *param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *__s2;
  long lVar5;
  byte *pbVar6;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar5 = -(ulong)(bVar2 >> 1);
      pbVar6 = param_2;
      while (pbVar6 = pbVar6 + 1, *pbVar6 == *__s2) {
        lVar5 = lVar5 + 1;
        __s2 = __s2 + 1;
        if (lVar5 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar3 = memcmp(pbVar6,__s2,__n);
      if (iVar3 == 0) {
        return;
      }
    }
  }
  uVar4 = FUN_00e84e4c(param_1 + 0x4230);
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_00e81efc(param_2,param_3 & 1,param_1 + 0x4230);
  return;
}




void FUN_0095e308(long param_1)

{
  FUN_008fce60(param_1 + 0x5478,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x5634) = 0xffffffff;
  FUN_00e84dec(param_1 + 0x5088);
  return;
}




void FUN_0095e34c(long param_1,byte *param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *__s2;
  long lVar5;
  byte *pbVar6;
  
  uVar4 = FUN_00e84e4c(param_1 + 0x4b10);
  if ((uVar4 & 1) == 0) {
    bVar2 = *param_2;
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n != sVar1) {
LAB_0095e418:
      FUN_00e8219c(param_2,param_3 & 1,param_1 + 0x4b10);
      return;
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(bVar2 >> 1);
        pbVar6 = param_2;
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 != *__s2) goto LAB_0095e418;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pbVar6,__s2,__n), iVar3 != 0)) goto LAB_0095e418;
  }
  return;
}




void FUN_0095e434(long param_1)

{
  FUN_008fce60(param_1 + 0x5490,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x5638) = 0xffffffff;
  FUN_00e84dec(param_1 + 0x52c8);
  return;
}




ulong FUN_0095e478(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = DAT_02c7ed00;
  uVar2 = FUN_0093dbe8();
  if (((uVar2 & 1) == 0) && (*(char *)(lVar1 + 0x5680) == '\0')) {
    return (ulong)*(uint *)(param_1 + 0x561c);
  }
  uVar2 = FUN_00ce9c64(1);
  return uVar2;
}




void FUN_0095e4c8(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x418) == 0) {
    FUN_00948148(param_1 + 0x54d8,param_1 + 0x54f0);
    FUN_0096005c(param_1,param_1 + 0x54d8,param_1 + 0x54f0);
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  FUN_009006ac(uVar1);
  return;
}




void FUN_0095e52c(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte local_78 [16];
  void *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x660) == 0) {
    uVar7 = *(uint *)(param_1 + 0x650);
    if (uVar7 != 0) {
      uVar5 = 0;
      piVar1 = (int *)(param_1 + 0x53c8);
      lVar6 = 0x28;
      lVar4 = param_1;
      do {
        lVar2 = *(long *)(param_1 + 0x658) + lVar6;
        lVar4 = FUN_00964124(lVar4,lVar2,piVar1);
        if ((int)lVar4 == -1) {
          FUN_008fcdb8(local_78,lVar2);
          local_60 = 0;
          FUN_0096420c(piVar1,local_78);
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
          lVar4 = *(long *)(param_1 + 0x658) + lVar6;
          lVar4 = FUN_0094a11c(*piVar1 + -1,lVar4 + -0x28,lVar4 + 0x18);
          *(int *)(param_1 + 0x5628) = *(int *)(param_1 + 0x5628) + 1;
          uVar7 = *(uint *)(param_1 + 0x650);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x58;
      } while (uVar5 < uVar7);
    }
    *(undefined1 *)(param_1 + 0x5686) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095e640(long param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  byte local_200 [16];
  void *local_1f0;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x44c8) == 0) {
    lVar4 = *(long *)(param_1 + 0x53e0);
    puVar1 = (uint *)(param_1 + 0x53d8);
    if (lVar4 != 0) {
      if (*puVar1 != 0) {
        lVar5 = (ulong)*puVar1 * 0x1a8;
        do {
          FUN_00964d08(lVar4);
          lVar5 = lVar5 + -0x1a8;
          lVar4 = lVar4 + 0x1a8;
        } while (lVar5 != 0);
      }
      *puVar1 = 0;
    }
    if (*(uint *)(param_1 + 0x4498) != 0) {
      lVar4 = 0;
      uVar6 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x44a0);
        iVar3 = FUN_009642a0();
        if (iVar3 == -1) {
          FUN_0096522c(local_200,lVar5 + lVar4);
          local_60 = 0;
          FUN_00964390(puVar1,local_200);
          FUN_00964d08(local_200);
          lVar5 = *(long *)(param_1 + 0x44a0) + lVar4;
          if (*(char *)(lVar5 + 0x40) != '\0') {
            FUN_00e70570(&local_210,lVar5 + 0x60);
            thunk_FUN_00e7051c(&local_220,*(long *)(param_1 + 0x44a0) + lVar4);
            FUN_008fcdb8(local_200,*(long *)(param_1 + 0x44a0) + lVar4 + 0x28);
            FUN_0094dbf4(&local_210,&local_220,local_200);
            if ((local_200[0] & 1) != 0) {
              operator_delete(local_1f0);
            }
            if (local_218 != (void *)0x0) {
              operator_delete__(local_218);
              local_220 = 0;
              local_218 = (void *)0x0;
            }
            if (local_208 != (void *)0x0) {
              operator_delete__(local_208);
              local_210 = 0;
              local_208 = (void *)0x0;
            }
          }
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x1a0;
      } while (uVar6 < *(uint *)(param_1 + 0x4498));
    }
    FUN_0099cf94(param_1 + 0x5570,*puVar1);
    *(undefined1 *)(param_1 + 0x5687) = 1;
  }
  FUN_0094dbb8();
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095e7f4(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  ulong local_e0;
  void *local_d8;
  byte local_d0;
  undefined7 uStack_cf;
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined1 local_80;
  undefined1 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x4c48) == 0) {
    if (*(uint *)(param_1 + 0x4c18) != 0) {
      uVar5 = 0;
      lVar4 = 0x40;
      do {
        lVar1 = *(long *)(param_1 + 0x4c20) + lVar4;
        iVar3 = FUN_0096442c();
        if (iVar3 == -1) {
          thunk_FUN_00e7051c(&local_e0,lVar1 + -0x40);
          FUN_008fcdb8(&local_d0,lVar1 + -0x30);
          FUN_008fcdb8(local_b8,lVar1 + -0x18);
          thunk_FUN_00e7051c(&local_a0,lVar1);
          thunk_FUN_00e7051c(&local_90,lVar1 + 0x10);
          local_80 = *(undefined1 *)(lVar1 + 0x20);
          local_78 = 0;
          FUN_0096451c(param_1 + 0x53e8,&local_e0);
          if (local_88 != (void *)0x0) {
            operator_delete__(local_88);
            local_90 = 0;
            local_88 = (void *)0x0;
          }
          if (local_98 != (void *)0x0) {
            operator_delete__(local_98);
            local_a0 = 0;
            local_98 = (void *)0x0;
          }
          if ((local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          if (local_d8 != (void *)0x0) {
            operator_delete__(local_d8);
            local_e0 = 0;
            local_d8 = (void *)0x0;
          }
          *(int *)(param_1 + 0x562c) = *(int *)(param_1 + 0x562c) + 1;
          if (*(char *)(*(long *)(param_1 + 0x4c20) + lVar4 + 0x20) != '\0') {
            thunk_FUN_00e7051c(&local_f0);
            thunk_FUN_00e7051c(&local_100,*(long *)(param_1 + 0x4c20) + lVar4 + -0x40);
            FUN_008fcdb8(&local_e0,*(long *)(param_1 + 0x4c20) + lVar4 + -0x18);
            FUN_0094f1c8(&local_f0,&local_100,&local_e0);
            if ((local_e0 & 1) != 0) {
              operator_delete((void *)CONCAT71(uStack_cf,local_d0));
            }
            if (local_f8 != (void *)0x0) {
              operator_delete__(local_f8);
              local_100 = 0;
              local_f8 = (void *)0x0;
            }
            if (local_e8 != (void *)0x0) {
              operator_delete__(local_e8);
              local_f0 = 0;
              local_e8 = (void *)0x0;
            }
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x68;
      } while (uVar5 < *(uint *)(param_1 + 0x4c18));
    }
    FUN_0099cf94(param_1 + 0x5590,*(undefined4 *)(param_1 + 0x562c));
    *(undefined1 *)(param_1 + 0x5688) = 1;
  }
  FUN_0094f18c();
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0095ea48(long param_1)

{
  if (*(int *)(param_1 + 0x3578) == 0) {
    FUN_0094b3d8(param_1 + 0x3540);
    *(undefined1 *)(param_1 + 0x5689) = 1;
  }
  return;
}




void FUN_0095ea84(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x568a) != 0) && ((param_2 & 1) == 0)) {
    FUN_009606dc(param_1,0);
  }
  *(byte *)(param_1 + 0x568a) = param_2 & 1;
  return;
}




void FUN_0095eac0(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  
  pbVar1 = (byte *)(param_1 + 0x3870);
  if ((*pbVar1 & 1) == 0) {
    if (*pbVar1 >> 1 == 0) {
      return;
    }
  }
  else if ((int)*(undefined8 *)(param_1 + 0x3878) == 0) {
    return;
  }
  uVar2 = FUN_00cc7c38();
  if ((*pbVar1 & 1) == 0) {
    lVar3 = param_1 + 0x3871;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x3880);
  }
  FUN_00cc861c(uVar2,lVar3);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x3880) = 0;
    *(undefined8 *)(param_1 + 0x3878) = 0;
  }
  return;
}




void FUN_0095eb38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 0x3a00) != 0) {
    uVar1 = FUN_00cc7c54();
    FUN_00cc9c48(uVar1,*(undefined4 *)(param_1 + 0x3888));
    return;
  }
  pbVar3 = (byte *)(param_1 + 0x39e8);
  if ((*pbVar3 & 1) == 0) {
    if (*pbVar3 >> 1 == 0) {
LAB_0095eb98:
      pbVar3 = (byte *)(param_1 + 0x3a30);
      if ((*pbVar3 & 1) == 0) {
        if (*pbVar3 >> 1 == 0) {
          return;
        }
      }
      else if ((int)*(undefined8 *)(param_1 + 0x3a38) == 0) {
        return;
      }
      uVar1 = FUN_00cc7c54();
      if ((*pbVar3 & 1) == 0) {
        lVar2 = param_1 + 0x3a31;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x3a40);
      }
      FUN_00cc9c80(uVar1,lVar2);
      if ((*pbVar3 & 1) != 0) {
        **(undefined1 **)(param_1 + 0x3a40) = 0;
        *(undefined8 *)(param_1 + 0x3a38) = 0;
        return;
      }
      goto LAB_0095ec00;
    }
  }
  else if ((int)*(undefined8 *)(param_1 + 0x39f0) == 0) goto LAB_0095eb98;
  uVar1 = FUN_00cc7c54();
  if ((*pbVar3 & 1) == 0) {
    lVar2 = param_1 + 0x39e9;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x39f8);
  }
  FUN_00cc9c80(uVar1,lVar2);
  if ((*pbVar3 & 1) != 0) {
    **(undefined1 **)(param_1 + 0x39f8) = 0;
    *(undefined8 *)(param_1 + 0x39f0) = 0;
    return;
  }
LAB_0095ec00:
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  return;
}




void FUN_0095ec20(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  pbVar1 = (byte *)(param_1 + 0x3a80);
  lVar7 = FUN_00cc7c60(pbVar1);
  if (lVar7 != 0) {
    bVar3 = *(byte *)(lVar7 + 0x60);
    bVar4 = false;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(lVar7 + 0x68);
    }
    if (uVar2 == 4) {
      iVar5 = FUN_0090d610((byte *)(lVar7 + 0x60),0,0xffffffffffffffff,"gold",4);
      bVar4 = iVar5 == 0;
    }
    if (*(int *)(param_1 + 0x3a78) != 0) {
      if ((*pbVar1 & 1) == 0) {
        param_1 = param_1 + 0x3a81;
      }
      else {
        param_1 = *(long *)(param_1 + 0x3a90);
      }
      if (!bVar4) {
        FUN_00904388();
        return;
      }
      FUN_00904370(param_1);
      return;
    }
    iVar5 = FUN_00ccbcfc(lVar7);
    if (0 < iVar5) {
      iVar5 = FUN_00ccbd38(lVar7);
      iVar6 = FUN_00ccbcfc(lVar7);
      if ((*pbVar1 & 1) == 0) {
        param_1 = param_1 + 0x3a81;
      }
      else {
        param_1 = *(long *)(param_1 + 0x3a90);
      }
      if (!bVar4) {
        FUN_0090438c(1.0 - (float)iVar5 / (float)iVar6,param_1,lVar7);
        return;
      }
      FUN_00904374();
      return;
    }
  }
  return;
}




void FUN_0095ed68(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  
  pbVar1 = (byte *)(param_1 + 0x37e0);
  if ((*pbVar1 & 1) == 0) {
    if (*pbVar1 >> 1 == 0) {
      return;
    }
  }
  else if ((int)*(undefined8 *)(param_1 + 0x37e8) == 0) {
    return;
  }
  uVar2 = FUN_00ccc2c8();
  if ((*pbVar1 & 1) == 0) {
    lVar3 = param_1 + 0x37e1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x37f0);
  }
  FUN_00ccc2d4(uVar2,lVar3);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x37f0) = 0;
    *(undefined8 *)(param_1 + 0x37e8) = 0;
  }
  return;
}




void FUN_0095ede0(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  
  pbVar1 = (byte *)(param_1 + 0x3798);
  if ((*pbVar1 & 1) == 0) {
    if (*pbVar1 >> 1 == 0) {
      return;
    }
  }
  else if ((int)*(undefined8 *)(param_1 + 0x37a0) == 0) {
    return;
  }
  uVar2 = FUN_00cccd40();
  if ((*pbVar1 & 1) == 0) {
    lVar3 = param_1 + 0x3799;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x37a8);
  }
  FUN_00cccd4c(uVar2,lVar3);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x37a8) = 0;
    *(undefined8 *)(param_1 + 0x37a0) = 0;
  }
  return;
}




long FUN_0095ee58(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x15) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_008fce60(param_1 + 0x28,param_2 + 0x28);
  FUN_008fce60(param_1 + 0x40,param_2 + 0x40);
  FUN_008fce60(param_1 + 0x58,param_2 + 0x58);
  FUN_008fce60(param_1 + 0x70,param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  FUN_008fce60(param_1 + 0xa0,param_2 + 0xa0);
  FUN_008fce60(param_1 + 0xb8,param_2 + 0xb8);
  FUN_008fce60(param_1 + 0xd0,param_2 + 0xd0);
  FUN_008fce60(param_1 + 0xe8,param_2 + 0xe8);
  FUN_008fce60(param_1 + 0x100,param_2 + 0x100);
  FUN_008fce60(param_1 + 0x118,param_2 + 0x118);
  FUN_008fce60(param_1 + 0x130,param_2 + 0x130);
  FUN_008fce60(param_1 + 0x148,param_2 + 0x148);
  FUN_008fce60(param_1 + 0x160,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
  FUN_008fce60(param_1 + 0x180,param_2 + 0x180);
  FUN_008fce60(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  FUN_00964e48(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_00964efc(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_00964f8c(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_0096502c(param_1 + 0x208,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x218);
  FUN_008fce60(param_1 + 0x220,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  return param_1;
}




void FUN_0095efbc(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x1a8;
      do {
        FUN_00964d08(lVar1);
        lVar2 = lVar2 + -0x1a8;
        lVar1 = lVar1 + 0x1a8;
      } while (lVar2 != 0);
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

