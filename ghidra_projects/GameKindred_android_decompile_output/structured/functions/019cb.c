// functions/019cb — 2 functions
#include "libGameKindred.h"




undefined8 FUN_019cb044(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)PTR_calloc_02bf74c8)(1,0x8c58);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x8c50) = 0xc0dedbad;
    lVar2 = (*(code *)PTR_malloc_02bf74a8)(0x100);
    *(long *)(lVar1 + 0x928) = lVar2;
    if (lVar2 != 0) {
      FUN_019caf4c(lVar1 + 0x220);
      *(undefined8 *)(lVar1 + 0x930) = 0x100;
      *(uint *)(lVar1 + 0x7d8) = *(uint *)(lVar1 + 0x7d8) | 0x10;
      *(undefined8 *)(lVar1 + 0x920) = 0;
      *(undefined8 *)(lVar1 + 0x8940) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 0x8b30) = 0;
      *(undefined8 *)(lVar1 + 0x8b48) = 0;
      *(undefined8 *)(lVar1 + 0x720) = 0;
      *(undefined8 *)(lVar1 + 0x750) = 5;
      *param_1 = lVar1;
      return 0;
    }
    FUN_019cab20(lVar1);
    (*(code *)PTR_free_02bf74b0)(lVar1);
  }
  return 0x1b;
}




ulong FUN_019cb120(long param_1,int param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  void *__dest;
  ulong uVar10;
  size_t sVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 uVar20;
  char *pcVar21;
  void *__src;
  long local_38;
  
  uVar9 = 0x30;
  if (param_2 < 0x2711) {
    switch(param_2) {
    case 3:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x260) = *puVar13;
      break;
    case 0xd:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14 * 1000;
      goto LAB_019cd730;
    case 0xe:
switchD_019cb378_caseD_75a3:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x380) = *puVar13;
      break;
    case 0x13:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x388) = *puVar13;
      break;
    case 0x14:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x390) = *puVar13;
      break;
    case 0x15:
switchD_019cb378_caseD_75a4:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x3a8) = *puVar13;
      break;
    case 0x1b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x3ca) = *plVar14 != 0;
      break;
    case 0x20:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x430) = *puVar13;
      break;
    case 0x21:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x410) = (int)*puVar13;
      break;
    case 0x22:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x418) = *puVar13;
      break;
    case 0x29:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x520) = *plVar14 != 0;
      break;
    case 0x2a:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x514) = *plVar14 != 0;
      break;
    case 0x2b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      uVar9 = 0;
      *(bool *)(param_1 + 0x50f) = lVar15 != 0;
      if (lVar15 == 0) {
        uVar6 = *(uint *)(param_1 + 0x7d8) & 0xffffffef;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x7d8) | 0x10;
      }
      *(uint *)(param_1 + 0x7d8) = uVar6;
      break;
    case 0x2c:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x517) = *plVar14 != 0;
      break;
    case 0x2d:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x510) = *plVar14 != 0;
      break;
    case 0x2e:
    case 0x36:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      *(bool *)(param_1 + 0x519) = lVar15 != 0;
      if (lVar15 == 0) {
LAB_019cec04:
        uVar7 = 1;
        goto LAB_019cec08;
      }
      uVar7 = 4;
      goto LAB_019ccffc;
    case 0x2f:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      if (*plVar14 == 0) goto LAB_019cec04;
      uVar7 = 2;
      goto LAB_019ccffc;
    case 0x30:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x50d) = *plVar14 != 0;
      break;
    case 0x32:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x50c) = *plVar14 != 0;
      break;
    case 0x33:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x51c) = (int)*puVar13;
      break;
    case 0x34:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x511) = *plVar14 != 0;
      break;
    case 0x35:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x50b) = *plVar14 != 0;
      break;
    case 0x3a:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x516) = *plVar14 != 0;
      break;
    case 0x3b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x238) = *puVar13;
      break;
    case 0x3c:
switchD_019cb378_caseD_75a8:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if ((*(long *)(param_1 + 0x2a0) < lVar15) &&
         (*(long *)(param_1 + 0x290) == *(long *)(param_1 + 0x5e0))) {
        if (*(long *)(param_1 + 0x290) != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *(undefined8 *)(param_1 + 0x5e0) = 0;
        }
        *(undefined8 *)(param_1 + 0x290) = 0;
      }
      uVar9 = 0;
      *(long *)(param_1 + 0x2a0) = lVar15;
      break;
    case 0x3d:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x50a) = *plVar14 != 0;
      break;
    case 0x40:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x440) = *plVar14 != 0;
      break;
    case 0x44:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x280) = *puVar13;
      break;
    case 0x45:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x509) = *plVar14 != 0;
      break;
    case 0x47:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x750) = *puVar13;
      break;
    case 0x4a:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x523) = *plVar14 != 0;
      break;
    case 0x4b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x522) = *plVar14 != 0;
      break;
    case 0x4e:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14 * 1000;
      goto LAB_019cd764;
    case 0x50:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      if (*plVar14 == 0) goto LAB_019ced70;
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0x519) = 0;
LAB_019ccffc:
      *(undefined4 *)(param_1 + 0x420) = uVar7;
