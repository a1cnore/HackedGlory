# Vtable Trace & XOR Encryption Hunt

Binary: GameKindred (Vainglory 4.13.4, arm64 Mach-O)

Vtable base: `0x10145b1c8` in `__DATA`

## Phase 1: Vtable Pointer Table

### Reading 12 x 8-byte pointers

| Index | Offset | Raw Address | Function |
|-------|--------|-------------|----------|
| 0 | +0x0 | `0x100149358` | FUN_100149358 @ 0x100149358 |
| 1 | +0x8 | `0x1001493dc` | operator.delete @ 0x1001493dc |
| 2 | +0x10 | `0x1001493e0` | FUN_1001493e0 @ 0x1001493e0 |
| 3 | +0x18 | `0x1001493e4` | FUN_1001493e4 @ 0x1001493e4 |
| 4 | +0x20 | `0x1001493ec` | FUN_1001493ec @ 0x1001493ec |
| 5 | +0x28 | `0x100148a6c` | FUN_100148a6c @ 0x100148a6c |
| 6 | +0x30 | `0x1001493f0` | FUN_1001493f0 @ 0x1001493f0 |
| 7 | +0x38 | `0x100149418` | FUN_100149418 @ 0x100149418 |
| 8 | +0x40 | `0x100149440` | FUN_100149440 @ 0x100149440 |
| 9 | +0x48 | `0x100149468` | FUN_100149468 @ 0x100149468 |
| 10 | +0x50 | `0x10014946c` | FUN_10014946c @ 0x10014946c |
| 11 | +0x58 | `0x0` | (null) |

### Context: 16 bytes before vtable base

```
00 00 00 00 00 00 00 00   00 00 00 00 00 00 00 00
```

Pre-vtable values: `0x0`, `0x0`

### References TO vtable base 0x10145b1c8

- From `0x100148b08` in `FUN_100148ab0` @ `0x100148ab0` (type: DATA)

## Phase 2: Vtable Function Decompilations

### Vtable[0]: `FUN_100149358` @ `0x100149358`

```c

void FUN_100149358(void)

{
  return;
}


```

---

### Vtable[1]: `operator.delete` @ `0x1001493dc`

**Calls:** `operator.delete`@0x101148d74 

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


```

---

### Vtable[2]: `FUN_1001493e0` @ `0x1001493e0`

```c

void FUN_1001493e0(void)

{
  return;
}


```

---

### Vtable[3]: `FUN_1001493e4` @ `0x1001493e4`

```c

undefined8 FUN_1001493e4(void)

{
  return 0;
}


```

---

### Vtable[4]: `FUN_1001493ec` @ `0x1001493ec`

```c

void FUN_1001493ec(void)

{
  return;
}


```

---

### Vtable[5]: `FUN_100148a6c` @ `0x100148a6c`

**Calls:** `FUN_1004ec5bc`@0x1004ec5bc 

```c

void FUN_100148a6c(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_1004ec5bc(param_2);
  return;
}


```

---

### Vtable[6]: `FUN_1001493f0` @ `0x1001493f0`

**Calls:** `FUN_1004ec5bc`@0x1004ec5bc `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_1001493f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}


```

---

### Vtable[7]: `FUN_100149418` @ `0x100149418`

**Calls:** `FUN_1004ec5bc`@0x1004ec5bc `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_100149418(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}


```

---

### Vtable[8]: `FUN_100149440` @ `0x100149440`

**Calls:** `FUN_1004ec5bc`@0x1004ec5bc `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_100149440(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}


```

---

### Vtable[9]: `FUN_100149468` @ `0x100149468`

```c

void FUN_100149468(void)

{
  return;
}


```

---

### Vtable[10]: `FUN_10014946c` @ `0x10014946c`

```c

undefined8 FUN_10014946c(void)

{
  return 0;
}


```

---

## Phase 3: Network Thread Key Functions

### FUN_100148ab0 (Network Thread Main Loop)

**Calls:** `FUN_1004ebfcc`@0x1004ebfcc `FUN_1004ec0e8`@0x1004ec0e8 `FUN_1004e3004`@0x1004e3004 `_mach_absolute_time`@0x101149404 `_pthread_mutex_lock`@0x1004e44e0 `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec23c`@0x1004ec23c `_memcmp`@0x101149440 `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec368`@0x1004ec368 `FUN_1004ec994`@0x1004ec994 `FUN_10014848c`@0x10014848c `_pthread_mutex_unlock`@0x1004e44e4 `FUN_100149214`@0x100149214 `FUN_1004d29c0`@0x1004d29c0 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec088`@0x1004ec088 `___stack_chk_fail`@0x101148e40 

```c

undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

### FUN_10014848c (Response Processor)

**Calls:** `FUN_100148808`@0x100148808 `FUN_1001488c0`@0x1001488c0 `FUN_100148920`@0x100148920 `FUN_100105398`@0x100105398 

**Called by:** `FUN_100148ab0`@0x100148ab0 

```c

