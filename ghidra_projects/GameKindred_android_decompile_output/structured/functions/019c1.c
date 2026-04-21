// functions/019c1 — 31 functions
#include "libGameKindred.h"




undefined8 FUN_019c1238(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x70);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0) && (*(code **)(puVar1 + 2) != (code *)0x0)) {
    (**(code **)(puVar1 + 2))();
    return 0;
  }
  return 0;
}




undefined8 FUN_019c1288(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x70);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0) && (*(code **)(puVar1 + 4) != (code *)0x0)) {
    (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6));
    return 0;
  }
  return 0;
}




char * FUN_019c12d8(uint param_1)

{
  if (param_1 < 0x5a) {
    return (&PTR_s_No_error_02bafaa0)[(int)param_1];
  }
  return "Unknown error";
}




char * FUN_019c1348(long param_1,int param_2)

{
  char *__buf;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  __buf = (char *)(param_1 + 0x438);
  *(undefined1 *)(param_1 + 0x438) = 0;
  pcVar3 = strerror_r(param_2,__buf,0xff);
  if (((int)pcVar3 != 0) && (*__buf == '\0')) {
    FUN_019d5bc0(__buf,0xff,"Unknown error %d",param_2);
  }
  *(undefined1 *)(param_1 + 0x537) = 0;
  pcVar3 = strrchr(__buf,10);
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)__buf)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(__buf,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)__buf)) {
    *pcVar3 = '\0';
  }
  if (iVar1 != *piVar2) {
    *piVar2 = iVar1;
  }
  return __buf;
}




ulong FUN_019c1418(ulong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar1 = (int)param_1;
  if (iVar1 != 0) {
    param_1 = param_1 & 0xffffffff;
    if (iVar1 < 0) {
      puVar4 = (undefined4 *)__errno();
      *puVar4 = 0x16;
LAB_019c14b4:
      param_1 = 0xffffffff;
    }
    else {
      auVar5 = FUN_019c338c();
      do {
        iVar2 = poll((pollfd *)0x0,0,(int)param_1);
        if (iVar2 != -1) {
          if (iVar2 == 0) {
            return 0;
          }
          goto LAB_019c14b4;
        }
        piVar3 = (int *)__errno();
        iVar2 = *piVar3;
        if (iVar2 != 0) {
          piVar3 = (int *)0xffffffff;
          if (iVar2 != 4) {
            return 0xffffffff;
          }
          if (DAT_03215810 != 0) {
            return 0xffffffff;
          }
        }
        auVar6 = FUN_019c338c(piVar3);
        iVar2 = FUN_019c33ec(auVar6._0_8_,auVar6._8_8_,auVar5._0_8_,auVar5._8_8_);
        param_1 = (ulong)(uint)(iVar1 - iVar2);
      } while (0 < iVar1 - iVar2);
      param_1 = 0;
    }
  }
  return param_1;
}