LAB_019cd000:
      uVar9 = 0;
      *(undefined1 *)(param_1 + 0x517) = 0;
      break;
    case 0x51:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      if (*plVar14 == 1) {
        FUN_019ca0fc(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
        uVar9 = 0x2b;
      }
      else {
        uVar9 = 0;
        *(bool *)(param_1 + 0x441) = *plVar14 != 0;
      }
      break;
    case 0x54:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      if (*plVar14 == 3) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x428) = *plVar14;
      }
      break;
    case 0x55:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x524) = *plVar14 != 0;
      break;
    case 0x5a:
      uVar10 = thunk_FUN_019ed0a0(param_1);
      return uVar10;
    case 0x5b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x535) = *plVar14 != 0;
      break;
    case 0x5c:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x4c0) = *puVar13;
      break;
    case 0x60:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x3c9) = *plVar14 != 0;
      break;
    case 0x62:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      lVar15 = 0;
      if (*plVar14 - 1U < 0x3fff) {
        lVar15 = *plVar14;
      }
      *(long *)(param_1 + 0x4c8) = lVar15;
      break;
    case 99:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x534) = *plVar14 != 0;
      break;
    case 0x65:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x4b8) = (int)*puVar13;
      break;
    case 0x69:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x513) = *plVar14 != 0;
      break;
    case 0x6a:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x525) = *plVar14 != 0;
      break;
    case 0x6b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar17 = (ulong *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar17 = (ulong *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar10 = *puVar17;
      if (uVar10 == 0) {
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
      else {
        *(byte *)(param_1 + 0x8a3a) = (byte)((uint)uVar10 >> 4) & 1;
        if ((uVar10 & 0x10) != 0) {
          uVar10 = uVar10 & 0xffffffffffffffe9 | 2;
        }
        uVar18 = 0;
        do {
          if (0x1e < uVar18) goto LAB_019ceb40;
          uVar4 = uVar18 & 0x3f;
          uVar18 = uVar18 + 1;
        } while ((1L << uVar4 & uVar10 & 0xfffffffffffffffb) == 0);
        uVar9 = 0;
        *(ulong *)(param_1 + 0x268) = uVar10 & 0xfffffffffffffffb;
      }
      break;
    case 0x6e:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if ((lVar15 == 2) || (lVar15 == 1)) {
        uVar9 = 0;
        *(int *)(param_1 + 0x4f4) = (int)lVar15;
        break;
      }
      if (lVar15 == 0) {
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x4f4) = 0;
        break;
      }
      goto LAB_019ceb48;
    case 0x6f:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar17 = (ulong *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar17 = (ulong *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar10 = *puVar17;
      if (uVar10 == 0) {
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x270) = 0;
      }
      else {
        *(byte *)(param_1 + 0x8a5a) = (byte)((uint)uVar10 >> 4) & 1;
        if ((uVar10 & 0x10) != 0) {
          uVar10 = uVar10 & 0xffffffffffffffe9 | 2;
        }
        uVar18 = 0;
        do {
          if (0x1e < uVar18) goto LAB_019ceb40;
          uVar4 = uVar18 & 0x3f;
          uVar18 = uVar18 + 1;
        } while ((1L << uVar4 & uVar10 & 0xfffffffffffffffb) == 0);
        uVar9 = 0;
        *(ulong *)(param_1 + 0x270) = uVar10 & 0xfffffffffffffffb;
      }
      break;
    case 0x70:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(long *)(param_1 + 0x370) = *plVar14 * 1000;
      break;
    case 0x71:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x4e0) = *puVar13;
      break;
    case 0x72:
switchD_019cb378_caseD_75a5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x4e8) = *puVar13;
      break;
    case 0x77:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x528) = (int)*puVar13;
      break;
    case 0x79:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x536) = *plVar14 != 0;
      break;
    case 0x81:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x52c) = (int)*puVar13;
      break;
    case 0x88:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x537) = *plVar14 != 0;
      break;
    case 0x89:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x538) = *plVar14 != 0;
      break;
    case 0x8a:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x4f0) = (int)*puVar13;
      break;
    case 0x8b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar5 = FUN_019c1e9c(*puVar13);
      uVar9 = 0;
      *(undefined2 *)(param_1 + 0x2a8) = uVar5;
      break;
    case 0x8c:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar7 = FUN_019c1e90(*puVar13);
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x2ac) = uVar7;
      break;
    case 0x8d:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x539) = *plVar14 != 0;
      break;
    case 0x96:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x498) = *plVar14 != 0;
      break;
    case 0x97:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x540) = *puVar13;
      break;
    case 0x9a:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(int *)(param_1 + 0x530) = (int)*puVar13;
      break;
    case 0x9b:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
LAB_019cd730:
      uVar9 = 0;
      *(long *)(param_1 + 0x358) = lVar15;
      break;
    case 0x9c:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
