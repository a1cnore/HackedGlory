// functions/00b00 — 13 functions
#include "libGameKindred.h"




undefined8 thunk_FUN_00b0039c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x1f50);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x1f58) == 0) {
    return 0;
  }
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x1f58);
  }
  if (uVar1 == 0) {
    return 1;
  }
  FUN_0096204c(param_1 + 8000);
  return 1;
}




void FUN_00b00008(long param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 != 0) {
    FUN_0096204c(param_1 + 8000);
    return;
  }
  return;
}




void FUN_00b00030(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  
  bVar3 = *param_2;
  uVar5 = (ulong)(bVar3 >> 1);
  __n = uVar5;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (__n == 0) {
    return;
  }
  bVar4 = *(byte *)(param_1 + 0x1f50);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x1f58);
  }
  if (__n == sVar1) {
    pbVar11 = *(byte **)(param_1 + 0x1f60);
    if ((bVar4 & 1) == 0) {
      pbVar11 = (byte *)(param_1 + 0x1f51);
    }
    if ((bVar3 & 1) == 0) {
      lVar12 = -uVar5;
      pbVar8 = param_2;
      do {
        pbVar8 = pbVar8 + 1;
        if (*pbVar8 != *pbVar11) goto LAB_00b000e0;
        lVar12 = lVar12 + 1;
        pbVar11 = pbVar11 + 1;
      } while (lVar12 != 0);
    }
    else {
      iVar7 = memcmp(*(void **)(param_2 + 0x10),pbVar11,__n);
      if (iVar7 != 0) goto LAB_00b000e0;
    }
    FUN_00afecb4(param_1 + 0x88,0);
    FUN_00aff58c(param_1 + 0x88);
    if (*(long **)(param_1 + 0x1f28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1f28) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1f28) = 0;
    FUN_008fce60((byte *)(param_1 + 0x1f50),&DAT_0320ffa8);
    if (*(int *)(param_1 + 0x1f30) != 0) {
      FUN_00affc48(param_1,*(undefined8 *)(param_1 + 0x1f38));
      FUN_00b00f0c(param_1 + 0x1f30,*(long *)(param_1 + 0x1f38),*(long *)(param_1 + 0x1f38) + 0x88);
      return;
    }
  }
  else {
LAB_00b000e0:
    uVar2 = *(uint *)(param_1 + 0x1f30);
    if (uVar2 != 0) {
      pbVar11 = *(byte **)(param_2 + 0x10);
      lVar12 = *(long *)(param_1 + 0x1f38);
      uVar13 = 0;
      if ((bVar3 & 1) == 0) {
        pbVar11 = param_2 + 1;
      }
      do {
        lVar9 = lVar12 + uVar13 * 0x88;
        bVar4 = *(byte *)(lVar9 + 0x68);
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(lVar9 + 0x70);
        }
        if (__n == sVar1) {
          pbVar8 = *(byte **)(lVar12 + uVar13 * 0x88 + 0x78);
          if ((bVar4 & 1) == 0) {
            pbVar8 = (byte *)(lVar9 + 0x69);
          }
          lVar9 = -uVar5;
          pbVar6 = param_2;
          if ((bVar3 & 1) == 0) {
            while (pbVar6[1] == *pbVar8) {
              lVar9 = lVar9 + 1;
              pbVar8 = pbVar8 + 1;
              pbVar6 = pbVar6 + 1;
              if (lVar9 == 0) goto LAB_00b00198;
            }
          }
          else {
            iVar7 = memcmp(pbVar11,pbVar8,__n);
            if (iVar7 == 0) {
LAB_00b00198:
              uVar13 = uVar13 & 0xffffffff;
              plVar10 = (long *)(lVar12 + uVar13 * 0x88 + 0x80);
              if ((long *)*plVar10 != (long *)0x0) {
                (**(code **)(*(long *)*plVar10 + 8))();
                lVar12 = *(long *)(param_1 + 0x1f38);
                plVar10 = (long *)(lVar12 + uVar13 * 0x88 + 0x80);
              }
              *plVar10 = 0;
              FUN_00b002a4(param_1 + 0x1f30,lVar12 + uVar13 * 0x88);
              return;
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar2);
    }
  }
  return;
}




void FUN_00b002a4(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 2) + (ulong)*param_1 * 0x88;
  puVar2 = (undefined8 *)(lVar1 + -0x88);
  if (puVar2 != param_2) {
    uVar3 = *puVar2;
    param_2[1] = *(undefined8 *)(lVar1 + -0x80);
    *param_2 = uVar3;
    FUN_00910394(param_2 + 2,lVar1 + -0x78);
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(lVar1 + -0x68);
    FUN_008fce60(param_2 + 5,lVar1 + -0x60);
    FUN_008fce60(param_2 + 8,lVar1 + -0x48);
    uVar3 = *(undefined8 *)(lVar1 + -0x30);
    param_2[0xc] = *(undefined8 *)(lVar1 + -0x28);
    param_2[0xb] = uVar3;
    FUN_008fce60(param_2 + 0xd,lVar1 + -0x20);
    param_2[0x10] = *(undefined8 *)(lVar1 + -8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x88 + -0x88);
  }
  if ((*(byte *)(puVar2 + 0xd) & 1) != 0) {
    operator_delete((void *)puVar2[0xf]);
  }
  if ((*(byte *)(puVar2 + 8) & 1) != 0) {
    operator_delete((void *)puVar2[10]);
  }
  if ((*(byte *)(puVar2 + 5) & 1) != 0) {
    operator_delete((void *)puVar2[7]);
  }
  if ((void *)puVar2[3] != (void *)0x0) {
    operator_delete__((void *)puVar2[3]);
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  *param_1 = *param_1 - 1;
  return;
}




undefined8 FUN_00b0039c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x1f50);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x1f58) == 0) {
    return 0;
  }
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x1f58);
  }
  if (uVar1 == 0) {
    return 1;
  }
  FUN_0096204c(param_1 + 8000);
  return 1;
}




