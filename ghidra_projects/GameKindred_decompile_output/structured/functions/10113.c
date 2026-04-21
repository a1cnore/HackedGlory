// functions/10113 — 98 functions
#include "GameKindred.h"




void FUN_101130238(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"failureMessage");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc2000000;
  uStack_64 = 0;
  local_60 = FUN_101130334;
  local_58 = &DAT_101830d10;
  uVar3 = _objc_retain(*(undefined8 *)(param_1 + 0x28));
  local_50 = uVar3;
  local_48 = _objc_retain(*(undefined8 *)(param_1 + 0x30));
  _objc_msgSend(&objc::class_t::ADJUtil,
                "sendPostRequest:queueSize:prefixErrorMessage:suffixErrorMessage:activityPackage:responseDataHandler:"
                ,uVar1,lVar4 + -1,uVar2,&cf_Willretrylater,uVar3,&local_70);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x30),"sendNextSdkClick");
  _objc_release(local_48);
  _objc_release(local_50);
  return;
}




void FUN_101130334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(uVar1,"jsonResponse");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"increaseRetries");
    _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",&cf_Retryingsdk_clickpackageforthe_dtime);
    _objc_release(uVar3);
    _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"sendSdkClick:",*(undefined8 *)(param_1 + 0x20));
  }
  else {
    _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"activityHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"finishedTracking:",uVar1);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}




void FUN_101130428(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101130450(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101130478(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  return;
}




void FUN_1011304a8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  return;
}




void FUN_1011306e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"alloc");
  uVar2 = _objc_msgSend(uVar1,"init");
  uVar1 = DAT_101ea6088;
  DAT_101ea6088 = uVar2;
  _objc_release(uVar1);
  return;
}




void FUN_10113071c(void)

{
  return;
}




void FUN_101130720(void)

{
  return;
}




void FUN_101131724(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"alloc");
  uVar2 = _objc_msgSend(uVar1,"init");
  uVar1 = DAT_101ea6098;
  DAT_101ea6098 = uVar2;
  _objc_release(uVar1);
  return;
}




void FUN_101131a10(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_Failedtoopendatabaseduringcreatetables);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____INTEGERPRIMARYKEYAUTOINCREMENT___TEXT__);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar4);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____INTEGERPRIMARYKEYAUTOINCREMENT___TEXT__);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar5);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____TEXTPRIMARYKEYNOTNULL___TEXT__);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar6);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____TEXTPRIMARYKEYNOTNULL___INTEGER__);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar7);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(uVar2,"close");
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}




void FUN_101131c54(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_101131c64(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




void FUN_101131d74(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  uVar3 = _objc_retain(param_2);
  uVar4 = _objc_msgSend(uVar3,"open");
  if ((uVar4 & 1) == 0) {
    _NSLog(&cf_Failedtoopendatabaseduringupgrade);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    goto LAB_101132004;
  }
  if (*(uint *)(param_1 + 0x28) < 2) {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____INTEGERPRIMARYKEYAUTOINCREMENT___TEXT__);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    bVar2 = _objc_msgSend(uVar3,"executeUpdate:",uVar5);
    plVar9 = (long *)(param_1 + 0x20);
    *(byte *)(*(long *)(*plVar9 + 8) + 0x18) = *(byte *)(*(long *)(*plVar9 + 8) + 0x18) & bVar2;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____TEXTPRIMARYKEYNOTNULL___TEXT__);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    bVar2 = _objc_msgSend(uVar3,"executeUpdate:",uVar6);
    *(byte *)(*(long *)(*plVar9 + 8) + 0x18) = *(byte *)(*(long *)(*plVar9 + 8) + 0x18) & bVar2;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_CREATETABLEIFNOTEXISTS_____TEXTPRIMARYKEYNOTNULL___INTEGER__);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    bVar2 = _objc_msgSend(uVar3,"executeUpdate:",uVar7);
    *(byte *)(*(long *)(*plVar9 + 8) + 0x18) = *(byte *)(*(long *)(*plVar9 + 8) + 0x18) & bVar2;
    iVar1 = *(int *)(param_1 + 0x2c);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (2 < iVar1) {
LAB_101131f50:
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                    &cf_CREATETABLEIFNOTEXISTS_____INTEGERPRIMARYKEYAUTOINCREMENT___TEXT__);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      bVar2 = _objc_msgSend(uVar3,"executeUpdate:",uVar5);
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar2;
      iVar1 = *(int *)(param_1 + 0x2c);
      _objc_release(uVar5);
      if (3 < iVar1) goto LAB_101131fe4;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) == 2) goto LAB_101131f50;
