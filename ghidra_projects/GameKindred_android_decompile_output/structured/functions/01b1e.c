// functions/01b1e — 2 functions
#include "libGameKindred.h"




void FUN_01b1e004(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    bVar1 = *param_1;
    uVar3 = (ulong)bVar1;
    uVar2 = bVar1 - 0x76;
    if (uVar2 < 0x1c) {
      uVar2 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar2 & 0xf800001) == 0) {
        if ((uVar2 & 0x700) == 0) goto LAB_01b1e070;
        if (param_2 == 0) {
          return;
        }
        do {
          param_1 = param_1 + CONCAT11(param_1[1],param_1[2]);
          uVar3 = (ulong)*param_1;
        } while (*param_1 == 0x77);
      }
    }
    else {
LAB_01b1e070:
      if (1 < bVar1 - 4) {
        return;
      }
      if (param_2 == 0) {
        return;
      }
    }
    param_1 = param_1 + (byte)(&DAT_01e65378)[uVar3];
  } while( true );
}




/* WARNING: Type propagation algorithm not settling */

int FUN_01b1ed80(undefined8 ******param_1,byte *param_2,undefined8 ******param_3,ulong param_4,
                ulong *param_5,undefined8 *******param_6,uint param_7)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 uVar10;
  byte bVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  undefined8 *******pppppppuVar21;
  byte bVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte bVar26;
  int iVar27;
  long lVar28;
  ulong *puVar29;
  char *pcVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  undefined8 ******ppppppuVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  byte *pbVar40;
  byte *pbVar41;
  undefined8 ******ppppppuVar42;
  undefined8 ******ppppppuVar43;
  uint local_1bc;
  undefined8 ******local_188;
  ulong local_180;
  undefined8 *******local_178;
  undefined4 local_170;
  uint local_16c;
  ulong local_168;
  ulong local_160;
  int local_158;
  int local_154;
  int iStack_150;
  int local_14c;
  uint local_148;
  ulong local_140;
  uint local_138;
  uint local_134;
  ulong local_130;
  undefined8 *******local_128;
  undefined8 ******ppppppuStack_120;
  ulong *local_118;
  uint local_110;
  undefined1 *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined8 ******local_f8;
  uint local_ec;
  undefined1 auStack_e8 [120];
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  local_ec = param_7;
  if (param_2 == (byte *)0x0) {
    if (param_7 == 0) {
      ppppppuVar42 = (undefined8 ******)&local_ec;
      iVar18 = 1;
      param_2 = (byte *)0x0;
      local_188 = (undefined8 ******)0x0;
      local_180 = 0;
      param_5 = (ulong *)0x0;
      local_178 = (undefined8 *******)0x0;
LAB_01b21e44:
      iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,iVar18);
    }
    else {
      iVar19 = ((int)&stack0xfffffffffffffff0 + -0xdc) - (int)param_1;
      iVar18 = -iVar19;
      if (iVar19 < 1) {
        iVar18 = iVar19;
      }
    }
  }
  else {
    uVar24 = *param_5;
    *param_5 = uVar24 + 1;
    if (uVar24 < param_5[1]) {
      if ((ulong)param_7 < param_5[2]) {
        puVar2 = param_5 + 0x15;
        puVar3 = param_5 + 0x18;
        piVar4 = (int *)((long)param_5 + 0x2c);
        puVar5 = param_5 + 0x19;
        puVar6 = param_5 + 0xc;
        puVar7 = param_5 + 0x11;
        local_188 = param_3;
        local_180 = param_4;
        local_178 = param_6;
LAB_01b1ee18:
        ppppppuVar42 = param_1;
        if ((int)param_5[0x1b] == 2) {
          local_128 = local_178;
          *(undefined4 *)(param_5 + 0x1b) = 0;
          local_178 = &local_128;
          ppppppuStack_120 = param_1;
        }
LAB_01b1ee38:
        pbVar40 = param_2;
        bVar22 = *pbVar40;
        if (0xa1 < bVar22) {
switchD_01b1ee78_caseD_f:
          iVar18 = -5;
          goto switchD_01b1ee78_caseD_9d;
        }
        bVar15 = false;
        bVar16 = false;
        uVar35 = 0;
        lVar28 = 1;
        uVar37 = 0x7fffffff;
        bVar13 = true;
        uVar34 = (uint)bVar22;
        uVar23 = (uint)bVar22;
        iVar19 = (int)ppppppuVar42;
        uVar38 = (uint)local_180;
        iVar18 = 0;
        bVar14 = false;
        param_1 = ppppppuVar42;
        switch(bVar22) {
        case 0:
        case 0x9e:
        case 0x9f:
          if (((ppppppuVar42 == local_188) && (uVar23 != 0x9f)) && (param_5[0x1e] == 0)) {
            iVar18 = 0;
            if ((int)param_5[0x10] != 0) goto switchD_01b1ee78_caseD_9d;
            if ((*(int *)((long)param_5 + 0x84) != 0) &&
               (local_188 ==
                (undefined8 ******)(param_5[0x14] + (long)*(int *)((long)param_5 + 0xd4))))
            goto LAB_01b22e94;
          }
          param_5[0x16] = (ulong)local_188;
          param_5[0x17] = (ulong)ppppppuVar42;
          *(uint *)((long)param_5 + 0xcc) = uVar38;
          iVar18 = -999;
          if (uVar23 == 0) {
            iVar18 = 1;
          }
          goto switchD_01b1ee78_caseD_9d;
        case 1:
          goto switchD_01b1ee78_caseD_1;
        case 2:
          ppppppuVar33 = (undefined8 ******)(param_5[0x14] + (long)*(int *)((long)param_5 + 0xd4));
          goto LAB_01b1fea4;
        case 3:
          param_2 = pbVar40 + 1;
          local_188 = ppppppuVar42;
          goto LAB_01b1ee38;
        case 4:
        case 5:
          if (ppppppuVar42 == (undefined8 ******)param_5[0x14]) {
            bVar22 = 0;
          }
          else {
            if (ppppppuVar42 <= (undefined8 ******)*puVar3) {
              *puVar3 = (long)ppppppuVar42 - 1U;
            }
            bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)((long)ppppppuVar42 - 1U)) >> 4 & 1;
          }
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar26 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 4 & 1;
          }
          else if ((int)*puVar5 == 0) {
            bVar26 = 0;
          }
          else {
            bVar26 = 0;
            if ((undefined8 ******)*puVar3 < ppppppuVar42) {
              bVar26 = 0;
              *(undefined4 *)puVar7 = 1;
              if (1 < (int)*puVar5) goto LAB_01b21e88;
            }
          }
          param_2 = pbVar40 + 1;
          if (*pbVar40 == 5) {
            iVar18 = 0;
            if (bVar26 == bVar22) goto switchD_01b1ee78_caseD_9d;
          }
          else {
            iVar18 = 0;
            if (bVar26 != bVar22) goto switchD_01b1ee78_caseD_9d;
          }
          goto LAB_01b1ee38;
        case 6:
          if ((undefined8 ******)*puVar2 <= ppppppuVar42) break;
          bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 2;
joined_r0x01b1fc90:
          if ((bVar22 & 1) == 0) goto LAB_01b20c40;
          goto LAB_01b22e94;
        case 7:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 2;
joined_r0x01b1fcb8:
            if ((bVar22 & 1) != 0) goto LAB_01b20c40;
            goto LAB_01b22e94;
          }
          break;
        case 8:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42);
            goto joined_r0x01b1fc90;
          }
          break;
        case 9:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42);
            goto joined_r0x01b1fcb8;
          }
          break;
        case 10:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 4;
            goto joined_r0x01b1fc90;
          }
          break;
        case 0xb:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 4;
            goto joined_r0x01b1fcb8;
          }
          break;
        case 0xc:
          ppppppuVar33 = (undefined8 ******)param_5[0x15];
          if ((int)param_5[5] == 0) {
            if (((ppppppuVar42 <= (undefined8 ******)((long)ppppppuVar33 - (long)*piVar4)) &&
                (*(byte *)ppppppuVar42 == (byte)param_5[9])) &&
               ((*piVar4 == 1 ||
                (*(byte *)((long)ppppppuVar42 + 1) == *(byte *)((long)param_5 + 0x49)))))
            goto LAB_01b22e94;
          }
          else if ((ppppppuVar42 < ppppppuVar33) &&
                  (iVar18 = FUN_01b23264(ppppppuVar42,(int)param_5[5],ppppppuVar33,piVar4,0),
                  iVar18 != 0)) goto LAB_01b22e94;
          if (((int)*puVar5 == 0) ||
             (((((byte *)((long)ppppppuVar42 + 1U) < (byte *)*puVar2 || ((int)param_5[5] != 0)) ||
               (*piVar4 != 2)) ||
              ((*(byte *)ppppppuVar42 != (byte)param_5[9] ||
               (*(undefined4 *)puVar7 = 1, (int)*puVar5 < 2)))))) goto switchD_01b1ee78_caseD_d;
          goto LAB_01b21e88;
        case 0xd:
        case 0xe:
switchD_01b1ee78_caseD_d:
          if ((undefined8 ******)*puVar2 <= ppppppuVar42) break;
LAB_01b20c40:
          ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
          goto LAB_01b20c44;
        default:
          goto switchD_01b1ee78_caseD_f;
        case 0x11:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + 1);
            uVar35 = (uint)*(byte *)ppppppuVar42;
            if (*(byte *)ppppppuVar42 < 0xd) {
              if (uVar35 - 0xb < 2) {
LAB_01b2097c:
                ppppppuVar42 = ppppppuVar33;
                if (*(int *)((long)param_5 + 0x8c) != 0) goto LAB_01b22e94;
              }
              else {
                iVar18 = 0;
                ppppppuVar42 = ppppppuVar33;
                if (uVar35 != 10) goto switchD_01b1ee78_caseD_9d;
              }
            }
            else {
              if (uVar35 == 0x85) goto LAB_01b2097c;
              iVar18 = 0;
              if (uVar35 != 0xd) goto switchD_01b1ee78_caseD_9d;
              if (ppppppuVar33 < (undefined8 ******)*puVar2) {
                pbVar41 = (byte *)((long)ppppppuVar42 + 1);
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 2);
                if (*pbVar41 != 10) {
                  ppppppuVar42 = ppppppuVar33;
                }
              }
              else {
                ppppppuVar42 = ppppppuVar33;
                if ((((int)*puVar5 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar33)) &&
                   (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
              }
            }
            param_2 = pbVar40 + 1;
            goto LAB_01b1ee38;
          }
          break;
        case 0x12:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)ppppppuVar42;
            if ((bVar22 != 9) && (bVar22 != 0x20)) {
              bVar15 = bVar22 == 0xa0;
LAB_01b1fdb0:
              iVar18 = 0;
              if (!bVar15) goto LAB_01b20c40;
              goto switchD_01b1ee78_caseD_9d;
            }
            goto LAB_01b22e94;
          }
          break;
        case 0x13:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            bVar22 = *(byte *)ppppppuVar42;
            if (((bVar22 == 9) || (bVar22 == 0xa0)) || (bVar22 == 0x20)) goto LAB_01b20c40;
            goto LAB_01b22e94;
          }
          break;
        case 0x14:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            if (3 < *(byte *)ppppppuVar42 - 10) {
              bVar15 = *(byte *)ppppppuVar42 == 0x85;
              goto LAB_01b1fdb0;
            }
            goto LAB_01b22e94;
          }
          break;
        case 0x15:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            if ((*(byte *)ppppppuVar42 - 10 < 4) || (*(byte *)ppppppuVar42 == 0x85))
            goto LAB_01b20c40;
            goto LAB_01b22e94;
          }
          break;
        case 0x17:
          goto switchD_01b1ee78_caseD_17;
        case 0x18:
switchD_01b1ee78_caseD_18:
          if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b21834;
          goto LAB_01b22e94;
        case 0x19:
          if (*(int *)((long)param_5 + 0x6c) == 0) {
            if (*(int *)((long)param_5 + 0x7c) != 0) goto switchD_01b1ee78_caseD_18;
switchD_01b1ee78_caseD_17:
            ppppppuVar33 = (undefined8 ******)*puVar2;
            if (ppppppuVar33 <= ppppppuVar42) {
LAB_01b21834:
              if ((((int)*puVar5 == 0) || (ppppppuVar42 <= (undefined8 ******)*puVar3)) ||
                 (*(undefined4 *)puVar7 = 1, (int)*puVar5 < 2)) goto LAB_01b20c44;
              goto LAB_01b21e88;
            }
            if ((int)param_5[5] == 0) {
              iVar18 = *piVar4;
              if ((ppppppuVar42 <= (undefined8 ******)((long)ppppppuVar33 - (long)iVar18)) &&
                 (*(byte *)ppppppuVar42 == (byte)param_5[9])) {
                if (iVar18 == 1) {
                  iVar18 = 1;
                }
                else if (*(byte *)((long)ppppppuVar42 + 1) != *(byte *)((long)param_5 + 0x49))
                goto LAB_01b22858;
LAB_01b21828:
                if (ppppppuVar42 == (undefined8 ******)((long)ppppppuVar33 - (long)iVar18))
                goto LAB_01b21834;
              }
            }
            else {
              iVar18 = FUN_01b23264(ppppppuVar42,(int)param_5[5],ppppppuVar33,piVar4,0);
              if (iVar18 != 0) {
                ppppppuVar33 = (undefined8 ******)*puVar2;
                iVar18 = *piVar4;
                goto LAB_01b21828;
              }
            }
LAB_01b22858:
            iVar18 = (int)*puVar5;
            if (((iVar18 != 0) && ((byte *)*puVar2 <= (byte *)((long)ppppppuVar42 + 1U))) &&
               (((int)param_5[5] == 0 &&
                ((*piVar4 == 2 && (*(byte *)ppppppuVar42 == (byte)param_5[9]))))))
            goto LAB_01b21e74;
          }
          goto LAB_01b22e94;
        case 0x1a:
          ppppppuVar33 = (undefined8 ******)*puVar2;
          if (ppppppuVar42 < ppppppuVar33) {
            if ((int)param_5[5] == 0) {
              if (((ppppppuVar42 <= (undefined8 ******)((long)ppppppuVar33 - (long)*piVar4)) &&
                  (*(byte *)ppppppuVar42 == (byte)param_5[9])) &&
                 ((*piVar4 == 1 ||
                  (*(byte *)((long)ppppppuVar42 + 1) == *(byte *)((long)param_5 + 0x49)))))
              goto LAB_01b20c44;
              goto LAB_01b22858;
            }
            iVar18 = FUN_01b23264(ppppppuVar42,(int)param_5[5],ppppppuVar33,piVar4,0);
            if (iVar18 == 0) goto LAB_01b22858;
            goto LAB_01b20c44;
          }
          if (*(int *)((long)param_5 + 0x6c) == 0) goto LAB_01b21834;
          goto LAB_01b22e94;
        case 0x1b:
          if (((int)param_5[0xd] != 0) && (ppppppuVar42 == (undefined8 ******)param_5[0x14]))
          goto LAB_01b22e94;
switchD_01b1ee78_caseD_1:
          ppppppuVar33 = (undefined8 ******)param_5[0x14];
LAB_01b1fea4:
          if (ppppppuVar42 != ppppppuVar33) goto LAB_01b22e94;
          goto LAB_01b20c44;
        case 0x1c:
          if (((int)param_5[0xd] != 0) && (ppppppuVar42 == (undefined8 ******)param_5[0x14]))
          goto LAB_01b22e94;
          ppppppuVar33 = (undefined8 ******)param_5[0x14];
          if (ppppppuVar42 != ppppppuVar33) {
            if (ppppppuVar42 == (undefined8 ******)*puVar2) goto LAB_01b22e94;
            if ((int)param_5[5] == 0) {
              iVar18 = *piVar4;
              if ((((undefined8 ******)((long)ppppppuVar33 + (long)iVar18) <= ppppppuVar42) &&
                  (pcVar30 = (char *)((long)ppppppuVar42 - (long)iVar18),
                  *pcVar30 == (char)param_5[9])) &&
                 ((iVar18 == 1 || (pcVar30[1] == *(char *)((long)param_5 + 0x49)))))
              goto LAB_01b20c44;
              goto LAB_01b22e94;
            }
            if (ppppppuVar42 <= ppppppuVar33) goto LAB_01b22bf4;
            iVar18 = FUN_01b232f0(ppppppuVar42,(int)param_5[5],ppppppuVar33,piVar4,0);
            if (iVar18 == 0) goto LAB_01b22e94;
          }
LAB_01b20c44:
          param_2 = pbVar40 + 1;
          goto LAB_01b1ee38;
        case 0x1d:
          if (0 < (long)(*puVar2 - (long)ppppppuVar42)) {
            if (pbVar40[1] != *(byte *)ppppppuVar42) goto LAB_01b22e94;
LAB_01b1ff68:
            ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
            param_2 = pbVar40 + 2;
            goto LAB_01b1ee38;
          }
          break;
        case 0x1e:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            if (*(char *)(param_5[10] + (ulong)pbVar40[1]) ==
                *(char *)(param_5[10] + (ulong)*(byte *)ppppppuVar42)) goto LAB_01b1ff68;
            goto LAB_01b22e94;
          }
          break;
        case 0x1f:
        case 0x20:
          if (ppppppuVar42 < (undefined8 ******)*puVar2) {
            if ((pbVar40[1] != *(byte *)ppppppuVar42) &&
               ((uVar23 != 0x20 ||
                (*(byte *)(param_5[0xb] + (ulong)pbVar40[1]) != *(byte *)ppppppuVar42))))
            goto LAB_01b1ff68;
            goto LAB_01b22e94;
          }
          break;
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
          iVar18 = 0x21;
          if (0x2d < uVar34) {
            iVar18 = 0x2e;
          }
          uVar24 = (ulong)(uVar23 - iVar18);
          uVar35 = (uint)(byte)(&DAT_01e652f8)[uVar24];
          bVar16 = false;
          pbVar41 = pbVar40 + 1;
          uVar38 = uVar23 - iVar18 & 1;
          uVar37 = (uint)(byte)(&DAT_01e65303)[uVar24];
          if ((0x3cfUL >> (uVar24 & 0x3f) & 1) != 0) {
            uVar37 = 0x7fffffff;
          }
          goto LAB_01b1f1c0;
        case 0x27:
        case 0x28:
        case 0x34:
        case 0x35:
          goto switchD_01b1ee78_caseD_27;
        case 0x29:
        case 0x36:
          bVar16 = false;
          uVar38 = 0;
          pbVar41 = pbVar40 + 3;
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          uVar35 = uVar37;
          goto LAB_01b1f1c0;
        case 0x2a:
        case 0x37:
          uVar38 = 0;
          pbVar41 = pbVar40 + 1;
          bVar16 = true;
          uVar37 = 0x7fffffff;
          uVar35 = 0;
          goto LAB_01b1f1c0;
        case 0x2b:
        case 0x38:
          uVar35 = 1;
          uVar37 = 0x7fffffff;
          goto LAB_01b1f0f0;
        case 0x2c:
        case 0x39:
          uVar35 = 0;
          uVar37 = 1;
LAB_01b1f0f0:
          pbVar41 = pbVar40 + 1;
          uVar38 = 0;
          bVar16 = true;
          goto LAB_01b1f1c0;
        case 0x2d:
        case 0x3a:
          bVar16 = true;
switchD_01b1ee78_caseD_27:
          uVar38 = (uint)(uVar34 == 0x28 || uVar34 == 0x35);
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          pbVar41 = pbVar40 + 3;
          uVar35 = 0;
