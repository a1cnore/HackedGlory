// functions/10114 — 229 functions
#include "GameKindred.h"




void FUN_101140328(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"optOut");
  if (iVar1 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + 0x50) == '\0') {
      _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"startOrContinueSession:",
                    *(undefined8 *)(param_1 + 0x30));
    }
    _objc_msgSend(uVar5,"setValue:forKey:",*(undefined8 *)(param_1 + 0x28),&cf_event_type);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_msgSend(uVar10,"truncate:",*(undefined8 *)(param_1 + 0x38));
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar10,"replaceWithEmptyJSON:",uVar6);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setValue:forKey:",uVar10,&cf_event_properties);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"replaceWithEmptyJSON:",
                  *(undefined8 *)(param_1 + 0x40));
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setValue:forKey:",uVar6,&cf_api_properties);
    _objc_release(uVar6);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_msgSend(uVar10,"truncate:",*(undefined8 *)(param_1 + 0x48));
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar10,"replaceWithEmptyJSON:",uVar6);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setValue:forKey:",uVar10,&cf_user_properties);
    _objc_release(uVar10);
    _objc_release(uVar6);
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_sessionId);
    }
    else {
      uVar6 = 0xffffffffffffffff;
    }
    _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",uVar6);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setValue:forKey:",uVar6,&cf_session_id);
    _objc_release(uVar6);
    _objc_msgSend(uVar5,"setValue:forKey:",*(undefined8 *)(param_1 + 0x30),&cf_timestamp);
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"annotateEvent:",uVar5);
    _objc_msgSend(&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",uVar5,0,0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar10 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
    uVar10 = _objc_msgSend(uVar10,"initWithData:encoding:",uVar6,4);
    iVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"isEqualToString:",&cf__identify);
    if (iVar1 == 0) {
      ppuVar8 = &PTR_s_addEvent__10184b220;
    }
    else {
      ppuVar8 = &PTR_s_addIdentify__10184b2b8;
    }
    _objc_msgSend(uVar4,*ppuVar8,uVar10);
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"truncateEventQueues");
    iVar2 = _objc_msgSend(uVar4,"getTotalEventCount");
    iVar3 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"eventUploadThreshold");
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar2 / iVar3;
    }
    if ((iVar2 == iVar1 * iVar3) &&
       (iVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"eventUploadThreshold"),
       iVar1 <= iVar2)) {
      _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"uploadEvents");
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = _objc_msgSend(uVar9,"eventUploadPeriodSeconds");
      _objc_msgSend(uVar9,"uploadEventsWithDelay:",uVar7);
    }
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    _NSLog(&cf_Userhasoptedoutoftracking_Event__notlogged_);
  }
  _objc_release(uVar4);
  return;
}




void FUN_101140744(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  return;
}




void FUN_10114078c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  return;
}




void FUN_1011413cc(long param_1,long param_2)

{
  _objc_moveWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}




void FUN_1011413d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  return;
}




void FUN_1011413e0(long param_1)

{
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  code *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_40 = PTR___NSConcreteStackBlock_101444138;
  local_38 = 0xc2000000;
  uStack_34 = 0;
  local_30 = FUN_101141440;
  puStack_28 = &DAT_101831390;
  local_20 = *(undefined8 *)(param_1 + 0x20);
  local_18 = *(undefined4 *)(param_1 + 0x28);
  _dispatch_async(PTR___dispatch_main_q_101444238,&local_40);
  return;
}




void FUN_101141440(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_loadWeakRetained(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_msgSend((double)*(int *)(param_1 + 0x28),uVar1,"performSelector:withObject:afterDelay:",
                "uploadEventsInBackground",0);
  _objc_release(uVar1);
  return;
}




void FUN_10114149c(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_1011414ac(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




void FUN_1011414b8(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_1011414c8(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




void FUN_10114165c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 local_68;
  
  uVar2 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"optOut");
  if (((uVar2 & 1) != 0) ||
     (*(char *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_offline) != '\0')) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_updatingCurrently) = 0;
    return;
  }
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"getTotalEventCount");
  dVar13 = (double)iVar1;
  if (0 < *(int *)(param_1 + 0x28)) {
    dVar13 = (double)_fminl(dVar13,(double)*(int *)(param_1 + 0x28));
  }
  lVar12 = (long)dVar13;
  if (lVar12 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_updatingCurrently) = 0;
    goto LAB_101141974;
  }
  _objc_msgSend(uVar3,"getEvents:limit:",0xffffffffffffffff,lVar12);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"getIdentifys:limit:",0xffffffffffffffff,lVar12);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"mergeEventsAndIdentifys:identifys:numEvents:",uVar4
                ,uVar5,lVar12);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar6,"objectForKey:",&cf_events);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar6,"objectForKey:",&cf_max_event_id);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  uVar9 = _objc_msgSend(uVar8,"longLongValue");
  _objc_release(uVar8);
  _objc_msgSend(uVar6,"objectForKey:",&cf_max_identify_id);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  uVar10 = _objc_msgSend(uVar8,"longLongValue");
  _objc_release(uVar8);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"makeJSONSerializable:",uVar7);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  local_68 = 0;
  _objc_msgSend(&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",uVar8,0,
                &local_68);
  lVar12 = _objc_retainAutoreleasedReturnValue();
  lVar11 = _objc_retain(local_68);
  _objc_release(uVar8);
  if (lVar11 == 0) {
    if (lVar12 != 0) {
      uVar8 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
      uVar8 = _objc_msgSend(uVar8,"initWithData:encoding:",lVar12,4);
      _objc_msgSend(*(undefined8 *)(param_1 + 0x20),
                    "makeEventUploadPostRequest:events:maxEventId:maxIdentifyId:",
                    &cf_https___api_amplitude_com_,uVar8,uVar9,uVar10);
      _objc_release(uVar8);
      goto LAB_101141950;
    }
  }
  else {
    _NSLog(&cf_ERROR_NSJSONSerializationerror___);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_updatingCurrently) = 0;
    _objc_release(lVar12);
    lVar12 = lVar11;
LAB_101141950:
    _objc_release(lVar12);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_101141974:
  _objc_release(uVar3);
  return;
}