LAB_019cd764:
      uVar9 = 0;
      *(long *)(param_1 + 0x360) = lVar15;
      break;
    case 0x9d:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x548) = *plVar14 == 0;
      break;
    case 0x9e:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x549) = *plVar14 == 0;
      break;
    case 0x9f:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x550) = *puVar13;
      break;
    case 0xa0:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x558) = *puVar13;
      break;
    case 0xa1:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar6 = FUN_019c1e90(*puVar13);
      uVar9 = 0;
      *(uint *)(param_1 + 0x288) = uVar6 & 7;
      break;
    case 0xa6:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      if (*plVar14 == 1) {
        uVar9 = 0;
        *(undefined1 *)(param_1 + 0x560) = 1;
        break;
      }
      if (*plVar14 == 0) {
        uVar9 = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        break;
      }
LAB_019ceb48:
      uVar9 = 0x30;
      break;
    case 0xab:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar7 = FUN_019c1e98(*puVar13);
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x6d8) = uVar7;
      break;
    case 0xac:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x499) = *plVar14 != 0;
      break;
    case 0xb2:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x378) = *puVar13;
      break;
    case 0xb5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6e0) = *puVar13;
      break;
    case 0xb6:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6e8) = *puVar13;
      break;
    case 0xbc:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x526) = *plVar14 != 0;
      break;
    case 0xbd:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      iVar8 = 0;
      if (*plVar14 - 1U < 0xb) {
        iVar8 = (int)(*plVar14 - 1U) + 1;
      }
      *(int *)(param_1 + 0x6fc) = iVar8;
      break;
    case 0xc1:
    case 0xc2:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar20 = *puVar13;
      lVar15 = 0x8b08;
LAB_019ce6bc:
      uVar9 = 0;
      *(undefined8 *)(param_1 + lVar15) = uVar20;
      break;
    case 0xc5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x708) = *plVar14 != 0;
      break;
    case 0xcf:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x512) = *plVar14 != 0;
      break;
    case 0xd2:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x730) = *puVar13;
      break;
    case 0xd4:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x368) = *puVar13;
      break;
    case 0xd5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x738) = *plVar14 != 0;
      break;
    case 0xd6:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x740) = *puVar13;
      break;
    case 0xd7:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x748) = *puVar13;
      break;
    case 0xd8:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        pbVar19 = (byte *)(param_3[1] + (long)iVar8);
      }
      else {
        pbVar19 = (byte *)*param_3;
        *param_3 = (long)(pbVar19 + 8);
      }
      uVar9 = 0;
      *(byte *)(param_1 + 0x53a) = *pbVar19 & 1;
      break;
    case 0xda:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x6f8) = *plVar14 != 0;
      break;
    case 0xe1:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x758) = *plVar14 != 0;
      break;
    case 0xe2:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      uVar9 = 0;
      *(bool *)(param_1 + 0x759) = *plVar14 != 0;
      break;
    case 0xe3:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x760) = *puVar13;
      break;
    case 0xe5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        pbVar19 = (byte *)(param_3[1] + (long)iVar8);
      }
      else {
        pbVar19 = (byte *)*param_3;
        *param_3 = (long)(pbVar19 + 8);
      }
      uVar9 = 0;
      *(byte *)(param_1 + 0x3c8) = *pbVar19 & 1;
    }
    goto switchD_019cb184_caseD_2794;
  }
  if (0x2792 < param_2) {
    if (0x4e57 < param_2) {
      if (param_2 < 0x4ee4) {
        if (0x4ead < param_2) {
          if (param_2 < 0x4ec3) {
            switch(param_2) {
            case 0x4eae:
              iVar8 = (int)param_3[3];
              if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x330) = *puVar13;
              break;
            case 0x4eaf:
              iVar8 = (int)param_3[3];
              if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x338) = *puVar13;
              break;
            case 0x4eb0:
              iVar8 = (int)param_3[3];
              if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x340) = *puVar13;
              break;
            case 0x4eb4:
              iVar8 = (int)param_3[3];
              if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x2f8) = *puVar13;
            }
          }
          else if (param_2 == 0x4ec3) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x308) = *puVar13;
          }
          else if (param_2 == 0x4ec7) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x298) = *puVar13;
          }
          else if (param_2 == 0x4ed8) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x4f8) = *puVar13;
          }
          goto switchD_019cb184_caseD_2794;
        }
        if (0x4e7d < param_2) {
          if (param_2 == 0x4e7e) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x2e8) = *puVar13;
          }
          else if (param_2 == 0x4e8c) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x488) = *puVar13;
          }
          else if (param_2 == 0x4ea2) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x2f0) = *puVar13;
          }
          goto switchD_019cb184_caseD_2794;
        }
        if (param_2 != 0x4e58) {
          if (param_2 == 0x4e6f) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x2b8) = *puVar13;
          }
          goto switchD_019cb184_caseD_2794;
        }
        iVar8 = (int)param_3[3];
        if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar8);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        lVar15 = *plVar14;
        *(long *)(param_1 + 0x2d8) = lVar15;
