// functions/01a69 — 1 functions
#include "libGameKindred.h"




undefined8
FUN_01a69d2c(long *param_1,long *param_2,size_t *param_3,ulong *param_4,ulong param_5,uint param_6,
            int param_7,uint param_8,uint param_9)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  size_t sVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  char *__s;
  undefined4 local_80;
  char local_7c [28];
  
  if ((param_9 >> 6 & 1) == 0) {
    if ((long)param_5 < 0) {
      param_5 = -param_5;
      local_80 = 0x2d;
    }
    else if ((param_9 >> 1 & 1) == 0) {
      local_80 = (param_9 & 4) << 3;
    }
    else {
      local_80 = 0x2b;
    }
  }
  else {
    local_80 = 0;
  }
  __s = "";
  if ((param_9 >> 3 & 1) != 0) {
    pcVar2 = "0";
    if (param_6 != 8) {
      pcVar2 = "";
    }
    __s = "0x";
    if (param_6 != 0x10) {
      __s = pcVar2;
    }
  }
  uVar11 = 0;
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  uVar14 = (ulong)param_6;
  pcVar2 = "0123456789abcdef";
  if ((param_9 & 0x20) != 0) {
    pcVar2 = "0123456789ABCDEF";
  }
  do {
    uVar4 = 0;
    if (uVar14 != 0) {
      uVar4 = param_5 / uVar14;
    }
    local_7c[uVar11] = pcVar2[param_5 - uVar4 * uVar14];
    uVar11 = uVar11 + 1;
  } while ((uVar14 <= param_5) && (param_5 = uVar4, uVar11 < 0x1a));
  uVar10 = (uint)uVar11;
  uVar1 = uVar10 - 1;
  if (uVar10 != 0x1a) {
    uVar1 = uVar10;
  }
  uVar10 = uVar1;
  if ((int)uVar1 <= (int)param_8) {
    uVar10 = param_8;
  }
  bVar6 = local_80 != 0;
  local_7c[uVar1] = '\0';
  sVar7 = strlen(__s);
  uVar3 = ((param_7 - (uint)bVar6) - uVar10) - (int)sVar7;
  uVar10 = param_8 - uVar1 & ((int)(param_8 - uVar1) >> 0x1f ^ 0xffffffffU);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  uVar17 = uVar3;
  if ((int)uVar3 <= (int)uVar10) {
    uVar17 = uVar10;
  }
  if ((param_9 & 0x10) != 0) {
    uVar3 = 0;
    uVar10 = uVar17;
  }
  uVar17 = -uVar3;
  if ((param_9 & 1) == 0) {
    uVar17 = uVar3;
  }
  uVar3 = uVar17;
  iVar16 = local_80;
  if (0 < (int)uVar17) {
    if (param_2 == (long *)0x0) {
      do {
        uVar11 = *param_3;
        if (uVar11 < *param_4) {
          lVar12 = *param_1;
          *param_3 = uVar11 + 1;
          if (lVar12 == 0) goto LAB_01a6a4f8;
          *(undefined1 *)(lVar12 + uVar11) = 0x20;
        }
        uVar3 = uVar17 - 1;
        bVar6 = 0 < (int)uVar17;
        uVar17 = uVar3;
      } while (uVar3 != 0 && bVar6);
    }
    else {
      do {
        uVar11 = *param_3;
        if (uVar11 == *param_4) {
          if (0x7ffffbff < uVar11) {
            return 0;
          }
          *param_4 = uVar11 + 0x400;
          iVar16 = (int)(uVar11 + 0x400);
          if ((void *)*param_2 != (void *)0x0) {
            pvVar8 = CRYPTO_realloc((void *)*param_2,iVar16,"b_print.c",0x2fd);
            if (pvVar8 == (void *)0x0) {
              return 0;
            }
            *param_2 = (long)pvVar8;
            goto LAB_01a69f0c;
          }
          pvVar8 = CRYPTO_malloc(iVar16,"b_print.c",0x2f3);
          *param_2 = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          if (*param_3 != 0) {
            memcpy(pvVar8,(void *)*param_1,*param_3);
          }
          *param_1 = 0;
          uVar11 = *param_3;
          if (uVar11 < *param_4) goto LAB_01a69f1c;
        }
        else {
LAB_01a69f0c:
          uVar11 = *param_3;
          if (uVar11 < *param_4) {
LAB_01a69f1c:
            lVar12 = *param_1;
            if (lVar12 == 0) {
              lVar12 = *param_2;
            }
            *param_3 = uVar11 + 1;
            *(undefined1 *)(lVar12 + uVar11) = 0x20;
          }
        }
        uVar3 = uVar17 - 1;
        bVar6 = 0 < (int)uVar17;
        uVar17 = uVar3;
        iVar16 = local_80;
      } while (uVar3 != 0 && bVar6);
    }
  }
  local_80 = iVar16;
  if (iVar16 == 0) {
LAB_01a6a014:
    cVar15 = *__s;
  }
  else {
    if ((param_2 == (long *)0x0) || (uVar11 = *param_3, uVar11 != *param_4)) {
LAB_01a69f9c:
      uVar11 = *param_3;
      if (*param_4 <= uVar11) goto LAB_01a6a014;
    }
    else {
      if (0x7ffffbff < uVar11) {
        return 0;
      }
      *param_4 = uVar11 + 0x400;
      iVar9 = (int)(uVar11 + 0x400);
      if ((void *)*param_2 != (void *)0x0) {
        pvVar8 = CRYPTO_realloc((void *)*param_2,iVar9,"b_print.c",0x2fd);
        if (pvVar8 == (void *)0x0) {
          return 0;
        }
        *param_2 = (long)pvVar8;
        goto LAB_01a69f9c;
      }
      pvVar8 = CRYPTO_malloc(iVar9,"b_print.c",0x2f3);
      *param_2 = (long)pvVar8;
      if (pvVar8 == (void *)0x0) {
        return 0;
      }
      if (*param_3 != 0) {
        memcpy(pvVar8,(void *)*param_1,*param_3);
      }
      *param_1 = 0;
      uVar11 = *param_3;
      if (*param_4 <= uVar11) goto LAB_01a6a014;
    }
    lVar12 = *param_1;
    if (lVar12 == 0) {
      lVar12 = *param_2;
    }
    *param_3 = uVar11 + 1;
    *(char *)(lVar12 + uVar11) = (char)iVar16;
    cVar15 = *__s;
  }
  if (cVar15 != '\0') {
    if (param_2 == (long *)0x0) {
      do {
        __s = __s + 1;
        uVar11 = *param_3;
        if (uVar11 < *param_4) {
          lVar12 = *param_1;
          *param_3 = uVar11 + 1;
          if (lVar12 == 0) goto LAB_01a6a4f8;
          *(char *)(lVar12 + uVar11) = cVar15;
        }
        cVar15 = *__s;
      } while (cVar15 != '\0');
    }
    else {
      do {
        __s = __s + 1;
        uVar11 = *param_3;
        if (uVar11 == *param_4) {
          if (0x7ffffbff < uVar11) {
            return 0;
          }
          *param_4 = uVar11 + 0x400;
          iVar16 = (int)(uVar11 + 0x400);
          if ((void *)*param_2 != (void *)0x0) {
            pvVar8 = CRYPTO_realloc((void *)*param_2,iVar16,"b_print.c",0x2fd);
            if (pvVar8 == (void *)0x0) {
              return 0;
            }
            *param_2 = (long)pvVar8;
            goto LAB_01a6a0ac;
          }
          pvVar8 = CRYPTO_malloc(iVar16,"b_print.c",0x2f3);
          *param_2 = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          if (*param_3 != 0) {
            memcpy(pvVar8,(void *)*param_1,*param_3);
          }
          *param_1 = 0;
          uVar11 = *param_3;
          if (uVar11 < *param_4) goto LAB_01a6a0bc;
        }
        else {
LAB_01a6a0ac:
          uVar11 = *param_3;
          if (uVar11 < *param_4) {
LAB_01a6a0bc:
            lVar12 = *param_1;
            if (lVar12 == 0) {
              lVar12 = *param_2;
            }
            *param_3 = uVar11 + 1;
            *(char *)(lVar12 + uVar11) = cVar15;
          }
        }
        cVar15 = *__s;
      } while (cVar15 != '\0');
    }
  }
  if (0 < (int)uVar10) {
    if (param_2 == (long *)0x0) {
      iVar16 = uVar10 + 1;
      do {
        uVar11 = *param_3;
        if (uVar11 < *param_4) {
          lVar12 = *param_1;
          *param_3 = uVar11 + 1;
          if (lVar12 == 0) goto LAB_01a6a4f8;
          *(undefined1 *)(lVar12 + uVar11) = 0x30;
        }
        iVar16 = iVar16 + -1;
      } while (1 < iVar16);
    }
    else {
      iVar16 = uVar10 + 1;
      do {
        uVar11 = *param_3;
        if (uVar11 == *param_4) {
          if (0x7ffffbff < uVar11) {
            return 0;
          }
          *param_4 = uVar11 + 0x400;
          iVar9 = (int)(uVar11 + 0x400);
          if ((void *)*param_2 != (void *)0x0) {
            pvVar8 = CRYPTO_realloc((void *)*param_2,iVar9,"b_print.c",0x2fd);
            if (pvVar8 == (void *)0x0) {
              return 0;
            }
            *param_2 = (long)pvVar8;
            goto LAB_01a6a1c4;
          }
          pvVar8 = CRYPTO_malloc(iVar9,"b_print.c",0x2f3);
          *param_2 = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          if (*param_3 != 0) {
            memcpy(pvVar8,(void *)*param_1,*param_3);
          }
          *param_1 = 0;
          uVar11 = *param_3;
          if (uVar11 < *param_4) goto LAB_01a6a1d4;
        }
        else {
LAB_01a6a1c4:
          uVar11 = *param_3;
          if (uVar11 < *param_4) {
LAB_01a6a1d4:
            lVar12 = *param_1;
            if (lVar12 == 0) {
              lVar12 = *param_2;
            }
            *param_3 = uVar11 + 1;
            *(undefined1 *)(lVar12 + uVar11) = 0x30;
          }
        }
        iVar16 = iVar16 + -1;
      } while (1 < iVar16);
    }
  }
  if (uVar1 != 0) {
    lVar12 = (long)(int)uVar1;
    if (param_2 == (long *)0x0) {
      do {
        uVar11 = *param_3;
        if (uVar11 < *param_4) {
          lVar13 = *param_1;
          cVar15 = local_7c[lVar12 + -1];
          *param_3 = uVar11 + 1;
          if (lVar13 == 0) goto LAB_01a6a4f8;
          *(char *)(lVar13 + uVar11) = cVar15;
        }
        bVar6 = 1 < lVar12;
        lVar12 = lVar12 + -1;
      } while (bVar6);
    }
    else {
      do {
        uVar11 = *param_3;
        cVar15 = local_7c[lVar12 + -1];
        if (uVar11 == *param_4) {
          if (0x7ffffbff < uVar11) {
            return 0;
          }
          *param_4 = uVar11 + 0x400;
          iVar16 = (int)(uVar11 + 0x400);
          if ((void *)*param_2 != (void *)0x0) {
            pvVar8 = CRYPTO_realloc((void *)*param_2,iVar16,"b_print.c",0x2fd);
            if (pvVar8 == (void *)0x0) {
              return 0;
            }
            *param_2 = (long)pvVar8;
            goto LAB_01a6a2f4;
          }
          pvVar8 = CRYPTO_malloc(iVar16,"b_print.c",0x2f3);
          *param_2 = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          if (*param_3 != 0) {
            memcpy(pvVar8,(void *)*param_1,*param_3);
          }
          *param_1 = 0;
          uVar11 = *param_3;
          if (uVar11 < *param_4) goto LAB_01a6a304;
        }
        else {
LAB_01a6a2f4:
          uVar11 = *param_3;
          if (uVar11 < *param_4) {
LAB_01a6a304:
            lVar13 = *param_1;
            if (lVar13 == 0) {
              lVar13 = *param_2;
            }
            *param_3 = uVar11 + 1;
            *(char *)(lVar13 + uVar11) = cVar15;
          }
        }
        bVar6 = 1 < lVar12;
        lVar12 = lVar12 + -1;
      } while (bVar6);
    }
  }
  if ((int)uVar3 < 0) {
    if (param_2 == (long *)0x0) {
      iVar16 = uVar3 - 1;
      do {
        uVar11 = *param_3;
        if (uVar11 < *param_4) {
          lVar12 = *param_1;
          *param_3 = uVar11 + 1;
          if (lVar12 == 0) {
LAB_01a6a4f8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1a6a4fc);
            (*pcVar5)();
          }
          *(undefined1 *)(lVar12 + uVar11) = 0x20;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < -1);
    }
    else {
      iVar16 = uVar3 - 1;
      do {
        uVar11 = *param_3;
        if (uVar11 == *param_4) {
          if (0x7ffffbff < uVar11) {
            return 0;
          }
          *param_4 = uVar11 + 0x400;
          iVar9 = (int)(uVar11 + 0x400);
          if ((void *)*param_2 != (void *)0x0) {
            pvVar8 = CRYPTO_realloc((void *)*param_2,iVar9,"b_print.c",0x2fd);
            if (pvVar8 == (void *)0x0) {
              return 0;
            }
            *param_2 = (long)pvVar8;
            goto LAB_01a6a418;
          }
          pvVar8 = CRYPTO_malloc(iVar9,"b_print.c",0x2f3);
          *param_2 = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          if (*param_3 != 0) {
            memcpy(pvVar8,(void *)*param_1,*param_3);
          }
          *param_1 = 0;
          uVar11 = *param_3;
          if (uVar11 < *param_4) goto LAB_01a6a428;
        }
        else {
LAB_01a6a418:
          uVar11 = *param_3;
          if (uVar11 < *param_4) {
LAB_01a6a428:
            lVar12 = *param_1;
            if (lVar12 == 0) {
              lVar12 = *param_2;
            }
            *param_3 = uVar11 + 1;
            *(undefined1 *)(lVar12 + uVar11) = 0x20;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < -1);
    }
  }
  return 1;
}