void FUN_101141a2c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101141a34(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101142684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  double dVar15;
  
  uVar5 = _objc_retain(param_2);
  uVar6 = _objc_retain(param_3);
  lVar7 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar8 = _objc_retainAutoreleasedReturnValue();
  lVar9 = _objc_retain(uVar5);
  if (lVar9 == 0) {
    if (lVar7 == 0) {
      pcVar11 = &cf_ERROR_responseempty_erroremptyforNSURLConnection;
    }
    else {
      lVar10 = _objc_msgSend(lVar7,"code");
      if (((lVar10 == -0x3f1) || (lVar10 = _objc_msgSend(lVar7,"code"), lVar10 == -0x3eb)) ||
         (lVar10 = _objc_msgSend(lVar7,"code"), lVar10 == -0x3e9)) goto LAB_1011429b0;
      pcVar11 = &cf_ERROR_Connectionerror___;
    }
    _NSLog(pcVar11);
LAB_1011429b0:
    bVar1 = false;
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_updatingCurrently) = 0;
  }
  else {
    lVar10 = _objc_msgSend(lVar9,"statusCode");
    if (lVar10 != 200) {
      lVar10 = _objc_msgSend(lVar9,"statusCode");
      if (lVar10 == 0x19d) {
        lVar10 = (long)Amplitude::_backoffUpload;
        if ((*(char *)(*(long *)(param_1 + 0x20) + lVar10) != '\0') &&
           (*(int *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_backoffUploadBatchSize) == 1)) {
          if (-1 < *(long *)(param_1 + 0x28)) {
            _objc_msgSend(uVar8,"removeEvent:");
          }
          if (-1 < *(long *)(param_1 + 0x30)) {
            _objc_msgSend(uVar8,"removeIdentifys:");
          }
        }
        *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar10) = 1;
        iVar2 = _objc_msgSend(uVar8,"getEventCount");
        lVar10 = *(long *)(param_1 + 0x20);
        lVar13 = (long)Amplitude::_backoffUploadBatchSize;
        dVar15 = (double)_fminl((double)iVar2,(double)*(int *)(lVar10 + lVar13));
        fVar14 = (float)(int)((float)(int)dVar15 * 0.5);
        *(int *)(lVar10 + lVar13) = (int)fVar14;
        *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_updatingCurrently) = 0;
        _objc_msgSend(fVar14,(int)((float)(int)dVar15 * 0.5),*(long *)(param_1 + 0x20),
                      "uploadEventsWithLimit:",*(undefined4 *)(*(long *)(param_1 + 0x20) + lVar13));
      }
      else {
        _objc_msgSend(lVar9,"statusCode");
        uVar5 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
        uVar5 = _objc_msgSend(uVar5,"initWithData:encoding:",uVar6,4);
        _NSLog(&cf_ERROR_Connectionresponsereceived__ld___);
        _objc_release(uVar5);
      }
      goto LAB_1011429b0;
    }
    uVar5 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
    uVar5 = _objc_msgSend(uVar5,"initWithData:encoding:",uVar6,4);
    iVar2 = _objc_msgSend(uVar5,"isEqualToString:",&cf_success);
    if (iVar2 == 0) {
      iVar2 = _objc_msgSend(uVar5,"isEqualToString:",&cf_invalid_api_key);
      if (iVar2 == 0) {
        iVar2 = _objc_msgSend(uVar5,"isEqualToString:",&cf_bad_checksum);
        if (iVar2 == 0) {
          iVar2 = _objc_msgSend(uVar5,"isEqualToString:",&cf_request_db_write_failed);
          if (iVar2 == 0) {
            pcVar11 = &cf_ERROR____willattempttoreuploadlater;
          }
          else {
            pcVar11 = &cf_ERROR_Couldn_twritetorequestdatabaseonserver_willattempttoreuploadlater;
          }
        }
        else {
          pcVar11 = &cf_ERROR_Badchecksum_postrequestwasmangledintransit_willattempttoreuploadlater;
        }
      }
      else {
        pcVar11 = &cf_ERROR_InvalidAPIKey_makesureyourAPIkeyiscorrectininitializeApiKey_;
      }
      _NSLog(pcVar11);
      bVar1 = false;
    }
    else {
      if (-1 < *(long *)(param_1 + 0x28)) {
        _objc_msgSend(uVar8,"removeEvents:");
      }
      if (-1 < *(long *)(param_1 + 0x30)) {
        _objc_msgSend(uVar8,"removeIdentifys:");
      }
      bVar1 = true;
    }
    _objc_release(uVar5);
    plVar12 = (long *)(param_1 + 0x20);
    *(undefined1 *)(*plVar12 + (long)Amplitude::_updatingCurrently) = 0;
    if (bVar1) {
      iVar2 = _objc_msgSend(uVar8,"getEventCount");
      iVar3 = _objc_msgSend(*plVar12,"eventUploadThreshold");
      if (iVar3 < iVar2) {
        lVar10 = *plVar12;
        if (*(char *)(lVar10 + Amplitude::_backoffUpload) == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(lVar10 + Amplitude::_backoffUploadBatchSize);
        }
        _objc_msgSend(lVar10,"uploadEventsWithLimit:",uVar4);
        goto LAB_101142b48;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  plVar12 = (long *)(param_1 + 0x20);
  lVar10 = (long)Amplitude::_uploadTaskID;
  lVar13 = *(long *)PTR__UIBackgroundTaskInvalid_101444100;
  if (*(long *)(*plVar12 + lVar10) != lVar13) {
    if (bVar1) {
      *(undefined1 *)(*plVar12 + (long)Amplitude::_backoffUpload) = 0;
      uVar4 = _objc_msgSend(*plVar12,"eventUploadMaxBatchSize");
      *(undefined4 *)(*plVar12 + (long)Amplitude::_backoffUploadBatchSize) = uVar4;
    }
    _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"endBackgroundTask:",*(undefined8 *)(*plVar12 + lVar10));
    _objc_release(uVar5);
    *(long *)(*plVar12 + lVar10) = lVar13;
  }
LAB_101142b48:
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar9);
  return;
}




void FUN_101142ba0(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101142ba8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101142d44(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"startOrContinueSession:",
                *(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_inForeground) = 1;
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"uploadEvents");
  return;
}




void FUN_101142d98(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101142dc0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101142fe4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)Amplitude::_uploadTaskID;
  lVar3 = *(long *)PTR__UIBackgroundTaskInvalid_101444100;
  if (*(long *)(*(long *)(param_1 + 0x20) + lVar2) != lVar3) {
    _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"endBackgroundTask:",*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
    _objc_release(uVar1);
    *(long *)(*(long *)(param_1 + 0x20) + lVar2) = lVar3;
  }
  return;
}




void FUN_101143078(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101143080(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101143088(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)Amplitude::_inForeground) = 0;
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"refreshSessionTime:",
                *(undefined8 *)(param_1 + 0x28));
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"uploadEventsWithLimit:",0);
  return;
}