void FUN_10014848c(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  
  FUN_100148808();
  uVar1 = *(int *)(param_1 + 0x1c0) + 1;
  *(uint *)(param_1 + 0x1c0) = uVar1;
  if (99 < uVar1) {
    if (param_3 != 0) {
      uVar20 = FUN_1001488c0(param_1,100);
      uVar21 = FUN_100148920(param_1,100);
      uVar1 = *(uint *)(param_1 + 400);
      if (uVar1 == 0) {
        iVar6 = 0;
        iVar7 = 0;
        iVar8 = 0;
        iVar9 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar12 = 0;
        iVar13 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        iVar18 = 0;
        iVar17 = 0;
        iVar16 = 0;
        iVar15 = 0;
        iVar14 = 0;
        iVar13 = 0;
        iVar12 = 0;
        iVar11 = 0;
        iVar10 = 0;
        iVar9 = 0;
        iVar8 = 0;
        iVar7 = 0;
        iVar6 = 0;
        uVar19 = *(uint *)(param_1 + 0x194);
        uVar4 = uVar1;
        do {
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar19 / uVar1;
          }
          fVar22 = *(float *)(param_1 + (ulong)(uVar19 - uVar3 * uVar1) * 4);
          if (fVar22 <= 25.0) {
            iVar5 = iVar5 + 1;
          }
          else if (fVar22 <= 50.0) {
            iVar6 = iVar6 + 1;
          }
          else if (fVar22 <= 75.0) {
            iVar7 = iVar7 + 1;
          }
          else if (fVar22 <= 100.0) {
            iVar8 = iVar8 + 1;
          }
          else if (fVar22 <= 125.0) {
            iVar9 = iVar9 + 1;
          }
          else if (fVar22 <= 150.0) {
            iVar10 = iVar10 + 1;
          }
          else if (fVar22 <= 175.0) {
            iVar11 = iVar11 + 1;
          }
          else if (fVar22 <= 200.0) {
            iVar12 = iVar12 + 1;
          }
          else if (225.0 < fVar22) {
            if (fVar22 <= 250.0) {
              iVar13 = iVar13 + 1;
            }
            else if (275.0 < fVar22) {
              if (fVar22 <= 300.0) {
                iVar14 = iVar14 + 1;
              }
              else if (325.0 < fVar22) {
                if (fVar22 <= 350.0) {
                  iVar15 = iVar15 + 1;
                }
                else if (375.0 < fVar22) {
                  if (fVar22 <= 400.0) {
                    iVar16 = iVar16 + 1;
                  }
                  else if (500.0 < fVar22) {
                    if (fVar22 <= 750.0) {
                      iVar17 = iVar17 + 1;
                    }
                    else if ((1000.0 < fVar22) && (fVar22 <= 2000.0)) {
                      iVar18 = iVar18 + 1;
                    }
                  }
                }
              }
            }
          }
          uVar19 = uVar19 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      plVar2 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
      }
      FUN_100105398(uVar20,uVar21,plVar2,iVar5,iVar6,iVar7,iVar8,iVar9,iVar10,iVar11,iVar12,iVar13,
                    iVar14,iVar15,iVar16,iVar17,iVar18);
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}


```

---

### FUN_10014e2cc (Payload Builder / Handshake)

**Calls:** `FUN_1004f03c0`@0x1004f03c0 `FUN_1004f03a4`@0x1004f03a4 

**Called by:** `FUN_100147410`@0x100147410 

```c

void FUN_10014e2cc(long param_1,int *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  *param_3 = 1;
  FUN_1004f03c0();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 == 0 || *param_2 == 0) {
    FUN_1004f03a4(param_1,param_2);
    *param_3 = 0;
  }
  return;
}


```

---

## Phase 4: Caller Context

### Callers of Response Processor (FUN_10014848c)

#### `FUN_100148ab0` @ `0x100148ab0` (already decompiled above)

### Callers of Payload Builder (FUN_10014e2cc)

#### `FUN_100147410` @ `0x100147410`

```c

undefined8 FUN_100147410(long param_1)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 local_3d;
  int local_3c;
  undefined8 ******local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *******)0x0;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0;
  local_3d = 1;
  FUN_10014e2cc(&local_38,&local_3c,&local_3d);
  if (local_28 < 0) {
    pppppppuVar2 = (undefined8 *******)local_38;
    if (local_30 == 0 || local_3c == 0) {
      uVar1 = 0;
      goto LAB_1001474ac;
    }
  }
  else {
    if (local_28._7_1_ == '\0' || local_3c == 0) {
      return 0;
    }
    pppppppuVar2 = &local_38;
  }
  uVar1 = FUN_1004ec13c(param_1 + 8,pppppppuVar2,local_3c,0,0);
  if (-1 < local_28) {
    return uVar1;
  }
LAB_1001474ac:
  operator_delete(local_38);
  return uVar1;
}


```

---

## Phase 5: Callee Deep Dive (functions called by vtable entries)

Examining 26 callees not yet decompiled

### Callee: `FUN_1001488c0` @ `0x1001488c0`

**Findings:** XOR_OP, XOR_IN_LOOP

```c