LAB_01b1f1c0:
          param_2 = pbVar41 + 1;
          bVar22 = *pbVar41;
          if (uVar23 < 0x2e) {
            if (uVar35 != 0) {
              lVar28 = 0;
              do {
                pbVar41 = (byte *)((long)ppppppuVar42 + lVar28);
                if ((byte *)*puVar2 <= pbVar41) goto LAB_01b21e58;
                if (bVar22 != *pbVar41) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < (int)uVar35);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
            }
            ppppppuVar42 = param_1;
            if (uVar35 != uVar37) {
              if (uVar38 != 0) {
                iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,
                                      local_ec + 1);
                goto joined_r0x01b225f0;
              }
              if (uVar35 < uVar37) {
                do {
                  if ((undefined8 ******)*puVar2 <= ppppppuVar42) {
                    if ((((int)*puVar5 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar42)) &&
                       (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
                    break;
                  }
                  if (bVar22 != *(byte *)ppppppuVar42) break;
                  uVar35 = uVar35 + 1;
                  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
                } while ((int)uVar35 < (int)uVar37);
              }
              if (!bVar16) goto LAB_01b21950;
            }
          }
          else {
            bVar26 = *(byte *)(param_5[0xb] + (ulong)bVar22);
            if (uVar35 != 0) {
              lVar28 = 0;
              do {
                pbVar41 = (byte *)((long)ppppppuVar42 + lVar28);
                if ((byte *)*puVar2 <= pbVar41) goto LAB_01b21e58;
                if ((bVar22 != *pbVar41) && (bVar26 != *pbVar41)) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < (int)uVar35);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
            }
            ppppppuVar42 = param_1;
            if (uVar35 != uVar37) {
              if (uVar38 != 0) {
                iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,
                                      local_ec + 1);
                goto joined_r0x01b2267c;
              }
              if (uVar35 < uVar37) {
                while (ppppppuVar42 < (undefined8 ******)*puVar2) {
                  ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + 1);
                  if (((bVar22 != *(byte *)ppppppuVar42) && (bVar26 != *(byte *)ppppppuVar42)) ||
                     (uVar35 = uVar35 + 1, ppppppuVar42 = ppppppuVar33, (int)uVar37 <= (int)uVar35))
                  goto LAB_01b20538;
                }
                if ((((int)*puVar5 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar42)) &&
                   (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
              }
LAB_01b20538:
              if (!bVar16) goto LAB_01b21990;
            }
          }
          goto LAB_01b1ee38;
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
          iVar18 = 0x48;
          if (uVar23 < 0x48) {
            iVar18 = 0x3b;
          }
          uVar24 = (ulong)(uVar34 - iVar18);
          uVar35 = (uint)(byte)(&DAT_01e652f8)[uVar24];
          bVar15 = false;
          pbVar41 = pbVar40 + 1;
          uVar38 = uVar34 - iVar18 & 1;
          uVar37 = (uint)(byte)(&DAT_01e65303)[uVar24];
          if ((0x3cfUL >> (uVar24 & 0x3f) & 1) != 0) {
            uVar37 = 0x7fffffff;
          }
          goto LAB_01b1f34c;
        case 0x41:
        case 0x42:
        case 0x4e:
        case 0x4f:
          uVar35 = 0;
          bVar15 = false;
          uVar38 = (uint)(uVar23 == 0x42 || uVar23 == 0x4f);
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          pbVar41 = pbVar40 + 3;
          goto LAB_01b1f34c;
        case 0x43:
        case 0x50:
          bVar15 = false;
          uVar38 = 0;
          pbVar41 = pbVar40 + 3;
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          uVar35 = uVar37;
          goto LAB_01b1f34c;
        case 0x44:
        case 0x51:
          uVar38 = 0;
          pbVar41 = pbVar40 + 1;
          bVar15 = true;
          uVar37 = 0x7fffffff;
          uVar35 = 0;
          goto LAB_01b1f34c;
        case 0x45:
        case 0x52:
          pbVar41 = pbVar40 + 1;
          uVar35 = 1;
          uVar37 = 0x7fffffff;
          goto LAB_01b1f348;
        case 0x46:
        case 0x53:
          uVar35 = 0;
          pbVar41 = pbVar40 + 1;
          uVar37 = 1;
          goto LAB_01b1f348;
        case 0x47:
        case 0x54:
          uVar35 = 0;
          pbVar41 = pbVar40 + 3;
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
LAB_01b1f348:
          uVar38 = 0;
          bVar15 = true;
LAB_01b1f34c:
          param_2 = pbVar41 + 1;
          bVar22 = *pbVar41;
          if (uVar34 < 0x48) {
            if (uVar35 != 0) {
              lVar28 = 0;
              do {
                pbVar41 = (byte *)((long)ppppppuVar42 + lVar28);
                if ((byte *)*puVar2 <= pbVar41) goto LAB_01b21e58;
                if (bVar22 == *pbVar41) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < (int)uVar35);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
            }
            ppppppuVar42 = param_1;
            if (uVar35 != uVar37) {
              if (uVar38 != 0) {
                iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,
                                      local_ec + 1);
                goto joined_r0x01b227a8;
              }
              if (uVar35 < uVar37) {
                do {
                  if ((undefined8 ******)*puVar2 <= ppppppuVar42) {
                    if ((((int)*puVar5 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar42)) &&
                       (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
                    break;
                  }
                  if (bVar22 == *(byte *)ppppppuVar42) break;
                  uVar35 = uVar35 + 1;
                  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
                } while ((int)uVar35 < (int)uVar37);
              }
              if (!bVar15) goto joined_r0x01b21ba4;
            }
          }
          else {
            bVar26 = *(byte *)(param_5[0xb] + (ulong)bVar22);
            if (uVar35 != 0) {
              lVar28 = 0;
              do {
                pbVar41 = (byte *)((long)ppppppuVar42 + lVar28);
                if ((byte *)*puVar2 <= pbVar41) goto LAB_01b21e58;
                if (bVar22 == *pbVar41) goto LAB_01b22e94;
                iVar18 = 0;
                if (bVar26 == *pbVar41) goto switchD_01b1ee78_caseD_9d;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < (int)uVar35);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
            }
            ppppppuVar42 = param_1;
            if (uVar35 != uVar37) {
              if (uVar38 != 0) {
                iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,
                                      local_ec + 1);
                goto joined_r0x01b22710;
              }
              if (uVar35 < uVar37) {
                while (ppppppuVar42 < (undefined8 ******)*puVar2) {
                  if ((bVar22 == *(byte *)ppppppuVar42) || (bVar26 == *(byte *)ppppppuVar42))
                  goto LAB_01b205a8;
                  uVar35 = uVar35 + 1;
                  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
                  if ((int)uVar37 <= (int)uVar35) goto LAB_01b205a8;
                }
                if ((((int)*puVar5 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar42)) &&
                   (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
              }
LAB_01b205a8:
              if (!bVar15) goto joined_r0x01b21b50;
            }
          }
          goto LAB_01b1ee38;
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          uVar36 = (ulong)(uVar23 - 0x55);
          uVar35 = ~uVar23 & 1;
          uVar24 = (ulong)(byte)(&DAT_01e652f8)[uVar36];
          pbVar41 = pbVar40 + 1;
          uVar37 = (uint)(byte)(&DAT_01e65303)[uVar36];
          if ((0x3cfUL >> (uVar36 & 0x3f) & 1) != 0) {
            uVar37 = 0x7fffffff;
          }
          goto LAB_01b1ef7c;
        case 0x5b:
        case 0x5c:
          bVar22 = pbVar40[1];
          bVar26 = pbVar40[2];
          bVar13 = false;
          uVar35 = (uint)(uVar34 == 0x5c);
          goto LAB_01b20118;
        case 0x5d:
          pbVar41 = pbVar40 + 3;
          uVar35 = 1;
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          uVar24 = (ulong)uVar37;
LAB_01b1ef7c:
          param_2 = pbVar41 + 1;
          local_1bc = (uint)*pbVar41;
          bVar13 = false;
          if ((int)uVar24 == 0) {
            bVar13 = false;
          }
          else {
LAB_01b1ef8c:
            iVar19 = (int)uVar24;
            iVar18 = -0xe;
            switch(local_1bc) {
            case 6:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar33) >> 2 & 1) != 0)
                goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 6;
              break;
            case 7:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar33) >> 2 & 1) == 0)
                goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 7;
              break;
            case 8:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar33) & 1) != 0) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 8;
              break;
            case 9:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar33) & 1) == 0) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 9;
              break;
            case 10:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar33) >> 4 & 1) != 0)
                goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 10;
              break;
            case 0xb:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar33) >> 4 & 1) == 0)
                goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 0xb;
              break;
            case 0xc:
              lVar28 = 0;
              do {
                pbVar40 = (byte *)((long)ppppppuVar42 + lVar28);
                pbVar41 = (byte *)*puVar2;
                if (pbVar41 <= pbVar40) {
                  iVar18 = (int)*puVar5;
                  if ((iVar18 == 0) || (pbVar40 <= (byte *)*puVar3)) goto LAB_01b22e94;
                  goto LAB_01b21e74;
                }
                if ((int)param_5[5] == 0) {
                  if (((pbVar40 <= pbVar41 + -(long)*piVar4) && (*pbVar40 == (byte)param_5[9])) &&
                     ((*piVar4 == 1 ||
                      (*(byte *)((long)ppppppuVar42 + lVar28 + 1) == *(byte *)((long)param_5 + 0x49)
                      )))) goto LAB_01b22e94;
                }
                else {
                  iVar18 = FUN_01b23264(pbVar40,(int)param_5[5],pbVar41,piVar4,0);
                  if (iVar18 != 0) goto LAB_01b22e94;
                }
                if ((((((int)*puVar5 != 0) &&
                      ((byte *)*puVar2 <= (byte *)((long)ppppppuVar42 + lVar28 + 1))) &&
                     ((int)param_5[5] == 0)) && ((*piVar4 == 2 && (*pbVar40 == (byte)param_5[9]))))
                   && (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 0xc;
              break;
            case 0xd:
              if ((undefined8 ******)(*puVar2 - uVar24) < ppppppuVar42) goto LAB_01b21ee8;
              param_1 = (undefined8 ******)((long)ppppppuVar42 + uVar24);
              local_1bc = 0xd;
              break;
            case 0xe:
              if ((undefined8 ******)(*puVar2 - uVar24) < ppppppuVar42) goto LAB_01b21ee8;
              param_1 = (undefined8 ******)((long)ppppppuVar42 + uVar24);
              local_1bc = 0xe;
              break;
            default:
              goto switchD_01b1ee78_caseD_9d;
            case 0x11:
              iVar27 = 0;
              ppppppuVar33 = ppppppuVar42;
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar33 + 1);
                uVar38 = (uint)*(byte *)ppppppuVar33;
                param_1 = ppppppuVar42;
                if (*(byte *)ppppppuVar33 < 0xd) {
                  if (uVar38 - 0xb < 2) {
LAB_01b20f4c:
                    if (*(int *)((long)param_5 + 0x8c) != 0) goto LAB_01b22e94;
                  }
                  else {
                    iVar18 = 0;
                    if (uVar38 != 10) goto switchD_01b1ee78_caseD_9d;
                  }
                }
                else {
                  if (uVar38 == 0x85) goto LAB_01b20f4c;
                  iVar18 = 0;
                  if (uVar38 != 0xd) goto switchD_01b1ee78_caseD_9d;
                  if ((ppppppuVar42 < (undefined8 ******)*puVar2) &&
                     (param_1 = (undefined8 ******)((long)ppppppuVar33 + 2),
                     *(byte *)((long)ppppppuVar33 + 1) != 10)) {
                    param_1 = ppppppuVar42;
                  }
                }
                iVar27 = iVar27 + 1;
                ppppppuVar33 = param_1;
              } while (iVar27 < iVar19);
              local_1bc = 0x11;
              break;
            case 0x12:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                bVar22 = *(byte *)ppppppuVar33;
                if (((bVar22 == 9) || (bVar22 == 0x20)) || (bVar22 == 0xa0)) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 0x12;
              break;
            case 0x13:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                bVar22 = *(byte *)ppppppuVar33;
                if (((bVar22 != 9) && (bVar22 != 0xa0)) && (bVar22 != 0x20)) goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 0x13;
              break;
            case 0x14:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((*(byte *)ppppppuVar33 - 10 < 4) || (*(byte *)ppppppuVar33 == 0x85))
                goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 0x14;
              break;
            case 0x15:
              lVar28 = 0;
              do {
                ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b21e90;
                if ((3 < *(byte *)ppppppuVar33 - 10) && (*(byte *)ppppppuVar33 != 0x85))
                goto LAB_01b22e94;
                lVar28 = lVar28 + 1;
              } while ((int)lVar28 < iVar19);
              param_1 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
              local_1bc = 0x15;
            }
          }
          goto LAB_01b212a8;
        case 0x5e:
          goto switchD_01b1ee78_caseD_5e;
        case 0x5f:
          local_1bc = (uint)pbVar40[1];
          uVar35 = 0;
          param_2 = pbVar40 + 2;
          uVar37 = 0x7fffffff;
          bVar13 = true;
          uVar24 = 1;
          goto LAB_01b1ef8c;
        case 0x60:
          uVar35 = 0;
          lVar28 = 1;
          uVar37 = 1;
          bVar13 = true;
          goto switchD_01b1ee78_caseD_5e;
        case 0x61:
          bVar22 = pbVar40[1];
          bVar26 = pbVar40[2];
          uVar35 = 0;
          bVar13 = true;
LAB_01b20118:
          uVar37 = (uint)CONCAT11(bVar22,bVar26);
          lVar28 = 3;
switchD_01b1ee78_caseD_5e:
          param_2 = pbVar40 + lVar28 + 1;
          local_1bc = (uint)pbVar40[lVar28];
          uVar24 = 0;