void FUN_1011430dc(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101143104(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101143950(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_128;
  long local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  _objc_msgSend(&objc::class_t::AMPIdentify,"identify");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  uVar2 = _objc_retain(*(undefined8 *)(param_1 + 0x20));
  uVar3 = _objc_msgSend(uVar2,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8,
                        0x10);
  if (uVar3 != 0) {
    lVar5 = *local_118;
    do {
      uVar6 = 0;
      do {
        if (*local_118 != lVar5) {
          _objc_enumerationMutation(uVar2);
        }
        uVar7 = *(undefined8 *)(local_120 + uVar6 * 8);
        _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"objectForKey:",uVar7);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar1,"set:value:",uVar7,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
      uVar3 = _objc_msgSend(uVar2,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8
                            ,0x10);
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"identify:",uVar1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_101143b10(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101143b38(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101143c54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar4 = (long)Amplitude::_userId;
  uVar2 = _objc_retain(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(lVar1 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
  _objc_release(uVar3);
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"insertOrReplaceKeyValue:value:",&cf_user_id,
                *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar4));
  _objc_release(uVar2);
  return;
}




void FUN_101143ce0(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101143d08(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101143d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",*(undefined1 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"insertOrReplaceKeyLongValue:value:",&cf_opt_out,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




void FUN_101143fa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar4 = (long)Amplitude::_deviceId;
  uVar2 = _objc_retain(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(lVar1 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
  _objc_release(uVar3);
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"insertOrReplaceKeyValue:value:",&cf_device_id,*(undefined8 *)(param_1 + 0x20)
               );
  _objc_release(uVar2);
  return;
}




void FUN_10114402c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101144054(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101146a48(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(double *)PTR__kCFCoreFoundationVersionNumber_1014442a0 < 1212.0) {
    uVar1 = _objc_getClass("NSMutableDictionary");
    auVar4 = _protocol_getMethodDescription
                       (&objc::protocol_t::__ARCLiteKeyedSubscripting__,
                        "setObject:forKeyedSubscript:",1,1);
    _class_replaceMethod(uVar1,auVar4._0_8_,FUN_101146d74,auVar4._8_8_);
  }
  if (PTR__objc_readClassPair_1014443b0 == (undefined *)0x0) {
    __dyld_register_func_for_add_image(FUN_101146d94);
    lVar2 = _objc_getClass("NSUndoManagerProxy");
    if ((lVar2 != 0) &&
       (DAT_101ea60f0 = _class_getInstanceVariable(lVar2,"_targetClass"), DAT_101ea60f0 != 0)) {
      _class_addMethod(lVar2,"isKindOfClass:",FUN_101147178,"@:#");
    }
    lVar2 = _objc_getClass("NSManagedObject");
    if (lVar2 != 0) {
      uVar1 = _object_getClass();
      lVar2 = _class_getInstanceMethod(lVar2,"init");
      if (lVar2 == 0) {
        DAT_101ea60f8 = FUN_101148270;
      }
      else {
        DAT_101ea60f8 = (code *)_method_setImplementation(lVar2,FUN_1011471cc);
      }
      lVar2 = _class_getInstanceMethod(uVar1,"allocWithEntity:");
      if (lVar2 == 0) {
        DAT_101ea6100 = FUN_101148270;
      }
      else {
        DAT_101ea6100 = (code *)_method_setImplementation(lVar2,FUN_1011471e8);
      }
      lVar2 = _class_getInstanceMethod(uVar1,"allocBatch:withEntity:count:");
      if (lVar2 == 0) {
        DAT_101ea6108 = FUN_101148270;
      }
      else {
        DAT_101ea6108 = (code *)_method_setImplementation(lVar2,FUN_101147204);
      }
    }
    DAT_101ea6110 = _objc_getClass("NSMutableDictionary");
    DAT_101ea6118 = _objc_getClass("NSConstantString");
    DAT_101ea6120 = _objc_getClass("NSString");
    lVar2 = _objc_getClass("NSKnownKeysMappingStrategy1");
    if (lVar2 != 0) {
      lVar3 = _class_getInstanceMethod(lVar2,"fastIndexForKnownKey:");
      if (lVar3 == 0) {
        DAT_101ea6128 = FUN_101148270;
      }
      else {
        DAT_101ea6128 = (code *)_method_setImplementation(lVar3,FUN_101147254);
      }
      lVar2 = _class_getInstanceMethod(lVar2,"indexForKey:");
      if (lVar2 == 0) {
        DAT_101ea6130 = FUN_101148270;
      }
      else {
        DAT_101ea6130 = (code *)_method_setImplementation(lVar2,FUN_1011472c4);
      }
    }
    lVar2 = _objc_getClass("NSKnownKeysDictionary1");
    if (lVar2 != 0) {
      lVar3 = _class_getInstanceMethod(lVar2,"objectForKey:");
      if (lVar3 == 0) {
        DAT_101ea6138 = FUN_101148270;
      }
      else {
        DAT_101ea6138 = (code *)_method_setImplementation(lVar3,FUN_101147334);
      }
      lVar3 = _class_getInstanceMethod(lVar2,"removeObjectForKey:");
      if (lVar3 == 0) {
        DAT_101ea6140 = FUN_101148270;
      }
      else {
        DAT_101ea6140 = (code *)_method_setImplementation(lVar3,FUN_1011473a4);
      }
      lVar3 = _class_getInstanceMethod(lVar2,"setObject:forKey:");
      if (lVar3 == 0) {
        DAT_101ea6148 = FUN_101148270;
      }
      else {
        DAT_101ea6148 = (code *)_method_setImplementation(lVar3,FUN_101147418);
      }
      lVar2 = _class_getInstanceMethod(lVar2,"addEntriesFromDictionary:");
      if (lVar2 == 0) {
        DAT_101ea6150 = FUN_101148270;
      }
      else {
        DAT_101ea6150 = (code *)_method_setImplementation(lVar2,FUN_1011474a0);
      }
    }
  }
  return;
}




void FUN_101146d74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    _objc_msgSend(param_1,"setObject:forKey:");
    return;
  }
  _objc_msgSend(param_1,"removeObjectForKey:",param_4);
  return;
}




void FUN_101146d94(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_80;
  long local_70;
  long local_68;
  
  if ((DAT_101ea6208 & 1) == 0) {
    DAT_101ea6158 = "_objc_readClassPair";
    DAT_101ea6160 = FUN_1011475cc;
    DAT_101ea6168 = "_objc_allocateClassPair";
    DAT_101ea6170 = FUN_1011478bc;
    DAT_101ea6210 = PTR__objc_allocateClassPair_101444378;
    DAT_101ea6178 = "_object_getIndexedIvars";
    DAT_101ea6180 = FUN_10114798c;
    DAT_101ea6218 = PTR__object_getIndexedIvars_1014443b8;
    DAT_101ea6188 = "_objc_getClass";
    DAT_101ea6190 = FUN_1011479ec;
    DAT_101ea6220 = PTR__objc_getClass_101444388;
    DAT_101ea6198 = "_objc_getMetaClass";
    DAT_101ea61a0 = FUN_101147a54;
    DAT_101ea6228 = PTR__objc_getMetaClass_101444390;
    DAT_101ea61a8 = "_objc_getRequiredClass";
    DAT_101ea61b0 = FUN_101147abc;
    DAT_101ea6230 = PTR__objc_getRequiredClass_1014443a0;
    DAT_101ea61b8 = "_objc_lookUpClass";
    DAT_101ea61c0 = FUN_101147b24;
    DAT_101ea6238 = PTR__objc_lookUpClass_1014443a8;
    DAT_101ea61c8 = "_objc_getProtocol";
    DAT_101ea61d0 = FUN_101147b8c;
    DAT_101ea6240 = PTR__objc_getProtocol_101444398;
    DAT_101ea61d8 = "_class_getName";
    DAT_101ea61e0 = FUN_101147bf4;
    DAT_101ea6248 = PTR__class_getName_101444250;
    DAT_101ea61e8 = "_protocol_getName";
    DAT_101ea61f0 = FUN_101147c14;
    DAT_101ea6250 = PTR__protocol_getName_1014443c0;
    DAT_101ea61f8 = "_objc_copyClassNamesForImage";
    DAT_101ea6200 = FUN_101147c34;
    DAT_101ea6258 = PTR__objc_copyClassNamesForImage_101444380;
    DAT_101ea6208 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    lVar14 = 0;
    local_80 = 0;
    piVar11 = (int *)(param_1 + 0x20);
    piVar7 = piVar11;
    iVar10 = iVar1;
    do {
      if (*piVar7 == 0x19) {
        iVar3 = _strcmp((char *)(piVar7 + 2),"__TEXT");
        if (iVar3 == 0) {
          local_80 = param_1 - *(long *)(piVar7 + 6);
        }
        else {
          iVar3 = _strcmp((char *)(piVar7 + 2),"__LINKEDIT");
          if (iVar3 == 0) {
            lVar14 = (*(long *)(piVar7 + 6) + local_80) - *(long *)(piVar7 + 10);
          }
        }
      }
      piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (lVar14 != 0) {
      local_70 = 0;
      local_68 = 0;
      uVar9 = 0;
      lVar8 = 0;
      piVar7 = piVar11;
      iVar10 = iVar1;
      do {
        if (*piVar7 == 0xb) {
          lVar8 = lVar14 + (ulong)(uint)piVar7[0xe];
        }
        else if (*piVar7 == 2) {
          uVar9 = piVar7[5];
          local_70 = lVar14 + (ulong)(uint)piVar7[4];
          local_68 = lVar14 + (ulong)(uint)piVar7[2];
        }
        piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (((local_68 != 0) && (local_70 != 0)) && (lVar8 != 0)) {
        iVar10 = 0;
        do {
          if (*piVar11 == 0x19) {
            piVar7 = piVar11 + 0x12;
            piVar5 = piVar7 + (ulong)(uint)piVar11[0x10] * 0x14;
            for (; piVar7 < piVar5; piVar7 = piVar7 + 0x14) {
              if (((char)piVar7[0x10] == '\a') && (uVar6 = *(ulong *)(piVar7 + 10), 7 < uVar6)) {
                uVar12 = 0;
                lVar14 = *(long *)(piVar7 + 8);
                iVar3 = piVar7[0x11];
                do {
                  uVar2 = *(uint *)(lVar8 + (ulong)(uint)((int)uVar12 + iVar3) * 4);
                  if (uVar2 < uVar9) {
                    lVar13 = 0;
                    uVar2 = *(uint *)(local_68 + (ulong)uVar2 * 0x10);
                    do {
                      iVar4 = _strcmp(*(char **)((long)&DAT_101ea6158 + lVar13),
                                      (char *)(local_70 + (ulong)uVar2));
                      if (iVar4 == 0) {
                        *(undefined8 *)(lVar14 + local_80 + uVar12 * 8) =
                             *(undefined8 *)((long)&DAT_101ea6160 + lVar13);
                        break;
                      }
                      lVar13 = lVar13 + 0x10;
                    } while (lVar13 != 0xb0);
                  }
                  uVar12 = (ulong)((int)uVar12 + 1);
                } while (uVar12 < uVar6 >> 3);
              }
            }
          }
          piVar11 = (int *)((long)piVar11 + (ulong)(uint)piVar11[1]);
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar1);
      }
    }
  }
  return;
}




byte FUN_101147178(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = _object_getIvar(param_1,DAT_101ea60f0);
  bVar1 = lVar2 == 0;
  if (!bVar1 && lVar2 != param_3) {
    do {
      lVar2 = _class_getSuperclass();
      bVar1 = lVar2 == 0;
      if (lVar2 == 0) break;
    } while (lVar2 != param_3);
  }
  return bVar1 ^ 1;
}




void FUN_1011471cc(void)

{
  (*DAT_101ea60f8)();
  FUN_101148274();
  return;
}




void FUN_1011471e8(void)

{
  (*DAT_101ea6100)();
  FUN_101148274();
  return;
}




ulong FUN_101147204(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (*DAT_101ea6108)();
  if ((int)uVar1 != 0) {
    uVar2 = uVar1 & 0xffffffff;
    do {
      FUN_101148274(*param_3);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}




undefined8 FUN_101147254(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1011482a8(param_3);
  uVar2 = (*DAT_101ea6128)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    _objc_msgSend(lVar1,"release");
  }
  return uVar2;
}




undefined8 FUN_1011472c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1011482a8(param_3);
  uVar2 = (*DAT_101ea6130)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    _objc_msgSend(lVar1,"release");
  }
  return uVar2;
}




undefined8 FUN_101147334(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1011482a8(param_3);
  uVar2 = (*DAT_101ea6138)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    _objc_msgSend(lVar1,"release");
  }
  return uVar2;
}




void FUN_1011473a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_1011482a8(param_3);
  (*DAT_101ea6140)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    _objc_msgSend(lVar1,"release");
    return;
  }
  return;
}




void FUN_101147418(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = FUN_1011482a8(param_4);
  (*DAT_101ea6148)(param_1,param_2,param_3,lVar1);
  if (lVar1 != param_4) {
    _objc_msgSend(lVar1,"release");
    return;
  }
  return;
}




void FUN_1011474a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = _objc_msgSend(DAT_101ea6110,"alloc");
  uVar1 = _objc_msgSend(uVar1,"init");
  uVar2 = _objc_msgSend(param_3,"keyEnumerator");
  lVar3 = _objc_msgSend(uVar2,"nextObject");
  while (lVar3 != 0) {
    lVar4 = FUN_1011482a8(lVar3);
    uVar5 = _objc_msgSend(param_3,"objectForKey:",lVar3);
    _objc_msgSend(uVar1,"setObject:forKey:",uVar5,lVar4);
    if (lVar4 != lVar3) {
      _objc_msgSend(lVar4,"release");
    }
    lVar3 = _objc_msgSend(uVar2,"nextObject");
  }
  (*DAT_101ea6150)(param_1,param_2,uVar1);
  _objc_msgSend(uVar1,"release");
  return;
}




long FUN_1011475cc(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  puVar20 = (undefined8 *)*param_1;
  uVar19 = param_1[4];
  pbVar16 = (byte *)(uVar19 & 0x7ffffffffff8);
  if (*(int *)pbVar16 < 0) {
    pbVar16 = *(byte **)(pbVar16 + 8);
  }
  uVar21 = puVar20[4];
  piVar17 = (int *)(uVar21 & 0x7ffffffffff8);
  if (*piVar17 < 0) {
    piVar17 = *(int **)(piVar17 + 2);
  }
  if ((param_1[1] == 0) && ((*pbVar16 >> 1 & 1) == 0)) {
    lVar18 = 0;
  }
  else {
    uVar24 = param_1[1];
    uVar22 = *param_1;
    uVar28 = param_1[3];
    uVar26 = param_1[2];
    uVar6 = param_1[4];
    uVar25 = puVar20[1];
    uVar23 = *puVar20;
    uVar29 = puVar20[3];
    uVar27 = puVar20[2];
    uVar7 = puVar20[4];
    uVar4 = _objc_msgSend(param_1[1],"self");
    _bzero(param_1,0x28);
    _bzero(puVar20,0x28);
    lVar18 = _objc_initializeClassPair(uVar4,*(undefined8 *)(pbVar16 + 0x18),param_1,puVar20);
    if (lVar18 == 0) {
      param_1[1] = uVar24;
      *param_1 = uVar22;
      param_1[3] = uVar28;
      param_1[2] = uVar26;
      param_1[4] = uVar6;
      puVar20[4] = uVar7;
      puVar20[1] = uVar25;
      *puVar20 = uVar23;
      puVar20[3] = uVar29;
      puVar20[2] = uVar27;
    }
    else {
      uVar4 = _object_getClass(lVar18);
      param_1[4] = param_1[4] | uVar19 & 0xffff800000000007;
      puVar20[4] = puVar20[4] | uVar21 & 0xffff800000000007;
      puVar8 = (uint *)(*(ulong *)(lVar18 + 0x20) & 0x7ffffffffff8);
      if ((int)*puVar8 < 0) {
        puVar8 = *(uint **)(puVar8 + 2);
      }
      piVar9 = *(int **)(pbVar16 + 0x30);
      if (piVar9 != (int *)0x0) {
        uVar12 = piVar9[1];
        uVar19 = (ulong)uVar12;
        if (uVar12 == 0) {
          uVar15 = 1;
        }
        else {
          uVar14 = 0;
          uVar15 = 1;
          uVar21 = uVar19;
          do {
            plVar1 = (long *)((long)piVar9 + uVar14 + 8);
            uVar2 = uVar15;
            if (*plVar1 != 0) {
              uVar3 = *(uint *)(plVar1 + 3);
              uVar2 = 8;
              if (uVar3 != 0xffffffff) {
                uVar2 = 1 << (ulong)(uVar3 & 0x1f);
              }
              if (uVar2 <= uVar15) {
                uVar2 = uVar15;
              }
            }
            uVar15 = uVar2;
            uVar14 = (ulong)(uint)((int)uVar14 + *piVar9);
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        uVar15 = puVar8[1] + ~*(uint *)(pbVar16 + 4) + uVar15 & -uVar15;
        if (uVar12 != 0) {
          uVar12 = 0;
          do {
            piVar13 = *(int **)((long)piVar9 + (ulong)(*piVar9 * uVar12) + 8);
            if (piVar13 != (int *)0x0 && uVar15 != 0) {
              *piVar13 = *piVar13 + uVar15;
              uVar19 = (ulong)(uint)piVar9[1];
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < (uint)uVar19);
        }
        if ((char)*pbVar16 < '\0') {
          pcVar10 = *(char **)(pbVar16 + 0x10);
          pcVar11 = *(char **)(pbVar16 + 0x38);
          *puVar8 = *puVar8 | 0x80;
        }
        else {
          pcVar10 = "";
          pcVar11 = pcVar10;
        }
        *(char **)(puVar8 + 4) = pcVar10;
        *(int **)(puVar8 + 0xc) = piVar9;
        *(char **)(puVar8 + 0xe) = pcVar11;
        *(ulong *)(puVar8 + 1) =
             CONCAT44((int)((ulong)*(undefined8 *)(pbVar16 + 4) >> 0x20) + uVar15,
                      (int)*(undefined8 *)(pbVar16 + 4) + uVar15);
      }
      FUN_101147cb4(lVar18,pbVar16);
      FUN_101147cb4(uVar4,piVar17);
      FUN_101147d44(lVar18,pbVar16);
      FUN_101147d44(uVar4,piVar17);
      FUN_101147dac(lVar18,pbVar16);
      FUN_101147dac(uVar4,piVar17);
      if ((*pbVar16 >> 1 & 1) != 0) {
        _class_addMethod(uVar4,"initialize",FUN_101147e48,"v@:");
      }
      _objc_registerClassPair(lVar18);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar5) {
    return lVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1011478bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _object_getClass();
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && ((*(byte *)(lVar1 + 0x20) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000101147918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_101ea6210)(param_1,param_2,param_3);
    return;
  }
  lVar2 = FUN_101147e4c(param_1,param_3);
  lVar3 = FUN_101147e4c(lVar1,param_3);
  _objc_initializeClassPair(param_1,param_2,lVar2,lVar3);
  *(ulong *)(lVar2 + 0x20) = *(ulong *)(param_1 + 0x20) & 1 | *(ulong *)(lVar2 + 0x20);
  *(ulong *)(lVar3 + 0x20) = *(ulong *)(lVar1 + 0x20) & 1 | *(ulong *)(lVar3 + 0x20);
  return;
}




long FUN_10114798c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    _object_getClass();
    uVar1 = _class_isMetaClass();
    if (((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001011479c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*DAT_101ea6218)(param_1);
      return lVar2;
    }
    param_1 = param_1 + ((ulong)(*(int *)(param_1 + 0x38) + 7U & 0xfffffff8) -
                        (ulong)*(uint *)(param_1 + 0x3c));
  }
  return param_1;
}




long FUN_1011479ec(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_101147ed0(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101147a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*DAT_101ea6220)(param_1);
  return lVar2;
}




long FUN_101147a54(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_101147ed0(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getMetaClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101147ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*DAT_101ea6228)(param_1);
  return lVar2;
}




long FUN_101147abc(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_101147ed0(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getRequiredClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101147b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*DAT_101ea6230)(param_1);
  return lVar2;
}




long FUN_101147b24(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_101147ed0(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_lookUpClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101147b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*DAT_101ea6238)(param_1);
  return lVar2;
}




long FUN_101147b8c(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_101147ed0(param_1,1);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getProtocol();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101147bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*DAT_101ea6240)(param_1);
  return lVar2;
}




void FUN_101147bf4(void)

{
  undefined8 uVar1;
  
  uVar1 = (*DAT_101ea6248)();
  FUN_10114801c(uVar1,0);
  return;
}




void FUN_101147c14(void)

{
  undefined8 uVar1;
  
  uVar1 = (*DAT_101ea6250)();
  FUN_10114801c(uVar1,1);
  return;
}




long FUN_101147c34(undefined8 param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_34;
  
  lVar1 = (*DAT_101ea6258)(param_1,&local_34);
  if (lVar1 != 0 && local_34 != 0) {
    uVar3 = 0;
    do {
      uVar2 = FUN_10114801c(*(undefined8 *)(lVar1 + uVar3 * 8),0);
      *(undefined8 *)(lVar1 + uVar3 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_34);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_34;
  }
  return lVar1;
}




void FUN_101147cb4(long param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  piVar3 = *(int **)(param_2 + 0x20);
  if (piVar3 != (int *)0x0) {
    if (piVar3[1] != 0) {
      uVar5 = 0;
      do {
        uVar1 = *piVar3 * uVar5;
        uVar2 = _sel_getUid(*(undefined8 *)((long)piVar3 + (ulong)uVar1 + 8));
        _class_addMethod(param_1,uVar2,*(undefined8 *)((long)piVar3 + (ulong)uVar1 + 0x18),
                         *(undefined8 *)((long)piVar3 + (ulong)uVar1 + 0x10));
        uVar5 = uVar5 + 1;
        piVar3 = *(int **)(param_2 + 0x20);
      } while (uVar5 < (uint)piVar3[1]);
    }
    if ((*param_2 >> 2 & 1) != 0) {
      puVar4 = (uint *)(*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8);
      *puVar4 = *puVar4 | 0x180000;
    }
  }
  return;
}




void FUN_101147d44(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = *(ulong **)(param_2 + 0x28);
  if ((puVar2 != (ulong *)0x0) && (*puVar2 != 0)) {
    uVar3 = 0;
    uVar4 = 1;
    do {
      _class_addProtocol(param_1,puVar2[uVar3 + 1]);
      puVar2 = *(ulong **)(param_2 + 0x28);
      bVar1 = uVar4 < *puVar2;
      uVar3 = uVar4;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (bVar1);
  }
  return;
}




void FUN_101147dac(undefined8 param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_44;
  
  piVar3 = *(int **)(param_2 + 0x40);
  if ((piVar3 != (int *)0x0) && (piVar3[1] != 0)) {
    uVar4 = 0;
    do {
      iVar1 = *piVar3;
      pvVar2 = (void *)_property_copyAttributeList
                                 ((long)piVar3 + (ulong)(iVar1 * uVar4) + 8,&local_44);
      _class_addProperty(param_1,*(undefined8 *)((long)piVar3 + (ulong)(iVar1 * uVar4) + 8),pvVar2,
                         local_44);
      if (pvVar2 != (void *)0x0) {
        _free(pvVar2);
      }
      uVar4 = uVar4 + 1;
      piVar3 = *(int **)(param_2 + 0x40);
    } while (uVar4 < (uint)piVar3[1]);
  }
  return;
}




void FUN_101147e48(void)

{
  return;
}




void * FUN_101147e4c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    pvVar3 = _calloc(param_2 + 0x28,1);
    return pvVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x3c);
  pvVar3 = _calloc(((ulong)uVar1 + 7 & 0x1fffffff8) + param_2,1);
  _memcpy(pvVar3,(void *)(param_1 - (ulong)uVar2),(ulong)uVar1);
  pvVar3 = (void *)((long)pvVar3 + (ulong)uVar2);
  _bzero(pvVar3,0x28);
  *(undefined8 *)((long)pvVar3 + 0x40) = 0;
  return pvVar3;
}




undefined8 FUN_101147ed0(int *param_1)

{
  char *pcVar1;
  ulong in_x9;
  ulong uVar2;
  long lVar3;
  char *local_18;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar2 = 0;
  lVar3 = 0;
  do {
    if (*(char *)((long)param_1 + uVar2) == '.') {
      lVar3 = lVar3 + 1;
      in_x9 = uVar2;
    }
    else if (*(char *)((long)param_1 + uVar2) == '\0') {
      if (lVar3 != 1) {
        return 0;
      }
      if (in_x9 == 0) {
        return 0;
      }
      if (uVar2 - 1 <= in_x9) {
        return 0;
      }
      if ((in_x9 == 5) && (*param_1 == 0x66697753 && (char)param_1[1] == 't')) {
        pcVar1 = "_Tt%cs%zu%.*s%s";
      }
      else {
        pcVar1 = "_Tt%c%zu%.*s%zu%.*s%s";
      }
      _asprintf(&local_18,pcVar1);
      return local_18;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}




char * FUN_10114801c(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *datum;
  size_t sVar3;
  char *local_70;
  undefined1 local_64 [4];
  undefined1 local_60 [12];
  undefined4 local_54;
  char *local_50;
  char *local_48;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar1 = "_TtP";
  if (param_2 == 0) {
    pcVar1 = "_TtC";
  }
  iVar2 = _strncmp(param_1,pcVar1,4);
  if (iVar2 != 0) {
    return param_1;
  }
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101873b00);
  if (DAT_101ea6260 == (hash_table *)0x0) {
    DAT_101ea6260 = _hash_create(0);
  }
  datum = _hash_search(DAT_101ea6260,param_1,(void *)0x0,(replace_func *)0x0);
  if (datum != (char *)0x0) goto LAB_1011480d8;
  iVar2 = _strncmp(param_1,pcVar1,4);
  if (iVar2 == 0) {
    pcVar1 = param_1 + 4;
    local_48 = pcVar1;
    sVar3 = _strlen(pcVar1);
    pcVar1 = pcVar1 + sVar3;
    if (param_1[4] == 's') {
      local_50 = "Swift";
      local_54 = 5;
      local_48 = param_1 + 5;
    }
    else {
      iVar2 = FUN_1011481c8(&local_48,pcVar1,&local_50,&local_54);
      if (iVar2 == 0) goto LAB_1011480b8;
    }
    iVar2 = FUN_1011481c8(&local_48,pcVar1,local_60,local_64);
    if (iVar2 == 0) goto LAB_1011480b8;
    if (param_2 == 0) {
      if (local_48 == pcVar1) goto LAB_101148198;
      goto LAB_1011480b8;
    }
    iVar2 = _strcmp(local_48,"_");
    if (iVar2 != 0) goto LAB_1011480b8;
LAB_101148198:
    _asprintf(&local_70,"%.*s.%.*s");
  }
  else {
LAB_1011480b8:
    local_70 = (char *)0x0;
  }
  datum = param_1;
  if (local_70 != (char *)0x0) {
    datum = local_70;
  }
  _hash_search(DAT_101ea6260,param_1,datum,(replace_func *)0x0);
LAB_1011480d8:
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101873b00);
  return datum;
}




bool FUN_1011481c8(ulong *param_1,char *param_2,long *param_3,int *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)*param_1;
  if (*pcVar5 == '0') {
    return false;
  }
  *param_4 = 0;
  *param_3 = (long)pcVar5;
  puVar2 = PTR___DefaultRuneLocale_101444130;
  if (pcVar5 < param_2) {
    iVar3 = 0;
    do {
      cVar1 = *pcVar5;
      if ((cVar1 < 0) || ((*(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) >> 10 & 1) == 0))
      break;
      *param_3 = (long)(pcVar5 + 1);
      iVar4 = (int)((long)iVar3 * 10);
      *param_4 = iVar4;
      if ((long)iVar3 * 10 - (long)iVar4 != 0) {
        return false;
      }
      iVar3 = iVar4 + cVar1 + -0x30;
      *param_4 = iVar3;
      if (SCARRY4(iVar4,cVar1 + -0x30)) {
        return false;
      }
      pcVar5 = (char *)*param_3;
    } while (pcVar5 < param_2);
  }
  else {
    iVar3 = 0;
  }
  *param_1 = (ulong)(pcVar5 + iVar3);
  return 0 < iVar3 && pcVar5 + iVar3 <= param_2;
}




void FUN_101148270(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148274);
  (*pcVar1)();
}




void FUN_101148274(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    uVar1 = _object_getClass();
    puVar2 = (undefined8 *)_objc_constructInstance(uVar1,param_1);
    *puVar2 = uVar1;
  }
  return;
}




undefined8 FUN_1011482a8(undefined8 param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  lVar1 = _object_getClass();
  if (((lVar1 != 0) && (lVar1 != DAT_101ea6118)) &&
     (lVar1 = _CFStringGetCStringPtr(param_1,0x600), lVar1 == 0)) {
    lVar1 = _objc_msgSend(param_1,"lengthOfBytesUsingEncoding:",4);
    pvVar2 = _malloc(lVar1 + 1U);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    _objc_msgSend(param_1,"getCString:maxLength:encoding:",pvVar2,lVar1 + 1U,4);
    uVar3 = _objc_msgSend(DAT_101ea6120,"alloc");
    param_1 = _objc_msgSend(uVar3,"initWithBytes:length:encoding:",pvVar2,lVar1,4);
    _free(pvVar2);
  }
  return param_1;
}




void FUN_10114837c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148380);
  (*pcVar1)();
}




void FUN_101148380(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148384);
  (*pcVar1)();
}