float FUN_1001488c0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 400);
  uVar1 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  if (0 < (int)(uVar2 - uVar1)) {
    fVar6 = 0.0;
    iVar4 = uVar2 - uVar1;
    if (iVar4 != 0 && (int)uVar1 <= (int)uVar2) {
      uVar5 = *(int *)(param_1 + 0x194) + uVar1;
      fVar6 = 0.0;
      do {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        fVar6 = *(float *)(param_1 + (ulong)(uVar5 - uVar3 * uVar2) * 4) + fVar6;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return fVar6 / (float)(int)(uVar2 - uVar1);
  }
  return -1.0;
}


```

---

### Callee: `FUN_100148920` @ `0x100148920`

**Findings:** XOR_OP, XOR_IN_LOOP

```c

float FUN_100148920(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (float)FUN_1001488c0();
  uVar2 = *(uint *)(param_1 + 400);
  uVar1 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  if ((int)(uVar2 - uVar1) < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar7 = 0.0;
    iVar4 = uVar2 - uVar1;
    if (iVar4 != 0 && (int)uVar1 <= (int)uVar2) {
      uVar5 = *(int *)(param_1 + 0x194) + uVar1;
      fVar7 = 0.0;
      do {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        fVar8 = *(float *)(param_1 + (ulong)(uVar5 - uVar3 * uVar2) * 4) - fVar6;
        fVar7 = fVar7 + fVar8 * fVar8;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    fVar6 = SQRT(fVar7 / (float)(int)(uVar2 - uVar1));
  }
  return fVar6;
}


```

---

## Phase 6: Second-Level Callee XOR Hunt

### L2 Callee: `FUN_100149480` @ `0x100149480`

**Findings:** XOR_OP, XOR_IN_LOOP

**Called by:** `FUN_100149214`@0x100149214 

```c

undefined4 FUN_100149480(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 400);
  uVar4 = uVar1 - param_2 & ((int)(uVar1 - param_2) >> 0x1f ^ 0xffffffffU);
  uVar5 = 0;
  iVar3 = uVar1 - uVar4;
  if (iVar3 != 0 && (int)uVar4 <= (int)uVar1) {
    uVar4 = *(int *)(param_1 + 0x194) + uVar4;
    do {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar5 = *(undefined4 *)(param_1 + (ulong)(uVar4 - uVar2 * uVar1) * 4);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar5;
}


```

---

## Phase 7: +0x6b8 Dispatch Method Slots

### Slot +0x10 -> `0x1001493e0` = `FUN_1001493e0 @ 0x1001493e0`

(already decompiled above)

### Slot +0x18 -> `0x1001493e4` = `FUN_1001493e4 @ 0x1001493e4`

(already decompiled above)

### Slot +0x20 -> `0x1001493ec` = `FUN_1001493ec @ 0x1001493ec`

(already decompiled above)

### Slot +0x28 -> `0x100148a6c` = `FUN_100148a6c @ 0x100148a6c`

(already decompiled above)

### Slot +0x30 -> `0x1001493f0` = `FUN_1001493f0 @ 0x1001493f0`

(already decompiled above)

### Slot +0x38 -> `0x100149418` = `FUN_100149418 @ 0x100149418`

(already decompiled above)

### Slot +0x40 -> `0x100149440` = `FUN_100149440 @ 0x100149440`

(already decompiled above)

## Phase 8: Network Thread Neighborhood Scan

### `FUN_1001489a8` @ `0x1001489a8`

**Findings:** HANDSHAKE_0x88

```c

long FUN_1001489a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1004e4464(param_1 + 8,0);
  FUN_1004e4464(param_1 + 0x48,0);
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 3000;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 200) = 0;
    *(undefined8 *)(lVar1 + 0x260) = 0;
    *(undefined8 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x268) = 0xbf80000000000000;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 0xd8) = 0;
    *(undefined8 *)(lVar1 + 0xf0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    *(undefined8 *)(lVar1 + 0x100) = 0;
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x170) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x180) = 0;
    *(undefined8 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 400) = 0;
    *(undefined8 *)(lVar1 + 0x188) = 0;
    *(undefined8 *)(lVar1 + 0x1a0) = 0;
    *(undefined8 *)(lVar1 + 0x198) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    *(undefined8 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
    *(undefined8 *)(lVar1 + 0x1d0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined8 *)(lVar1 + 0x1e0) = 0;
    *(undefined8 *)(lVar1 + 0x1d8) = 0;
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
    *(undefined8 *)(lVar1 + 0x200) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0;
    *(undefined8 *)(lVar1 + 0x208) = 0;
    *(undefined8 *)(lVar1 + 0x220) = 0;
    *(undefined8 *)(lVar1 + 0x218) = 0;
    *(undefined8 *)(lVar1 + 0x230) = 0;
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x240) = 0;
    *(undefined8 *)(lVar1 + 0x238) = 0;
    *(undefined8 *)(lVar1 + 0x250) = 0;
    *(undefined8 *)(lVar1 + 0x248) = 0;
    *(undefined4 *)(lVar1 + 0x288) = 0;
    *(undefined8 *)(lVar1 + 0x280) = 0;
    lVar2 = lVar2 + 0x200;
    *(undefined8 *)(lVar1 + 0x278) = 0;
    *(undefined8 *)(lVar1 + 0x270) = 0;
  } while (lVar2 != 0x2000);
  *(undefined1 *)(param_1 + 0x2092) = 0;
  return param_1;
}


```

---

### `FUN_100149c58` @ `0x100149c58`

**Findings:** HANDSHAKE_0x88

```c