LAB_01b212a8:
          uVar23 = (uint)uVar24;
          uVar38 = uVar37 - uVar23;
          ppppppuVar42 = param_1;
          if (uVar38 == 0) goto LAB_01b1ee38;
          if (uVar35 != 0) {
            iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,local_ec + 1
                                 );
            if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
            iVar19 = uVar23 - 1;
            goto LAB_01b222dc;
          }
          iVar18 = -0xe;
          switch(local_1bc) {
          case 6:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 2 & 1) != 0) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 7:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 2 & 1) == 0) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 8:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) & 1) != 0) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 9:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) & 1) == 0) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 10:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 4 & 1) != 0) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 0xb:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)(*puVar6 + (ulong)*(byte *)ppppppuVar42) >> 4 & 1) == 0) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 0xc:
            ppppppuVar33 = param_1;
            if (uVar23 < uVar37) {
              while (ppppppuVar43 = (undefined8 ******)*puVar2, ppppppuVar42 = ppppppuVar33,
                    ppppppuVar33 < ppppppuVar43) {
                if ((int)param_5[5] == 0) {
                  if (((ppppppuVar33 <= (undefined8 ******)((long)ppppppuVar43 - (long)*piVar4)) &&
                      (*(byte *)ppppppuVar33 == (byte)param_5[9])) &&
                     ((*piVar4 == 1 ||
                      (*(byte *)((long)ppppppuVar33 + 1) == *(byte *)((long)param_5 + 0x49)))))
                  goto LAB_01b21908;
                }
                else {
                  iVar18 = FUN_01b23264(ppppppuVar33,(int)param_5[5],ppppppuVar43,piVar4,0);
                  if (iVar18 != 0) goto LAB_01b21908;
                }
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar33 + 1);
                if ((((((int)*puVar5 != 0) && ((undefined8 ******)*puVar2 <= ppppppuVar42)) &&
                     ((int)param_5[5] == 0)) &&
                    ((*piVar4 == 2 && (*(byte *)ppppppuVar33 == (byte)param_5[9])))) &&
                   (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b22c08;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar33 = ppppppuVar42;
                if ((int)uVar37 <= (int)uVar35) goto LAB_01b21908;
              }
              iVar18 = (int)*puVar5;
              if ((iVar18 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar33)) goto LAB_01b21800;
            }
            break;
          case 0xd:
          case 0xe:
            ppppppuVar33 = (undefined8 ******)*puVar2;
            if (uVar38 <= (uint)((int)ppppppuVar33 - (int)param_1)) {
              ppppppuVar42 = (undefined8 ******)((long)param_1 + (ulong)uVar38);
              break;
            }
            iVar18 = (int)*puVar5;
            ppppppuVar42 = ppppppuVar33;
            if (iVar18 == 0) break;
            goto LAB_01b217e4;
          default:
            goto switchD_01b1ee78_caseD_9d;
          case 0x11:
            if (uVar23 < uVar37) {
              ppppppuVar33 = param_1;
              do {
                ppppppuVar42 = ppppppuVar33;
                if ((undefined8 ******)*puVar2 <= ppppppuVar33) goto LAB_01b217d8;
                bVar22 = *(byte *)ppppppuVar33;
                if (bVar22 == 10) {
LAB_01b2176c:
                  ppppppuVar33 = (undefined8 ******)((long)ppppppuVar33 + 1);
                }
                else {
                  if (bVar22 != 0xd) {
                    if ((*(int *)((long)param_5 + 0x8c) == 0) &&
                       ((bVar22 - 0xb < 2 || (bVar22 == 0x85)))) goto LAB_01b2176c;
                    break;
                  }
                  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar33 + 1);
                  if ((undefined8 ******)*puVar2 <= ppppppuVar42) break;
                  pbVar40 = (byte *)((long)ppppppuVar33 + 1);
                  ppppppuVar33 = (undefined8 ******)((long)ppppppuVar33 + 2);
                  if (*pbVar40 != 10) {
                    ppppppuVar33 = ppppppuVar42;
                  }
                }
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = ppppppuVar33;
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 0x12:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                bVar22 = *(byte *)ppppppuVar42;
                if (((bVar22 == 9) || (bVar22 == 0x20)) || (bVar22 == 0xa0)) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 0x13:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                bVar22 = *(byte *)ppppppuVar42;
                if (((bVar22 != 9) && (bVar22 != 0xa0)) && (bVar22 != 0x20)) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 0x14:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((*(byte *)ppppppuVar42 - 10 < 4) || (*(byte *)ppppppuVar42 == 0x85)) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
            break;
          case 0x15:
            if (uVar23 < uVar37) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) goto LAB_01b217d8;
                if ((3 < *(byte *)ppppppuVar42 - 10) && (*(byte *)ppppppuVar42 != 0x85)) break;
                uVar35 = (int)uVar24 + 1;
                uVar24 = (ulong)uVar35;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar37);
            }
          }
          goto LAB_01b21908;
        case 0x6e:
        case 0x6f:
          param_2 = pbVar40 + 0x21;
          bVar22 = *param_2;
          uVar35 = 1;
          uVar37 = bVar22 - 0x62;
          if (uVar37 < 0xc) {
            if ((1 << (ulong)(uVar37 & 0x1f) & 0x73fU) == 0) {
              bVar15 = bVar22 == 0x69;
              bVar16 = bVar22 == 0x6d;
              uVar35 = (uint)CONCAT11(pbVar40[0x22],pbVar40[0x23]);
              uVar38 = 0x7fffffff;
              if (CONCAT11(pbVar40[0x24],pbVar40[0x25]) != 0) {
                uVar38 = (uint)CONCAT11(pbVar40[0x24],pbVar40[0x25]);
              }
              param_2 = pbVar40 + 0x26;
            }
            else {
              uVar35 = (uint)(byte)(&DAT_01e652f8)[uVar37];
              bVar15 = (bool)(bVar22 & 1);
              bVar16 = 7 < uVar37;
              if (7 < uVar37) {
                bVar15 = false;
              }
              param_2 = pbVar40 + 0x22;
              uVar38 = (uint)(byte)(&DAT_01e65303)[uVar37];
              if ((0x3cfUL >> ((ulong)uVar37 & 0x3f) & 1) != 0) {
                uVar38 = 0x7fffffff;
              }
            }
            ppppppuVar33 = ppppppuVar42;
            if (uVar35 != 0) goto LAB_01b20778;
          }
          else {
            bVar15 = false;
            bVar16 = false;
            uVar38 = 1;
LAB_01b20778:
            lVar28 = 0;
            do {
              pbVar41 = (byte *)((long)ppppppuVar42 + lVar28);
              if ((byte *)*puVar2 <= pbVar41) goto LAB_01b21e58;
              if ((1 << (ulong)(*pbVar41 & 7) & (uint)pbVar40[(ulong)(*pbVar41 >> 3) + 1]) == 0)
              goto LAB_01b22e94;
              lVar28 = lVar28 + 1;
            } while ((int)lVar28 < (int)uVar35);
            ppppppuVar33 = (undefined8 ******)((long)ppppppuVar42 + lVar28);
          }
          ppppppuVar42 = ppppppuVar33;
          if (uVar35 != uVar38) {
            if (bVar15 != false) {
              iVar18 = FUN_01b1ed80(ppppppuVar33,param_2,local_188,local_180,param_5,local_178,
                                    local_ec + 1);
              goto joined_r0x01b229e4;
            }
            if (uVar35 < uVar38) {
              do {
                if ((undefined8 ******)*puVar2 <= ppppppuVar42) {
                  if ((((int)*puVar5 != 0) && ((undefined8 ******)*puVar3 < ppppppuVar42)) &&
                     (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b21e88;
                  break;
                }
                if ((1 << (ulong)(*(byte *)ppppppuVar42 & 7) &
                    (uint)pbVar40[(ulong)(*(byte *)ppppppuVar42 >> 3) + 1]) == 0) break;
                uVar35 = uVar35 + 1;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + 1);
              } while ((int)uVar35 < (int)uVar38);
            }
            if (!bVar16) {
              iVar18 = 0;
              while ((ppppppuVar33 <= ppppppuVar42 &&
                     (iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,
                                            local_178,local_ec + 1), iVar18 == 0))) {
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + -1);
              }
              goto switchD_01b1ee78_caseD_9d;
            }
          }
          goto LAB_01b1ee38;
        case 0x71:
        case 0x72:
          bVar15 = uVar34 == 0x72;
          param_2 = pbVar40 + 3;
          uVar35 = (uint)CONCAT11(pbVar40[1],pbVar40[2]) * 2;
          if ((int)uVar35 < (int)uVar38) {
            iVar19 = *(int *)(param_5[3] + (ulong)uVar35 * 4);
            if (-1 < iVar19) {
              iVar19 = *(int *)(param_5[3] + (ulong)(uVar35 | 1) * 4) - iVar19;
              goto LAB_01b20838;
            }
          }
          iVar19 = -(uint)(*(int *)((long)param_5 + 0x74) == 0);
          goto LAB_01b20838;
        case 0x73:
        case 0x74:
          bVar15 = bVar22 == 0x74;
          param_2 = pbVar40 + 5;
          iVar19 = -(uint)(*(int *)((long)param_5 + 0x74) == 0);
          if (CONCAT11(pbVar40[3],pbVar40[4]) == 0) {
            uVar35 = 0;
          }
          else {
            iVar18 = CONCAT11(pbVar40[3],pbVar40[4]) + 1;
            puVar32 = (undefined1 *)
                      (param_5[8] +
                       (ulong)((uint)CONCAT11(pbVar40[1],pbVar40[2]) *
                              *(int *)((long)param_5 + 0x34)) + 1);
            do {
              uVar35 = (uint)CONCAT11(puVar32[-1],*puVar32) * 2;
              if ((int)uVar35 < (int)uVar38) {
                iVar27 = *(int *)(param_5[3] + (ulong)uVar35 * 4);
                if (-1 < iVar27) {
                  iVar19 = *(int *)(param_5[3] + (ulong)(uVar35 | 1) * 4) - iVar27;
                  break;
                }
              }
              iVar18 = iVar18 + -1;
              puVar32 = puVar32 + *(int *)((long)param_5 + 0x34);
            } while (1 < iVar18);
          }
LAB_01b20838:
          bVar22 = *param_2;
          uVar37 = (uint)bVar22;
          if (bVar22 - 0x62 < 6) {
            uVar24 = (ulong)(uVar37 - 0x62);
            uVar37 = uVar37 & 1;
            uVar38 = (uint)(byte)(&DAT_01e652f8)[uVar24];
            param_2 = param_2 + 1;
            uVar23 = (uint)(byte)(&DAT_01e65303)[uVar24];
            if ((0x3cfUL >> (uVar24 & 0x3f) & 1) != 0) {
              uVar23 = 0x7fffffff;
            }
          }
          else {
            if (1 < bVar22 - 0x68) {
              iVar18 = FUN_01b22f54(uVar35,ppppppuVar42,iVar19,param_5,bVar15);
              if (iVar18 < 0) {
                if (iVar18 == -2) {
                  ppppppuVar42 = (undefined8 ******)*puVar2;
                }
                if (((((int)*puVar5 == 0) || (ppppppuVar42 < (undefined8 ******)*puVar2)) ||
                    (ppppppuVar42 <= (undefined8 ******)*puVar3)) ||
                   (*(undefined4 *)puVar7 = 1, (int)*puVar5 < 2)) {
LAB_01b22bf4:
                  iVar18 = 0;
                }
                else {
                  iVar18 = -0xc;
                }
                goto switchD_01b1ee78_caseD_9d;
              }
              ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + (long)iVar18);
              goto LAB_01b1ee38;
            }
            uVar37 = (uint)(uVar37 == 0x69);
            uVar38 = (uint)CONCAT11(param_2[1],param_2[2]);
            uVar23 = 0x7fffffff;
            if (CONCAT11(param_2[3],param_2[4]) != 0) {
              uVar23 = (uint)CONCAT11(param_2[3],param_2[4]);
            }
            param_2 = param_2 + 5;
          }
          if ((iVar19 != 0) && ((-1 < iVar19 || (uVar38 != 0)))) {
            iVar27 = uVar38 - 1;
            if (uVar38 != 0) {
              iVar18 = 0;
              do {
                iVar17 = FUN_01b22f54(uVar35,ppppppuVar42,iVar19,param_5,bVar15);
                if (iVar17 < 0) {
                  if (iVar17 == -2) {
                    ppppppuVar42 = (undefined8 ******)*puVar2;
                  }
                  iVar18 = (int)*puVar5;
                  if ((iVar18 == 0) || (ppppppuVar42 < (undefined8 ******)*puVar2))
                  goto LAB_01b22e94;
                  goto LAB_01b21ef4;
                }
                iVar18 = iVar18 + 1;
                ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + (long)iVar17);
              } while (iVar18 < (int)uVar38);
            }
            if (uVar38 != uVar23) {
              if (uVar37 != 0) {
                iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,
                                      local_ec + 1);
                goto joined_r0x01b22958;
              }
              ppppppuVar33 = ppppppuVar42;
              if (uVar23 <= uVar38) goto LAB_01b22da4;
              goto LAB_01b22cc8;
            }
          }
          goto LAB_01b1ee38;
        case 0x75:
          pbVar41 = (byte *)(param_5[0x13] + (ulong)CONCAT11(pbVar40[1],pbVar40[2]));
          if ((ulong)CONCAT11(pbVar40[1],pbVar40[2]) == 0) {
            uVar35 = 0;
          }
          else {
            uVar35 = (uint)CONCAT11(pbVar41[3],pbVar41[4]);
          }
          puVar29 = (ulong *)param_5[0x1e];
          for (puVar31 = puVar29; puVar31 != (ulong *)0x0; puVar31 = (ulong *)*puVar31) {
            if ((uVar35 == (uint)puVar31[1]) && (ppppppuVar42 == (undefined8 ******)puVar31[4])) {
              iVar18 = -0x1a;
              goto switchD_01b1ee78_caseD_9d;
            }
          }
          local_fc = (undefined4)param_5[0x1a];
          local_100 = (uint)param_5[4];
          param_5[0x1e] = (ulong)&local_118;
          local_118 = puVar29;
          local_110 = uVar35;
          local_f8 = ppppppuVar42;
          if ((int)local_100 < 0x1f) {
            local_108 = auStack_e8;
          }
          else {
            local_108 = (undefined1 *)(*(code *)pcre_malloc)((long)(int)local_100 << 2);
            if (local_108 == (undefined1 *)0x0) {
              iVar18 = -6;
              goto switchD_01b1ee78_caseD_9d;
            }
          }
          memcpy(local_108,(void *)param_5[3],
                 -(ulong)(local_100 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_100 << 2);
          bVar22 = *pbVar41;
          uVar24 = (ulong)bVar22;
LAB_01b20adc:
          if (0x87 < bVar22) {
            *(undefined4 *)(param_5 + 0x1b) = 2;
            uVar24 = (ulong)*pbVar41;
          }
          iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar41 + (byte)(&DAT_01e65378)[uVar24],local_188,
                                local_180 & 0xffffffff,param_5,local_178,local_ec + 1);
          memcpy((void *)param_5[3],local_108,(long)(int)local_100 << 2);
          *(undefined4 *)(param_5 + 0x1a) = local_fc;
          param_5[0x1e] = (ulong)local_118;
          if ((iVar18 != 1) && (iVar18 != -999)) {
            if (iVar18 + 0x3e4U < 5) goto LAB_01b22258;
            if (iVar18 == 0) goto code_r0x01b20b6c;
            if (local_108 != auStack_e8) {
              (*(code *)pcre_free)();
            }
            goto switchD_01b1ee78_caseD_9d;
          }
          if (local_108 != auStack_e8) {
            (*(code *)pcre_free)();
          }
          param_2 = pbVar40 + 3;
          ppppppuVar42 = (undefined8 ******)param_5[0x17];
          local_188 = (undefined8 ******)param_5[0x16];
          goto LAB_01b1ee38;
        case 0x76:
          if (pcre_callout != (code *)0x0) {
            local_170 = 2;
            local_16c = (uint)pbVar40[1];
            local_168 = param_5[3];
            local_160 = param_5[0x14];
            iStack_150 = (int)local_160;
            local_158 = (int)param_5[0x15] - iStack_150;
            local_154 = (int)local_188 - iStack_150;
            iStack_150 = iVar19 - iStack_150;
            local_138 = (uint)CONCAT11(pbVar40[2],pbVar40[3]);
            local_134 = (uint)CONCAT11(pbVar40[4],pbVar40[5]);
            if ((int)uVar38 < 0) {
              uVar38 = uVar38 + 1;
            }
            local_14c = (int)uVar38 >> 1;
            local_148 = (uint)(ushort)param_5[0x1a];
            if (local_148 == 0) {
              local_148 = 0xffffffff;
            }
            local_140 = param_5[0x1f];
            local_130 = param_5[0x21];
            iVar18 = (*pcre_callout)(&local_170);
            if (0 < iVar18) goto LAB_01b22bf4;
            if (iVar18 == 0) goto LAB_01b1faa8;
            goto switchD_01b1ee78_caseD_9d;
          }