LAB_101131fe4:
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
  _objc_msgSend(uVar3,"close");
LAB_101132004:
  _objc_release(uVar3);
  return;
}




void FUN_101132028(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_101132038(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




void FUN_101132104(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_Failedtoopendatabaseduringdroptables);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DROPTABLEIFEXISTS___);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar4);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DROPTABLEIFEXISTS___);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar5);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DROPTABLEIFEXISTS___);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar6);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DROPTABLEIFEXISTS___);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar7);
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) & bVar1;
    _objc_msgSend(uVar2,"close");
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}




void FUN_101132310(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_101132320(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




void FUN_101132668(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}




void FUN_101132678(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101132680(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringaddEventToTable__);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_INSERTINTO______VALUES____);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar4);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\0') {
      _objc_msgSend(uVar2,"lastErrorMessage");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      _objc_release(uVar6);
    }
    _objc_msgSend(uVar2,"close");
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}




void FUN_1011327b0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  return;
}




void FUN_1011327fc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  return;
}




void FUN_1011329fc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringgetEventsFromTable__);
  }
  else {
    if (*(long *)(param_1 + 0x38) < 1) {
      if (*(long *)(param_1 + 0x40) < 1) {
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_SELECT_____FROM___);
      }
      else {
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_SELECT_____FROM__LIMIT_li_);
      }
    }
    else if (*(long *)(param_1 + 0x40) < 1) {
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_SELECT_____FROM__WHERE__<__li_);
    }
    else {
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                    &cf_SELECT_____FROM__WHERE__<__liLIMIT_li_);
    }
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"executeQuery:",uVar4);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_msgSend(uVar2,"lastErrorMessage");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf_getEventsfromtable__failed___);
      _objc_release(uVar6);
      _objc_msgSend(uVar2,"close");
      _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"resetDB:",0);
      _objc_release(0);
    }
    else {
      iVar1 = _objc_msgSend(lVar5,"next");
      if (iVar1 != 0) {
        do {
          uVar6 = _objc_msgSend(lVar5,"intForColumnIndex:",0);
          _objc_msgSend(lVar5,"stringForColumnIndex:",1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar7,"dataUsingEncoding:",4);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",uVar8
                        ,0,0);
          lVar9 = _objc_retainAutoreleasedReturnValue();
          if (lVar9 == 0) {
            _NSLog(&cf_ErrorJSONdeserializationofeventid_dfromtable__);
          }
          else {
            uVar10 = _objc_msgSend(lVar9,"mutableCopy");
            _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithInt:",uVar6);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar10,"setValue:forKey:",uVar6,&cf_event_id);
            _objc_release(uVar6);
            _objc_msgSend(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
                          "addObject:",uVar10);
            _objc_release(uVar10);
          }
          _objc_release(lVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          uVar3 = _objc_msgSend(lVar5,"next");
        } while ((uVar3 & 1) != 0);
      }
      _objc_msgSend(uVar2,"close");
      _objc_release(lVar5);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}




void FUN_101132dfc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  return;
}




void FUN_101132e38(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  return;
}




void FUN_101133144(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringinsertOrReplaceKeyValueToTable__);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                  &cf_INSERTORREPLACEINTO_________VALUES______);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"isEqualToString:",&cf_store);
    uVar1 = _objc_msgSend(uVar2,"executeUpdate:",uVar4);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\0') {
      _objc_msgSend(uVar2,"lastErrorMessage");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      _objc_release(uVar6);
    }
    _objc_msgSend(uVar2,"close");
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}




void FUN_10113329c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),8);
  return;
}




void FUN_1011332f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  return;
}