void FUN_101148384(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148388);
  (*pcVar1)();
}




void FUN_101148388(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114838c);
  (*pcVar1)();
}




void FUN_10114838c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148390);
  (*pcVar1)();
}




void FUN_101148390(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148394);
  (*pcVar1)();
}




void FUN_101148394(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148398);
  (*pcVar1)();
}




void FUN_101148398(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114839c);
  (*pcVar1)();
}




void FUN_10114839c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483a0);
  (*pcVar1)();
}




void FUN_1011483a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483a4);
  (*pcVar1)();
}




void FUN_1011483a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483a8);
  (*pcVar1)();
}




void FUN_1011483a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483ac);
  (*pcVar1)();
}




void FUN_1011483ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483b0);
  (*pcVar1)();
}




void FUN_1011483b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483b4);
  (*pcVar1)();
}




void FUN_1011483b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483b8);
  (*pcVar1)();
}




void FUN_1011483b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483bc);
  (*pcVar1)();
}




void FUN_1011483bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483c0);
  (*pcVar1)();
}




void FUN_1011483c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483c4);
  (*pcVar1)();
}




void FUN_1011483c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483c8);
  (*pcVar1)();
}




void FUN_1011483c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483cc);
  (*pcVar1)();
}




void FUN_1011483cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483d0);
  (*pcVar1)();
}