int * FUN_019c14c8(uint param_1,uint param_2,int param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  pollfd local_78 [3];
  
  if (((param_2 & param_1) == 0xffffffff) && (param_3 == -1)) {
    piVar3 = (int *)FUN_019c1418(param_4 & 0xffffffff);
  }
  else {
    if ((long)param_4 < 1) {
      iVar5 = 0;
      auVar7 = ZEXT816(0);
    }
    else {
      auVar7 = FUN_019c338c();
      iVar5 = (int)param_4;
    }
    if (param_1 != 0xffffffff) {
      local_78[0].events = 0xc3;
      local_78[0].revents = 0;
      local_78[0].fd = param_1;
    }
    uVar6 = (uint)(param_1 != 0xffffffff);
    uVar1 = uVar6;
    if (param_2 != 0xffffffff) {
      uVar1 = uVar6 + 1;
      local_78[uVar6].fd = param_2;
      local_78[uVar6].events = 0xc3;
      local_78[uVar6].revents = 0;
    }
    uVar6 = uVar1;
    if (param_3 != -1) {
      uVar6 = uVar1 + 1;
      local_78[(int)uVar1].fd = param_3;
      local_78[(int)uVar1].events = 0x104;
      local_78[(int)uVar1].revents = 0;
    }
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = iVar5;
    }
    if ((long)param_4 < 0) {
      iVar2 = -1;
    }
    uVar1 = poll(local_78,(ulong)uVar6,iVar2);
    piVar3 = (int *)(ulong)uVar1;
    if (uVar1 == 0xffffffff) {
      piVar4 = (int *)__errno();
      piVar3 = piVar4;
      do {
        if (*piVar4 != 0) {
          piVar3 = (int *)0xffffffff;
          if (*piVar4 != 4) {
            return (int *)0xffffffff;
          }
          if (DAT_03215810 != 0) {
            return (int *)0xffffffff;
          }
        }
        if (0 < (long)param_4) {
          auVar8 = FUN_019c338c(piVar3);
          iVar2 = FUN_019c33ec(auVar8._0_8_,auVar8._8_8_,auVar7._0_8_,auVar7._8_8_);
          iVar2 = (int)param_4 - iVar2;
          if (iVar2 < 1) {
            return (int *)0x0;
          }
        }
        iVar5 = 0;
        if (param_4 != 0) {
          iVar5 = iVar2;
        }
        if ((long)param_4 < 0) {
          iVar5 = -1;
        }
        uVar1 = poll(local_78,(ulong)uVar6,iVar5);
        piVar3 = (int *)(ulong)uVar1;
        iVar2 = iVar5;
      } while (uVar1 == 0xffffffff);
    }
    if ((int)piVar3 < 0) {
      piVar3 = (int *)0xffffffff;
    }
    else if ((int)piVar3 != 0) {
      if (param_1 == 0xffffffff) {
        piVar3 = (int *)0x0;
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)((local_78[0]._4_4_ & 0x590000) != 0);
        if ((local_78[0]._4_4_ & 0xa20000) != 0) {
          uVar1 = uVar1 | 4;
        }
        piVar3 = (int *)(ulong)uVar1;
        uVar1 = 1;
      }
      if (param_2 != 0xffffffff) {
        uVar6 = (uint)piVar3;
        if ((local_78[uVar1].revents & 0x59U) != 0) {
          uVar6 = (uint)piVar3 | 8;
        }
        if ((local_78[uVar1].revents & 0xa2U) != 0) {
          uVar6 = uVar6 | 4;
        }
        piVar3 = (int *)(ulong)uVar6;
        uVar1 = uVar1 + 1;
      }
      if (param_3 != -1) {
        uVar6 = (uint)piVar3;
        if ((local_78[(int)uVar1].revents & 0x104U) != 0) {
          uVar6 = (uint)piVar3 | 2;
        }
        if ((local_78[(int)uVar1].revents & 0x38U) != 0) {
          uVar6 = uVar6 | 4;
        }
        piVar3 = (int *)(ulong)uVar6;
      }
    }
  }
  return piVar3;
}




