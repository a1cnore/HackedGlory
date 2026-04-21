// classes/FMStatement — 14 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

void FMStatement::finalize(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  close((int)param_1);
  local_28 = &objc::class_t::FMStatement;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"finalize");
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMStatement::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  close((int)param_1);
  local_28 = &objc::class_t::FMStatement;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

int FMStatement::close(int param_1)

{
  int iVar1;
  ulong uVar2;
  sqlite3_stmt *pStmt;
  long lVar3;
  
  uVar2 = (ulong)(uint)param_1;
  lVar3 = (long)_statement;
  pStmt = *(sqlite3_stmt **)(uVar2 + lVar3);
  iVar1 = 0;
  if (pStmt != (sqlite3_stmt *)0x0) {
    iVar1 = _sqlite3_finalize(pStmt);
    *(undefined8 *)(uVar2 + lVar3) = 0;
  }
  *(undefined1 *)(uVar2 + (long)_inUse) = 0;
  return iVar1;
}




/* Function Stack Size: 0x10 bytes */

void FMStatement::reset(ID param_1,SEL param_2)

{
  if (*(sqlite3_stmt **)(param_1 + (long)_statement) != (sqlite3_stmt *)0x0) {
    _sqlite3_reset(*(sqlite3_stmt **)(param_1 + (long)_statement));
  }
  *(undefined1 *)(param_1 + (long)_inUse) = 0;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMStatement::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::FMStatement;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____ldhit_s_forquery__);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

sqlite3_stmt * FMStatement::statement(ID param_1,SEL param_2)

{
  return *(sqlite3_stmt **)(param_1 + (long)_statement);
}




/* Function Stack Size: 0x18 bytes */

void FMStatement::setStatement_(ID param_1,SEL param_2,sqlite3_stmt *param_3)

{
  *(sqlite3_stmt **)(param_1 + (long)_statement) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMStatement::query(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_query,1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void FMStatement::setQuery_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_atomic();
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long FMStatement::useCount(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_useCount);
}




/* Function Stack Size: 0x18 bytes */

void FMStatement::setUseCount_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_useCount) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMStatement::inUse(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_inUse) & 1;
}




/* Function Stack Size: 0x14 bytes */

void FMStatement::setInUse_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_inUse) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMStatement::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_query,0);
  return;
}