void FUN_1011483d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483d4);
  (*pcVar1)();
}




void FUN_1011483d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483d8);
  (*pcVar1)();
}




void FUN_1011483d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483dc);
  (*pcVar1)();
}




void FUN_1011483dc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483e0);
  (*pcVar1)();
}




void FUN_1011483e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483e4);
  (*pcVar1)();
}




void FUN_1011483e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483e8);
  (*pcVar1)();
}




void FUN_1011483e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483ec);
  (*pcVar1)();
}




void FUN_1011483ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483f0);
  (*pcVar1)();
}




void FUN_1011483f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483f4);
  (*pcVar1)();
}




void FUN_1011483f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483f8);
  (*pcVar1)();
}




void FUN_1011483f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011483fc);
  (*pcVar1)();
}




void FUN_1011483fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148400);
  (*pcVar1)();
}




void FUN_101148400(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148404);
  (*pcVar1)();
}




void FUN_101148404(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148408);
  (*pcVar1)();
}




void FUN_101148408(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114840c);
  (*pcVar1)();
}




void FUN_10114840c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148410);
  (*pcVar1)();
}




void FUN_101148410(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148414);
  (*pcVar1)();
}




void FUN_101148414(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148418);
  (*pcVar1)();
}




void FUN_101148418(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114841c);
  (*pcVar1)();
}