void FUN_101133524(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringgetValueFromTable__);
    goto LAB_10113378c;
  }
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_SELECT_____FROM__WHERE_______);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"executeQuery:",uVar4);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _objc_msgSend(uVar2,"lastErrorMessage");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf_getValueFromTable__failed___);
LAB_101133764:
    _objc_release(uVar7);
  }
  else {
    iVar1 = _objc_msgSend(lVar5,"next");
    if (iVar1 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      uVar3 = _objc_msgSend(lVar5,"columnIndexIsNull:",1);
      if ((uVar3 & 1) == 0) {
        iVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"isEqualToString:",&cf_store);
        if (iVar1 == 0) {
          uVar7 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"alloc");
          uVar6 = _objc_msgSend(lVar5,"longLongIntForColumnIndex:",1);
          uVar6 = _objc_msgSend(uVar7,"initWithLongLong:",uVar6);
          lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
          uVar7 = *(undefined8 *)(lVar9 + 0x28);
          *(undefined8 *)(lVar9 + 0x28) = uVar6;
        }
        else {
          uVar6 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
          _objc_msgSend(lVar5,"stringForColumnIndex:",1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          uVar6 = _objc_msgSend(uVar6,"initWithString:",uVar7);
          lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
          uVar8 = *(undefined8 *)(lVar9 + 0x28);
          *(undefined8 *)(lVar9 + 0x28) = uVar6;
          _objc_release(uVar8);
        }
        goto LAB_101133764;
      }
    }
  }
  _objc_msgSend(uVar2,"close");
  _objc_release(lVar5);
  _objc_release(uVar4);
LAB_10113378c:
  _objc_release(uVar2);
  return;
}




void FUN_1011337a8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  return;
}




void FUN_1011337f4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  return;
}




void FUN_101133998(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = _objc_retain(param_2);
  uVar4 = _objc_msgSend(uVar3,"open");
  if ((uVar4 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringgetEventCountFromTable__);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_SELECTCOUNT___FROM___);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"executeQuery:",uVar5);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_msgSend(uVar3,"lastErrorMessage");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf_getEventCountFromTable__failed___);
      _objc_release(uVar7);
    }
    else {
      iVar1 = _objc_msgSend(lVar6,"next");
      if (iVar1 == 0) {
        _NSLog(&cf_getEventCountFromTable__failed);
      }
      else {
        uVar2 = _objc_msgSend(lVar6,"intForColumnIndex:",0);
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
      }
    }
    _objc_msgSend(uVar3,"close");
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  return;
}




void FUN_101133b1c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  return;
}




void FUN_101133b50(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return;
}




void FUN_101133cb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_2);
  uVar2 = _objc_msgSend(uVar1,"open");
  if ((uVar2 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringremoveEventsFromTable__);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DELETEFROM__WHERE__<__li_);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend(uVar1,"executeUpdate:",uVar3);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend(uVar1,"lastErrorMessage");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf_removeEventsFromTable__failed___);
      _objc_release(uVar4);
    }
    _objc_msgSend(uVar1,"close");
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}




void FUN_101133dcc(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101133dd4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101133f10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_2);
  uVar2 = _objc_msgSend(uVar1,"open");
  if ((uVar2 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringremoveEventFromTable__);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_DELETEFROM__WHERE____li_);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend(uVar1,"executeUpdate:",uVar3);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend(uVar1,"lastErrorMessage");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf_removeEventfromtable__failed___);
      _objc_release(uVar4);
    }
    _objc_msgSend(uVar1,"close");
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}




void FUN_10113402c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101134034(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101134178(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(uVar2,"open");
  if ((uVar3 & 1) == 0) {
    _NSLog(&cf_FailedtoopendatabaseduringgetNthEventIdFromTable__);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_SELECT__FROM__LIMIT1OFFSET_li_);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"executeQuery:",uVar4);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_msgSend(uVar2,"lastErrorMessage");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf_getNthEventIdFromTable__failed___);
      _objc_release(uVar6);
    }
    else {
      iVar1 = _objc_msgSend(lVar5,"next");
      if (iVar1 == 0) {
        _NSLog(&cf_getNthEventIdFromTable__failed);
      }
      else {
        uVar6 = _objc_msgSend(lVar5,"longLongIntForColumnIndex:",0);
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar6;
      }
    }
    _objc_msgSend(uVar2,"close");
    _objc_release(lVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}




void FUN_101134310(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  return;
}




void FUN_101134344(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return;
}