LAB_01b1faa8:
          param_2 = pbVar40 + 6;
          goto LAB_01b1ee38;
        case 0x77:
          do {
            pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
            param_2 = pbVar40;
          } while (*pbVar40 == 0x77);
          goto LAB_01b1ee38;
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
          pbVar41 = pbVar40 + -(ulong)CONCAT11(pbVar40[1],pbVar40[2]);
          uVar35 = (uint)*pbVar41;
          if ((*pbVar41 < 0x88) && (uVar35 != 0x81)) {
            ppppppuVar33 = (undefined8 ******)0x0;
            pppppppuVar21 = local_178;
          }
          else {
            pppppppuVar21 = (undefined8 *******)*local_178;
            ppppppuVar33 = local_178[1];
          }
          if (uVar35 - 0x7d < 4) {
LAB_01b21f88:
            param_5[0x16] = (ulong)local_188;
            param_5[0x17] = (ulong)ppppppuVar42;
            iVar18 = 1;
LAB_01b22814:
            *(uint *)((long)param_5 + 0xcc) = uVar38;
            goto switchD_01b1ee78_caseD_9d;
          }
          uVar35 = uVar35 - 0x82;
          if (uVar35 < 10) {
            if ((1 << (ulong)(uVar35 & 0x1f) & 0x318U) == 0) {
              if (uVar35 == 0) goto LAB_01b21f88;
            }
            else {
              uVar35 = (uint)CONCAT11(pbVar41[3],pbVar41[4]);
              if ((param_5[0x1e] != 0) && (*(uint *)(param_5[0x1e] + 8) == uVar35)) {
                param_5[0x16] = (ulong)local_188;
                param_5[0x17] = (ulong)ppppppuVar42;
                goto LAB_01b228a8;
              }
              uVar37 = uVar35 * 2;
              uVar23 = (uint)param_5[0x1a] & 0xffff0000 | uVar35;
              *(uint *)(param_5 + 0x1a) = uVar23;
              if ((int)uVar37 < *(int *)((long)param_5 + 0x24)) {
                if (((int)uVar38 < (int)uVar37) &&
                   (lVar28 = (long)(int)uVar38, lVar28 < (long)(ulong)uVar37)) {
                  uVar39 = param_5[3];
                  pvVar9 = (void *)(uVar39 + lVar28 * 4);
                  uVar24 = uVar39 + (ulong)uVar37 * 4;
                  uVar36 = (long)pvVar9 + 4;
                  if (uVar36 <= uVar24) {
                    uVar36 = uVar24;
                  }
                  memset(pvVar9,0xff,uVar36 + (lVar28 * -4 - uVar39) + 3 & 0xfffffffffffffffc);
                }
                uVar24 = param_5[3];
                *(undefined4 *)(uVar24 + (ulong)uVar37 * 4) =
                     *(undefined4 *)(uVar24 + (ulong)((int)param_5[4] - uVar35) * 4);
                if ((int)uVar38 <= (int)uVar37) {
                  uVar38 = uVar37 + 2;
                }
                local_180 = (ulong)uVar38;
                *(int *)(uVar24 + (ulong)(uVar37 | 1) * 4) = iVar19 - (int)param_5[0x14];
              }
              else {
                *(uint *)(param_5 + 0x1a) = uVar23 | 0x10000;
              }
            }
          }
          bVar22 = *pbVar40;
          local_178 = pppppppuVar21;
          if (bVar22 == 0x78) {
LAB_01b20724:
            param_2 = pbVar40 + 3;
            if (*pbVar41 != 0x81) goto LAB_01b1ee38;
            iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 3,local_188,local_180,param_5,pppppppuVar21
                                  ,local_ec + 1);
          }
          else {
            if (bVar22 == 0x7b) {
              param_5[0x16] = (ulong)local_188;
              param_5[0x17] = (ulong)ppppppuVar42;
              uVar38 = (uint)local_180;
              iVar18 = -0x3e6;
              goto LAB_01b22814;
            }
            if (ppppppuVar42 == ppppppuVar33) goto LAB_01b20724;
            if (bVar22 == 0x7a) {
              iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 3,local_188,local_180,param_5,
                                    pppppppuVar21,local_ec + 1);
              if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
              pbVar20 = pbVar41;
              if (*pbVar41 != 0x81) {
                param_2 = pbVar41;
                if (*pbVar41 < 0x88) goto LAB_01b21ce4;
                iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar41,local_188,local_180,param_5,pppppppuVar21
                                      ,local_ec + 1);
                goto switchD_01b1ee78_caseD_9d;
              }
            }
            else {
              iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar41,local_188,local_180,param_5,pppppppuVar21,
                                    local_ec + 1);
              if (iVar18 != 0) {
                if (iVar18 != -0x3e5) goto switchD_01b1ee78_caseD_9d;
                if ((byte *)param_5[0x22] != pbVar41) {
                  iVar18 = -0x3e5;
                  goto switchD_01b1ee78_caseD_9d;
                }
              }
              pbVar20 = pbVar40 + 3;
              param_2 = pbVar40 + 3;
              if (*pbVar41 != 0x81) goto LAB_01b21ce4;
            }
            iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar20,local_188,local_180,param_5,pppppppuVar21,
                                  local_ec + 1);
          }
          if (iVar18 == 0) {
            param_5[0x22] = (ulong)pbVar41;
            iVar18 = -0x3e5;
          }
          goto switchD_01b1ee78_caseD_9d;
        case 0x7c:
          ppppppuVar42 = (undefined8 ******)
                         ((long)ppppppuVar42 - (ulong)CONCAT11(pbVar40[1],pbVar40[2]));
          if ((undefined8 ******)param_5[0x14] <= ppppppuVar42) {
            if (ppppppuVar42 < (undefined8 ******)*puVar3) {
              *puVar3 = (ulong)ppppppuVar42;
            }
            goto LAB_01b206f0;
          }
          goto LAB_01b22e94;
        case 0x7d:
        case 0x7f:
          uVar24 = param_5[0x20];
          bVar15 = (int)param_5[0x1b] == 1;
          if (bVar15) {
            *(undefined4 *)(param_5 + 0x1b) = 0;
          }
          do {
            iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 3,local_188,local_180 & 0xffffffff,param_5,
                                  0,local_ec + 1);
            if ((iVar18 == 1) || (iVar18 == -999)) {
              local_188 = (undefined8 ******)param_5[0x16];
              bVar22 = *pbVar40;
              break;
            }
            param_5[0x20] = uVar24;
            if (iVar18 == -0x3e0) {
              pbVar41 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
              if (pbVar41 <= (byte *)param_5[0x16]) goto LAB_01b221dc;
              if (*pbVar40 == 0x77) goto LAB_01b1f694;
              bVar22 = *pbVar41;
              if (bVar22 != 0x77) goto LAB_01b221dc;
            }
            else {
              if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
              pbVar41 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
LAB_01b1f694:
              bVar22 = *pbVar41;
            }
            pbVar40 = pbVar41;
          } while (bVar22 == 0x77);
          if (bVar22 != 0x78) {
            if (!bVar15) {
              do {
                pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
              } while (*pbVar40 == 0x77);
              uVar35 = *(uint *)((long)param_5 + 0xcc);
LAB_01b206e0:
              local_180 = (ulong)uVar35;
              goto LAB_01b206f0;
            }
            goto LAB_01b228a8;
          }
          goto LAB_01b22e94;
        case 0x7e:
        case 0x80:
          uVar24 = param_5[0x20];
          bVar15 = (int)param_5[0x1b] == 1;
          if (bVar15) {
            *(undefined4 *)(param_5 + 0x1b) = 0;
          }
          do {
            iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 3,local_188,local_180 & 0xffffffff,param_5,
                                  0,local_ec + 1);
            param_5[0x20] = uVar24;
            if (iVar18 < 0) {
              if (iVar18 != -0x3e0) {
                if (iVar18 + 0x3e4U < 4) goto LAB_01b205f8;
                if (iVar18 == -999) goto LAB_01b22e94;
                goto switchD_01b1ee78_caseD_9d;
              }
              pbVar41 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
              if (pbVar41 <= (byte *)param_5[0x16]) goto LAB_01b205f8;
              if (*pbVar40 == 0x77) goto LAB_01b1f768;
              bVar22 = *pbVar41;
              if (bVar22 != 0x77) goto LAB_01b205f8;
            }
            else {
              if (iVar18 != 0) {
                if (iVar18 == 1) goto LAB_01b22e94;
                goto switchD_01b1ee78_caseD_9d;
              }
              pbVar41 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
LAB_01b1f768:
              bVar22 = *pbVar41;
            }
            pbVar40 = pbVar41;
          } while (bVar22 == 0x77);
          goto LAB_01b20614;
        case 0x81:
        case 0x83:
        case 0x88:
          goto switchD_01b1ee78_caseD_81;
        case 0x82:
          uVar24 = param_5[0x20];
          pbVar41 = pbVar40;
          do {
            iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar41 + 3,local_188,local_180 & 0xffffffff,param_5,
                                  local_178,local_ec + 1);
            if (iVar18 == -0x3e0) {
              pbVar20 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
              if ((pbVar20 <= (byte *)param_5[0x16]) || ((*pbVar41 != 0x77 && (*pbVar20 != 0x77))))
              goto LAB_01b221dc;
            }
            else {
              if (iVar18 != 0) {
                if (iVar18 != 1) goto switchD_01b1ee78_caseD_9d;
                local_188 = (undefined8 ******)param_5[0x16];
                bVar22 = *pbVar41;
                pbVar20 = pbVar41;
                break;
              }
              pbVar20 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
            }
            param_5[0x20] = uVar24;
            bVar22 = *pbVar20;
            pbVar41 = pbVar20;
          } while (bVar22 == 0x77);
          if ((bVar22 != 0x82) && (bVar22 != 0x77)) goto LAB_01b22e94;
          do {
            pbVar20 = pbVar20 + CONCAT11(pbVar20[1],pbVar20[2]);
            bVar22 = *pbVar20;
          } while (bVar22 == 0x77);
          local_180 = (ulong)*(uint *)((long)param_5 + 0xcc);
          param_1 = (undefined8 ******)param_5[0x17];
          if ((bVar22 != 0x78) && (param_1 != ppppppuVar42)) {
            if (bVar22 == 0x7a) {
              iVar18 = FUN_01b1ed80(param_1,pbVar20 + 3,local_188,local_180,param_5,local_178,
                                    local_ec + 1);
              param_2 = pbVar40;
              if (iVar18 == 0) goto LAB_01b21ce4;
              goto switchD_01b1ee78_caseD_9d;
            }
            iVar18 = FUN_01b1ed80(param_1,pbVar40,local_188,local_180,param_5,local_178,local_ec + 1
                                 );
            if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
            param_2 = pbVar20 + 3;
            goto LAB_01b21ce4;
          }
          param_2 = pbVar20 + 3;
          ppppppuVar42 = param_1;
          goto LAB_01b1ee38;
        case 0x84:
        case 0x89:
          goto switchD_01b1ee78_caseD_84;
        case 0x85:
        case 0x8a:
          uVar35 = (uint)CONCAT11(pbVar40[3],pbVar40[4]);
          if (*(int *)((long)param_5 + 0x24) <= (int)(uVar35 * 2)) {
switchD_01b1ee78_caseD_81:
            if (0x87 < uVar23 || bVar22 == 0x81) goto LAB_01b219fc;
            while ((pbVar41 = pbVar40, (int)param_5[0x12] != 0 ||
                   (pbVar40[CONCAT11(pbVar40[1],pbVar40[2])] == 0x77))) {
              while( true ) {
                uVar36 = param_5[0x20];
                uVar24 = param_5[0x1a];
                iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar41 + (byte)(&DAT_01e65378)[*pbVar41],
                                      local_188,local_180,param_5,local_178,local_ec + 1);
                if (iVar18 == -0x3e0) {
                  pbVar40 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
                  if ((pbVar40 <= (byte *)param_5[0x16]) ||
                     ((*pbVar41 != 0x77 && (*pbVar40 != 0x77)))) goto LAB_01b221dc;
                }
                else {
                  if (iVar18 != 0) {
                    if (iVar18 == -0x3e5) {
                      bVar22 = *pbVar41;
                      if (bVar22 != 0x81) {
                        while (bVar22 == 0x77) {
                          pbVar41 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
                          bVar22 = *pbVar41;
                        }
                        pbVar41 = pbVar41 + -(ulong)CONCAT11(pbVar41[1],pbVar41[2]);
                      }
                      iVar18 = 0;
                      if ((byte *)param_5[0x22] != pbVar41) {
                        iVar18 = -0x3e5;
                      }
                    }
                    goto switchD_01b1ee78_caseD_9d;
                  }
                  pbVar40 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
                }
                param_5[0x20] = uVar36;
                if (*pbVar40 != 0x77) goto LAB_01b22e94;
                *(int *)(param_5 + 0x1a) = (int)uVar24;
                if (0x87 >= uVar23 && bVar22 != 0x81) break;
LAB_01b219fc:
                *(undefined4 *)(param_5 + 0x1b) = 2;
                pbVar41 = pbVar40;
              }
            }
            param_2 = pbVar40 + (byte)(&DAT_01e65378)[*pbVar40];
            goto LAB_01b21ce4;
          }
          uVar36 = param_5[3];
          lVar28 = (ulong)(uVar35 * 2) * 4;
          uVar25 = *(undefined8 *)(uVar36 + lVar28);
          uVar24 = param_5[0x1a];
          uVar37 = (int)param_5[4] - uVar35;
          uVar10 = *(undefined4 *)(uVar36 + (ulong)uVar37 * 4);
          uVar39 = param_5[0x20];
          *(int *)(uVar36 + (ulong)uVar37 * 4) = iVar19 - (int)param_5[0x14];
          goto LAB_01b22af0;
        case 0x86:
        case 0x8b:
switchD_01b1ee78_caseD_86:
          bVar15 = bVar14;
          uVar35 = (uint)CONCAT11(pbVar40[3],pbVar40[4]);
          if ((int)(uVar35 * 2) < *(int *)((long)param_5 + 0x24)) {
            lVar28 = (ulong)(uVar35 * 2) * 4;
            uVar25 = *(undefined8 *)(param_5[3] + lVar28);
            uVar24 = param_5[0x13];
            bVar16 = false;
            uVar10 = *(undefined4 *)(param_5[3] + (ulong)((int)param_5[4] - uVar35) * 4);
            iVar19 = (int)pbVar40;
LAB_01b201e4:
            ppppppuVar33 = ppppppuVar42;
            uVar36 = param_5[0x1a];
            do {
              *(int *)(param_5[3] + (ulong)((int)param_5[4] - uVar35) * 4) =
                   (int)ppppppuVar33 - (int)param_5[0x14];
              if (0x87 < bVar22) {
                *(undefined4 *)(param_5 + 0x1b) = 2;
              }
              iVar18 = FUN_01b1ed80(ppppppuVar33,pbVar40 + (byte)(&DAT_01e65378)[*pbVar40],local_188
                                    ,local_180,param_5,local_178,local_ec + 1);
              if (iVar18 == -0x3e0) {
                if ((pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]) <= (byte *)param_5[0x16]) ||
                   ((*pbVar40 != 0x77 && (pbVar40[CONCAT11(pbVar40[1],pbVar40[2])] != 0x77))))
                goto LAB_01b221dc;
              }
              else if (iVar18 != 0) goto LAB_01b202bc;
              *(int *)(param_5 + 0x1a) = (int)uVar36;
              pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
              if (*pbVar40 != 0x77) {
                if (!bVar16) {
                  uVar24 = param_5[3];
                  *(undefined8 *)(uVar24 + lVar28) = uVar25;
                  *(undefined4 *)(uVar24 + (ulong)((int)param_5[4] - uVar35) * 4) = uVar10;
                }
                goto LAB_01b20644;
              }
            } while( true );
          }
          goto switchD_01b1ee78_caseD_84;
        case 0x87:
        case 0x8c:
          param_2 = pbVar40 + 3;
          bVar26 = *param_2;
          uVar35 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          if (bVar26 == 0x76) {
            if (pcre_callout != (code *)0x0) {
              local_170 = 2;
              local_16c = (uint)pbVar40[4];
              local_168 = param_5[3];
              local_160 = param_5[0x14];
              iStack_150 = (int)local_160;
              local_158 = (int)param_5[0x15] - iStack_150;
              local_154 = (int)local_188 - iStack_150;
              iStack_150 = iVar19 - iStack_150;
              uVar37 = uVar38;
              if ((int)uVar38 < 0) {
                uVar37 = uVar38 + 1;
              }
              local_14c = (int)uVar37 >> 1;
              local_138 = (uint)CONCAT11(pbVar40[5],pbVar40[6]);
              local_134 = (uint)CONCAT11(pbVar40[7],pbVar40[8]);
              local_148 = (uint)(ushort)param_5[0x1a];
              if (local_148 == 0) {
                local_148 = 0xffffffff;
              }
              local_140 = param_5[0x1f];
              local_130 = param_5[0x21];
              iVar18 = (*pcre_callout)(&local_170);
              if (0 < iVar18) {
LAB_01b22278:
                iVar18 = 0;
                goto switchD_01b1ee78_caseD_9d;
              }
              if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
            }
            param_2 = pbVar40 + 9;
            bVar26 = *param_2;
            uVar35 = uVar35 - 6;
          }
          uVar37 = (uint)bVar26;
          switch(uVar37) {
          case 0x8d:
            uVar37 = (uint)CONCAT11(param_2[1],param_2[2]) * 2;
            if (((int)uVar38 <= (int)uVar37) || (*(int *)(param_5[3] + (ulong)uVar37 * 4) < 0))
            break;
            uVar37 = 0x8d;
            goto LAB_01b21c6c;
          case 0x8e:
            if (CONCAT11(param_2[3],param_2[4]) != 0) {
              iVar18 = CONCAT11(param_2[3],param_2[4]) + 1;
              puVar32 = (undefined1 *)
                        (param_5[8] +
                         (ulong)((uint)CONCAT11(param_2[1],param_2[2]) *
                                *(int *)((long)param_5 + 0x34)) + 1);
              do {
                uVar37 = (uint)CONCAT11(puVar32[-1],*puVar32) * 2;
                if (((int)uVar37 < (int)uVar38) && (-1 < *(int *)(param_5[3] + (ulong)uVar37 * 4)))
                {
                  uVar37 = 0x8e;
                  goto LAB_01b21c6c;
                }
                iVar18 = iVar18 + -1;
                puVar32 = puVar32 + *(int *)((long)param_5 + 0x34);
              } while (1 < iVar18);
            }
            break;
          case 0x8f:
            if ((param_5[0x1e] != 0) &&
               ((CONCAT11(param_2[1],param_2[2]) == 0xffff ||
                ((uint)CONCAT11(param_2[1],param_2[2]) == *(uint *)(param_5[0x1e] + 8))))) {
              uVar37 = 0x8f;
              goto LAB_01b21c6c;
            }
            break;
          case 0x90:
            if ((param_5[0x1e] != 0) && (CONCAT11(param_2[3],param_2[4]) != 0)) {
              iVar18 = CONCAT11(param_2[3],param_2[4]) + 1;
              puVar32 = (undefined1 *)
                        (param_5[8] +
                         (ulong)((uint)CONCAT11(param_2[1],param_2[2]) *
                                *(int *)((long)param_5 + 0x34)) + 1);
              do {
                if ((uint)CONCAT11(puVar32[-1],*puVar32) == *(uint *)(param_5[0x1e] + 8)) {
                  uVar37 = 0x90;
                  goto LAB_01b21c6c;
                }
                iVar18 = iVar18 + -1;
                puVar32 = puVar32 + *(int *)((long)param_5 + 0x34);
              } while (1 < iVar18);
            }
            break;
          case 0x91:
            break;
          default:
            if (uVar37 == 0x9d) break;
            *(undefined4 *)(param_5 + 0x1b) = 1;
            iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,0,local_ec + 1);
            if ((iVar18 == -0x3e0) || (iVar18 == 0)) break;
            if (iVar18 != 1) goto switchD_01b1ee78_caseD_9d;
            uVar35 = *(uint *)((long)param_5 + 0xcc);
            if ((int)*(uint *)((long)param_5 + 0xcc) <= (int)uVar38) {
              uVar35 = uVar38;
            }
            local_180 = (ulong)uVar35;
            pbVar40 = param_2 + 1;
            if (*param_2 != 0x92) {
              pbVar40 = param_2;
            }
            do {
              pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
            } while (*pbVar40 == 0x77);
            param_2 = pbVar40 + (3 - (ulong)(byte)(&DAT_01e65378)[uVar37]);
LAB_01b21c6c:
            param_2 = param_2 + (byte)(&DAT_01e65378)[uVar37];
LAB_01b21c7c:
            if (bVar22 == 0x8c) {
              *(undefined4 *)(param_5 + 0x1b) = 2;
              iVar18 = local_ec + 1;
              goto LAB_01b21e44;
            }
            goto LAB_01b21ce4;
          }
          param_2 = param_2 + (int)uVar35;
          if (param_2[-3] == 0x77) goto LAB_01b21c7c;
          goto LAB_01b1ee38;
        case 0x92:
          pbVar40 = pbVar40 + 1;
          iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40,local_188,local_180,param_5,local_178,
                                local_ec + 1);
          if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
          do {
            pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
          } while (*pbVar40 == 0x77);
          param_2 = pbVar40 + 3;
          goto LAB_01b1ee38;
        case 0x93:
          pbVar41 = pbVar40 + 1;
          do {
            pbVar41 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
          } while (*pbVar41 == 0x77);
          iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar41 + 3,local_188,local_180,param_5,local_178,
                                local_ec + 1);
          param_2 = pbVar40 + 1;
          if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
          goto LAB_01b1ee38;
        case 0x94:
          pbVar40 = pbVar40 + 1;
          bVar22 = *pbVar40;
          bVar14 = true;
          if ((bVar22 == 0x86) || (bVar15 = true, bVar22 == 0x8b)) goto switchD_01b1ee78_caseD_86;
switchD_01b1ee78_caseD_84:
          uVar24 = param_5[0x13];
          uVar36 = param_5[0x1a];
          bVar16 = false;
          pbVar41 = pbVar40;
          do {
            while( true ) {
              ppppppuVar33 = ppppppuVar42;
              if (0x87 < bVar22) {
                *(undefined4 *)(param_5 + 0x1b) = 2;
              }
              iVar18 = FUN_01b1ed80(ppppppuVar33,pbVar41 + (byte)(&DAT_01e65378)[*pbVar41],local_188
                                    ,local_180,param_5,local_178,local_ec + 1);
              if (iVar18 != -0x3e0) break;
              pbVar20 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
              if (pbVar20 <= (byte *)param_5[0x16]) goto LAB_01b221dc;
              if (*pbVar41 == 0x77) {
LAB_01b203e4:
                if (*pbVar20 != 0x77) goto LAB_01b20444;
              }
              else if (*pbVar20 != 0x77) goto LAB_01b221dc;
              *(int *)(param_5 + 0x1a) = (int)uVar36;
              pbVar41 = pbVar20;
              ppppppuVar42 = ppppppuVar33;
            }
            if (iVar18 == 0) {
              pbVar20 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
              goto LAB_01b203e4;
            }
            if (iVar18 != -0x3e6) goto switchD_01b1ee78_caseD_9d;
            local_188 = (undefined8 ******)param_5[0x16];
            bVar16 = true;
            local_180 = (ulong)*(uint *)((long)param_5 + 0xcc);
            pbVar20 = (byte *)(param_5[0x13] + (long)((int)pbVar40 - (int)uVar24));
            pbVar41 = pbVar20;
            ppppppuVar42 = (undefined8 ******)param_5[0x17];
          } while (ppppppuVar33 != (undefined8 ******)param_5[0x17]);
          do {
            bVar16 = true;
            pbVar20 = pbVar20 + CONCAT11(pbVar20[1],pbVar20[2]);
          } while (*pbVar20 == 0x77);