joined_r0x019cb4b0:
        if (lVar15 == 0) {
          uVar9 = 0;
          *(undefined1 *)(param_1 + 2000) = 0;
        }
        else {
          uVar9 = 0;
          *(undefined1 *)(param_1 + 2000) = 1;
        }
      }
      else {
        if (0x75a2 < param_2) {
          switch(param_2) {
          case 0x75a3:
            goto switchD_019cb378_caseD_75a3;
          case 0x75a4:
            goto switchD_019cb378_caseD_75a4;
          case 0x75a5:
            goto switchD_019cb378_caseD_75a5;
          case 0x75a6:
          case 0x75a7:
            break;
          case 0x75a8:
            goto switchD_019cb378_caseD_75a8;
          default:
            if (param_2 == 0x75c1) {
              iVar8 = (int)param_3[3];
              if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x398) = *puVar13;
            }
            else if (param_2 == 0x75c2) {
              iVar8 = (int)param_3[3];
              if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
              }
              else {
                puVar13 = (undefined8 *)*param_3;
                *param_3 = (long)(puVar13 + 1);
              }
              uVar9 = 0;
              *(undefined8 *)(param_1 + 0x3a0) = *puVar13;
            }
          }
          goto switchD_019cb184_caseD_2794;
        }
        switch(param_2) {
        case 0x4ee4:
          iVar8 = (int)param_3[3];
          if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x2c0) = *puVar13;
          break;
        case 0x4ee5:
          break;
        case 0x4ee6:
          iVar8 = (int)param_3[3];
          if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x710) = *puVar13;
          break;
        case 0x4ee7:
          iVar8 = (int)param_3[3];
          if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x718) = *puVar13;
          break;
        case 0x4ee8:
          iVar8 = (int)param_3[3];
          if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
            puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
          }
          else {
            puVar13 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar13 + 1);
          }
          uVar9 = 0;
          *(undefined8 *)(param_1 + 0x720) = *puVar13;
          break;
        default:
          if (param_2 == 0x4ef0) {
            iVar8 = (int)param_3[3];
            if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
            }
            else {
              puVar13 = (undefined8 *)*param_3;
              *param_3 = (long)(puVar13 + 1);
            }
            uVar9 = 0;
            *(undefined8 *)(param_1 + 0x318) = *puVar13;
            break;
          }
          if (param_2 != 0x4efb) break;
          iVar8 = (int)param_3[3];
          if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
            plVar14 = (long *)(param_3[1] + (long)iVar8);
          }
          else {
            plVar14 = (long *)*param_3;
            *param_3 = (long)(plVar14 + 1);
          }
          lVar15 = *plVar14;
          *(long *)(param_1 + 0x2e0) = lVar15;
          goto joined_r0x019cb4b0;
        }
      }
      goto switchD_019cb184_caseD_2794;
    }
    switch(param_2) {
    case 0x2793:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x350) = *puVar13;
    case 0x2794:
    case 0x2795:
    case 0x2798:
    case 0x2799:
    case 0x279a:
    case 0x279b:
    case 0x279c:
    case 0x279d:
    case 0x279e:
    case 0x279f:
    case 0x27a0:
    case 0x27a1:
    case 0x27a2:
    case 0x27a4:
    case 0x27a6:
    case 0x27a7:
    case 0x27aa:
    case 0x27ab:
    case 0x27ac:
    case 0x27ad:
    case 0x27ae:
    case 0x27af:
    case 0x27b0:
    case 0x27b1:
    case 0x27b3:
    case 0x27b6:
    case 0x27b7:
    case 0x27bb:
    case 0x27bc:
    case 0x27c2:
    case 0x27c3:
    case 0x27c4:
    case 0x27c5:
    case 0x27c6:
    case 0x27c8:
    case 0x27cc:
    case 0x27cd:
    case 0x27d1:
    case 0x27d2:
    case 0x27d4:
    case 0x27d5:
    case 0x27d6:
    case 0x27d7:
    case 0x27d8:
    case 0x27df:
    case 0x27e0:
    case 0x27e2:
    case 0x27e4:
    case 0x27e5:
    case 0x27e6:
    case 0x27e7:
    case 0x27e8:
    case 0x27ea:
    case 0x27eb:
    case 0x27f1:
    case 0x27f2:
    case 0x27f3:
      goto switchD_019cb184_caseD_2794;
    case 0x2796:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x5a0) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x5a0) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x5a0) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x2797:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (lVar15 != 0) {
        iVar8 = FUN_019e23a8(lVar15,"ALL");
        if (iVar8 == 0) {
          iVar8 = FUN_019e23a8(lVar15,&DAT_01e22eee);
          if (iVar8 == 0) {
            iVar8 = FUN_019e23a8(lVar15,"FLUSH");
            if (iVar8 == 0) {
              if (*(long *)(param_1 + 0x798) == 0) {
                uVar20 = FUN_019c4878(param_1,0,0,1);
                *(undefined8 *)(param_1 + 0x798) = uVar20;
              }
              lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
              if (lVar15 == 0) goto LAB_019cecf8;
              FUN_019c1238(param_1,2,2);
              iVar8 = FUN_019e2430("Set-Cookie:",lVar15,0xb);
              lVar16 = lVar15;
              if (iVar8 != 0) {
                lVar16 = lVar15 + 0xb;
              }
              FUN_019c4a2c(param_1,*(undefined8 *)(param_1 + 0x798),iVar8 != 0,lVar16,0,0);
              FUN_019c1288(param_1,2);
              (*(code *)PTR_free_02bf74b0)(lVar15);
            }
            else {
              FUN_019c5ed0(param_1,0);
            }
            break;
          }
          FUN_019c1238(param_1,2,2);
          FUN_019c5c8c(*(undefined8 *)(param_1 + 0x798));
        }
        else {
          FUN_019c1238(param_1,2,2);
          FUN_019c5bfc(*(undefined8 *)(param_1 + 0x798));
        }
        FUN_019c1288(param_1,2);
      }
      break;
    case 0x27a3:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x5a8) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x5a8) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x5a8) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27a5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x300) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27a8:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x698) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x698) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x698) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27a9:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x690) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x690) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x690) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27b2:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6a0) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6a0) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x6a0) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27b4:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x310) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27b5:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      __src = (void *)*puVar13;
      if ((__src == (void *)0x0) || (lVar15 = *(long *)(param_1 + 0x2a0), lVar15 == -1)) {
        if (*(long *)(param_1 + 0x5e0) != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *(long *)(param_1 + 0x5e0) = 0;
        }
        if (__src == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar15 = (*(code *)PTR_strdup_02bf74c0)(__src);
          if (lVar15 == 0) goto LAB_019cec28;
          uVar9 = 0;
          *(long *)(param_1 + 0x5e0) = lVar15;
        }
      }
      else {
        if (-1 < lVar15) {
          if (*(long *)(param_1 + 0x5e0) != 0) {
            (*(code *)PTR_free_02bf74b0)();
            lVar15 = *(long *)(param_1 + 0x2a0);
            *(undefined8 *)(param_1 + 0x5e0) = 0;
          }
          if (lVar15 == 0) {
            lVar15 = 1;
          }
          __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(lVar15);
          if (__dest != (void *)0x0) {
            if (*(size_t *)(param_1 + 0x2a0) != 0) {
              memcpy(__dest,__src,*(size_t *)(param_1 + 0x2a0));
            }
            uVar9 = 0;
            *(long *)(param_1 + 0x5e0) = (long)__dest;
            goto LAB_019cedc0;
          }
        }
LAB_019cec28:
        uVar9 = 0x1b;
      }