long FUN_100149c58(long param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char local_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_thunk_FUN_100149ce0_10145b230;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1000fb6d0(puVar1 + 0x12);
  FUN_10001549c(local_38,"NEWS");
  std::string::operator=((string *)(param_1 + 0x30),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}


```

---

### `thunk_FUN_100149c58` @ `0x100149cdc`

**Findings:** HANDSHAKE_0x88

```c

long thunk_FUN_100149c58(long param_1)

{
  undefined8 *puVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_thunk_FUN_100149ce0_10145b230;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1000fb6d0(puVar1 + 0x12);
  FUN_10001549c(apvStack_38,"NEWS");
  std::string::operator=((string *)(param_1 + 0x30),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return param_1;
}


```

---

### `FUN_10014a434` @ `0x10014a434`

**Findings:** XOR_OP, XOR_IN_LOOP

```c

long * FUN_10014a434(long *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  char *pcVar13;
  uint uVar14;
  long local_78;
  
  pcVar13 = (char *)((long)param_1 + 0x3109);
  *param_1 = 0;
  uVar3 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = uVar3;
  plVar6 = param_1 + 4;
  do {
    lVar11 = 0;
    do {
      puVar1 = (undefined8 *)((long)plVar6 + lVar11);
      *puVar1 = &PTR_FUN_10145b260;
      puVar1[2] = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[5] = 0;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[10] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xb] = 0;
      lVar11 = lVar11 + 0x78;
      puVar1[0xe] = 0;
      puVar1[0xd] = 0;
    } while (puVar1 + 0xf != plVar6 + 0x5a);
    *(undefined4 *)(plVar6 + 0x5a) = 0x45;
    *(undefined8 *)((long)plVar6 + 0x2d4) = 0;
    *(undefined1 *)((long)plVar6 + 0x2dc) = 0;
    plVar6 = plVar6 + 0x5c;
  } while (plVar6 != param_1 + 0x620);
  uVar14 = 0x811c9dc5;
  *(undefined8 *)((long)param_1 + 0x3106) = 0;
  param_1[0x620] = 0;
  *pcVar13 = '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  *(uint *)((long)param_1 + 0x2f4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 4);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  *(uint *)((long)param_1 + 0x2f4) = uVar8 + 1;
  lVar11 = FUN_10014b57c(param_1 + (ulong)uVar8 * 0xf + 4);
  *(undefined8 *)(lVar11 + 0x18) = 0x1d00000000;
  *(undefined4 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x5e) = 0x31;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined1 *)(lVar11 + 0x20) = 1;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3e99999a;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b854(param_1 + (ulong)uVar8 * 0xf + 0x60);
  if (PTR_s_Ability__Item__HealingFlask_101858e00 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Item__HealingFlask_101858e00;
    uVar8 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar8 = 0x811c9dc5;
      pcVar10 = PTR_s_Ability__Item__HealingFlask_101858e00;
      do {
        pcVar10 = pcVar10 + 1;
        uVar8 = (uVar8 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar10;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar11 + 8) = uVar8;
  *(undefined1 *)(lVar11 + 0xc) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xba) = 0x32;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  lVar9 = 0;
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = *(uint *)((long)param_1 + 0x8b4) + 1;
  bVar4 = true;
  do {
    bVar12 = bVar4;
    if (param_1[uVar7 * 0xf + lVar9 * 7 + 0xbd] == 0) {
      param_1[uVar7 * 0xf + lVar9 * 7 + 0xbe] = (long)&PTR_FUN_10145b350;
      param_1[uVar7 * 0xf + lVar9 * 7 + 0xbd] = (long)(param_1 + uVar7 * 0xf + lVar9 * 7 + 0xbe);
      goto LAB_10014a718;
    }
    lVar9 = 1;
    bVar4 = false;
  } while (bVar12);
  FUN_1004d22dc(0);
LAB_10014a718:
  *(undefined4 *)(param_1 + 0x116) = 0x30;
  *(undefined4 *)(param_1 + 0x117) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b9c8(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined4 *)(lVar11 + 8) = 2;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined8 *)(lVar11 + 0x18) = 0x600000000;
  *(undefined4 *)(lVar11 + 8) = 0x451c4000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014ba54(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined1 *)(lVar11 + 8) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined1 *)(lVar11 + 0x14) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b57c(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined8 *)(lVar11 + 0x18) = 0x2800000002;
  *(undefined4 *)(lVar11 + 8) = 0x41200000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x172) = 0x34;
  *(undefined4 *)(param_1 + 0x173) = 0;
  pcVar13 = (char *)((long)param_1 + 0x310c);
  *(undefined1 *)((long)param_1 + 0x310b) = 4;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined1 *)(lVar11 + 0x20) = 1;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3e99999a;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b854(param_1 + (ulong)uVar8 * 0xf + 0x174);
  if (PTR_s_Ability__Item__HealingFlask_101858e00 == (undefined *)0x0) {
    uVar14 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Item__HealingFlask_101858e00;
    pcVar10 = PTR_s_Ability__Item__HealingFlask_101858e00;
    while (cVar5 != '\0') {
      pcVar10 = pcVar10 + 1;
      uVar14 = (uVar14 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar10;
    }
  }
  *(uint *)(lVar11 + 8) = uVar14;
  *(undefined1 *)(lVar11 + 0xc) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x1ce) = 0x33;
  *(undefined4 *)(param_1 + 0x1cf) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1154);
  *(uint *)((long)param_1 + 0x1154) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x1d0);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1154);
  *(uint *)((long)param_1 + 0x1154) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x1d0);
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 0x28) = 4;
  *(code **)(lVar11 + 8) = FUN_10014a42c;
  *(undefined4 *)(lVar11 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0x22a) = 0x35;
  *(undefined4 *)(param_1 + 0x22b) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1434);
  *(uint *)((long)param_1 + 0x1434) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x22c);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1434);
  *(uint *)((long)param_1 + 0x1434) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x22c);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_GameObjectives_River5v5Bonu_10185c0c0;
  *(undefined4 *)(param_1 + 0x286) = 0x36;
  *(undefined4 *)(param_1 + 0x287) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) & 0xfc;
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 8) = 0xf64cd42b;
  *(undefined4 *)(lVar11 + 0x10) = 3;
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined4 *)(param_1 + 0x2e2) = 0x37;
  *(undefined4 *)(param_1 + 0x2e3) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) & 0xfc;
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 8) = 0x4bf7772d;
  *(undefined4 *)(lVar11 + 0x10) = 3;
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined4 *)(param_1 + 0x33e) = 0x38;
  *(undefined4 *)(param_1 + 0x33f) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1cd4);
  *(uint *)((long)param_1 + 0x1cd4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x340);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1cd4);
  *(uint *)((long)param_1 + 0x1cd4) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x340);
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 0x28) = 0x100;
  *(code **)(lVar11 + 8) = FUN_10014a42c;
  *(undefined4 *)(lVar11 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0x39a) = 0x39;
  *(undefined4 *)(param_1 + 0x39b) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar11 + 0x20) = 1;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3dcccccd;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014ba54(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar11 + 8) = 1;
  *(undefined4 *)(param_1 + 0x3f6) = 0x3a;
  *(undefined4 *)(param_1 + 0x3f7) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2294);
  *(uint *)((long)param_1 + 0x2294) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x3f8);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2294);
  *(uint *)((long)param_1 + 0x2294) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x3f8);
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x452) = 0x3b;
  *(undefined4 *)(param_1 + 0x453) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined1 *)(lVar11 + 0x14) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined8 *)(lVar11 + 0x18) = 0x600000000;
  *(undefined4 *)(lVar11 + 8) = 0x44fa0000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014ba54(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined1 *)(lVar11 + 8) = 1;
  *(undefined4 *)(param_1 + 0x4ae) = 0x3c;
  *(undefined4 *)(param_1 + 0x4af) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2854);
  *(uint *)((long)param_1 + 0x2854) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x4b0);
  lVar9 = 0;
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x2854);
  *(uint *)((long)param_1 + 0x2854) = *(uint *)((long)param_1 + 0x2854) + 1;
  bVar4 = true;
  do {
    bVar12 = bVar4;
    if (param_1[uVar7 * 0xf + lVar9 * 7 + 0x4b1] == 0) {
      param_1[uVar7 * 0xf + lVar9 * 7 + 0x4b2] = (long)&PTR_FUN_10145b3f0;
      param_1[uVar7 * 0xf + lVar9 * 7 + 0x4b1] = (long)(param_1 + uVar7 * 0xf + lVar9 * 7 + 0x4b2);
      goto LAB_10014ad84;
    }
    lVar9 = 1;
    bVar4 = false;
  } while (bVar12);
  FUN_1004d22dc(0);