void FUN_00b00400(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x1f30);
  if (*(uint *)(param_1 + 0x1f30) != 0) {
    lVar2 = *(long *)(param_1 + 0x1f38);
    uVar4 = 0;
    lVar5 = 0x80;
    do {
      if (*(long **)(lVar2 + lVar5) == (long *)0x0) {
        puVar3 = (undefined8 *)(lVar2 + uVar4 * 0x88 + 0x80);
      }
      else {
        (**(code **)(**(long **)(lVar2 + lVar5) + 8))();
        lVar2 = *(long *)(param_1 + 0x1f38);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1f30);
        puVar3 = (undefined8 *)(lVar2 + lVar5);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x88;
      *puVar3 = 0;
    } while (uVar4 < uVar1);
  }
  FUN_00b00494(param_1 + 0x1f30,0);
  return;
}




void FUN_00b00494(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x88;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x40);
      do {
        if ((pbVar2[0x28] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x38));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if (*(void **)(pbVar2 + -0x28) != (void *)0x0) {
          operator_delete__(*(void **)(pbVar2 + -0x28));
          pbVar2[-0x30] = 0;
          pbVar2[-0x2f] = 0;
          pbVar2[-0x2e] = 0;
          pbVar2[-0x2d] = 0;
          pbVar2[-0x2c] = 0;
          pbVar2[-0x2b] = 0;
          pbVar2[-0x2a] = 0;
          pbVar2[-0x29] = 0;
          pbVar2[-0x28] = 0;
          pbVar2[-0x27] = 0;
          pbVar2[-0x26] = 0;
          pbVar2[-0x25] = 0;
          pbVar2[-0x24] = 0;
          pbVar2[-0x23] = 0;
          pbVar2[-0x22] = 0;
          pbVar2[-0x21] = 0;
        }
        lVar1 = lVar1 + -0x88;
        pbVar2 = pbVar2 + 0x88;
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




void FUN_00b00540(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  if (*(int *)(param_1 + 8000) != 0) {
    uVar16 = 0;
    bVar6 = false;
    do {
      lVar15 = *(long *)(param_1 + 0x1f48);
      bVar4 = *(byte *)(param_1 + 0x1f50);
      pbVar8 = (byte *)(lVar15 + uVar16 * 0x18);
      bVar5 = *pbVar8;
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar8 + 8);
      }
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(param_1 + 0x1f58);
      }
      if (sVar1 == sVar2) {
        pbVar12 = *(byte **)(lVar15 + uVar16 * 0x18 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar12 = pbVar8 + 1;
        }
        pbVar13 = (byte *)(param_1 + 0x1f51);
        if ((bVar4 & 1) != 0) {
          pbVar13 = *(byte **)(param_1 + 0x1f60);
        }
        if ((bVar5 & 1) == 0) {
          if (sVar1 != 0) {
            lVar10 = -(ulong)(bVar5 >> 1);
            do {
              pbVar8 = pbVar8 + 1;
              if (*pbVar8 != *pbVar13) goto LAB_00b00644;
              lVar10 = lVar10 + 1;
              pbVar13 = pbVar13 + 1;
            } while (lVar10 != 0);
          }
        }
        else if ((sVar1 != 0) && (iVar7 = memcmp(pbVar12,pbVar13,sVar1), iVar7 != 0))
        goto LAB_00b00644;
        FUN_00afecb4(param_1 + 0x88,0);
        FUN_00aff58c(param_1 + 0x88);
        if (*(long **)(param_1 + 0x1f28) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x1f28) + 8))();
        }
        *(undefined8 *)(param_1 + 0x1f28) = 0;
        FUN_008fce60((byte *)(param_1 + 0x1f50),&DAT_0320ffa8);
        bVar6 = true;
      }
      else {
LAB_00b00644:
        uVar3 = *(uint *)(param_1 + 0x1f30);
        if (uVar3 != 0) {
          lVar10 = *(long *)(param_1 + 0x1f38);
          uVar14 = 0;
          do {
            lVar11 = lVar10 + uVar14 * 0x88;
            bVar4 = *(byte *)(lVar11 + 0x68);
            pbVar8 = (byte *)(lVar15 + uVar14 * 0x18);
            bVar5 = *pbVar8;
            sVar1 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar8 + 8);
            }
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = *(size_t *)(lVar11 + 0x70);
            }
            if (sVar1 == sVar2) {
              pbVar13 = *(byte **)(lVar15 + uVar14 * 0x18 + 0x10);
              pbVar12 = *(byte **)(lVar10 + uVar14 * 0x88 + 0x78);
              if ((bVar5 & 1) == 0) {
                pbVar13 = pbVar8 + 1;
              }
              if ((bVar4 & 1) == 0) {
                pbVar12 = (byte *)(lVar11 + 0x69);
              }
              if ((bVar5 & 1) == 0) {
                if (sVar1 == 0) {
LAB_00b0070c:
                  uVar14 = uVar14 & 0xffffffff;
                  plVar9 = (long *)(lVar10 + uVar14 * 0x88 + 0x80);
                  if ((long *)*plVar9 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar9 + 8))();
                    lVar10 = *(long *)(param_1 + 0x1f38);
                    plVar9 = (long *)(lVar10 + uVar14 * 0x88 + 0x80);
                  }
                  lVar10 = lVar10 + uVar14 * 0x88;
                  *plVar9 = 0;
                  FUN_00b00f0c((uint *)(param_1 + 0x1f30),lVar10,lVar10 + 0x88);
                  break;
                }
                lVar11 = -(ulong)(bVar5 >> 1);
                while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar12) {
                  lVar11 = lVar11 + 1;
                  pbVar12 = pbVar12 + 1;
                  if (lVar11 == 0) goto LAB_00b0070c;
                }
              }
              else if ((sVar1 == 0) || (iVar7 = memcmp(pbVar13,pbVar12,sVar1), iVar7 == 0))
              goto LAB_00b0070c;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar3);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_1 + 8000));
    if ((bVar6) && (*(int *)(param_1 + 0x1f30) != 0)) {
      FUN_00affc48(param_1,*(undefined8 *)(param_1 + 0x1f38));
      FUN_00b00f0c(param_1 + 0x1f30,*(long *)(param_1 + 0x1f38),*(long *)(param_1 + 0x1f38) + 0x88);
    }
  }
  FUN_00951534((uint *)(param_1 + 8000),0);
  return;
}