LAB_01b20444:
          if (!bVar16 && !bVar15) goto LAB_01b22e94;
          param_2 = pbVar20 + 3;
          ppppppuVar42 = ppppppuVar33;
          goto LAB_01b1ee38;
        case 0x95:
          pbVar41 = pbVar40 + 2;
          param_5[0x20] = 0;
          param_5[0x21] = (ulong)pbVar41;
          iVar18 = FUN_01b1ed80(ppppppuVar42,
                                pbVar40 + (ulong)pbVar40[1] + (ulong)(byte)(&DAT_01e65378)[*pbVar40]
                                ,local_188,local_180,param_5,local_178,local_ec + 1);
          if (iVar18 == 1) {
LAB_01b220ac:
            if (param_5[0x20] == 0) {
              param_5[0x20] = (ulong)pbVar41;
              goto switchD_01b1ee78_caseD_9d;
            }
            if (iVar18 != -0x3e1) goto switchD_01b1ee78_caseD_9d;
          }
          else if (iVar18 != -0x3e1) {
            if (iVar18 == -999) goto LAB_01b220ac;
            goto switchD_01b1ee78_caseD_9d;
          }
          iVar18 = strcmp((char *)pbVar41,(char *)param_5[0x16]);
          if (iVar18 == 0) {
            param_5[0x16] = (ulong)ppppppuVar42;
            iVar18 = -0x3e2;
          }
          else {
            iVar18 = -0x3e1;
          }
          goto switchD_01b1ee78_caseD_9d;
        case 0x96:
          iVar19 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 1,local_188,local_180,param_5,local_178,
                                local_ec + 1);
          iVar18 = -0x3e3;
          goto LAB_01b2221c;
        case 0x97:
          param_5[0x20] = 0;
          param_5[0x21] = (ulong)(pbVar40 + 2);
          iVar18 = FUN_01b1ed80(ppppppuVar42,
                                pbVar40 + (ulong)pbVar40[1] + (ulong)(byte)(&DAT_01e65378)[*pbVar40]
                                ,local_188,local_180,param_5,local_178,local_ec + 1);
          if (iVar18 == 1) {
LAB_01b22184:
            if (param_5[0x20] == 0) {
              param_5[0x20] = (ulong)(pbVar40 + 2);
            }
            if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
          }
          else if (iVar18 != 0) {
            if (iVar18 == -999) goto LAB_01b22184;
            goto switchD_01b1ee78_caseD_9d;
          }
          iVar18 = -0x3e3;
          goto switchD_01b1ee78_caseD_9d;
        case 0x98:
          iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 1,local_188,local_180,param_5,local_178,
                                local_ec + 1);
          if (iVar18 == 0) {
            param_5[0x16] = (ulong)ppppppuVar42;
            iVar18 = -0x3e2;
          }
          goto switchD_01b1ee78_caseD_9d;
        case 0x99:
          uVar35 = (int)param_5[7] + 1;
          *(uint *)(param_5 + 7) = uVar35;
          if (*(uint *)((long)param_5 + 0x3c) < uVar35) {
            iVar18 = FUN_01b1ed80(ppppppuVar42,
                                  pbVar40 + (ulong)pbVar40[1] +
                                            (ulong)(byte)(&DAT_01e65378)[*pbVar40],local_188,
                                  local_180,param_5,local_178,local_ec + 1);
            if (iVar18 == 0) {
              param_5[0x16] = (ulong)(pbVar40 + 2);
              iVar18 = -0x3e1;
            }
            goto switchD_01b1ee78_caseD_9d;
          }
          param_2 = pbVar40 + (ulong)pbVar40[1] + (ulong)(byte)(&DAT_01e65378)[*pbVar40];
          goto LAB_01b1ee38;
        case 0x9a:
          iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 1,local_188,local_180,param_5,local_178,
                                local_ec + 1);
          if (iVar18 == 0) goto LAB_01b221d8;
          goto switchD_01b1ee78_caseD_9d;
        case 0x9b:
          param_5[0x20] = 0;
          param_5[0x21] = (ulong)(pbVar40 + 2);
          iVar18 = FUN_01b1ed80(ppppppuVar42,
                                pbVar40 + (ulong)pbVar40[1] + (ulong)(byte)(&DAT_01e65378)[*pbVar40]
                                ,local_188,local_180,param_5,local_178,local_ec + 1);
          if (iVar18 != 1) {
            if (iVar18 == 0) goto LAB_01b221d8;
            if (iVar18 != -999) goto switchD_01b1ee78_caseD_9d;
          }
          if (param_5[0x20] == 0) {
            param_5[0x20] = (ulong)(pbVar40 + 2);
          }
          if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
LAB_01b221d8:
          param_5[0x16] = (ulong)pbVar40;
          goto LAB_01b221dc;
        case 0x9c:
          iVar19 = FUN_01b1ed80(ppppppuVar42,pbVar40 + 1,local_188,local_180,param_5,local_178,
                                local_ec + 1);
          iVar18 = -0x3e4;
LAB_01b2221c:
          if (iVar19 != 0) {
            iVar18 = iVar19;
          }
        case 0x9d:
          goto switchD_01b1ee78_caseD_9d;
        case 0xa0:
          uVar37 = (uint)CONCAT11(pbVar40[1],pbVar40[2]);
          uVar35 = uVar37 * 2;
          uVar23 = (uint)param_5[0x1a] & 0xffff0000 | uVar37;
          *(uint *)(param_5 + 0x1a) = uVar23;
          if ((int)uVar35 < *(int *)((long)param_5 + 0x24)) {
            uVar24 = param_5[3];
            puVar1 = (undefined4 *)(uVar24 + (ulong)uVar35 * 4);
            *puVar1 = *(undefined4 *)(uVar24 + (ulong)((int)param_5[4] - uVar37) * 4);
            *(int *)(uVar24 + (ulong)(uVar35 | 1) * 4) = iVar19 - (int)param_5[0x14];
            if ((int)uVar38 <= (int)uVar35) {
              lVar28 = (long)(int)uVar38;
              if (lVar28 < (long)(ulong)uVar35) {
                pvVar9 = (void *)(uVar24 + lVar28 * 4);
                puVar8 = (undefined4 *)((long)pvVar9 + 4);
                if (puVar8 <= puVar1) {
                  puVar8 = puVar1;
                }
                memset(pvVar9,0xff,(long)puVar8 + (lVar28 * -4 - uVar24) + 3 & 0xfffffffffffffffc);
              }
              uVar35 = uVar35 + 2;
              goto LAB_01b206e0;
            }
          }
          else {
            *(uint *)(param_5 + 0x1a) = uVar23 | 0x10000;
          }
LAB_01b206f0:
          param_2 = pbVar40 + 3;
          goto LAB_01b1ee38;
        case 0xa1:
          pbVar40 = pbVar40 + 1;
          do {
            pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
          } while (*pbVar40 == 0x77);
          goto LAB_01b20618;
        }
LAB_01b21ee8:
        iVar18 = (int)*puVar5;
        if (iVar18 != 0) {
LAB_01b21ef4:
          if ((undefined8 ******)*puVar3 < ppppppuVar42) goto LAB_01b21e74;
        }
        goto LAB_01b22e94;
      }
      iVar18 = -0x15;
    }
    else {
LAB_01b21e18:
      iVar18 = -8;
    }
  }
  goto switchD_01b1ee78_caseD_9d;
LAB_01b202bc:
  if (iVar18 != -0x3e6) goto switchD_01b1ee78_caseD_9d;
  local_188 = (undefined8 ******)param_5[0x16];
  local_180 = (ulong)*(uint *)((long)param_5 + 0xcc);
  pbVar40 = (byte *)(param_5[0x13] + (long)(iVar19 - (int)uVar24));
  bVar16 = true;
  ppppppuVar42 = (undefined8 ******)param_5[0x17];
  if (ppppppuVar33 == (undefined8 ******)param_5[0x17]) goto LAB_01b202f0;
  goto LAB_01b201e4;
LAB_01b202f0:
  do {
    pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
  } while (*pbVar40 == 0x77);
LAB_01b20644:
  if (!bVar16 && !bVar15) goto LAB_01b22e94;
  param_2 = pbVar40 + 3;
  ppppppuVar42 = ppppppuVar33;
  goto LAB_01b1ee38;
LAB_01b22af0:
  do {
    if (0x87 < bVar22) {
      *(undefined4 *)(param_5 + 0x1b) = 2;
    }
    iVar18 = FUN_01b1ed80(ppppppuVar42,pbVar40 + (byte)(&DAT_01e65378)[*pbVar40],local_188,local_180
                          ,param_5,local_178,local_ec + 1);
    if (iVar18 == -0x3e0) {
      if ((pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]) <= (byte *)param_5[0x16]) ||
         ((*pbVar40 != 0x77 && (pbVar40[CONCAT11(pbVar40[1],pbVar40[2])] != 0x77))))
      goto LAB_01b221dc;
    }
    else if (iVar18 != 0) {
      if (iVar18 == -0x3e5) goto LAB_01b22d2c;
      goto switchD_01b1ee78_caseD_9d;
    }
    *(int *)(param_5 + 0x1a) = (int)uVar24;
    bVar26 = pbVar40[1];
    bVar11 = pbVar40[2];
    param_5[0x20] = uVar39;
    pbVar40 = pbVar40 + CONCAT11(bVar26,bVar11);
  } while (*pbVar40 == 0x77);
  iVar18 = 0;
LAB_01b22d2c:
  uVar24 = param_5[3];
  *(undefined8 *)(uVar24 + lVar28) = uVar25;
  *(undefined4 *)(uVar24 + (ulong)((int)param_5[4] - uVar35) * 4) = uVar10;
  goto switchD_01b1ee78_caseD_9d;
LAB_01b205f8:
  do {
    pbVar40 = pbVar40 + CONCAT11(pbVar40[1],pbVar40[2]);
  } while (*pbVar40 == 0x77);
LAB_01b20614:
  if (bVar15) {
LAB_01b228a8:
    iVar18 = 1;
    goto switchD_01b1ee78_caseD_9d;
  }
LAB_01b20618:
  param_2 = pbVar40 + 3;
  goto LAB_01b1ee38;
LAB_01b221dc:
  iVar18 = -0x3e0;
  goto switchD_01b1ee78_caseD_9d;
code_r0x01b20b6c:
  param_5[0x1e] = (ulong)&local_118;
  pbVar41 = pbVar41 + CONCAT11(pbVar41[1],pbVar41[2]);
  uVar24 = 0x77;
  if (*pbVar41 != 0x77) {
    param_5[0x1e] = (ulong)local_118;
LAB_01b22258:
    if (local_108 != auStack_e8) {
      (*(code *)pcre_free)();
    }
    goto LAB_01b22278;
  }
  goto LAB_01b20adc;
  while( true ) {
    uVar38 = uVar38 + 1;
    ppppppuVar33 = (undefined8 ******)((long)ppppppuVar33 + (long)iVar18);
    if ((int)uVar23 <= (int)uVar38) break;
LAB_01b22cc8:
    iVar18 = FUN_01b22f54(uVar35,ppppppuVar33,iVar19,param_5,bVar15);
    if (iVar18 < 0) {
      if ((((iVar18 == -2) && ((int)*puVar5 != 0)) && (*puVar3 < *puVar2)) &&
         (*(undefined4 *)puVar7 = 1, 1 < (int)*puVar5)) goto LAB_01b22e88;
      break;
    }
  }
  iVar18 = 0;
  if (ppppppuVar42 <= ppppppuVar33) {
LAB_01b22da4:
    do {
      iVar18 = FUN_01b1ed80(ppppppuVar33,param_2,local_188,local_180,param_5,local_178,local_ec + 1)
      ;
      if (iVar18 != 0) break;
      ppppppuVar33 = (undefined8 ******)((long)ppppppuVar33 - (long)iVar19);
    } while (ppppppuVar42 <= ppppppuVar33);
  }
  goto switchD_01b1ee78_caseD_9d;
joined_r0x01b22958:
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  iVar27 = iVar27 + 1;
  if ((int)uVar23 <= iVar27) {
    iVar18 = 0;
    goto switchD_01b1ee78_caseD_9d;
  }
  iVar18 = FUN_01b22f54(uVar35,ppppppuVar42,iVar19,param_5,bVar15);
  if (-1 < iVar18) {
    ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 + (long)iVar18);
    iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
    goto joined_r0x01b22958;
  }
  if (iVar18 == -2) {
    ppppppuVar42 = (undefined8 ******)*puVar2;
  }
  if ((((int)*puVar5 == 0) || (ppppppuVar42 < (undefined8 ******)*puVar2)) ||
     ((ppppppuVar42 <= (undefined8 ******)*puVar3 || (*(undefined4 *)puVar7 = 1, (int)*puVar5 < 2)))
     ) goto LAB_01b22e94;
LAB_01b22e88:
  iVar18 = -0xc;
  goto switchD_01b1ee78_caseD_9d;