LAB_10014ad84:
  *(undefined4 *)(param_1 + 0x50a) = 0x3d;
  *(undefined4 *)(param_1 + 0x50b) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2b34);
  *(uint *)((long)param_1 + 0x2b34) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x50c);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2b34);
  *(uint *)((long)param_1 + 0x2b34) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x50c);
  *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) & 0xfc;
  *(undefined4 *)(lVar11 + 0x18) = 0x41a00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 8) = 0xbe59a86e;
  *(undefined4 *)(lVar11 + 0x10) = 3;
  *(undefined4 *)(param_1 + 0x566) = 0x3e;
  *(undefined4 *)(param_1 + 0x567) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2e14);
  *(uint *)((long)param_1 + 0x2e14) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x568);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2e14);
  *(uint *)((long)param_1 + 0x2e14) = uVar8 + 1;
  lVar11 = FUN_10014bc80(param_1 + (ulong)uVar8 * 0xf + 0x568);
  *(undefined4 *)(lVar11 + 8) = 0x2000;
  *(undefined4 *)(param_1 + 0x5c2) = 0x3f;
  *(undefined4 *)(param_1 + 0x5c3) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x30f4);
  *(uint *)((long)param_1 + 0x30f4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x5c4);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x30f4);
  *(uint *)((long)param_1 + 0x30f4) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x5c4);
  *(undefined4 *)(lVar11 + 0x18) = 0x41200000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 0x28) = 0x80000;
  *(code **)(lVar11 + 8) = FUN_10014a42c;
  *(undefined4 *)(lVar11 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0x61e) = 0x40;
  *(undefined4 *)(param_1 + 0x61f) = 2;
  local_78 = 0;
  FUN_1010a1958(&local_78,1,DAT_10184de40,0);
  if (local_78 != 0) {
    lVar9 = FUN_1010a0298(local_78,DAT_10184e3d0);
    lVar11 = 0;
    if (lVar9 != 0) {
      lVar11 = lVar9 + 0x28;
    }
    puVar2 = &DAT_101dc0b88;
    if (lVar9 != 0) {
      puVar2 = (undefined4 *)(lVar11 + 8);
    }
    uVar3 = *puVar2;
    *param_1 = lVar11;
    *(undefined4 *)(param_1 + 1) = uVar3;
  }
  return param_1;
}


```

---

### `FUN_10014b2d4` @ `0x10014b2d4`

**Findings:** XOR_OP

```c

void FUN_10014b2d4(int *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  
  lVar1 = DAT_101e3cd48;
  if ((*param_1 == 0x22 || *param_1 == 0x19) && (DAT_101e3cd48 != 0)) {
    iVar3 = FUN_10031615c(0x19);
    if (iVar3 == 0) {
      bVar2 = 0;
    }
    else {
      FUN_1003467f8();
      bVar2 = FUN_10034cde0();
      bVar2 = bVar2 ^ 1;
    }
    *(byte *)(lVar1 + 0x310a) = bVar2;
  }
  return;
}