bool FUN_00b0080c(long param_1)

{
  return *(long *)(param_1 + 0x1f28) != 0;
}




undefined8 thunk_FUN_00b0039c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x1f50);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x1f58) == 0) {
    return 0;
  }
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x1f58);
  }
  if (uVar1 == 0) {
    return 1;
  }
  FUN_0096204c(param_1 + 8000);
  return 1;
}




void FUN_00b00820(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0x88);
    puVar3 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar6 = puVar3 + (ulong)*param_1 * 0x11;
      puVar7 = puVar2;
      do {
        uVar8 = *puVar3;
        puVar7[1] = puVar3[1];
        *puVar7 = uVar8;
        thunk_FUN_00e7051c(puVar7 + 2,puVar3 + 2);
        *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(puVar3 + 4);
        FUN_008fcdb8(puVar7 + 5,puVar3 + 5);
        FUN_008fcdb8(puVar7 + 8,puVar3 + 8);
        uVar8 = puVar3[0xb];
        puVar7[0xc] = puVar3[0xc];
        puVar7[0xb] = uVar8;
        FUN_008fcdb8(puVar7 + 0xd,puVar3 + 0xd);
        puVar1 = puVar3 + 0x10;
        puVar3 = puVar3 + 0x11;
        puVar7[0x10] = *puVar1;
        puVar7 = puVar7 + 0x11;
      } while (puVar3 != puVar6);
      puVar3 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x88;
        pbVar4 = (byte *)(puVar3 + 8);
        do {
          if ((pbVar4[0x28] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x38));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if (*(void **)(pbVar4 + -0x28) != (void *)0x0) {
            operator_delete__(*(void **)(pbVar4 + -0x28));
            pbVar4[-0x30] = 0;
            pbVar4[-0x2f] = 0;
            pbVar4[-0x2e] = 0;
            pbVar4[-0x2d] = 0;
            pbVar4[-0x2c] = 0;
            pbVar4[-0x2b] = 0;
            pbVar4[-0x2a] = 0;
            pbVar4[-0x29] = 0;
            pbVar4[-0x28] = 0;
            pbVar4[-0x27] = 0;
            pbVar4[-0x26] = 0;
            pbVar4[-0x25] = 0;
            pbVar4[-0x24] = 0;
            pbVar4[-0x23] = 0;
            pbVar4[-0x22] = 0;
            pbVar4[-0x21] = 0;
          }
          lVar5 = lVar5 + -0x88;
          pbVar4 = pbVar4 + 0x88;
        } while (lVar5 != 0);
        puVar3 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined8 **)(param_1 + 2) = puVar2;
  }
  return;
}