LAB_019cedc0:
      *(undefined4 *)(param_1 + 0x420) = 2;
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x5e0);
      goto switchD_019cb184_caseD_2794;
    case 0x27b8:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x328) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27b9:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x638) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x638) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x638) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27ba:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x640) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x640) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x640) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27bd:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x648) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x648) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x648) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27be:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x650) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x650) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x650) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27bf:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x660) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x660) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x660) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27c0:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x668) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x668) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x668) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27c1:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x670) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x670) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x670) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27c7:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6a8) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6a8) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x6a8) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27c9:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x500) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27ca:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6b0) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6b0) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x6b0) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27cb:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x6f0) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27ce:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x678) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x678) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x678) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27cf:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x680) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x680) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x680) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27d0:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x688) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x688) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x688) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27d3:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 600) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27d9:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar20 = *puVar13;
      lVar15 = 0x8b60;
      goto LAB_019ce6bc;
    case 0x27da:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x728) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27db:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar20 = *puVar13;
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x408) = uVar20;
      *(undefined8 *)(param_1 + 0x790) = uVar20;
      goto switchD_019cb184_caseD_2794;
    case 0x27dc:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6c0) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6c0) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 == 0) {
          lVar15 = *(long *)(param_1 + 0x6c0);
          uVar9 = 0x1b;
          goto joined_r0x019ceda4;
        }
        uVar9 = 0;
        *(long *)(param_1 + 0x6c0) = lVar15;
        goto LAB_019ceda8;
      }
      break;
    case 0x27dd:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6c8) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6c8) = 0;
      }
      if (lVar15 == 0) {
        uVar9 = 0;
      }
      else {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 == 0) {
          uVar9 = 0x1b;
        }
        else {
          uVar9 = 0;
          *(long *)(param_1 + 0x6c8) = lVar15;
        }
      }
      lVar15 = *(long *)(param_1 + 0x6c0);
joined_r0x019ceda4:
      if (lVar15 == 0) goto switchD_019cb184_caseD_2794;
LAB_019ceda8:
      if (*(int *)(param_1 + 0x4b0) != 0) goto switchD_019cb184_caseD_2794;
      goto LAB_019cedb0;
    case 0x27de:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      iVar8 = FUN_019d9e0c(*puVar13,&DAT_01e3087a,3);
      uVar9 = 0;
      if (iVar8 == 0) {
        *(undefined4 *)(param_1 + 0x4b0) = 0;
        goto switchD_019cb184_caseD_2794;
      }