```

---

### `FUN_10014b330` @ `0x10014b330`

**Findings:** XOR_OP

```c

void FUN_10014b330(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  code *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar4 = FUN_100316150();
  local_30 = 0;
  uStack_28 = 0;
  local_40 = FUN_10014b2d4;
  uStack_38 = 0;
  FUN_10003c508(uVar4,&local_40);
  pvVar5 = operator_new(0x3110);
  DAT_101e3cd48 = FUN_10014a434();
  iVar3 = FUN_10031615c(0x19);
  if (iVar3 == 0) {
    bVar2 = 0;
  }
  else {
    FUN_1003467f8();
    bVar2 = FUN_10034cde0();
    bVar2 = bVar2 ^ 1;
  }
  *(byte *)((long)pvVar5 + 0x310a) = bVar2;
  lVar1 = DAT_101e3cd48;
  iVar3 = FUN_10034cc34();
  *(bool *)(lVar1 + 0x310d) = iVar3 == 0x35;
  return;
}


```

---

### `FUN_10014b45c` @ `0x10014b45c`

**Findings:** XOR_OP, XOR_IN_LOOP

```c

undefined8 FUN_10014b45c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar5 = false;
  do {
    plVar2 = *(long **)(param_1 + lVar4 * 0x38 + 8);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    lVar4 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1 && (((uint)uVar3 ^ 0xffffffff) & 1) == 0);
  return uVar3;
}


```

---

### `FUN_10014bb88` @ `0x10014bb88`

**Findings:** XOR_OP, MOD8_AND7

```c

void FUN_10014bb88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auStack_38 [8];
  
  uVar1 = 0;
  if (((*(byte *)(param_1 + 0x2c) ^ 0xff) & 7) != 0) {
    uVar1 = *param_2;
  }
  FUN_10014bc0c(param_1 + 8,param_2,uVar1,auStack_38);
  FUN_10014b684(param_1 + 0x18,param_2,0);
  bVar2 = *(byte *)(param_1 + 0x2c);
  FUN_10048c374(auStack_38,*(undefined4 *)(param_1 + 0x28),uVar1,bVar2 & 1,bVar2 >> 1 & 1,
                bVar2 >> 2 & 1);
  return;
}


```

---

### `FUN_10014bd8c` @ `0x10014bd8c`

**Findings:** MOD8_AND0x7

```c

ushort * FUN_10014bd8c(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  *param_1 = *param_1 & 0x8000 | 0x3ff;
  *(undefined4 *)((long)param_1 + 0xb) = 0;
  puVar6 = param_1 + 4;
  puVar6[0] = 0;
  puVar6[1] = 0;
  *(ushort **)(param_1 + 200) = param_1;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  FUN_1000ee4ec(param_1 + 0x10c,"irc");
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  FUN_1004e3004(param_1 + 0x134);
  FUN_1004edd24(param_1 + 0x144);
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  FUN_1004f1580(param_1 + 0x178);
  *(undefined ***)(param_1 + 0x178) = &PTR_thunk_FUN_10014e7ec_10145b440;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0x400;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  puVar4 = operator_new(0x28);
  *puVar4 = 0;
  puVar4[1] = 0x10000;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = 0;
  *(undefined8 **)(param_1 + 0x19c) = puVar4;
  *(undefined8 **)(param_1 + 0x1a0) = puVar4;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(ushort **)(param_1 + 0x240) = param_1 + 0x244;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x308] = 0;
  param_1[0x309] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  FUN_1004f1580(param_1 + 0x310);
  *(undefined ***)(param_1 + 0x310) = &PTR_FUN_10145b470;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  uVar3 = *param_1;
  puVar5 = puVar6 + ((ulong)(uVar3 >> 10) & 0x1f) * 0x1c;
  puVar5[0] = 0;
  puVar5[1] = 0;
  uVar1 = uVar3 + 0x400;
  uVar2 = uVar3 & 0xffff83ff;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  puVar5[0] = 1;
  puVar5[1] = 0;
  *(code **)(puVar5 + 4) = FUN_10014c1ec;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  *(code **)(puVar5 + 0xc) = thunk_FUN_1004f0bd8;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 4;
  *(code **)(puVar5 + 4) = FUN_10014c2a0;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 2;
  *(code **)(puVar5 + 4) = FUN_10014c3e8;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 5;
  *(code **)(puVar5 + 4) = FUN_10014c70c;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 6;
  *(code **)(puVar5 + 4) = FUN_10014c7c4;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  *(code **)(puVar5 + 0xc) = FUN_10014c8a8;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar6 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar6 = 3;
  *(code **)(puVar6 + 4) = FUN_10014c91c;
  puVar6[1] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  *param_1 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_10014caac(param_1,0,1);
  FUN_10014caac(param_1,1,2);
  FUN_10014caac(param_1,2,4);
  FUN_10014caac(param_1,2,1);
  FUN_10014caac(param_1,1,5);
  FUN_10014caac(param_1,4,1);
  FUN_10014caac(param_1,4,5);
  FUN_10014caac(param_1,5,1);
  FUN_10014caac(param_1,5,6);
  FUN_10014caac(param_1,6,1);
  FUN_10014caac(param_1,2,3);
  FUN_10014caac(param_1,3,4);
  FUN_10014caac(param_1,3,1);
  FUN_10014cb30(param_1);
  puVar4 = operator_new(0x10);
  *(undefined8 **)(param_1 + 0x32c) = puVar4;
  *puVar4 = &PTR_FUN_10145b4a0;
  puVar4[1] = param_1;
  FUN_10052b77c();
  return param_1;
}