undefined8 * FUN_00b00968(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  if (param_3 != param_4) {
    puVar14 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    uVar6 = param_1[1];
    uVar11 = ((long)param_4 - (long)param_3 >> 3) * -0xf0f0f0f0f0f0f0f;
    uVar10 = (uint)uVar11;
    uVar9 = ((long)param_2 - (long)puVar14 >> 3) * -0xf0f0f0f0f0f0f0f;
    if (uVar6 - uVar2 < uVar10) {
      uVar2 = uVar2 + uVar10;
      if (uVar6 < 0x20) {
        uVar6 = uVar6 << 1;
      }
      else if (uVar6 == 0xffffffff) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uVar6 + 0x10) - (uVar6 & 0xf);
      }
      uVar10 = uVar2;
      if (uVar2 <= uVar6) {
        uVar10 = uVar6;
      }
      puVar5 = operator_new__((ulong)uVar10 * 0x88);
      puVar13 = puVar5;
      for (; puVar14 != param_2; puVar14 = puVar14 + 0x11) {
        uVar16 = *puVar14;
        puVar13[1] = puVar14[1];
        *puVar13 = uVar16;
        thunk_FUN_00e7051c(puVar13 + 2,puVar14 + 2);
        *(undefined2 *)(puVar13 + 4) = *(undefined2 *)(puVar14 + 4);
        FUN_008fcdb8(puVar13 + 5,puVar14 + 5);
        FUN_008fcdb8(puVar13 + 8,puVar14 + 8);
        uVar16 = puVar14[0xb];
        puVar13[0xc] = puVar14[0xc];
        puVar13[0xb] = uVar16;
        FUN_008fcdb8(puVar13 + 0xd,puVar14 + 0xd);
        puVar13[0x10] = puVar14[0x10];
        puVar13 = puVar13 + 0x11;
      }
      puVar13 = puVar5 + (uVar9 & 0xffffffff) * 0x11;
      puVar14 = puVar13;
      do {
        uVar16 = *param_3;
        puVar14[1] = param_3[1];
        *puVar14 = uVar16;
        thunk_FUN_00e7051c(puVar14 + 2,param_3 + 2);
        *(undefined2 *)(puVar14 + 4) = *(undefined2 *)(param_3 + 4);
        FUN_008fcdb8(puVar14 + 5,param_3 + 5);
        FUN_008fcdb8(puVar14 + 8,param_3 + 8);
        uVar16 = param_3[0xb];
        puVar14[0xc] = param_3[0xc];
        puVar14[0xb] = uVar16;
        FUN_008fcdb8(puVar14 + 0xd,param_3 + 0xd);
        puVar7 = param_3 + 0x10;
        param_3 = param_3 + 0x11;
        puVar14[0x10] = *puVar7;
        puVar14 = puVar14 + 0x11;
      } while (param_3 != param_4);
      puVar14 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x88);
      if (puVar14 != param_2) {
        puVar7 = puVar13 + (uVar11 & 0xffffffff) * 0x11;
        do {
          uVar16 = *param_2;
          puVar7[1] = param_2[1];
          *puVar7 = uVar16;
          thunk_FUN_00e7051c(puVar7 + 2,param_2 + 2);
          *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(param_2 + 4);
          FUN_008fcdb8(puVar7 + 5,param_2 + 5);
          FUN_008fcdb8(puVar7 + 8,param_2 + 8);
          uVar16 = param_2[0xb];
          puVar7[0xc] = param_2[0xc];
          puVar7[0xb] = uVar16;
          FUN_008fcdb8(puVar7 + 0xd,param_2 + 0xd);
          puVar1 = param_2 + 0x10;
          param_2 = param_2 + 0x11;
          puVar7[0x10] = *puVar1;
          puVar7 = puVar7 + 0x11;
        } while (param_2 != puVar14);
      }
      FUN_00b00494(param_1,1);
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = uVar2;
      param_1[1] = uVar10;
      param_2 = puVar13;
    }
    else {
      puVar14 = puVar14 + (ulong)uVar2 * 0x11;
      uVar12 = ((long)puVar14 - (long)param_2 >> 3) * -0xf0f0f0f0f0f0f0f;
      uVar11 = uVar11 & 0xffffffff;
      if (uVar10 < (uint)uVar12) {
        puVar13 = puVar14 + uVar11 * -0x11;
        if (uVar11 != 0) {
          lVar15 = 0;
          do {
            puVar5 = (undefined8 *)((long)puVar13 + lVar15);
            uVar16 = *puVar5;
            puVar7 = (undefined8 *)((long)puVar14 + lVar15);
            puVar7[1] = puVar5[1];
            *puVar7 = uVar16;
            thunk_FUN_00e7051c(puVar7 + 2,puVar5 + 2);
            *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(puVar5 + 4);
            FUN_008fcdb8(puVar7 + 5,puVar5 + 5);
            FUN_008fcdb8(puVar7 + 8,puVar5 + 8);
            uVar16 = puVar5[0xb];
            puVar7[0xc] = puVar5[0xc];
            puVar7[0xb] = uVar16;
            FUN_008fcdb8(puVar7 + 0xd,puVar5 + 0xd);
            lVar15 = lVar15 + 0x88;
            puVar7[0x10] = puVar5[0x10];
          } while (uVar11 * 0x88 - lVar15 != 0);
          puVar13 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x88 + uVar11 * -0x88)
          ;
        }
        lVar15 = (long)puVar13 - (long)param_2;
        if (lVar15 != 0) {
          lVar8 = 0;
          do {
            uVar16 = *(undefined8 *)((long)puVar13 + lVar8 + -0x88);
            lVar3 = lVar8 + lVar15 + uVar11 * 0x88;
            *(undefined8 *)((long)param_2 + lVar3 + -0x80) =
                 *(undefined8 *)((long)puVar13 + lVar8 + -0x80);
            *(undefined8 *)((long)param_2 + lVar3 + -0x88) = uVar16;
            FUN_00910394((long)param_2 + lVar3 + -0x78,(long)puVar13 + lVar8 + -0x78);
            *(undefined2 *)((long)param_2 + lVar3 + -0x68) =
                 *(undefined2 *)((long)puVar13 + lVar8 + -0x68);
            FUN_008fce60((long)param_2 + lVar3 + -0x60,(long)puVar13 + lVar8 + -0x60);
            FUN_008fce60((long)param_2 + lVar3 + -0x48,(long)puVar13 + lVar8 + -0x48);
            uVar16 = *(undefined8 *)((long)puVar13 + lVar8 + -0x30);
            *(undefined8 *)((long)param_2 + lVar3 + -0x28) =
                 *(undefined8 *)((long)puVar13 + lVar8 + -0x28);
            *(undefined8 *)((long)param_2 + lVar3 + -0x30) = uVar16;
            FUN_008fce60((long)param_2 + lVar3 + -0x20,(long)puVar13 + lVar8 + -0x20);
            lVar4 = lVar8 + -8;
            lVar8 = lVar8 + -0x88;
            *(undefined8 *)((long)param_2 + lVar3 + -8) = *(undefined8 *)((long)puVar13 + lVar4);
          } while (-lVar8 != lVar15);
        }
        do {
          uVar16 = *param_3;
          param_2[1] = param_3[1];
          *param_2 = uVar16;
          FUN_00910394(param_2 + 2,param_3 + 2);
          *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_3 + 4);
          FUN_008fce60(param_2 + 5,param_3 + 5);
          FUN_008fce60(param_2 + 8,param_3 + 8);
          uVar16 = param_3[0xb];
          param_2[0xc] = param_3[0xc];
          param_2[0xb] = uVar16;
          FUN_008fce60(param_2 + 0xd,param_3 + 0xd);
          puVar14 = param_3 + 0x10;
          param_3 = param_3 + 0x11;
          param_2[0x10] = *puVar14;
          param_2 = param_2 + 0x11;
        } while (param_3 != param_4);
      }
      else {
        puVar13 = param_2;
        if (puVar14 != param_2) {
          do {
            uVar16 = *puVar13;
            puVar7 = puVar13 + uVar11 * 0x11;
            puVar7[1] = puVar13[1];
            *puVar7 = uVar16;
            thunk_FUN_00e7051c(puVar7 + 2,puVar13 + 2);
            *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(puVar13 + 4);
            FUN_008fcdb8(puVar7 + 5,puVar13 + 5);
            FUN_008fcdb8(puVar7 + 8,puVar13 + 8);
            uVar16 = puVar13[0xb];
            puVar7[0xc] = puVar13[0xc];
            puVar7[0xb] = uVar16;
            FUN_008fcdb8(puVar7 + 0xd,puVar13 + 0xd);
            puVar5 = puVar13 + 0x11;
            puVar7[0x10] = puVar13[0x10];
            puVar13 = puVar5;
          } while (puVar14 != puVar5);
          puVar14 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x88);
        }
        uVar12 = uVar12 & 0xffffffff;
        puVar5 = param_3 + uVar12 * 0x11;
        for (puVar13 = puVar5; puVar13 != param_4; puVar13 = puVar13 + 0x11) {
          uVar16 = *puVar13;
          puVar14[1] = puVar13[1];
          *puVar14 = uVar16;
          thunk_FUN_00e7051c(puVar14 + 2,puVar13 + 2);
          *(undefined2 *)(puVar14 + 4) = *(undefined2 *)(puVar13 + 4);
          FUN_008fcdb8(puVar14 + 5,puVar13 + 5);
          FUN_008fcdb8(puVar14 + 8,puVar13 + 8);
          uVar16 = puVar13[0xb];
          puVar14[0xc] = puVar13[0xc];
          puVar14[0xb] = uVar16;
          FUN_008fcdb8(puVar14 + 0xd,puVar13 + 0xd);
          puVar14[0x10] = puVar13[0x10];
          puVar14 = puVar14 + 0x11;
        }
        if (uVar12 != 0) {
          do {
            uVar16 = *param_3;
            param_2[1] = param_3[1];
            *param_2 = uVar16;
            FUN_00910394(param_2 + 2,param_3 + 2);
            *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_3 + 4);
            FUN_008fce60(param_2 + 5,param_3 + 5);
            FUN_008fce60(param_2 + 8,param_3 + 8);
            uVar16 = param_3[0xb];
            param_2[0xc] = param_3[0xc];
            param_2[0xb] = uVar16;
            FUN_008fce60(param_2 + 0xd,param_3 + 0xd);
            puVar14 = param_3 + 0x10;
            param_3 = param_3 + 0x11;
            param_2[0x10] = *puVar14;
            param_2 = param_2 + 0x11;
          } while (param_3 != puVar5);
        }
      }
      param_2 = (undefined8 *)(*(long *)(param_1 + 2) + (uVar9 & 0xffffffff) * 0x88);
      *param_1 = *param_1 + uVar10;
    }
  }
  return param_2;
}