LAB_019cedb0:
      *(undefined4 *)(param_1 + 0x4b0) = 1;
      goto switchD_019cb184_caseD_2794;
    case 0x27e1:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 800) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    case 0x27e3:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar10 = FUN_019dc250(param_1,*puVar13);
      return uVar10;
    case 0x27e9:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6b8) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6b8) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x6b8) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27ec:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x6d0) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x6d0) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x6d0) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27ed:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar10 = FUN_019dc258(param_1,*puVar13);
      return uVar10;
    case 0x27ee:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar10 = FUN_019dc260(param_1,*puVar13);
      return uVar10;
    case 0x27ef:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar10 = FUN_019dc268(param_1,*puVar13);
      return uVar10;
    case 0x27f0:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        plVar14 = (long *)(param_3[1] + (long)iVar8);
      }
      else {
        plVar14 = (long *)*param_3;
        *param_3 = (long)(plVar14 + 1);
      }
      lVar15 = *plVar14;
      if (*(long *)(param_1 + 0x658) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x658) = 0;
      }
      if (lVar15 != 0) {
        lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
        if (lVar15 != 0) {
          uVar9 = 0;
          *(long *)(param_1 + 0x658) = lVar15;
          goto switchD_019cb184_caseD_2794;
        }
        goto LAB_019cecf8;
      }
      break;
    case 0x27f4:
      iVar8 = (int)param_3[3];
      if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
        puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
      }
      else {
        puVar13 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar13 + 1);
      }
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x3b8) = *puVar13;
      goto switchD_019cb184_caseD_2794;
    default:
      if (param_2 == 0x4e2b) {
        iVar8 = (int)param_3[3];
        if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar8);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        lVar15 = *plVar14;
        uVar9 = 0;
        *(long *)(param_1 + 0x2b0) = lVar15;
        if (lVar15 == 0) {
          *(undefined4 *)(param_1 + 0x2d4) = 0;
          *(code **)(param_1 + 0x2b0) = fwrite;
        }
        else {
          *(undefined4 *)(param_1 + 0x2d4) = 1;
        }
      }
      else if (param_2 == 0x4e2c) {
        iVar8 = (int)param_3[3];
        if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
          plVar14 = (long *)(param_3[1] + (long)iVar8);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
        }
        lVar15 = *plVar14;
        uVar9 = 0;
        *(long *)(param_1 + 0x2c8) = lVar15;
        if (lVar15 == 0) {
          *(undefined4 *)(param_1 + 0x2d0) = 0;
          *(code **)(param_1 + 0x2c8) = fread;
        }
        else {
          *(undefined4 *)(param_1 + 0x2d0) = 1;
        }
      }
      goto switchD_019cb184_caseD_2794;
    }
    goto LAB_019ced70;
  }
  switch(param_2) {
  case 0x2711:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x240) = *puVar13;
    break;
  case 0x2712:
    if (*(char *)(param_1 + 0x770) != '\0') {
      if (*(long *)(param_1 + 0x768) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x768) = 0;
      }
      *(undefined1 *)(param_1 + 0x770) = 0;
    }
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x600) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x600) = 0;
    }
    lVar16 = 0;
    if (lVar15 == 0) {
      uVar9 = 0;
    }
    else {
      lVar16 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar16 == 0) {
        lVar16 = *(long *)(param_1 + 0x600);
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x600) = lVar16;
      }
    }
    *(long *)(param_1 + 0x768) = lVar16;
    break;
  case 0x2713:
  case 0x2718:
  case 0x271b:
  case 0x271c:
  case 0x271d:
  case 0x271e:
  case 0x2723:
  case 0x2724:
  case 0x2725:
  case 0x272b:
  case 0x272e:
  case 0x2730:
  case 0x2731:
  case 0x2732:
  case 0x2733:
  case 0x2736:
  case 0x2738:
  case 0x2739:
  case 0x273a:
  case 0x273b:
  case 0x273c:
  case 0x273d:
  case 0x273e:
  case 0x273f:
  case 0x2740:
  case 0x2741:
  case 0x2742:
  case 0x2743:
  case 0x2744:
  case 0x2745:
  case 0x2746:
  case 0x2747:
  case 0x2748:
  case 0x274a:
  case 0x274b:
  case 0x274c:
  case 0x274d:
  case 0x2750:
  case 0x2752:
  case 0x2753:
  case 0x2754:
  case 0x2755:
  case 0x2757:
  case 0x2758:
  case 0x2759:
  case 0x275a:
  case 0x275b:
  case 0x275e:
  case 0x275f:
  case 0x2760:
  case 0x2761:
  case 0x2764:
  case 0x2765:
  case 0x276a:
  case 0x276b:
  case 0x276c:
  case 0x276e:
  case 0x2770:
  case 0x2772:
  case 0x2773:
  case 0x2775:
  case 0x2779:
  case 0x277a:
  case 0x277b:
  case 0x277c:
    break;
  case 0x2714:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5e8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5e8) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x5e8) = lVar15;
        break;
      }