int * FUN_019c1700(pollfd *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  pollfd *ppVar7;
  short *psVar8;
  ulong __nfds;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((param_1 != (pollfd *)0x0) && (__nfds = (ulong)param_2, param_2 != 0)) {
    uVar2 = 0;
    ppVar7 = param_1;
    do {
      if (ppVar7->fd != -1) {
        if (param_3 < 1) {
          iVar6 = 0;
          auVar9 = ZEXT816(0);
        }
        else {
          auVar9 = FUN_019c338c();
          iVar6 = param_3;
        }
        iVar3 = 0;
        if (param_3 != 0) {
          iVar3 = iVar6;
        }
        if (param_3 < 0) {
          iVar3 = -1;
        }
        uVar2 = poll(param_1,__nfds,iVar3);
        piVar4 = (int *)(ulong)uVar2;
        if (uVar2 == 0xffffffff) {
          piVar5 = (int *)__errno();
          piVar4 = piVar5;
          do {
            if (*piVar5 != 0) {
              piVar4 = (int *)0xffffffff;
              if (*piVar5 != 4) {
                return (int *)0xffffffff;
              }
              if (DAT_03215810 != 0) {
                return (int *)0xffffffff;
              }
            }
            if (0 < param_3) {
              auVar10 = FUN_019c338c(piVar4);
              iVar3 = FUN_019c33ec(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_);
              iVar3 = param_3 - iVar3;
              if (iVar3 < 1) {
                return (int *)0x0;
              }
            }
            iVar6 = 0;
            if (param_3 != 0) {
              iVar6 = iVar3;
            }
            if (param_3 < 0) {
              iVar6 = -1;
            }
            uVar2 = poll(param_1,__nfds,iVar6);
            piVar4 = (int *)(ulong)uVar2;
            iVar3 = iVar6;
          } while (uVar2 == 0xffffffff);
        }
        if ((int)piVar4 < 0) {
          piVar4 = (int *)0xffffffff;
        }
        else if ((int)piVar4 != 0) {
          psVar8 = &param_1->revents;
          do {
            if (((pollfd *)(psVar8 + -3))->fd != -1) {
              uVar1 = *psVar8;
              uVar2 = (uint)uVar1;
              if ((uVar1 >> 4 & 1) != 0) {
                uVar2 = uVar1 | 1;
                *psVar8 = (ushort)uVar2;
              }
              if ((uVar2 >> 3 & 1) != 0) {
                *psVar8 = (ushort)uVar2 | 5;
              }
            }
            __nfds = __nfds - 1;
            psVar8 = psVar8 + 4;
          } while (__nfds != 0);
        }
        return piVar4;
      }
      uVar2 = uVar2 + 1;
      ppVar7 = ppVar7 + 1;
    } while (uVar2 < param_2);
  }
  piVar4 = (int *)FUN_019c1418(param_3);
  return piVar4;
}




long * FUN_019c1898(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long local_30;
  long local_28;
  
  if (param_3 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar5 = &local_30;
  local_30 = 0;
  local_28 = 0;
  plVar4 = &local_30;
  do {
    if (param_1 < param_3[3]) {
LAB_019c196c:
      plVar3 = (long *)*param_3;
      if (plVar3 == (long *)0x0) goto LAB_019c1978;
      if ((param_1 < plVar3[3]) || ((param_1 <= plVar3[3] && (param_2 < plVar3[4])))) {
        *param_3 = plVar3[1];
        plVar3[1] = (long)param_3;
        param_3 = plVar3;
        if (*plVar3 == 0) goto LAB_019c1978;
      }
      *plVar5 = (long)param_3;
      plVar2 = plVar4;
      plVar5 = param_3;
    }
    else {
      if (param_1 <= param_3[3]) {
        if (param_2 < param_3[4]) goto LAB_019c196c;
        if (param_2 <= param_3[4]) {
LAB_019c1978:
          plVar4[1] = *param_3;
          *plVar5 = param_3[1];
          *param_3 = local_28;
          param_3[1] = local_30;
          return param_3;
        }
      }
      plVar3 = param_3 + 1;
      plVar1 = (long *)*plVar3;
      if (plVar1 == (long *)0x0) goto LAB_019c1978;
      plVar2 = param_3;
      if ((plVar1[3] <= param_1) && ((plVar1[3] < param_1 || (plVar1[4] < param_2)))) {
        param_3[1] = *plVar1;
        *plVar1 = (long)param_3;
        plVar2 = plVar1;
        param_3 = plVar1;
        plVar3 = plVar1 + 1;
        if (plVar1[1] == 0) goto LAB_019c1978;
      }
      param_3 = plVar3;
      plVar4[1] = (long)plVar2;
    }
    param_3 = (long *)*param_3;
    plVar4 = plVar2;
  } while( true );
}




undefined8 * FUN_019c19a8(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
LAB_019c1a50:
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_019c1898(param_1,param_2);
    lVar3 = puVar1[3];
    if (param_1 == lVar3) {
      if (param_2 == puVar1[4]) {
        param_4[2] = puVar1;
        param_4[3] = param_1;
        param_4[4] = param_2;
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        *puVar1 = param_4;
        puVar1[4] = 0xffffffffffffffff;
        puVar1[3] = -1;
        return param_4;
      }
    }
    else if (puVar1 == (undefined8 *)0x0) goto LAB_019c1a50;
    if ((param_1 < lVar3) || ((param_1 <= lVar3 && (param_2 < (long)puVar1[4])))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
      *puVar1 = 0;
    }
    else {
      uVar2 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar2;
      puVar1[1] = 0;
    }
  }
  param_4[2] = 0;
  param_4[3] = param_1;
  param_4[4] = param_2;
  return param_4;
}