void FUN_00b00f0c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  iVar4 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar3 != iVar4 * -0xf0f0f0f) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x88);
    lVar2 = (long)puVar5 - (long)param_3;
    puVar6 = param_2;
    if (lVar2 != 0) {
      do {
        uVar7 = *param_3;
        puVar6[1] = param_3[1];
        *puVar6 = uVar7;
        FUN_00910394(puVar6 + 2,param_3 + 2);
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(param_3 + 4);
        FUN_008fce60(puVar6 + 5,param_3 + 5);
        FUN_008fce60(puVar6 + 8,param_3 + 8);
        uVar7 = param_3[0xb];
        puVar6[0xc] = param_3[0xc];
        puVar6[0xb] = uVar7;
        FUN_008fce60(puVar6 + 0xd,param_3 + 0xd);
        puVar1 = param_3 + 0x10;
        param_3 = param_3 + 0x11;
        puVar6[0x10] = *puVar1;
        puVar6 = puVar6 + 0x11;
      } while (param_3 != puVar5);
      uVar3 = *param_1;
      puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x88);
    }
    param_2 = param_2 + ((lVar2 >> 3) * -0xf0f0f0f0f0f0f0f & 0xffffffffU) * 0x11;
    if (param_2 != puVar5) {
      do {
        if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
          operator_delete((void *)param_2[0xf]);
        }
        if ((*(byte *)(param_2 + 8) & 1) != 0) {
          operator_delete((void *)param_2[10]);
        }
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          operator_delete((void *)param_2[7]);
        }
        if ((void *)param_2[3] != (void *)0x0) {
          operator_delete__((void *)param_2[3]);
          param_2[2] = 0;
          param_2[3] = 0;
        }
        param_2 = param_2 + 0x11;
      } while (puVar5 != param_2);
      uVar3 = *param_1;
    }
    *param_1 = uVar3 + iVar4 * 0xf0f0f0f;
    return;
  }
  FUN_00b00494(param_1,1);
  return;
}