LAB_019cecf8:
      uVar9 = 0x1b;
      break;
    }
    goto LAB_019ced70;
  case 0x2715:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    pcVar21 = (char *)*puVar13;
    plVar14 = (long *)(param_1 + 0x648);
    plVar12 = (long *)(param_1 + 0x650);
    goto LAB_019cbb44;
  case 0x2716:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    pcVar21 = (char *)*puVar13;
    plVar14 = (long *)(param_1 + 0x660);
    plVar12 = (long *)(param_1 + 0x668);
LAB_019cbb44:
    local_38 = 0;
    if (pcVar21 != (char *)0x0) {
      sVar11 = strlen(pcVar21);
      plVar2 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar2 = &local_38;
      }
      puVar3 = (undefined1 *)0x0;
      if (plVar12 != (long *)0x0) {
        puVar3 = &stack0xffffffffffffffc0;
      }
      uVar9 = FUN_019d281c(pcVar21,sVar11,plVar2,puVar3,0);
      if (uVar9 != 0) {
        return (ulong)uVar9;
      }
    }
    if (plVar14 == (long *)0x0) {
      uVar10 = 0;
      goto joined_r0x019cf874;
    }
    if (pcVar21 == (char *)0x0) {
LAB_019cf87c:
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if (local_38 == 0) {
        if (*pcVar21 != ':') goto LAB_019cf87c;
        local_38 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
        uVar9 = 0x1b;
        if (local_38 != 0) {
          uVar9 = 0;
        }
        uVar10 = (ulong)uVar9;
      }
    }
    if (*plVar14 != 0) {
      (*(code *)PTR_free_02bf74b0)(*plVar14);
      *plVar14 = 0;
    }
    *plVar14 = local_38;
joined_r0x019cf874:
    if (plVar12 != (long *)0x0) {
      if (*plVar12 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *plVar12 = 0;
      }
      *plVar12 = 0;
    }
    return uVar10;
  case 0x2717:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5f0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5f0) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x5f0) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2719:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x248) = *puVar13;
    break;
  case 0x271a:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x230) = *puVar13;
    break;
  case 0x271f:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    *(undefined8 *)(param_1 + 0x290) = *puVar13;
    if (*(long *)(param_1 + 0x5e0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5e0) = 0;
    }
    uVar7 = 2;