void FUN_10114841c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148420);
  (*pcVar1)();
}




void FUN_101148420(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148424);
  (*pcVar1)();
}




void FUN_101148424(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148428);
  (*pcVar1)();
}




void FUN_101148428(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114842c);
  (*pcVar1)();
}




void FUN_10114842c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148430);
  (*pcVar1)();
}




void FUN_101148430(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148434);
  (*pcVar1)();
}




void FUN_101148434(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148438);
  (*pcVar1)();
}




void FUN_101148438(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114843c);
  (*pcVar1)();
}




void FUN_10114843c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148440);
  (*pcVar1)();
}




void FUN_101148440(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148444);
  (*pcVar1)();
}




void FUN_101148444(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148448);
  (*pcVar1)();
}




void FUN_101148448(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114844c);
  (*pcVar1)();
}




void FUN_10114844c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148450);
  (*pcVar1)();
}




void FUN_101148450(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148454);
  (*pcVar1)();
}




void FUN_101148454(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148458);
  (*pcVar1)();
}




void FUN_101148458(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114845c);
  (*pcVar1)();
}




void FUN_10114845c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148460);
  (*pcVar1)();
}




void FUN_101148460(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148464);
  (*pcVar1)();
}




void FUN_101148464(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148468);
  (*pcVar1)();
}