long * FUN_019c1a80(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 == 0) {
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
  }
  else {
    plVar1 = (long *)FUN_019c1898();
    if ((param_1 < plVar1[3]) || ((param_1 <= plVar1[3] && (param_2 < plVar1[4])))) {
      lVar2 = *plVar1;
      plVar3 = (long *)0x0;
      plVar4 = plVar1;
      if (lVar2 == 0) goto LAB_019c1b58;
      plVar1 = (long *)FUN_019c1898(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
                                    plVar1);
    }
    lVar2 = plVar1[3];
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && (param_2 < plVar1[4])))) {
      plVar3 = (long *)0x0;
      plVar4 = plVar1;
    }
    else {
      plVar4 = (long *)plVar1[2];
      plVar3 = plVar1;
      if (plVar4 == (long *)0x0) {
        if (*plVar1 == 0) {
          plVar4 = (long *)plVar1[1];
        }
        else {
          plVar4 = (long *)FUN_019c1898(param_1,param_2);
          plVar4[1] = plVar1[1];
        }
      }
      else {
        lVar2 = plVar1[3];
        plVar4[4] = plVar1[4];
        plVar4[3] = lVar2;
        lVar2 = *plVar1;
        plVar4[1] = plVar1[1];
        *plVar4 = lVar2;
      }
    }
  }
LAB_019c1b58:
  *param_4 = plVar3;
  return plVar4;
}




undefined8 FUN_019c1b78(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = 1;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if ((param_2[3] & param_2[4]) == 0xffffffffffffffff) {
      lVar3 = *param_2;
      if (lVar3 == 0) {
        uVar1 = 3;
      }
      else {
        *(long *)(lVar3 + 0x10) = param_2[2];
        if ((long *)param_2[2] != (long *)0x0) {
          *(long *)param_2[2] = lVar3;
        }
        uVar1 = 0;
        *param_2 = 0;
        *param_3 = param_1;
      }
    }
    else {
      plVar2 = (long *)FUN_019c1898();
      if (plVar2 == param_2) {
        plVar2 = (long *)param_2[2];
        if (plVar2 == (long *)0x0) {
          if (*param_2 == 0) {
            plVar2 = (long *)param_2[1];
          }
          else {
            plVar2 = (long *)FUN_019c1898(param_2[3],param_2[4]);
            plVar2[1] = param_2[1];
          }
        }
        else {
          lVar3 = param_2[3];
          plVar2[4] = param_2[4];
          plVar2[3] = lVar3;
          lVar3 = *param_2;
          plVar2[1] = param_2[1];
          *plVar2 = lVar3;
        }
        uVar1 = 0;
        *param_3 = (long)plVar2;
      }
      else {
        uVar1 = 2;
      }
    }
  }
  return uVar1;
}




undefined8 * FUN_019c1c48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = 0;
    puVar3 = param_1;
    if (param_1 != (undefined8 *)0x0) {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar2[1];
      } while (puVar3 != (undefined8 *)0x0);
      puVar2[1] = puVar1;
      puVar1 = param_1;
    }
  }
  return puVar1;
}




long * FUN_019c1cb0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = (*(code *)PTR_strdup_02bf74c0)(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)(*(code *)PTR_malloc_02bf74a8)(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      plVar4 = param_1;
      if (param_1 != (long *)0x0) {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)plVar3[1];
        } while (plVar4 != (long *)0x0);
        plVar3[1] = (long)plVar2;
        plVar2 = param_1;
      }
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    (*(code *)PTR_free_02bf74b0)(lVar1);
  }
  return (long *)0x0;
}