LAB_019cec08:
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x420) = uVar7;
    break;
  case 0x2720:
    if (*(char *)(param_1 + 0x780) != '\0') {
      if (*(long *)(param_1 + 0x778) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x778) = 0;
      }
      *(undefined1 *)(param_1 + 0x780) = 0;
    }
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5f8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5f8) = 0;
    }
    lVar16 = 0;
    if (lVar15 == 0) {
      uVar9 = 0;
    }
    else {
      lVar16 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar16 == 0) {
        lVar16 = *(long *)(param_1 + 0x5f8);
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x5f8) = lVar16;
      }
    }
    *(long *)(param_1 + 0x778) = lVar16;
    break;
  case 0x2721:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5b0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5b0) = 0;
    }
    if (lVar15 == 0) {
      lVar15 = 0;
      uVar9 = 0;
    }
    else {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 == 0) {
        lVar15 = *(long *)(param_1 + 0x5b0);
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x5b0) = lVar15;
      }
    }
    *(bool *)(param_1 + 0x50e) = lVar15 != 0;
    break;
  case 0x2722:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x630) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x630) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x630) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2726:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x578) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x578) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x578) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2727:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x3b0) = *puVar13;
    break;
  case 0x2728:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar20 = *puVar13;
    *(undefined4 *)(param_1 + 0x420) = 3;
    *(undefined8 *)(param_1 + 0x3c0) = uVar20;
    goto LAB_019cd000;
  case 0x2729:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x568) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x568) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x568) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x272a:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5c0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5c0) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x5c0) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x272c:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x3d0) = *puVar13;
    break;
  case 0x272d:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x250) = *puVar13;
    break;
  case 0x272f:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    if (*plVar14 != 0) {
      lVar15 = FUN_019c1cb0(*(undefined8 *)(param_1 + 0x788));
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x788) = lVar15;
        break;
      }
      FUN_019c1dcc(*(undefined8 *)(param_1 + 0x788));
      *(undefined8 *)(param_1 + 0x788) = 0;
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2734:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x588) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x588) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x588) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2735:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    pcVar1 = glClearDepthf;
    if ((code *)*puVar13 != (code *)0x0) {
      pcVar1 = (code *)*puVar13;
    }
    *(code **)(param_1 + 0x220) = pcVar1;
    break;
  case 0x2737:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x3d8) = *puVar13;
    break;
  case 0x2749:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x348) = *puVar13;
    break;
  case 0x274e:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x590) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x590) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x590) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x274f:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5d0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5d0) = 0;
    }
    if (lVar15 == 0) {
      lVar15 = 0;
      uVar9 = 0;
    }
    else {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 == 0) {
        lVar15 = *(long *)(param_1 + 0x5d0);
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x5d0) = lVar15;
      }
    }
    *(bool *)(param_1 + 0x521) = lVar15 != 0;
    break;
  case 0x2751:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x610) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x610) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x610) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2756:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x400) = *puVar13;
    break;
  case 0x275c:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x628) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x628) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x628) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x275d:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x620) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x620) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x620) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2762:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x580) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x580) = 0;
    }
    if (lVar15 == 0) {
      uVar9 = 0;
    }
    else {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 == 0) {
        uVar9 = 0x1b;
      }
      else {
        uVar9 = 0;
        *(long *)(param_1 + 0x580) = lVar15;
      }
    }
    uVar20 = FUN_019c4878(param_1,0,*(undefined8 *)(param_1 + 0x798),
                          *(undefined1 *)(param_1 + 0x3c9));
    *(undefined8 *)(param_1 + 0x798) = uVar20;
    break;
  case 0x2763:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x618) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x618) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x618) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2766:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x570) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x570) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x570) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2767:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5b8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5b8) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x5b8) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2768:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5c8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5c8) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x5c8) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2769:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    if (((char *)*puVar13 != (char *)0x0) && (*(char *)*puVar13 != '\0')) {
      uVar10 = thunk_FUN_019ecfd0(param_1);
      return uVar10;
    }
    goto LAB_019ced70;
  case 0x276d:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x3e0) = *puVar13;
    break;
  case 0x276f:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x228) = *puVar13;
    break;
  case 0x2771:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x608) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x608) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x608) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2774:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_019c1238(param_1,1,2);
      if (*(int *)(param_1 + 0x58) == 3) {
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      lVar16 = *(long *)(param_1 + 0x70);
      if (*(long *)(lVar16 + 0x28) == *(long *)(param_1 + 0x798)) {
        *(undefined8 *)(param_1 + 0x798) = 0;
      }
      if (*(long *)(lVar16 + 0x30) == *(long *)(param_1 + 0x8958)) {
        *(long *)(param_1 + 0x8958) = 0;
      }
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      FUN_019c1288(param_1,1);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(long *)(param_1 + 0x70) = lVar15;
    if (lVar15 != 0) {
      FUN_019c1238(param_1,1,2);
      lVar15 = *(long *)(param_1 + 0x70);
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
      if (*(long *)(lVar15 + 0x20) != 0) {
        *(long *)(param_1 + 0x50) = *(long *)(lVar15 + 0x20);
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      plVar14 = (long *)(lVar15 + 0x28);
      if (*plVar14 != 0) {
        if (*(long *)(param_1 + 0x798) != 0) {
          FUN_019c5d10();
          lVar15 = *(long *)(param_1 + 0x70);
          plVar14 = (long *)(lVar15 + 0x28);
        }
        *(long *)(param_1 + 0x798) = *plVar14;
      }
      lVar16 = *(long *)(lVar15 + 0x30);
      if (lVar16 != 0) {
        *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(lVar15 + 0x38);
        *(long *)(param_1 + 0x8958) = lVar16;
      }
      FUN_019c1288(param_1,1);
      uVar9 = 0;
      break;
    }
    goto LAB_019ced70;
  case 0x2776:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    pcVar21 = (char *)*puVar13;
    if ((pcVar21 != (char *)0x0) && (*pcVar21 == '\0')) {
      pcVar21 = "deflate, gzip";
    }
    if (*(long *)(param_1 + 0x598) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x598) = 0;
    }
    if (pcVar21 != (char *)0x0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(pcVar21);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x598) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
    goto LAB_019ced70;
  case 0x2777:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x4d0) = *puVar13;
    break;
  case 0x2778:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x4d8) = *puVar13;
    break;
  case 0x277d:
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      puVar13 = (undefined8 *)(param_3[1] + (long)iVar8);
    }
    else {
      puVar13 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar13 + 1);
    }
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x490) = *puVar13;
    break;
  default:
    if (param_2 != 0x2786) break;
    iVar8 = (int)param_3[3];
    if ((iVar8 < 0) && (*(int *)(param_3 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
      plVar14 = (long *)(param_3[1] + (long)iVar8);
    }
    else {
      plVar14 = (long *)*param_3;
      *param_3 = (long)(plVar14 + 1);
    }
    lVar15 = *plVar14;
    if (*(long *)(param_1 + 0x5d8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x5d8) = 0;
    }
    if (lVar15 != 0) {
      lVar15 = (*(code *)PTR_strdup_02bf74c0)(lVar15);
      if (lVar15 != 0) {
        uVar9 = 0;
        *(long *)(param_1 + 0x5d8) = lVar15;
        break;
      }
      goto LAB_019cecf8;
    }
LAB_019ced70:
    uVar9 = 0;
  }
switchD_019cb184_caseD_2794:
  return (ulong)uVar9;
LAB_019ceb40:
  uVar9 = 4;
  goto switchD_019cb184_caseD_2794;
}