void FUN_101148468(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114846c);
  (*pcVar1)();
}




void FUN_10114846c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148470);
  (*pcVar1)();
}




void FUN_101148470(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148474);
  (*pcVar1)();
}




void FUN_101148474(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148478);
  (*pcVar1)();
}




void FUN_101148478(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114847c);
  (*pcVar1)();
}




void FUN_10114847c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148480);
  (*pcVar1)();
}




void FUN_101148480(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148484);
  (*pcVar1)();
}




void FUN_101148484(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148488);
  (*pcVar1)();
}




void FUN_101148488(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114848c);
  (*pcVar1)();
}




void FUN_10114848c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148490);
  (*pcVar1)();
}




void FUN_101148490(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148494);
  (*pcVar1)();
}




void FUN_101148494(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148498);
  (*pcVar1)();
}




void FUN_101148498(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114849c);
  (*pcVar1)();
}




void FUN_10114849c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484a0);
  (*pcVar1)();
}




void FUN_1011484a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484a4);
  (*pcVar1)();
}




void FUN_1011484a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484a8);
  (*pcVar1)();
}




void FUN_1011484a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484ac);
  (*pcVar1)();
}




void FUN_1011484ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484b0);
  (*pcVar1)();
}




void FUN_1011484b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484b4);
  (*pcVar1)();
}