```

---

### `FUN_10014ce24` @ `0x10014ce24`

**Findings:** HANDSHAKE_0x88

```c

void FUN_10014ce24(long param_1)

{
  string *psVar1;
  undefined8 *****pppppuVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  string *psVar8;
  string *psVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  string *psVar15;
  short *psVar16;
  string *psVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_81;
  string local_80;
  undefined7 uStack_7f;
  char local_69;
  undefined8 ****local_68;
  undefined8 uStack_60;
  long local_58;
  
  FUN_10014d35c();
  FUN_1004eef78();
  FUN_10014d3a4(param_1);
  lVar18 = param_1 + 0x2f0;
  iVar5 = FUN_1004f1698(lVar18);
  if (iVar5 == 0) goto LAB_10014d1d4;
  local_68 = (undefined8 *****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1004ef16c(&local_68);
  pppppuVar2 = (undefined8 *****)local_68;
  if (-1 < local_58) {
    pppppuVar2 = &local_68;
  }
  FUN_10010221c(pppppuVar2);
  iVar5 = FUN_1004f1680(lVar18);
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x318) == 0)) {
    FUN_1004f1ae0(*(undefined8 *)(param_1 + 0x4d0));
    plVar7 = (long *)(param_1 + 0x498);
    if (*(char *)(param_1 + 0x4af) < '\0') {
      plVar7 = (long *)*plVar7;
    }
    FUN_10016a944(plVar7);
  }
  psVar15 = (string *)(param_1 + 0x438);
  bVar4 = *(byte *)(param_1 + 0x44f);
  uVar19 = (ulong)bVar4;
  if ((char)bVar4 < '\0') {
    if (*(ulong *)(param_1 + 0x440) != 0) {
      uVar12 = *(ulong *)(param_1 + 0x440);
      psVar17 = *(string **)psVar15;
      goto LAB_10014cee8;
    }
LAB_10014cf64:
    FUN_1000ee4ec(&local_80,"irc");
    std::string::operator=((string *)(param_1 + 0x218),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    FUN_1000ee4ec(&local_80,"");
    std::string::operator=((string *)(param_1 + 0x230),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    uVar6 = 0xffffffff;
LAB_10014d128:
    *(undefined4 *)(param_1 + 0x248) = uVar6;
  }
  else {
    uVar12 = uVar19;
    psVar17 = psVar15;
    if (bVar4 == 0) goto LAB_10014cf64;
LAB_10014cee8:
    psVar1 = psVar17 + uVar12;
    psVar8 = psVar17;
    while (((psVar9 = psVar1, 2 < (long)uVar12 &&
            (psVar8 = _memchr(psVar8,0x3a,uVar12 - 2), psVar8 != (string *)0x0)) &&
           (psVar9 = psVar8, *(short *)psVar8 != 0x2f3a || psVar8[2] != (string)0x2f))) {
      psVar8 = psVar8 + 1;
      uVar12 = (long)psVar1 - (long)psVar8;
    }
    uVar12 = (long)psVar9 - (long)psVar17;
    if (psVar9 == psVar1) {
      uVar12 = 0xffffffffffffffff;
    }
    uVar3 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar3 = uVar12 + 3;
    }
    psVar17 = psVar15;
    if ((char)bVar4 < '\0') {
      uVar19 = *(ulong *)(param_1 + 0x440);
      psVar17 = *(string **)(param_1 + 0x438);
    }
    if (uVar19 < uVar3) {
      lVar20 = -1;
    }
    else {
      psVar8 = psVar17 + uVar3;
      psVar1 = psVar17 + uVar19;
      while (((psVar9 = psVar1, 0 < (long)psVar1 - (long)psVar8 &&
              (psVar8 = _memchr(psVar8,0x3a,(long)psVar1 - (long)psVar8), psVar8 != (string *)0x0))
             && (psVar9 = psVar8, *psVar8 != (string)0x3a))) {
        psVar8 = psVar8 + 1;
      }
      lVar20 = (long)psVar9 - (long)psVar17;
      if (psVar9 == psVar1) {
        lVar20 = -1;
      }
    }
    if (uVar12 == 0xffffffffffffffff) {
      local_81 = '\x03';
      local_98 = 0x637269;
    }
    else {
      std::string::string((string *)&local_98,psVar15,0,uVar12,(allocator *)psVar15);
    }
    std::string::string(&local_80,(string *)&local_98);
    std::string::operator=((string *)(param_1 + 0x218),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    if (local_81 < '\0') {
      operator_delete((void *)CONCAT44(uStack_94,local_98));
    }
    std::string::string((string *)&local_98,psVar15,uVar3,lVar20 - uVar3,(allocator *)psVar15);
    std::string::string(&local_80,(string *)&local_98);
    std::string::operator=((string *)(param_1 + 0x230),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    if (local_81 < '\0') {
      operator_delete((void *)CONCAT44(uStack_94,local_98));
    }
    std::string::operator=((string *)(param_1 + 0x250),(string *)(param_1 + 0x450));
    if (lVar20 == -1) {
      uVar6 = 0x1a0b;
      goto LAB_10014d128;
    }
    if (*(char *)(param_1 + 0x44f) < '\0') {
      psVar15 = *(string **)psVar15;
    }
    local_80 = (string)0x0;
    uVar6 = FUN_1004d2744(psVar15 + lVar20 + 1,&local_80);
    *(undefined4 *)(param_1 + 0x248) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x46c);
  iVar5 = *(int *)(param_1 + 0x470);
  FUN_100148f60();
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x470) != 0) {
      lVar20 = 0;
      uVar19 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0x478);
        lVar10 = lVar13 + lVar20;
        if (*(char *)(lVar10 + 0x17) < '\0') {
          lVar10 = *(long *)(lVar13 + lVar20);
        }
        lVar13 = lVar13 + lVar20;
        if (*(char *)(lVar13 + 0x37) < '\0') {
          lVar11 = *(long *)(lVar13 + 0x20);
        }
        else {
          lVar11 = lVar13 + 0x20;
        }
        FUN_100149030(lVar10,*(undefined4 *)(lVar13 + 0x18),lVar11,*(undefined1 *)(param_1 + 0x4d8))
        ;
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x38;
      } while (uVar19 < *(uint *)(param_1 + 0x470));
    }
    FUN_100148a7c(3000);
  }
  iVar5 = FUN_10052b78c();
  if (iVar5 != 0) {
    FUN_10052b83c(*(undefined1 *)(param_1 + 0x618));
  }
  FUN_1004f0b74(lVar18);
  if (local_58 < 0) {
    operator_delete(local_68);
  }