void FUN_101134bc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_38;
  
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"FMDBUserVersion");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"componentsSeparatedByString:",&cf__);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(uVar2,"count");
  _objc_release(uVar2);
  uVar2 = uVar1;
  if (uVar3 < 3) {
    _objc_msgSend(uVar1,"stringByAppendingString:",&cf__0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_msgSend(uVar2,"stringByReplacingOccurrencesOfString:withString:",&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (char *)0x0;
  uVar1 = _objc_retainAutorelease();
  pcVar4 = (char *)_objc_msgSend(uVar1,"UTF8String");
  uVar3 = _strtoul(pcVar4,&local_38,0x10);
  DAT_101ea60b0 = (undefined4)uVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




void FUN_101134cf8(void)

{
  return;
}




void FUN_101134cfc(void)

{
  return;
}




undefined8 FUN_10113505c(undefined8 param_1,int param_2)

{
  u_int32_t uVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = _objc_retain();
  dVar4 = (double)_objc_msgSend(&_OBJC_CLASS___NSDate,"timeIntervalSinceReferenceDate");
  if (param_2 == 0) {
    *(double *)(lVar3 + FMDatabase::_startBusyRetryTime) = dVar4;
    _objc_release(lVar3);
  }
  else {
    dVar6 = *(double *)(lVar3 + FMDatabase::_startBusyRetryTime);
    dVar5 = (double)_objc_msgSend(lVar3,"maxBusyRetryTimeInterval");
    _objc_release(lVar3);
    if (dVar5 <= dVar4 - dVar6) {
      return 0;
    }
    uVar1 = _arc4random_uniform(0x32);
    iVar2 = _sqlite3_sleep(uVar1 + 0x32);
    if (iVar2 != uVar1 + 0x32) {
      _NSLog(&
             cf_WARNING_Requestedsleepof_imilliseconds_butSQLitereturned_i_MaybeSQLitewasn_tbuiltwithHAVE_USLEEP_1_
            );
    }
  }
  return 1;
}




void FUN_101135634(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = _objc_msgSend(param_2,"inUse");
  *param_3 = bVar1 ^ 1;
  return;
}




undefined8 FUN_101137fd8(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = _objc_retainBlock();
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithCapacity:",(long)param_2);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    if (0 < param_2) {
      lVar5 = (long)param_2;
      do {
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",*param_4);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        if (*param_3 == 0) {
          _objc_msgSend(&_OBJC_CLASS___NSNull,"null");
        }
        else {
          _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:");
        }
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar2,"setObject:forKey:",uVar4,uVar3);
        _objc_release(uVar4);
        _objc_release(uVar3);
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar3 = (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  return uVar3;
}




void FUN_101138928(sqlite3_context *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _sqlite3_user_data(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
  _objc_release(lVar1);
  return;
}




void FUN_101139260(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)FMDatabaseQueue::_db;
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),"close");
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
  _objc_release(uVar1);
  return;
}




void FUN_1011392a8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_1011392b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101139488(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  iVar1 = _objc_msgSend(uVar2,"hasOpenResultSets");
  if (iVar1 != 0) {
    _NSLog(&
           cf_Warning_thereisatleastoneopenresultsetaroundafterperforming_FMDatabaseQueueinDatabase__
          );
  }
  _objc_release(uVar2);
  return;
}




void FUN_1011394fc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}




void FUN_101139530(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10113960c(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  char local_31;
  
  local_31 = '\0';
  cVar2 = *(char *)(param_1 + 0x30);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  if (cVar2 == '\0') {
    ppuVar4 = &PTR_s_beginTransaction_10184b0e8;
  }
  else {
    ppuVar4 = &PTR_s_beginDeferredTransaction_10184b0e0;
  }
  _objc_msgSend(uVar3,*ppuVar4);
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,&local_31);
  _objc_release(uVar3);
  cVar2 = local_31;
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  if (cVar2 == '\0') {
    ppuVar4 = &PTR_s_commit_10184b0f8;
  }
  else {
    ppuVar4 = &PTR_s_rollback_10184b0f0;
  }
  _objc_msgSend(uVar3,*ppuVar4);
  _objc_release(uVar3);
  return;
}




void FUN_10113970c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}




void FUN_101139740(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_1011398a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}




