// functions/019d2 — 13 functions
#include "libGameKindred.h"




int FUN_019d2004(code *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *unaff_x21;
  long *plVar4;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar5;
  long *in_stack_00000018;
  undefined8 *in_stack_00000028;
  undefined1 *in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  long *in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000198;
  
  (*param_1)();
  FUN_019c2984(in_stack_00000060);
  *unaff_x25 = *unaff_x24;
  cVar1 = *(char *)((long)unaff_x24 + 0x2e4);
  *(char *)((long)unaff_x25 + 0x2e4) = cVar1;
  if (cVar1 != '\0') {
    if (unaff_x25[0x2e] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      unaff_x25[0x2e] = 0;
    }
    if (unaff_x25[0x2f] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      unaff_x25[0x2f] = 0;
    }
    lVar3 = *in_stack_00000018;
    unaff_x25[0x2f] = in_stack_00000018[1];
    unaff_x25[0x2e] = lVar3;
    *in_stack_00000018 = 0;
    in_stack_00000018[1] = 0;
  }
  cVar1 = *(char *)((long)unaff_x24 + 0x2e5);
  *(char *)((long)unaff_x25 + 0x2e5) = cVar1;
  if (cVar1 != '\0') {
    if (unaff_x25[0x32] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      unaff_x25[0x32] = 0;
    }
    if (unaff_x25[0x33] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      unaff_x25[0x33] = 0;
    }
    uVar5 = unaff_x24[0x32];
    unaff_x25[0x33] = unaff_x24[0x33];
    unaff_x25[0x32] = uVar5;
    unaff_x24[0x32] = 0;
    unaff_x24[0x33] = 0;
  }
  plVar4 = unaff_x25 + 0x16;
  if (*plVar4 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *plVar4 = 0;
  }
  lVar3 = in_stack_00000038[2];
  unaff_x25[0x19] = in_stack_00000038[3];
  unaff_x25[0x18] = lVar3;
  lVar3 = *in_stack_00000038;
  unaff_x25[0x17] = in_stack_00000038[1];
  *plVar4 = lVar3;
  FUN_019bcd9c();
  *(undefined1 *)((long)unaff_x25 + 0x2e1) = 1;
  if (*in_stack_00000018 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *in_stack_00000018 = 0;
  }
  if (unaff_x24[0x2f] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    unaff_x24[0x2f] = 0;
  }
  if (unaff_x24[0x32] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    unaff_x24[0x32] = 0;
  }
  if (unaff_x24[0x33] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    unaff_x24[0x33] = 0;
  }
  if (unaff_x24[0xd5] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    unaff_x24[0xd5] = 0;
  }
  FUN_019da520(unaff_x24[0x73],0);
  FUN_019da520(unaff_x24[0x74],0);
  *in_stack_00000028 = 0;
  in_stack_00000028[1] = 0;
  if (unaff_x24[0x75] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    unaff_x24[0x75] = 0;
  }
  (*(code *)PTR_free_02bf74b0)();
  *in_stack_00000070 = (long)unaff_x25;
  FUN_019d2e18();
  FUN_019c9f64();
  *(undefined1 *)(unaff_x25 + 9) = 1;
  FUN_019d2d14();
  iVar2 = FUN_019d2c50();
  if (iVar2 != 0) goto LAB_019d19c8;
  unaff_x25[0x7a] = *(undefined8 *)(unaff_x23 + 0x2c8);
  unaff_x25[0x7b] = *(undefined8 *)(unaff_x23 + 0x248);
  unaff_x25[0x78] = *(undefined8 *)(unaff_x23 + 0x298);
  unaff_x25[0x79] = *(undefined8 *)(unaff_x23 + 0x328);
  FUN_019bccd8();
  if (*(char *)((long)unaff_x25 + 0x2e1) != '\0') {
    iVar2 = 0;
    *unaff_x21 = '\0';
    goto LAB_019d19c8;
  }
  FUN_019d2e18();
  if (((char *)unaff_x25[0x1c] == (char *)0x0) || (*(char *)unaff_x25[0x1c] == '\0')) {
    unaff_x25[0x1e] = (long)*(int *)(unaff_x25 + 0x1f);
    iVar2 = FUN_019c3a58();
    if (iVar2 == -2) goto LAB_019d2428;
    if (iVar2 == 1) goto LAB_019d2418;
    iVar2 = 0;
    if (in_stack_00000198 == 0) {
      FUN_019ca0fc();
      iVar2 = 6;
    }
  }
  else {
    FUN_019d2e18();
    iVar2 = FUN_019c3a58();
    if (iVar2 == -2) {
LAB_019d2428:
      iVar2 = 0x1c;
    }
    else if (iVar2 == 1) {
LAB_019d2418:
      iVar2 = 0;
      *unaff_x21 = '\x01';
    }
    else {
      iVar2 = 0;
      if (in_stack_00000198 == 0) {
        FUN_019ca0fc();
        iVar2 = 5;
      }
    }
  }
  unaff_x25[0xb] = in_stack_00000198;
LAB_019d19c8:
  if (in_stack_00000050 != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (in_stack_00000078 != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (in_stack_00000080 != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (iVar2 == 0) {
    lVar3 = *in_stack_00000070;
    if ((*(long *)(*(long *)(lVar3 + 0x398) + 0x18) != 0) ||
       (*(long *)(*(long *)(lVar3 + 0x3a0) + 0x18) != 0)) {
      *in_stack_00000030 = 1;
      return 0;
    }
    if (*unaff_x21 != '\0') {
      return 0;
    }
    iVar2 = FUN_019d0074(lVar3,in_stack_00000030);
  }
  if (iVar2 != 0) {
    if (iVar2 != 0x59) {
      if (*in_stack_00000070 == 0) {
        return iVar2;
      }
      FUN_019cf8e8(*in_stack_00000070,0);
    }
    *in_stack_00000070 = 0;
  }
  return iVar2;
}




uint FUN_019d2460(undefined8 *param_1,uint param_2,byte param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  uVar3 = 0;
  if (*(char *)((long)plVar6 + 0x2f4) == '\0') {
    lVar5 = *plVar6;
    FUN_019cfdac(lVar5,plVar6);
    if (((*(long *)(plVar6[0x73] + 0x18) + *(long *)(plVar6[0x74] + 0x18) == 0) ||
        (*(char *)(lVar5 + 0x522) != '\0')) || ((char)plVar6[0x5c] != '\0')) {
      *(undefined1 *)((long)plVar6 + 0x2f4) = 1;
      if (*(long *)(lVar5 + 0x1f8) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(lVar5 + 0x1f8) = 0;
      }
      if (*(long *)(lVar5 + 0x1f0) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(lVar5 + 0x1f0) = 0;
      }
      if (plVar6[0xb] != 0) {
        FUN_019c3c58(lVar5);
        plVar6[0xb] = 0;
      }
      if ((param_2 < 0x2b) && ((1L << ((ulong)param_2 & 0x3f) & 0x40004800000U) != 0)) {
        param_3 = 1;
      }
      if (*(code **)(plVar6[100] + 0x18) != (code *)0x0) {
        param_2 = (**(code **)(plVar6[100] + 0x18))(plVar6,param_2,param_3 & 1);
      }
      uVar3 = param_2;
      if (param_2 == 0) {
        iVar2 = FUN_019c3ee8(plVar6);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = 0x2a;
        }
      }
      if (*(long *)(lVar5 + 0x8968) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(long *)(lVar5 + 0x8968) = 0;
      }
      if ((((*(char *)(lVar5 + 0x522) == '\0') || ((int)plVar6[0x7c] == 2)) ||
          ((int)plVar6[0x80] == 2)) && (((char)plVar6[0x5c] == '\0' & (param_3 ^ 0xff)) != 0)) {
        uVar4 = *(ulong *)(*(long *)(lVar5 + 0x60) + 0x70);
        if ((long)uVar4 < 0) {
          uVar4 = (long)*(int *)(*(long *)(lVar5 + 0x60) + 0x18) << 2;
        }
        *(undefined1 *)(plVar6 + 9) = 0;
        if (uVar4 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)0x0;
          if (uVar4 < *(ulong *)(*(long *)(lVar5 + 0x900) + 8)) {
            FUN_019c9f64(lVar5,"Connection cache is full, closing the oldest one.\n");
            plVar7 = (long *)FUN_019d2e94(lVar5);
            if (plVar7 != (long *)0x0) {
              *plVar7 = lVar5;
              FUN_019cf8e8(plVar7,0);
            }
          }
        }
        if (plVar7 == plVar6) {
          *(undefined8 *)(lVar5 + 0x920) = 0;
        }
        else {
          *(long **)(lVar5 + 0x920) = plVar6;
          lVar1 = 200;
          if (*(char *)((long)plVar6 + 0x2e3) != '\0') {
            lVar1 = 0xe8;
          }
          FUN_019c9f64(lVar5,"Connection #%ld to host %s left intact\n",plVar6[10],
                       *(undefined8 *)((long)plVar6 + lVar1));
        }
      }
      else {
        FUN_019cf8e8(plVar6,param_3 & 1);
      }
      *param_1 = 0;
      if (*(long *)(lVar5 + 0x218) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(lVar5 + 0x218) = 0;
      }
      if (*(long *)(lVar5 + 0x1f8) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(lVar5 + 0x1f8) = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_019d26ec(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (*(code **)(plVar3[100] + 0x10) != (code *)0x0) {
    lVar4 = *plVar3;
    uVar2 = (**(code **)(plVar3[100] + 0x10))(plVar3);
    if ((int)uVar2 == 0x37) {
      if ((*(char *)((long)plVar3 + 0x2e1) == '\0') || (*(long *)(lVar4 + 0x60) != 0)) {
        return 0x37;
      }
      uVar2 = FUN_019d9b20(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      plVar3 = (long *)*param_1;
      uVar2 = (**(code **)(plVar3[100] + 0x10))(plVar3,param_2);
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*param_2 != '\0') {
      lVar4 = *plVar3;
      *(undefined1 *)(lVar4 + 0x210) = 0;
      iVar1 = (int)plVar3[0x67];
      if ((int)plVar3[0x67] <= *(int *)((long)plVar3 + 0x33c)) {
        iVar1 = *(int *)((long)plVar3 + 0x33c);
      }
      *(int *)(lVar4 + 0x1e0) = iVar1 + 1;
      FUN_019c4488(lVar4,6);
    }
  }
  return 0;
}




undefined8 FUN_019d27ac(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_2 = 0;
  if (*(code **)(param_1[100] + 0x20) != (code *)0x0) {
    uVar2 = (**(code **)(param_1[100] + 0x20))();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*param_2 != 1) {
      return uVar2;
    }
    lVar3 = *param_1;
    *(undefined1 *)(lVar3 + 0x210) = 0;
    iVar1 = (int)param_1[0x67];
    if ((int)param_1[0x67] <= *(int *)((long)param_1 + 0x33c)) {
      iVar1 = *(int *)((long)param_1 + 0x33c);
    }
    *(int *)(lVar3 + 0x1e0) = iVar1 + 1;
    FUN_019c4488(lVar3,6);
  }
  return 0;
}




int FUN_019d281c(char *param_1,size_t param_2,long *param_3,long *param_4,long *param_5)

{
  char *pcVar1;
  char *pcVar2;
  void *__dest;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t __n;
  void *__dest_00;
  void *__dest_01;
  
  if (param_4 == (long *)0x0) {
    pcVar1 = (char *)0x0;
    if (param_5 == (long *)0x0) goto LAB_019d28e4;
LAB_019d2870:
    pcVar2 = strchr(param_1,0x3b);
    if (param_1 + param_2 <= pcVar2) {
      pcVar2 = (char *)0x0;
    }
    if (pcVar1 != (char *)0x0) goto LAB_019d288c;
LAB_019d28ec:
    if (pcVar2 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      __n = (long)pcVar2 - (long)param_1;
      goto LAB_019d28fc;
    }
    pcVar4 = (char *)0x0;
    __n = param_2;
joined_r0x019d2ae0:
    pcVar5 = (char *)0x0;
    if (param_3 == (long *)0x0) goto LAB_019d28d0;
LAB_019d2914:
    __dest_00 = (void *)0x0;
    iVar3 = 0;
    if (__n != 0) {
      __dest_00 = (void *)(*(code *)PTR_malloc_02bf74a8)(__n + 1);
      iVar3 = 0x1b;
      if (__dest_00 != (void *)0x0) {
        iVar3 = 0;
      }
    }
  }
  else {
    pcVar1 = strchr(param_1,0x3a);
    if (param_1 + param_2 <= pcVar1) {
      pcVar1 = (char *)0x0;
    }
    if (param_5 != (long *)0x0) goto LAB_019d2870;
LAB_019d28e4:
    pcVar2 = (char *)0x0;
    if (pcVar1 == (char *)0x0) goto LAB_019d28ec;
LAB_019d288c:
    pcVar4 = pcVar2;
    if (pcVar2 == (char *)0x0 || pcVar1 <= pcVar2) {
      pcVar4 = pcVar1;
    }
    __n = (long)pcVar4 - (long)param_1;
    pcVar4 = pcVar2;
    if (pcVar2 == (char *)0x0 || pcVar2 <= pcVar1) {
      pcVar4 = param_1 + param_2;
    }
    pcVar4 = pcVar4 + (-1 - (long)pcVar1);
    if (pcVar2 == (char *)0x0) goto joined_r0x019d2ae0;
LAB_019d28fc:
    pcVar5 = pcVar1;
    if (pcVar1 <= pcVar2 || pcVar1 == (char *)0x0) {
      pcVar5 = param_1 + param_2;
    }
    pcVar5 = pcVar5 + ~(ulong)pcVar2;
    if (param_3 != (long *)0x0) goto LAB_019d2914;
LAB_019d28d0:
    __dest_00 = (void *)0x0;
    iVar3 = 0;
  }
  if ((pcVar4 == (char *)0x0) || (param_4 == (long *)0x0)) {
    __dest_01 = (void *)0x0;
  }
  else {
    __dest_01 = (void *)0x0;
    if (iVar3 == 0) {
      __dest_01 = (void *)(*(code *)PTR_malloc_02bf74a8)(pcVar4 + 1);
      if (__dest_01 == (void *)0x0) goto LAB_019d29c0;
      iVar3 = 0;
    }
  }
  if (((pcVar5 == (char *)0x0) || (param_5 == (long *)0x0)) || (iVar3 != 0)) {
    if (iVar3 != 0) {
      return iVar3;
    }
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(pcVar5 + 1);
    if (__dest == (void *)0x0) {
      if (__dest_01 != (void *)0x0) {
        (*(code *)PTR_free_02bf74b0)(__dest_01);
      }
LAB_019d29c0:
      if (__dest_00 != (void *)0x0) {
        (*(code *)PTR_free_02bf74b0)(__dest_00);
      }
      return 0x1b;
    }
  }
  if (__dest_00 != (void *)0x0) {
    memcpy(__dest_00,param_1,__n);
    *(undefined1 *)((long)__dest_00 + __n) = 0;
    if (*param_3 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *param_3 = 0;
    }
    *param_3 = (long)__dest_00;
  }
  if (__dest_01 != (void *)0x0) {
    memcpy(__dest_01,pcVar1 + 1,(size_t)pcVar4);
    *(char *)((long)__dest_01 + (long)pcVar4) = '\0';
    if (*param_4 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *param_4 = 0;
    }
    *param_4 = (long)__dest_01;
  }
  if (__dest != (void *)0x0) {
    memcpy(__dest,pcVar2 + 1,(size_t)pcVar5);
    *(char *)((long)__dest + (long)pcVar5) = '\0';
    if (*param_5 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *param_5 = 0;
    }
    *param_5 = (long)__dest;
  }
  return 0;
}




undefined8 FUN_019d2ae8(char *param_1,char *param_2)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_019e23a8(&DAT_01e26823,param_2);
    if (iVar2 != 0) {
      return 1;
    }
    sVar3 = strlen(param_2);
    pcVar4 = strchr(param_1,0x3a);
    if (pcVar4 == (char *)0x0) {
      uVar6 = strlen(param_1);
    }
    else {
      uVar6 = (long)pcVar4 - (long)param_1;
    }
    if (sVar3 != 0) {
      uVar5 = 0;
      do {
        while (((uVar5 < sVar3 && ((ulong)(byte)param_2[uVar5] < 0x40)) &&
               ((1L << ((ulong)(byte)param_2[uVar5] & 0x3f) & 0x100100000001U) != 0))) {
          uVar5 = uVar5 + 1;
        }
        uVar1 = uVar5;
        if (uVar5 == sVar3) {
          return 0;
        }
        while ((uVar1 < sVar3 &&
               ((0x3f < (ulong)(byte)param_2[uVar1] ||
                ((1L << ((ulong)(byte)param_2[uVar1] & 0x3f) & 0x100100000001U) == 0))))) {
          uVar1 = uVar1 + 1;
        }
        if (param_2[uVar5] == '.') {
          uVar5 = uVar5 + 1;
        }
        uVar7 = uVar1 - uVar5;
        if (uVar7 <= uVar6) {
          iVar2 = FUN_019e2430(param_2 + uVar5,param_1 + (uVar6 - uVar7),uVar7);
          if (iVar2 != 0) {
            if (uVar7 == uVar6) {
              return 1;
            }
            if ((param_1 + (uVar6 - uVar7))[-1] == '.') {
              return 1;
            }
          }
        }
        uVar5 = uVar1 + 1;
      } while (uVar5 < sVar3);
    }
  }
  return 0;
}




undefined8 FUN_019d2c50(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x3a8);
  *(long *)(param_1 + 0x8b00) = lVar1;
  if ((lVar1 != 0) || (uVar2 = 0, *(long *)(param_1 + 0x5f0) != 0)) {
    if (*(char *)(param_1 + 0x8af2) != '\0') {
      (*(code *)PTR_free_02bf74b0)(*(undefined8 *)(param_1 + 0x8af8));
      lVar1 = *(long *)(param_1 + 0x8b00);
    }
    if (lVar1 == 0) {
      lVar1 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(param_1 + 0x5f0));
    }
    else {
      lVar1 = FUN_019d5c34(&DAT_01e2332e);
    }
    *(long *)(param_1 + 0x8af8) = lVar1;
    *(char *)(param_1 + 0x8af2) = lVar1 != 0;
    if (lVar1 == 0) {
      return 0x1b;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x8af1) = uVar2;
  return 0;
}




void FUN_019d2d14(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_1;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(lVar2 + 0x8ad0) = 0;
  if (*(char *)(lVar2 + 0x517) == '\0') {
    if (*(int *)(lVar2 + 0x420) != 5) goto LAB_019d2d58;
    uVar1 = 1;
  }
  else {
    uVar1 = 5;
  }
  *(undefined4 *)(lVar2 + 0x420) = uVar1;
LAB_019d2d58:
  auVar3 = FUN_019c338c();
  *(undefined1 (*) [16])(lVar2 + 0xb8) = auVar3;
  *(undefined1 *)(lVar2 + 0xd8) = 1;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(long *)(lVar2 + 0x1d0) = lVar2 + 0x938;
  *(long *)(lVar2 + 0x1d8) = lVar2 + 0x4939;
  *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x928);
  *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined1 *)(lVar2 + 0x1e9) = 0;
  FUN_019d4598(lVar2);
  FUN_019c45ac(lVar2,0);
  FUN_019c45a4(lVar2,0);
  return;
}