LAB_10014d1d4:
  if (((*(char *)(param_1 + 0x273) == '\0') && (iVar5 = FUN_1004eef10(), iVar5 != 0)) &&
     (iVar5 = FUN_1004f0390(), iVar5 != 0)) {
    FUN_100105200();
    *(undefined1 *)(param_1 + 0x273) = 1;
  }
  iVar5 = FUN_1004eef24();
  if ((iVar5 == 0) || (*(char *)(param_1 + 0x273) == '\0')) {
    bVar14 = false;
  }
  else {
    lVar18 = param_1 + 0x620;
    iVar5 = FUN_1004f1698(lVar18);
    if ((iVar5 == 0) || (*(uint *)(param_1 + 0x648) == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = false;
      lVar10 = (ulong)*(uint *)(param_1 + 0x648) * 0x148;
      lVar20 = *(long *)(param_1 + 0x650) + 0x140;
      do {
        if (((*(byte *)(lVar20 + 2) & 8) == 0) || (DAT_101e3cee0 == (code *)0x0)) {
          if ((*(byte *)(lVar20 + 2) & 1) == 0) {
            bVar14 = true;
          }
        }
        else {
          (*DAT_101e3cee0)(lVar20 + -0x110);
        }
        lVar20 = lVar20 + 0x148;
        lVar10 = lVar10 + -0x148;
      } while (lVar10 != 0);
    }
    uVar19 = FUN_1004f1670(lVar18);
    if ((uVar19 & 1) == 0) {
      FUN_1004f15d8(lVar18);
      FUN_1004f02dc(lVar18);
    }
  }
  if (DAT_101d91788 != 0) {
    psVar16 = (short *)(DAT_101d91790 + 0x140);
    lVar18 = (ulong)DAT_101d91788 * 0x148;
    do {
      if (*psVar16 != -6) {
        if (((*(byte *)(psVar16 + 1) & 8) == 0) || (DAT_101e3cee0 == (code *)0x0)) {
          bVar14 = (bool)((*(byte *)(psVar16 + 1) & 1) == 0 | bVar14);
        }
        else {
          (*DAT_101e3cee0)(psVar16 + -0x88);
        }
      }
      psVar16 = psVar16 + 0xa4;
      lVar18 = lVar18 + -0x148;
    } while (lVar18 != 0);
  }
  if (DAT_101d91790 != 0) {
    if (DAT_101d91788 != 0) {
      lVar20 = (ulong)DAT_101d91788 * 0x148;
      lVar18 = DAT_101d91790;
      do {
        lVar18 = FUN_10014ea98(lVar18);
        lVar18 = lVar18 + 0x148;
        lVar20 = lVar20 + -0x148;
      } while (lVar20 != 0);
    }
    DAT_101d91788 = 0;
  }
  if (bVar14) {
    FUN_1004f030c();
  }
  return;
}


```

---

### `FUN_10014daec` @ `0x10014daec`

**Findings:** XOR_OP

```c

void FUN_10014daec(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    FUN_1004eeee4();
    *(undefined1 *)(param_1 + 0x271) = 0;
    iVar1 = FUN_10052b78c();
    if (iVar1 != 0) {
      FUN_10052b788();
    }
    FUN_1004e3004(param_1 + 0x268);
    *(byte *)(param_1 + 0x271) = (byte)param_4 ^ 1;
    FUN_10014cd08(param_1,1,0,0);
  }
  if (((*(char *)(param_1 + 0x272) != '\0') && (iVar1 = FUN_1001e3068(), iVar1 != 0)) &&
     (uVar2 = FUN_1001e307c(), (uVar2 & 1) == 0)) {
    FUN_10014db90(param_1,param_2);
    return;
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x271) = 0;
    *(int *)(param_1 + 0x280) = (int)param_2;
  }
  return;
}


```

---

### `FUN_10014e20c` @ `0x10014e20c`

**Findings:** XOR_OP

```c

ulong FUN_10014e20c(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004ef20c();
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10052b840();
    uVar2 = (ulong)(uVar1 ^ 1);
  }
  return uVar2;
}


```

---

## Summary

Total functions decompiled: 30

Vtable entries read: 12 from `0x10145b1c8`