joined_r0x01b229e4:
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  if ((int)uVar38 <= (int)uVar35) goto LAB_01b22e94;
  if ((undefined8 ******)*puVar2 <= ppppppuVar33) {
    if ((((int)*puVar5 == 0) || (ppppppuVar33 <= (undefined8 ******)*puVar3)) ||
       (*(undefined4 *)puVar7 = 1, (int)*puVar5 < 2)) {
LAB_01b22e20:
      iVar18 = 0;
    }
    else {
      iVar18 = -0xc;
    }
    goto switchD_01b1ee78_caseD_9d;
  }
  if ((1 << (ulong)(*(byte *)ppppppuVar33 & 7) &
      (uint)pbVar40[(ulong)(*(byte *)ppppppuVar33 >> 3) + 1]) == 0) goto LAB_01b22e20;
  ppppppuVar33 = (undefined8 ******)((long)ppppppuVar33 + 1);
  uVar35 = uVar35 + 1;
  iVar18 = FUN_01b1ed80(ppppppuVar33,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  goto joined_r0x01b229e4;
LAB_01b21e90:
  iVar18 = (int)*puVar5;
  if ((iVar18 == 0) || (ppppppuVar33 <= (undefined8 ******)*puVar3)) goto LAB_01b22e94;
LAB_01b21e74:
  *(undefined4 *)puVar7 = 1;
  if (1 < iVar18) goto LAB_01b21e88;
  goto LAB_01b22e94;
LAB_01b222dc:
  iVar19 = iVar19 + 1;
  if ((int)uVar37 <= iVar19) goto LAB_01b22e94;
  ppppppuVar42 = (undefined8 ******)*puVar2;
  if (ppppppuVar42 <= param_1) goto LAB_01b2290c;
  if (local_1bc != 0xc) {
    ppppppuVar33 = (undefined8 ******)((long)param_1 + 1);
    bVar22 = *(byte *)param_1;
    uVar24 = (ulong)bVar22;
    iVar18 = -0xe;
    if (0xf < local_1bc - 6) goto switchD_01b1ee78_caseD_9d;
    uVar35 = (uint)bVar22;
    uVar38 = (uint)bVar22;
    ppppppuVar43 = ppppppuVar33;
    switch(local_1bc) {
    case 6:
      bVar22 = *(byte *)(*puVar6 + uVar24) >> 2;
      goto joined_r0x01b22478;
    case 7:
      bVar22 = *(byte *)(*puVar6 + uVar24) >> 2;
      goto joined_r0x01b2248c;
    case 8:
      bVar22 = *(byte *)(*puVar6 + uVar24);
      goto joined_r0x01b22478;
    case 9:
      bVar22 = *(byte *)(*puVar6 + uVar24);
      goto joined_r0x01b2248c;
    case 10:
      bVar22 = *(byte *)(*puVar6 + uVar24) >> 4;
joined_r0x01b22478:
      if ((bVar22 & 1) != 0) goto LAB_01b22e94;
      break;
    case 0xb:
      bVar22 = *(byte *)(*puVar6 + uVar24) >> 4;
joined_r0x01b2248c:
      if ((bVar22 & 1) == 0) goto LAB_01b22e94;
      break;
    default:
      goto switchD_01b1ee78_caseD_9d;
    case 0xd:
    case 0xe:
      break;
    case 0x11:
      if (bVar22 < 0xd) {
        if (uVar38 - 0xb < 2) {
LAB_01b22564:
          if (*(int *)((long)param_5 + 0x8c) != 0) goto LAB_01b22e94;
        }
        else {
          iVar18 = 0;
          if (uVar38 != 10) goto switchD_01b1ee78_caseD_9d;
        }
      }
      else {
        if (uVar38 == 0x85) goto LAB_01b22564;
        iVar18 = 0;
        if (uVar38 != 0xd) goto switchD_01b1ee78_caseD_9d;
        if ((ppppppuVar33 < ppppppuVar42) &&
           (ppppppuVar43 = (undefined8 ******)((long)param_1 + 2),
           *(byte *)((long)param_1 + 1) != 10)) {
          ppppppuVar43 = ppppppuVar33;
        }
      }
      break;
    case 0x12:
      if ((uVar35 == 9) || (uVar38 == 0x20)) goto LAB_01b22c68;
      iVar18 = 0;
      if (uVar38 == 0xa0) goto switchD_01b1ee78_caseD_9d;
      break;
    case 0x13:
      if (((uVar38 != 9) && (uVar38 != 0x20)) && (uVar35 != 0xa0)) goto LAB_01b22e94;
      break;
    case 0x14:
      if (uVar35 - 10 < 4) goto LAB_01b22e94;
      iVar18 = 0;
      if (uVar35 == 0x85) goto switchD_01b1ee78_caseD_9d;
      break;
    case 0x15:
      if ((3 < uVar35 - 10) && (uVar35 != 0x85)) goto LAB_01b22e94;
    }
switchD_01b22348_caseD_d:
    iVar18 = FUN_01b1ed80(ppppppuVar43,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
    param_1 = ppppppuVar43;
    if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
    goto LAB_01b222dc;
  }
  if ((int)param_5[5] == 0) {
    if (((param_1 <= (undefined8 ******)((long)ppppppuVar42 - (long)*piVar4)) &&
        (*(byte *)param_1 == (byte)param_5[9])) &&
       ((*piVar4 == 1 || (*(byte *)((long)param_1 + 1) == *(byte *)((long)param_5 + 0x49)))))
    goto LAB_01b22e94;
  }
  else {
    iVar18 = FUN_01b23264(param_1,(int)param_5[5],ppppppuVar42,piVar4,0);
    if (iVar18 != 0) goto LAB_01b22e94;
  }
  ppppppuVar43 = (undefined8 ******)((long)param_1 + 1);
  if ((((((int)*puVar5 == 0) || (ppppppuVar43 < (undefined8 ******)*puVar2)) ||
       ((int)param_5[5] != 0)) || ((*piVar4 != 2 || (*(byte *)param_1 != (byte)param_5[9])))) ||
     (*(undefined4 *)puVar7 = 1, (int)*puVar5 < 2)) goto switchD_01b22348_caseD_d;
LAB_01b21e88:
  iVar18 = -0xc;
  goto switchD_01b1ee78_caseD_9d;
LAB_01b217d8:
  iVar18 = (int)*puVar5;
  ppppppuVar33 = ppppppuVar42;
  if (iVar18 != 0) {
LAB_01b217e4:
    ppppppuVar42 = ppppppuVar33;
    if ((undefined8 ******)*puVar3 < ppppppuVar33) {
LAB_01b21800:
      *(undefined4 *)puVar7 = 1;
      ppppppuVar42 = ppppppuVar33;
      if (1 < iVar18) {
LAB_01b22c08:
        iVar18 = -0xc;
        goto switchD_01b1ee78_caseD_9d;
      }
    }
  }
LAB_01b21908:
  if (!bVar13) goto joined_r0x01b21acc;
  goto LAB_01b1ee38;
joined_r0x01b21acc:
  ppppppuVar33 = ppppppuVar42;
  if (ppppppuVar33 != param_1) {
    iVar18 = FUN_01b1ed80(ppppppuVar33,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
    if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
    ppppppuVar43 = (undefined8 ******)((long)ppppppuVar33 - 1);
    ppppppuVar42 = ppppppuVar43;
    if ((((local_1bc == 0x11) && (param_1 < ppppppuVar43)) && (*(byte *)ppppppuVar43 == 10)) &&
       (ppppppuVar42 = (undefined8 ******)((long)ppppppuVar33 - 2U),
       *(byte *)((long)ppppppuVar33 - 2U) != 0xd)) {
      ppppppuVar42 = ppppppuVar43;
    }
    goto joined_r0x01b21acc;
  }
LAB_01b21ce4:
  uVar24 = *param_5;
  *param_5 = uVar24 + 1;
  if (param_5[1] <= uVar24) goto LAB_01b21e18;
  iVar18 = -0x15;
  if (param_5[2] <= (ulong)local_ec) goto switchD_01b1ee78_caseD_9d;
  goto LAB_01b1ee18;
joined_r0x01b227a8:
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  if ((int)uVar37 <= (int)uVar35) goto LAB_01b22e94;
  if ((undefined8 ******)*puVar2 <= param_1) {
    iVar18 = (int)*puVar5;
    if ((iVar18 == 0) || (param_1 <= (undefined8 ******)*puVar3)) goto LAB_01b22cac;
    goto LAB_01b22c90;
  }
  if (bVar22 == *(byte *)param_1) goto LAB_01b22cac;
  param_1 = (undefined8 ******)((long)param_1 + 1);
  uVar35 = uVar35 + 1;
  iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  goto joined_r0x01b227a8;
joined_r0x01b21ba4:
  if (ppppppuVar42 == param_1) goto LAB_01b21ce4;
  iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 - 1);
  goto joined_r0x01b21ba4;
joined_r0x01b22710:
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  if ((int)uVar37 <= (int)uVar35) goto LAB_01b22e94;
  if ((undefined8 ******)*puVar2 <= param_1) goto LAB_01b2290c;
  if (bVar22 == *(byte *)param_1) goto LAB_01b22e94;
  iVar18 = 0;
  if (bVar26 == *(byte *)param_1) goto switchD_01b1ee78_caseD_9d;
  param_1 = (undefined8 ******)((long)param_1 + 1);
  uVar35 = uVar35 + 1;
  iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  goto joined_r0x01b22710;
LAB_01b2290c:
  iVar18 = (int)*puVar5;
  if ((iVar18 != 0) && ((undefined8 ******)*puVar3 < param_1)) {
LAB_01b22c4c:
    *(undefined4 *)puVar7 = 1;
    if (1 < iVar18) {
      iVar18 = -0xc;
      goto switchD_01b1ee78_caseD_9d;
    }
  }
LAB_01b22c68:
  iVar18 = 0;
  goto switchD_01b1ee78_caseD_9d;
joined_r0x01b21b50:
  if (ppppppuVar42 == param_1) goto LAB_01b21ce4;
  iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 - 1);
  goto joined_r0x01b21b50;
LAB_01b21950:
  if (param_1 == ppppppuVar42) goto LAB_01b21ce4;
  iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 - 1);
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  goto LAB_01b21950;
LAB_01b21e58:
  iVar18 = (int)*puVar5;
  if ((iVar18 == 0) || (pbVar41 <= (byte *)*puVar3)) goto LAB_01b22e94;
  goto LAB_01b21e74;
joined_r0x01b2267c:
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  if ((int)uVar37 <= (int)uVar35) goto LAB_01b22e94;
  if ((undefined8 ******)*puVar2 <= param_1) {
    iVar18 = (int)*puVar5;
    if ((iVar18 == 0) || (param_1 <= (undefined8 ******)*puVar3)) goto LAB_01b22c68;
    goto LAB_01b22c4c;
  }
  if ((bVar22 != *(byte *)param_1) && (bVar26 != *(byte *)param_1)) goto LAB_01b22c68;
  param_1 = (undefined8 ******)((long)param_1 + 1);
  uVar35 = uVar35 + 1;
  iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  goto joined_r0x01b2267c;
LAB_01b21990:
  if (param_1 == ppppppuVar42) goto LAB_01b21ce4;
  iVar18 = FUN_01b1ed80(ppppppuVar42,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
  ppppppuVar42 = (undefined8 ******)((long)ppppppuVar42 - 1);
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  goto LAB_01b21990;
LAB_01b22e94:
  iVar18 = 0;
  goto switchD_01b1ee78_caseD_9d;
joined_r0x01b225f0:
  if (iVar18 != 0) goto switchD_01b1ee78_caseD_9d;
  if ((int)uVar37 <= (int)uVar35) goto LAB_01b22e94;
  if (param_1 < (undefined8 ******)*puVar2) {
    if (bVar22 != *(byte *)param_1) goto LAB_01b22cac;
    param_1 = (undefined8 ******)((long)param_1 + 1);
    uVar35 = uVar35 + 1;
    iVar18 = FUN_01b1ed80(param_1,param_2,local_188,local_180,param_5,local_178,local_ec + 1);
    goto joined_r0x01b225f0;
  }
  iVar18 = (int)*puVar5;
  if ((iVar18 == 0) || (param_1 <= (undefined8 ******)*puVar3)) goto LAB_01b22cac;
LAB_01b22c90:
  *(undefined4 *)puVar7 = 1;
  if (iVar18 < 2) {
LAB_01b22cac:
    iVar18 = 0;
  }
  else {
    iVar18 = -0xc;
  }
switchD_01b1ee78_caseD_9d:
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return iVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