void FUN_1011398b8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_1011398c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_41;
  
  DAT_101ea60c8 = DAT_101ea60c8 + 1;
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_savePoint_ld);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_41 = '\0';
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  local_50 = *(undefined8 *)(lVar6 + 0x28);
  iVar1 = _objc_msgSend(uVar3,"startSavePointWithName:error:",uVar2,&local_50);
  uVar4 = _objc_retain(local_50);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,uVar3,&local_41);
    _objc_release(uVar3);
    if (local_41 != '\0') {
      _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      local_58 = *(undefined8 *)(lVar6 + 0x28);
      _objc_msgSend(uVar3,"rollbackToSavePointWithName:error:",uVar2,&local_58);
      uVar4 = _objc_retain(local_58);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"database");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    local_60 = *(undefined8 *)(lVar6 + 0x28);
    _objc_msgSend(uVar3,"releaseSavePointWithName:error:",uVar2,&local_60);
    uVar4 = _objc_retain(local_60);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




void FUN_101139ab0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}




void FUN_101139af4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10113d56c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)FMDatabasePool::_databaseInPool;
  iVar1 = _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),"containsObject:",
                        *(undefined8 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    _objc_msgSend(&_OBJC_CLASS___NSException,"exceptionWithName:reason:userInfo:",
                  &cf_Databasealreadyinpool,
                  &cf_TheFMDatabasebeingputbackintothepoolisalreadypresentinthepool,0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"raise");
    _objc_release(uVar2);
  }
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),"addObject:",
                *(undefined8 *)(param_1 + 0x28));
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseOutPool),
                "removeObject:",*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10113d638(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10113d660(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10113d778(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}




void FUN_10113d788(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10113d790(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)FMDatabasePool::_databaseInPool;
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8),"lastObject");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar3;
  _objc_release(uVar6);
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    lVar9 = (long)FMDatabasePool::_maximumNumberOfDatabasesToCreate;
    if (*(long *)(lVar7 + lVar9) != 0) {
      lVar4 = _objc_msgSend(*(undefined8 *)(lVar7 + FMDatabasePool::_databaseOutPool),"count");
      lVar8 = _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8),"count");
      lVar7 = *(long *)(param_1 + 0x20);
      if (*(ulong *)(lVar7 + lVar9) <= (ulong)(lVar8 + lVar4)) {
        _NSLog(&cf_Maximumnumberofdatabases__ld_hasalreadybeenreached_);
        return;
      }
    }
    _objc_msgSend(&objc::class_t::FMDatabase,"databaseWithPath:",
                  *(undefined8 *)(lVar7 + FMDatabasePool::_path));
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar3;
    _objc_release(uVar6);
    bVar1 = true;
  }
  else {
    _objc_msgSend(*(undefined8 *)(lVar7 + FMDatabasePool::_databaseOutPool),"addObject:");
    _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8),"removeLastObject");
    bVar1 = false;
  }
  iVar2 = _objc_msgSend(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
                        "openWithFlags:",
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_openFlags));
  if (iVar2 == 0) {
    _NSLog(&cf_Couldnotopenupthedatabaseatpath__);
  }
  else {
    lVar7 = (long)FMDatabasePool::_delegate;
    iVar2 = _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),"respondsToSelector:",
                          "databasePool:shouldAddDatabaseToPool:");
    if ((iVar2 == 0) ||
       (uVar5 = _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),
                              "databasePool:shouldAddDatabaseToPool:",*(long *)(param_1 + 0x20),
                              *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28)),
       (uVar5 & 1) != 0)) {
      lVar8 = (long)FMDatabasePool::_databaseOutPool;
      uVar5 = _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8),"containsObject:",
                            *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      if (((uVar5 & 1) == 0) &&
         ((_objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8),"addObject:",
                         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28)), bVar1 &&
          (iVar2 = _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),
                                 "respondsToSelector:","databasePool:didAddDatabase:"), iVar2 != 0))
         )) {
        _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),
                      "databasePool:didAddDatabase:",*(long *)(param_1 + 0x20),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
        return;
      }
      return;
    }
    _objc_msgSend(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),"close");
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  _objc_release(uVar3);
  return;
}




void FUN_10113da84(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113dab4(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113dba4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(*(undefined8 *)
                         (*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseInPool),"count"
                       );
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}




void FUN_10113dbec(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113dc1c(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113dd0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(*(undefined8 *)
                         (*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseOutPool),
                        "count");
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}




void FUN_10113dd54(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113dd84(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113de74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _objc_msgSend(*(undefined8 *)
                         (*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseOutPool),
                        "count");
  lVar2 = _objc_msgSend(*(undefined8 *)
                         (*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseInPool),"count"
                       );
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar2 + lVar1;
  return;
}




void FUN_10113dee8(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113df18(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113dfac(long param_1)

{
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseOutPool),
                "removeAllObjects");
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)FMDatabasePool::_databaseInPool),
                "removeAllObjects");
  return;
}