long * FUN_019c1d48(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
    do {
      plVar1 = (long *)FUN_019c1cb0(plVar2,*param_1);
      if (plVar1 == (long *)0x0) {
        while (plVar2 != (long *)0x0) {
          plVar1 = (long *)plVar2[1];
          if (*plVar2 != 0) {
            (*(code *)PTR_free_02bf74b0)();
            *plVar2 = 0;
          }
          (*(code *)PTR_free_02bf74b0)(plVar2);
          plVar2 = plVar1;
        }
        return (long *)0x0;
      }
      param_1 = (undefined8 *)param_1[1];
      plVar2 = plVar1;
    } while (param_1 != (undefined8 *)0x0);
  }
  return plVar1;
}




void FUN_019c1dcc(long *param_1)

{
  long *plVar1;
  
  while (param_1 != (long *)0x0) {
    plVar1 = (long *)param_1[1];
    if (*param_1 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *param_1 = 0;
    }
    (*(code *)PTR_free_02bf74b0)(param_1);
    param_1 = plVar1;
  }
  return;
}




int FUN_019c1e24(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = fcntl(param_1,3,0);
  uVar1 = uVar2 & 0xfffff7ff;
  if (param_2 != 0) {
    uVar1 = uVar2 | 0x800;
  }
  iVar3 = fcntl(param_1,4,(ulong)uVar1);
  return iVar3;
}




void FUN_019c1e68(void)

{
  return;
}




void FUN_019c1e6c(void)

{
  return;
}




uint FUN_019c1e70(uint param_1)

{
  return param_1 & 0x7fffffff;
}




uint FUN_019c1e80(uint param_1)

{
  return param_1 & 0x7fffffff;
}




void FUN_019c1e8c(void)

{
  return;
}




uint FUN_019c1e90(uint param_1)

{
  return param_1 & 0x7fffffff;
}




void FUN_019c1e98(void)

{
  return;
}




void FUN_019c1e9c(void)

{
  return;
}




ulong FUN_019c1ea0(ulong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}




void FUN_019c1ea8(void)

{
  return;
}




uint FUN_019c1eac(uint param_1)

{
  return param_1 & 0x7fffffff;
}




long * FUN_019c1ebc(undefined4 param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(code *)PTR_calloc_02bf74c8)(1,0x28);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_019da7cc(param_1,&LAB_019dac34,&LAB_019dac6c,&LAB_019c1f3c);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      (*(code *)PTR_free_02bf74b0)(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}




void FUN_019c1f40(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_019dabfc(*param_1);
    *param_1 = 0;
    (*(code *)PTR_free_02bf74b0)(param_1);
    return;
  }
  return;
}




void FUN_019c1f80(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = *param_1;
    sVar1 = strlen(param_2);
    FUN_019daa50(uVar2,param_2,sVar1 + 1);
  }
  return;
}




int FUN_019c1fbc(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char *__s;
  undefined8 uVar6;
  long local_48;
  
  local_48 = 0;
  lVar5 = *param_2;
  lVar2 = FUN_019c1f80(*(undefined8 *)(lVar5 + 0x900),param_2[0x18]);
  if (lVar2 == 0) {
    iVar1 = FUN_019ecb78(lVar5,&local_48);
    lVar2 = local_48;
    if (iVar1 != 0) {
      return iVar1;
    }
    __s = (char *)param_2[0x18];
    uVar6 = **(undefined8 **)(lVar5 + 0x900);
    sVar3 = strlen(__s);
    lVar4 = FUN_019da86c(uVar6,__s,sVar3 + 1,lVar2);
    lVar2 = local_48;
    if (lVar4 == 0) {
      FUN_019ecc04(local_48);
      return 0x1b;
    }
  }
  iVar1 = FUN_019ecc4c(lVar2,param_2);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 1;
    param_2[10] = lVar2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  else if (local_48 != 0) {
    FUN_019c20b4(*(undefined8 *)(lVar5 + 0x900));
  }
  return iVar1;
}