undefined8 FUN_019d2db8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((((*(byte *)(*(long *)(param_2 + 800) + 0x78) & 3) == 0) ||
       (uVar1 = FUN_019be9cc(*(undefined8 *)(param_1 + 0x60)), (uVar1 & 1) == 0)) ||
      ((*(uint *)(param_1 + 0x420) | 4) != 5)) || (*(long *)(param_1 + 0x428) == 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_019d2e18(undefined8 param_1,long param_2)

{
  char cVar1;
  size_t sVar2;
  char *__s;
  
  __s = *(char **)(param_2 + 0x10);
  *(char **)(param_2 + 0x18) = __s;
  sVar2 = strlen(__s);
  if (__s[sVar2 - 1] == '.') {
    __s[sVar2 - 1] = '\0';
    __s = *(char **)(param_2 + 0x10);
  }
  do {
    cVar1 = *__s;
    if (cVar1 == '\0') {
      return;
    }
    __s = __s + 1;
  } while (-1 < cVar1);
  FUN_019c9f64(param_1,"IDN support not present, can\'t parse Unicode domains\n");
  return;
}




long FUN_019d2e94(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [24];
  
  puVar3 = *(undefined8 **)(param_1 + 0x900);
  auVar8 = FUN_019c338c();
  FUN_019dacb4(*puVar3,auStack_58);
  plVar1 = (long *)FUN_019dacc4(auStack_58);
  lVar4 = 0;
  if (plVar1 != (long *)0x0) {
    lVar6 = -1;
    do {
      for (plVar1 = (long *)**(long **)(*plVar1 + 0x10); plVar1 != (long *)0x0;
          plVar1 = (long *)plVar1[2]) {
        lVar7 = *plVar1;
        lVar5 = lVar4;
        lVar2 = lVar6;
        if ((*(char *)(lVar7 + 0x48) == '\0') &&
           (lVar2 = FUN_019c33ec(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(lVar7 + 0x1b0),
                                 *(undefined8 *)(lVar7 + 0x1b8)), lVar5 = lVar7, lVar2 <= lVar6)) {
          lVar5 = lVar4;
          lVar2 = lVar6;
        }
        lVar4 = lVar5;
        lVar6 = lVar2;
      }
      plVar1 = (long *)FUN_019dacc4(auStack_58);
    } while (plVar1 != (long *)0x0);
  }
  return lVar4;
}




undefined8 FUN_019d2f48(void)

{
  FUN_019d2f60();
  return 0;
}




undefined4 FUN_019d2f60(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1[0x73] + 0x18) + *(long *)(param_1[0x74] + 0x18) == 0) &&
     (uVar3 = 0, *(char *)(param_1 + 9) == '\0')) {
    if ((*(byte *)(param_1[100] + 0x7a) >> 2 & 1) == 0) {
      iVar1 = FUN_019c14c8(*(undefined4 *)(param_1 + 0x3a),0xffffffff,0xffffffff,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = FUN_019e9bec(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    *param_1 = param_2;
    FUN_019c9f64(param_2,"Connection %ld seems to be dead!\n",param_1[10]);
    uVar3 = 1;
    FUN_019cf8e8(param_1,1);
  }
  return uVar3;
}