void FUN_10113e000(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113e008(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113e4d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"alloc");
  uVar2 = _objc_msgSend(uVar1,"init");
  uVar1 = DAT_101ea60d8;
  DAT_101ea60d8 = uVar2;
  _objc_release(uVar1);
  return;
}




void FUN_10113e51c(void)

{
  return;
}




void FUN_10113e520(void)

{
  return;
}




void FUN_10113ef54(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar2 = _objc_msgSend(&objc::class_t::AMPDeviceInfo,"alloc");
  uVar2 = _objc_msgSend(uVar2,"init");
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_deviceInfo);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_deviceInfo) = uVar2;
  _objc_release(uVar5);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_uploadTaskID) =
       *(undefined8 *)PTR__UIBackgroundTaskInvalid_101444100;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"objectAtIndex:",0);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_msgSend(uVar5,"stringByAppendingPathComponent:",&cf_com_amplitude_plist);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)Amplitude::_propertyListPath;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7) = uVar2;
  _objc_release(uVar6);
  _objc_msgSend(uVar5,"stringByAppendingPathComponent:",&cf_com_amplitude_archiveDict);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)Amplitude::_eventsDataPath;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9) = uVar2;
  _objc_release(uVar6);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"upgradePrefs");
  _objc_msgSend(*(long *)(param_1 + 0x20),"deserializePList:",
                *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)Amplitude::_propertyList;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7) = uVar2;
  _objc_release(uVar6);
  if (*(long *)(*(long *)(param_1 + 0x20) + lVar7) == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7) = uVar2;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
    _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar6,"setObject:forKey:",uVar2,&cf_database_version);
    _objc_release(uVar2);
    uVar3 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"savePropertyList");
    if ((uVar3 & 1) == 0) {
      _NSLog(&cf_ERROR_UnabletosavepropertyListtofileoninitialization);
    }
  }
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),"objectForKey:",
                &cf_database_version);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = _objc_msgSend(lVar4,"intValue");
  }
  if ((int)uVar2 < 3) {
    _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar6,"upgrade:newVersion:",uVar2,3);
    _objc_release(uVar6);
    if (iVar1 != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
      _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar8,"setObject:forKey:",uVar6,&cf_database_version);
      _objc_release(uVar6);
      _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"savePropertyList");
    }
  }
  if (((int)uVar2 < 2) &&
     (iVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"migrateEventsDataToDB"), iVar1 != 0)) {
    _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar2,"fileExistsAtPath:",
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
    _objc_release(uVar2);
    if (iVar1 != 0) {
      _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"removeItemAtPath:error:",
                    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9),0);
      _objc_release(uVar2);
    }
  }
  lVar7 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"previousSessionId");
  if (-1 < lVar7) {
    *(long *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_sessionId) = lVar7;
  }
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"initializeDeviceId");
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_backgroundQueue),
                "setSuspended:",0);
  _objc_release(lVar4);
  _objc_release(uVar5);
  return;
}




void FUN_10113f40c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113f414(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113f41c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = _NSClassFromString(&cf_CLLocationManager);
  uVar1 = _objc_msgSend(uVar1,"alloc");
  uVar1 = _objc_msgSend(uVar1,"init");
  lVar4 = (long)Amplitude::_locationManager;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4) = uVar1;
  _objc_release(uVar2);
  uVar1 = _objc_msgSend(&objc::class_t::AMPLocationManagerDelegate,"alloc");
  uVar1 = _objc_msgSend(uVar1,"init");
  lVar3 = (long)Amplitude::_locationManagerDelegate;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3) = uVar1;
  _objc_release(uVar2);
  uVar1 = _NSSelectorFromString(&cf_setDelegate_);
  _objc_msgSend(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),"performSelector:withObject:",
                uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  return;
}




void FUN_10113f4ec(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10113f4f4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10113fd0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"setUserId:",*(undefined8 *)(param_1 + 0x28));
    return;
  }
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"getValue:",&cf_user_id);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_userId);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_userId) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}




void FUN_10113fdb0(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10113fdd8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}

