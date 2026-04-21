// classes/ — 19 functions
#include "GameKindred.h"




void __thiscall std::numpunct<char>::~numpunct(numpunct<char> *this)

{
  ~numpunct(this);
  return;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::addBlock() */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::addBlock(ExpandingPool<FMOD::DSPConnectionI> *this)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  ExpandingPool<FMOD::DSPConnectionI> *pEVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  
  pEVar5 = this + 0x20;
  if (*(long *)(this + 8) != 0) {
    pEVar5 = this + 0x24;
  }
  iVar6 = *(int *)pEVar5;
  iVar7 = *(int *)(this + 0x1c);
  uVar8 = -iVar7;
  uVar15 = iVar7 + 0x37U & uVar8;
  uVar3 = iVar7 + -1 + iVar6 * 0x18 & uVar8;
  uVar4 = iVar7 + -1 + iVar6 * 8 & uVar8;
  uVar8 = iVar7 + 0xafU & uVar8;
  lVar9 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                        uVar15 + iVar7 + uVar3 + uVar4 + uVar8 * iVar6,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_expandingpool.cpp"
                        ,0x24,0x200000);
  if (lVar9 == 0) {
    uVar10 = 0x26;
  }
  else {
    plVar14 = (long *)((ulong)(*(int *)(this + 0x1c) - 1) + lVar9 &
                      ((ulong)(*(int *)(this + 0x1c) - 1) ^ 0xffffffffffffffff));
    plVar14[3] = lVar9;
    *(int *)(plVar14 + 4) = iVar6;
    plVar14[5] = (long)plVar14 + (ulong)uVar15;
    lVar9 = (ulong)uVar15 + (ulong)uVar3;
    lVar11 = (long)plVar14 + lVar9;
    plVar14[6] = lVar11;
    *plVar14 = (long)plVar14;
    plVar14[1] = (long)plVar14;
    plVar14[2] = 0;
    lVar12 = *(long *)(this + 8);
    if (lVar12 == 0) {
      *(long **)(this + 8) = plVar14;
    }
    else {
      lVar13 = *(long *)(lVar12 + 8);
      *plVar14 = lVar12;
      plVar14[1] = lVar13;
      *(long **)(lVar12 + 8) = plVar14;
      *(long **)plVar14[1] = plVar14;
    }
    if (iVar6 != 0) {
      uVar15 = 0;
      lVar13 = 0;
      lVar12 = 0;
      while( true ) {
        puVar1 = (undefined8 *)((long)plVar14 + lVar9 + (ulong)uVar4 + (ulong)uVar15);
        *(undefined8 **)(lVar11 + lVar12 * 8) = puVar1;
        lVar11 = *(long *)(this + 0x38);
        plVar2 = (long *)(plVar14[5] + lVar13);
        *plVar2 = (long)(this + 0x30);
        plVar2[1] = lVar11;
        *(long **)(this + 0x38) = plVar2;
        *(long **)plVar2[1] = plVar2;
        plVar2[2] = (long)puVar1;
        puVar1[1] = puVar1 + 1;
        puVar1[2] = puVar1 + 1;
        puVar1[3] = 0;
        puVar1[4] = puVar1 + 4;
        puVar1[5] = puVar1 + 4;
        puVar1[6] = 0;
        puVar1[8] = 0;
        *(undefined2 *)(puVar1 + 7) = 0;
        *(undefined2 *)((long)puVar1 + 0x3a) = 0;
        *(undefined2 *)(puVar1 + 9) = 0;
        *(undefined2 *)((long)puVar1 + 0x4a) = 0;
        puVar1[0x15] = 0;
        *(undefined2 *)(puVar1 + 0x14) = 0;
        *(undefined2 *)((long)puVar1 + 0xa2) = 0;
        *puVar1 = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[10] = 0;
        FUN_1006127a0(0x3f800000,puVar1,*(undefined8 *)this);
        if (iVar6 + -1 == (int)lVar12) break;
        lVar12 = lVar12 + 1;
        lVar11 = plVar14[6];
        lVar13 = lVar13 + 0x18;
        uVar15 = uVar15 + uVar8;
      }
    }
    uVar10 = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + iVar6;
  }
  return uVar10;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::removeBlock(FMOD::ExpandingPoolBlock<FMOD::DSPConnectionI>*)
    */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::removeBlock
          (ExpandingPool<FMOD::DSPConnectionI> *this,ExpandingPoolBlock *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ExpandingPoolBlock *pEVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (0 < iVar2) {
    lVar3 = 0;
    plVar5 = *(long **)(param_1 + 0x28);
    do {
      plVar1 = (long *)plVar5[1];
      *plVar1 = *plVar5;
      *(long **)(*plVar5 + 8) = plVar1;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      lVar3 = lVar3 + 1;
      plVar5 = plVar5 + 3;
    } while (lVar3 < iVar2);
  }
  if (*(ExpandingPoolBlock **)(this + 8) == param_1) {
    pEVar4 = *(ExpandingPoolBlock **)param_1;
    if (pEVar4 == *(ExpandingPoolBlock **)(this + 8)) {
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(ExpandingPoolBlock **)(this + 8) = pEVar4;
    }
  }
  else {
    pEVar4 = *(ExpandingPoolBlock **)param_1;
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  *puVar6 = pEVar4;
  *(undefined8 **)(*(long *)param_1 + 8) = puVar6;
  *(ExpandingPoolBlock **)param_1 = param_1;
  *(ExpandingPoolBlock **)(param_1 + 8) = param_1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - iVar2;
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x18),
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_expandingpool.cpp"
                ,0x70);
  return 0;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::init(FMOD::SystemI*, int, int, int, int, bool) */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::init
          (ExpandingPool<FMOD::DSPConnectionI> *this,SystemI *param_1,int param_2,int param_3,
          int param_4,int param_5,bool param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if ((-1 < (param_3 | param_2)) && (0 < param_5)) {
    uVar1 = 0;
    *(SystemI **)this = param_1;
    *(int *)(this + 0x1c) = param_5;
    *(int *)(this + 0x20) = param_2;
    *(int *)(this + 0x24) = param_3;
    *(int *)(this + 0x18) = param_4;
    this[0x28] = (ExpandingPool<FMOD::DSPConnectionI>)param_6;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(ExpandingPool<FMOD::DSPConnectionI> **)(this + 0x48) = this + 0x48;
    *(ExpandingPool<FMOD::DSPConnectionI> **)(this + 0x50) = this + 0x48;
    *(undefined8 *)(this + 0x58) = 0;
    *(ExpandingPool<FMOD::DSPConnectionI> **)(this + 0x30) = this + 0x30;
    *(ExpandingPool<FMOD::DSPConnectionI> **)(this + 0x38) = this + 0x30;
    *(undefined8 *)(this + 0x40) = 0;
  }
  return uVar1;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::close() */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::close(ExpandingPool<FMOD::DSPConnectionI> *this)

{
  while (*(long *)(this + 8) != 0) {
    FMOD::ExpandingPool<FMOD::DSPConnectionI>::removeBlock((ExpandingPoolBlock *)this);
  }
  return 0;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc(FMOD::DSPConnectionI**, bool) */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc
          (ExpandingPool<FMOD::DSPConnectionI> *this,DSPConnectionI **param_1,bool param_2)

{
  bool bVar1;
  ExpandingPool<FMOD::DSPConnectionI> *pEVar2;
  int iVar3;
  int iVar4;
  DSPConnectionI *pDVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ExpandingPool<FMOD::DSPConnectionI> *pEVar9;
  long *plVar10;
  
  lVar7 = *(long *)this;
  iVar4 = *(int *)(this + 0x18);
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = 0x13;
  }
  if (lVar7 == 0) {
    return 0x43;
  }
  if (param_1 == (DSPConnectionI **)0x0) {
    return 0x1f;
  }
  bVar1 = false;
  if ((-1 < iVar4) && (param_2)) {
    FUN_10057097c(lVar7,iVar3);
    bVar1 = true;
  }
  pEVar9 = this + 0x30;
  pEVar2 = *(ExpandingPool<FMOD::DSPConnectionI> **)pEVar9;
  if ((*(ExpandingPool<FMOD::DSPConnectionI> **)pEVar9 == pEVar9) &&
     (pEVar2 = pEVar9, *(ExpandingPool<FMOD::DSPConnectionI> **)(this + 0x38) == pEVar9)) {
    uVar8 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::addBlock();
    if ((int)uVar8 != 0) goto LAB_10063c4ac;
    pEVar2 = *(ExpandingPool<FMOD::DSPConnectionI> **)pEVar9;
  }
  plVar10 = *(long **)(pEVar2 + 8);
  *plVar10 = *(long *)pEVar2;
  *(long **)(*(long *)pEVar2 + 8) = plVar10;
  *(ExpandingPool<FMOD::DSPConnectionI> **)(pEVar2 + 8) = pEVar2;
  lVar6 = *(long *)(this + 0x50);
  *(ExpandingPool<FMOD::DSPConnectionI> **)pEVar2 = this + 0x48;
  *(long *)(pEVar2 + 8) = lVar6;
  *(ExpandingPool<FMOD::DSPConnectionI> **)(this + 0x50) = pEVar2;
  **(undefined8 **)(pEVar2 + 8) = pEVar2;
  plVar10 = *(long **)(this + 8);
  do {
    if (((pEVar2 != (ExpandingPool<FMOD::DSPConnectionI> *)0x0) &&
        (pEVar9 = (ExpandingPool<FMOD::DSPConnectionI> *)plVar10[5], pEVar9 <= pEVar2)) &&
       (pEVar2 < pEVar9 + (long)(int)plVar10[4] * 0x18)) {
      iVar4 = (int)((long)pEVar2 - (long)pEVar9 >> 3) * -0x55555555;
      if (iVar4 == -1) {
        uVar8 = 0x1e;
      }
      else {
        pDVar5 = *(DSPConnectionI **)(plVar10[6] + (long)iVar4 * 8);
        *param_1 = pDVar5;
        if (pDVar5 == (DSPConnectionI *)0x0) {
          uVar8 = 0x26;
        }
        else {
          *(DSPConnectionI **)(pEVar2 + 0x10) = pDVar5;
          FUN_1006127a0(0x3f800000,*param_1,*(undefined8 *)this);
          uVar8 = 0;
          *(int *)((long)plVar10 + 0x24) = *(int *)((long)plVar10 + 0x24) + 1;
          *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
        }
      }
      goto LAB_10063c4ac;
    }
    plVar10 = (long *)*plVar10;
  } while (plVar10 != *(long **)(this + 8));
  uVar8 = 0x1e;
LAB_10063c4ac:
  if (bVar1) {
    FUN_100570990(lVar7,iVar3);
  }
  return uVar8;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::getBlockAndIndex(FMOD::DSPConnectionI*,
   FMOD::LinkedListNode*, FMOD::ExpandingPoolBlock<FMOD::DSPConnectionI>**, int*) */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::getBlockAndIndex
          (ExpandingPool<FMOD::DSPConnectionI> *this,DSPConnectionI *param_1,LinkedListNode *param_2
          ,ExpandingPoolBlock **param_3,int *param_4)

{
  uint uVar1;
  ExpandingPoolBlock *pEVar2;
  int iVar3;
  DSPConnectionI *pDVar4;
  LinkedListNode *pLVar5;
  
  uVar1 = *(int *)(this + 0x1c) + 0xafU & -*(int *)(this + 0x1c);
  pEVar2 = *(ExpandingPoolBlock **)(this + 8);
  do {
    if (((param_1 != (DSPConnectionI *)0x0) &&
        (pDVar4 = (DSPConnectionI *)**(undefined8 **)(pEVar2 + 0x30), pDVar4 <= param_1)) &&
       (param_1 < pDVar4 + *(int *)(pEVar2 + 0x20) * uVar1)) {
      iVar3 = 0;
      if ((ulong)uVar1 != 0) {
        iVar3 = (int)((ulong)((long)param_1 - (long)pDVar4) / (ulong)uVar1);
      }
LAB_10063c5e4:
      if (iVar3 == -1) {
        return 0x1e;
      }
      if (param_3 != (ExpandingPoolBlock **)0x0) {
        *param_3 = pEVar2;
      }
      if (param_4 == (int *)0x0) {
        return 0;
      }
      *param_4 = iVar3;
      return 0;
    }
    if (((param_2 != (LinkedListNode *)0x0) &&
        (pLVar5 = *(LinkedListNode **)(pEVar2 + 0x28), pLVar5 <= param_2)) &&
       (param_2 < pLVar5 + (long)*(int *)(pEVar2 + 0x20) * 0x18)) {
      iVar3 = (int)((long)param_2 - (long)pLVar5 >> 3) * -0x55555555;
      goto LAB_10063c5e4;
    }
    pEVar2 = *(ExpandingPoolBlock **)pEVar2;
    if (pEVar2 == *(ExpandingPoolBlock **)(this + 8)) {
      return 0x1e;
    }
  } while( true );
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::free(FMOD::DSPConnectionI*, bool) */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
          (ExpandingPool<FMOD::DSPConnectionI> *this,DSPConnectionI *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  DSPConnectionI *pDVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  iVar3 = *(int *)(this + 0x18);
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = 0x13;
  }
  if (param_1 == (DSPConnectionI *)0x0) {
    uVar8 = 0x1f;
  }
  else {
    bVar5 = false;
    lVar7 = *(long *)this;
    if ((lVar7 != 0) && (-1 < iVar3 && param_2)) {
      FUN_10057097c(lVar7,iVar2);
      bVar5 = true;
    }
    uVar1 = *(int *)(this + 0x1c) + 0xafU & -*(int *)(this + 0x1c);
    plVar9 = *(long **)(this + 8);
    do {
      pDVar6 = *(DSPConnectionI **)plVar9[6];
      if ((pDVar6 <= param_1) && (param_1 < pDVar6 + (int)plVar9[4] * uVar1)) {
        iVar3 = 0;
        if ((ulong)uVar1 != 0) {
          iVar3 = (int)((ulong)((long)param_1 - (long)pDVar6) / (ulong)uVar1);
        }
        if (iVar3 == -1) {
          uVar8 = 0x1e;
        }
        else {
          lVar11 = plVar9[5];
          plVar10 = (long *)(lVar11 + (long)iVar3 * 0x18);
          if (plVar10[2] == 0) {
            uVar8 = 0x1e;
          }
          else {
            uVar8 = FUN_100612864(param_1);
            if ((int)uVar8 == 0) {
              *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
              iVar4 = *(int *)((long)plVar9 + 0x24) + -1;
              *(int *)((long)plVar9 + 0x24) = iVar4;
              lVar11 = lVar11 + (long)iVar3 * 0x18;
              plVar9 = *(long **)(lVar11 + 8);
              *plVar9 = *plVar10;
              *(long **)(*plVar10 + 8) = plVar9;
              *(long **)(lVar11 + 8) = plVar10;
              plVar10[2] = 0;
              *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(this + 0x38);
              *plVar10 = (long)(this + 0x30);
              *(long **)(this + 0x38) = plVar10;
              **(undefined8 **)(lVar11 + 8) = plVar10;
              if ((iVar4 == 0) && (this[0x28] != (ExpandingPool<FMOD::DSPConnectionI>)0x0)) {
                FMOD::ExpandingPool<FMOD::DSPConnectionI>::removeBlock((ExpandingPoolBlock *)this);
              }
              uVar8 = 0;
            }
          }
        }
        goto LAB_10063c6c8;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != *(long **)(this + 8));
    uVar8 = 0x1e;
LAB_10063c6c8:
    if ((lVar7 != 0) && (bVar5)) {
      FUN_100570990(lVar7,iVar2);
    }
  }
  return uVar8;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumItems(int*) */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumItems
          (ExpandingPool<FMOD::DSPConnectionI> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)(this + 0x10);
    return 0;
  }
  return 0x1f;
}




/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumAlloced(int*) */

undefined8 __thiscall
FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumAlloced
          (ExpandingPool<FMOD::DSPConnectionI> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)(this + 0x14);
    return 0;
  }
  return 0x1f;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::removeBlock(FMOD::ExpandingPoolBlock<FMOD::DSPConnectionI>*)
    */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::removeBlock(ExpandingPoolBlock *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000101148b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeBlock_101444750)();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumAlloced(int*) */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumAlloced(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000101148ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getNumAlloced_101444758)();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::free(FMOD::DSPConnectionI*, bool) */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::free(DSPConnectionI *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000101148bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_101444760)(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::init(FMOD::SystemI*, int, int, int, int, bool) */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::init
               (SystemI *param_1,int param_2,int param_3,int param_4,int param_5,bool param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000101148bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_101444768)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc(FMOD::DSPConnectionI**, bool) */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc(DSPConnectionI **param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000101148bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_alloc_101444770)(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::close() */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::close(void)

{
                    /* WARNING: Could not recover jumptable at 0x000101148bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_close_101444778)();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FMOD::ExpandingPool<FMOD::DSPConnectionI>::addBlock() */

void FMOD::ExpandingPool<FMOD::DSPConnectionI>::addBlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x000101148be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_addBlock_101444780)();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::numpunct<char>::numpunct(unsigned long) */

void std::numpunct<char>::numpunct(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000101148d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_numpunct_101444860)();
  return;
}




/* std::numpunct<char>::~numpunct() */

void __thiscall std::numpunct<char>::~numpunct(numpunct<char> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000101148d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__numpunct_101444868)();
  return;
}