void FUN_1011484b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484b8);
  (*pcVar1)();
}




void FUN_1011484b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484bc);
  (*pcVar1)();
}




void FUN_1011484bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484c0);
  (*pcVar1)();
}




void FUN_1011484c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484c4);
  (*pcVar1)();
}




void FUN_1011484c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484c8);
  (*pcVar1)();
}




void FUN_1011484c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484cc);
  (*pcVar1)();
}




void FUN_1011484cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484d0);
  (*pcVar1)();
}




void FUN_1011484d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484d4);
  (*pcVar1)();
}




void FUN_1011484d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484d8);
  (*pcVar1)();
}




void FUN_1011484d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484dc);
  (*pcVar1)();
}




void FUN_1011484dc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484e0);
  (*pcVar1)();
}




void FUN_1011484e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484e4);
  (*pcVar1)();
}




void FUN_1011484e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484e8);
  (*pcVar1)();
}




void FUN_1011484e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484ec);
  (*pcVar1)();
}




void FUN_1011484ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484f0);
  (*pcVar1)();
}




void FUN_1011484f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484f4);
  (*pcVar1)();
}




void FUN_1011484f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484f8);
  (*pcVar1)();
}




void FUN_1011484f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011484fc);
  (*pcVar1)();
}




void FUN_1011484fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148500);
  (*pcVar1)();
}




void FUN_101148500(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148504);
  (*pcVar1)();
}




void FUN_101148504(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148508);
  (*pcVar1)();
}




void FUN_101148508(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114850c);
  (*pcVar1)();
}




void FUN_10114850c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148510);
  (*pcVar1)();
}




void FUN_101148510(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148514);
  (*pcVar1)();
}




void FUN_101148514(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148518);
  (*pcVar1)();
}




void FUN_101148518(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114851c);
  (*pcVar1)();
}




void FUN_10114851c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148520);
  (*pcVar1)();
}




void FUN_101148520(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148524);
  (*pcVar1)();
}




void FUN_101148524(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148528);
  (*pcVar1)();
}




void FUN_101148528(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114852c);
  (*pcVar1)();
}




void FUN_10114852c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148530);
  (*pcVar1)();
}




void FUN_101148530(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148534);
  (*pcVar1)();
}




void FUN_101148534(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148538);
  (*pcVar1)();
}




void FUN_101148538(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114853c);
  (*pcVar1)();
}




void FUN_10114853c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148540);
  (*pcVar1)();
}




void FUN_101148540(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148544);
  (*pcVar1)();
}




void FUN_101148544(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148548);
  (*pcVar1)();
}




void FUN_101148548(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114854c);
  (*pcVar1)();
}




void FUN_10114854c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148550);
  (*pcVar1)();
}




void FUN_101148550(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148554);
  (*pcVar1)();
}




void FUN_101148554(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148558);
  (*pcVar1)();
}




void FUN_101148558(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114855c);
  (*pcVar1)();
}




void FUN_10114855c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148560);
  (*pcVar1)();
}




void FUN_101148560(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148564);
  (*pcVar1)();
}




void FUN_101148564(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148568);
  (*pcVar1)();
}




void FUN_101148568(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114856c);
  (*pcVar1)();
}




void FUN_10114856c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148570);
  (*pcVar1)();
}




void FUN_101148570(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148574);
  (*pcVar1)();
}




void FUN_101148574(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148578);
  (*pcVar1)();
}




void FUN_101148578(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114857c);
  (*pcVar1)();
}




void FUN_10114857c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148580);
  (*pcVar1)();
}




void FUN_101148580(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148584);
  (*pcVar1)();
}




void FUN_101148584(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148588);
  (*pcVar1)();
}




void FUN_101148588(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114858c);
  (*pcVar1)();
}




void FUN_10114858c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148590);
  (*pcVar1)();
}




void FUN_101148590(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148594);
  (*pcVar1)();
}




void FUN_101148594(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148598);
  (*pcVar1)();
}




void FUN_101148598(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114859c);
  (*pcVar1)();
}




void FUN_10114859c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011485a0);
  (*pcVar1)();
}




void FUN_1011485a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011485a4);
  (*pcVar1)();
}




void FUN_1011485a4(void)

{
  code *pcVar1;
  
  FUN_1003dfe60(0,1,4,0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011485c8);
  (*pcVar1)();
}




void FUN_1011485c8(void)

{
  code *pcVar1;
  
  FUN_1003dfe60(0,8,2,0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011485ec);
  (*pcVar1)();
}




void FUN_1011485ec(void)

{
  code *pcVar1;
  
  FUN_1003df710(0,6,1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148608);
  (*pcVar1)();
}




void FUN_101148608(void)

{
  code *pcVar1;
  
  FUN_1003dfe60(0,0,3,0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114862c);
  (*pcVar1)();
}




void FUN_10114862c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148630);
  (*pcVar1)();
}




void FUN_101148630(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148634);
  (*pcVar1)();
}




void FUN_101148634(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148638);
  (*pcVar1)();
}




void FUN_101148638(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114863c);
  (*pcVar1)();
}




void FUN_10114863c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148640);
  (*pcVar1)();
}




void FUN_101148640(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148644);
  (*pcVar1)();
}




void FUN_101148644(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148648);
  (*pcVar1)();
}




void FUN_101148648(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114864c);
  (*pcVar1)();
}




void FUN_10114864c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148650);
  (*pcVar1)();
}




void FUN_101148650(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148654);
  (*pcVar1)();
}




void FUN_101148654(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148658);
  (*pcVar1)();
}




void FUN_101148658(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114865c);
  (*pcVar1)();
}




void FUN_10114865c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148660);
  (*pcVar1)();
}




void FUN_101148660(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148664);
  (*pcVar1)();
}




void FUN_101148664(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101148668);
  (*pcVar1)();
}




void FUN_101148668(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10114866c);
  (*pcVar1)();
}

