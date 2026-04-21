// classes/ADJSdkClickHandler — 21 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

void ADJSdkClickHandler::pauseSending(ID param_1,SEL param_2)

{
  setPaused_(param_1,(SEL)"setPaused:",1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJSdkClickHandler::resumeSending(ID param_1,SEL param_2)

{
  setPaused_(param_1,(SEL)"setPaused:",0);
  sendNextSdkClick(param_1,(SEL)"sendNextSdkClick");
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::sendSdkClick_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar1 = _objc_retain(param_3);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_10112f9d8;
  local_50 = &DAT_101830ca0;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}

cfstringStruct cf_Eventscount:%ld;
cfstringStruct cf_Error:UnabletosavepropertyListtofile;
undefined _OBJC_CLASS_$_NSPropertyListSerialization;
cfstringStruct cf_ERROR:propertyListdeserializationerror:%@;
cfstringStruct cf_ERROR:Can'tremovecorruptpropertyListfile:%@;
cfstringStruct cf_ERROR:UnabletosavepropertyListtofile;
cfstringStruct cf_ERROR:propertyListDataisnil;
cfstringStruct cf_ERROR:UnabletoserializepropertyList:%@;
undefined4 _eventUploadThreshold;
undefined4 _eventMaxCount;
undefined4 _eventUploadPeriodSeconds;
undefined4 _minTimeBetweenSessionsMillis;
class_t SSKeychainQuery;
void *DAT_101ea60e8;
undefined *PTR__kSecAttrLabel_1014442e0;
undefined *PTR__kSecMatchLimitAll_101444330;
undefined *PTR__NSFoundationVersionNumber_101444098;
undefined *PTR__kSecAttrSynchronizableAny_1014442f8;
undefined *PTR__kSecAttrSynchronizable_1014442f0;
cfstringStruct cf_errSecAuthFailed;
cfstringStruct cf_errSecDefault;
cfstringStruct cf_com.samsoffes.sskeychain;
cfstringStruct cf_SSKeychainErrorBadArguments;
cfstringStruct cf_SSKeychain;
cfstringStruct cf_errSecUnimplemented;
cfstringStruct cf_errSecParam;
cfstringStruct cf_errSecAllocate;
cfstringStruct cf_errSecNotAvailable;
cfstringStruct cf_errSecDuplicateItem;
cfstringStruct cf_errSecItemNotFound;
cfstringStruct cf_errSecInteractionNotAllowed;
cfstringStruct cf_errSecDecode;
undefined *PTR__kCFCoreFoundationVersionNumber_1014442a0;
undefined *PTR__objc_readClassPair_1014443b0;
long DAT_101ea60f0;
undefined FUN_101148270;
undefined *DAT_101ea60f8;
undefined *DAT_101ea6100;
undefined *DAT_101ea6108;
undefined8 DAT_101ea6110;
undefined8 DAT_101ea6118;
undefined8 DAT_101ea6120;
undefined *DAT_101ea6128;
undefined FUN_101147178;
undefined *DAT_101ea6130;
undefined FUN_1011471e8;
undefined FUN_1011471cc;
undefined *DAT_101ea6138;
undefined FUN_101147254;
undefined FUN_101147204;
undefined *DAT_101ea6140;
undefined FUN_101147334;
undefined FUN_1011472c4;
undefined *DAT_101ea6148;
undefined FUN_101147418;
undefined FUN_1011473a4;
undefined *DAT_101ea6150;
undefined FUN_1011474a0;
protocol_t __ARCLiteKeyedSubscripting__;
undefined FUN_101146d74;
undefined FUN_101146d94;
byte DAT_101ea6208;
undefined8 DAT_101ea6158;
undefined8 DAT_101ea6160;
char *DAT_101ea6168;
undefined FUN_1011475cc;
undefined *DAT_101ea6170;
undefined FUN_101147c34;
undefined *PTR__objc_allocateClassPair_101444378;
undefined *DAT_101ea6210;
char *DAT_101ea6178;
undefined *DAT_101ea6180;
undefined *PTR__object_getIndexedIvars_1014443b8;
undefined *DAT_101ea6218;
char *DAT_101ea6188;
undefined *DAT_101ea6190;
undefined *PTR__objc_getClass_101444388;
undefined *DAT_101ea6220;
char *DAT_101ea6198;
undefined *DAT_101ea61a0;
undefined *PTR__objc_getMetaClass_101444390;
undefined *DAT_101ea6228;
char *DAT_101ea61a8;
undefined *DAT_101ea61b0;
undefined *PTR__objc_getRequiredClass_1014443a0;
undefined *DAT_101ea6230;
char *DAT_101ea61b8;
undefined *DAT_101ea61c0;
undefined *PTR__objc_lookUpClass_1014443a8;
undefined *DAT_101ea6238;
char *DAT_101ea61c8;
undefined FUN_1011478bc;
undefined *DAT_101ea61d0;
undefined *PTR__objc_getProtocol_101444398;
undefined FUN_1011479ec;
undefined *DAT_101ea6240;
undefined FUN_10114798c;
char *DAT_101ea61d8;
undefined FUN_101147abc;
undefined *DAT_101ea61e0;
undefined FUN_101147a54;
undefined *PTR__class_getName_101444250;
undefined FUN_101147b8c;
undefined *DAT_101ea6248;
undefined FUN_101147b24;
char *DAT_101ea61e8;
undefined FUN_101147c14;
undefined *DAT_101ea61f0;
undefined FUN_101147bf4;
undefined *PTR__protocol_getName_1014443c0;
undefined *DAT_101ea6250;
char *DAT_101ea61f8;
undefined *DAT_101ea6200;
undefined *PTR__objc_copyClassNamesForImage_101444380;
undefined *DAT_101ea6258;
undefined8 DAT_101ea60f0;
undefined FUN_101147e48;
hash_table *DAT_101ea6260;
undefined DAT_101873b00;
long DAT_101ea6118;
undefined *PTR__AudioComponentFindNext_1014443e0;
undefined *PTR__AudioComponentInstanceDispose_1014443e8;
undefined *PTR__AudioComponentInstanceNew_1014443f0;
undefined *PTR__AudioFileClose_1014443f8;
undefined *PTR__AudioFileGetProperty_101444400;
undefined *PTR__AudioFileGetPropertyInfo_101444408;
undefined *PTR__AudioFileOpenWithCallbacks_101444410;
undefined *PTR__AudioFileReadPacketData_101444418;
undefined *PTR__AudioOutputUnitStart_101444420;
undefined *PTR__AudioOutputUnitStop_101444428;
undefined *PTR__AudioQueueAllocateBuffer_101444430;
undefined *PTR__AudioQueueAllocateBufferWithPacketDescriptions_101444438;
undefined *PTR__AudioQueueDispose_101444440;
undefined *PTR__AudioQueueEnqueueBuffer_101444448;
undefined *PTR__AudioQueueFlush_101444450;
undefined *PTR__AudioQueueNewOutput_101444458;
undefined *PTR__AudioQueueOfflineRender_101444460;
undefined *PTR__AudioQueueSetOfflineRenderFormat_101444468;
undefined *PTR__AudioQueueSetProperty_101444470;
undefined *PTR__AudioQueueStart_101444478;
undefined *PTR__AudioQueueStop_101444480;
undefined *PTR__AudioServicesPlaySystemSound_101444488;
undefined *PTR__AudioUnitGetProperty_101444490;
undefined *PTR__AudioUnitInitialize_101444498;
undefined *PTR__AudioUnitRender_1014444a0;
undefined *PTR__AudioUnitSetProperty_1014444a8;
undefined *PTR__AudioUnitUninitialize_1014444b0;
undefined *PTR__CCCrypt_1014444b8;
undefined *PTR__CC_MD4_1014444c0;
undefined *PTR__CC_MD5_Final_1014444d0;
undefined *PTR__CC_MD5_Init_1014444d8;
undefined *PTR__CC_MD5_Update_1014444e0;
undefined *PTR__CC_SHA1_1014444e8;
undefined *PTR__CC_SHA256_1014444f0;
undefined *PTR__CFArrayAppendValue_1014444f8;
undefined *PTR__CFArrayCreate_101444500;
undefined *PTR__CFArrayCreateMutable_101444508;
undefined *PTR__CFArrayGetCount_101444510;
undefined *PTR__CFArrayGetValueAtIndex_101444518;
undefined *PTR__CFDataCreate_101444520;
undefined *PTR__CFDictionaryCreate_101444528;
undefined *PTR__CFDictionaryGetValue_101444530;
undefined *PTR__CFRelease_101444538;
undefined *PTR__CFRetain_101444540;
undefined *PTR__CFRunLoopGetCurrent_101444548;
undefined *PTR__CFStringConvertNSStringEncodingToEncoding_101444550;
undefined *PTR__CFStringCreateWithCString_101444558;
undefined *PTR__CFStringGetCString_101444560;
undefined *PTR__CFStringGetCStringPtr_101444568;
undefined *PTR__CFURLCreateDataAndPropertiesFromResource_101444570;
undefined *PTR__CFURLCreateFromFileSystemRepresentation_101444578;
undefined *PTR__CFURLCreateStringByAddingPercentEscapes_101444580;
undefined *PTR__CFURLCreateStringByReplacingPercentEscapes_101444588;
undefined *PTR__CFUUIDCreate_101444590;
undefined *PTR__CFUUIDCreateString_101444598;
undefined *PTR__MTLCreateSystemDefaultDevice_1014445a0;
undefined *PTR__NSClassFromString_1014445a8;
undefined *PTR__NSHomeDirectory_1014445b0;
undefined *PTR__NSLog_1014445b8;
undefined *PTR__NSSearchPathForDirectoriesInDomains_1014445c0;
undefined *PTR__NSSelectorFromString_1014445c8;
undefined *PTR__NSTemporaryDirectory_1014445d0;
undefined *PTR__SCNetworkReachabilityCreateWithAddress_1014445d8;
undefined *PTR__SCNetworkReachabilityCreateWithName_1014445e0;
undefined *PTR__SCNetworkReachabilityGetFlags_1014445e8;
undefined *PTR__SCNetworkReachabilityScheduleWithRunLoop_1014445f0;
undefined *PTR__SCNetworkReachabilitySetCallback_1014445f8;
undefined *PTR__SCNetworkReachabilityUnscheduleFromRunLoop_101444600;
undefined *PTR__SSLClose_101444608;
undefined *PTR__SSLCopyPeerTrust_101444610;
undefined *PTR__SSLCreateContext_101444618;
undefined *PTR__SSLGetBufferedReadSize_101444620;
undefined *PTR__SSLGetNegotiatedCipher_101444628;
undefined *PTR__SSLGetNegotiatedProtocolVersion_101444630;
undefined *PTR__SSLGetNumberSupportedCiphers_101444638;
undefined *PTR__SSLGetSessionState_101444640;
undefined *PTR__SSLGetSupportedCiphers_101444648;
undefined *PTR__SSLHandshake_101444650;
undefined *PTR__SSLRead_101444658;
undefined *PTR__SSLSetCertificate_101444660;
undefined *PTR__SSLSetConnection_101444668;
undefined *PTR__SSLSetEnabledCiphers_101444670;
undefined *PTR__SSLSetIOFuncs_101444678;
undefined *PTR__SSLSetPeerDomainName_101444680;
undefined *PTR__SSLSetPeerID_101444688;
undefined *PTR__SSLSetProtocolVersionMax_101444690;
undefined *PTR__SSLSetProtocolVersionMin_101444698;
undefined *PTR__SSLSetSessionOption_1014446a0;
undefined *PTR__SSLWrite_1014446a8;
undefined *PTR__SecCertificateCopySubjectSummary_1014446b0;
undefined *PTR__SecCertificateCreateWithData_1014446b8;
undefined *PTR__SecIdentityCopyCertificate_1014446c0;
undefined *PTR__SecItemAdd_1014446c8;
undefined *PTR__SecItemCopyMatching_1014446d0;
undefined *PTR__SecItemDelete_1014446d8;
undefined *PTR__SecPKCS12Import_1014446e0;
undefined *PTR__SecPolicyCreateSSL_1014446e8;
undefined *PTR__SecTrustEvaluate_1014446f0;
undefined *PTR__SecTrustGetCertificateAtIndex_1014446f8;
undefined *PTR__SecTrustGetCertificateCount_101444700;
undefined *PTR__SecTrustSetAnchorCertificates_101444708;
undefined *PTR__SecTrustSetAnchorCertificatesOnly_101444710;
undefined *PTR__UIApplicationMain_101444718;
undefined *PTR__UIGraphicsBeginImageContext_101444720;
undefined *PTR__UIGraphicsEndImageContext_101444728;
undefined *PTR__UIGraphicsGetImageFromCurrentImageContext_101444730;
undefined *PTR___Block_object_assign_101444738;
undefined *PTR___Block_object_dispose_101444740;
undefined *PTR___Unwind_Resume_101444748;
undefined *PTR_removeBlock_101444750;
undefined *PTR_getNumAlloced_101444758;
undefined *PTR_free_101444760;
undefined *PTR_init_101444768;
undefined *PTR_alloc_101444770;
undefined *PTR_close_101444778;
undefined *PTR_addBlock_101444780;
undefined *PTR_find_101444788;
undefined *PTR_rfind_101444790;
undefined *PTR_compare_101444798;
undefined *PTR_compare_1014447a0;
undefined *PTR_compare_1014447a8;
undefined *PTR_erase_1014447b0;
undefined *PTR_append_1014447b8;
undefined *PTR_append_1014447c0;
undefined *PTR_assign_1014447c8;
undefined *PTR_assign_1014447d0;
undefined *PTR_resize_1014447d8;
undefined *PTR_replace_1014447e0;
undefined *PTR_reserve_1014447e8;
undefined *PTR_push_back_1014447f0;
undefined *PTR_string_1014447f8;
undefined *PTR_string_101444800;
undefined *PTR_string_101444808;
undefined *PTR_operator=_101444810;
undefined *PTR_~ostream_101444818;
undefined *PTR_operator<<_101444820;
undefined *PTR_streambuf_101444828;
undefined *PTR_~streambuf_101444830;
undefined *PTR___install_ctor_101444838;
undefined *PTR___get_101444840;
undefined *PTR_locale_101444848;
undefined *PTR_~locale_101444850;
undefined *PTR_init_101444858;
undefined *PTR_numpunct_101444860;
undefined *PTR_~numpunct_101444868;
undefined *PTR_~ios_101444870;
undefined *PTR_operator+_101444878;
undefined *PTR_terminate_101444880;
undefined *PTR_operator.delete[]_101444888;
undefined *PTR_operator.delete_101444890;
undefined *PTR_operator.new[]_101444898;
undefined *PTR_operator.new_1014448a0;
undefined *PTR____assert_rtn_1014448a8;
undefined *PTR____cxa_atexit_1014448b0;
undefined *PTR____cxa_begin_catch_1014448b8;
undefined *PTR____cxa_guard_abort_1014448c0;
undefined *PTR____cxa_guard_acquire_1014448c8;
undefined *PTR____cxa_guard_release_1014448d0;
undefined *PTR____darwin_check_fd_set_overflow_1014448d8;
undefined *PTR____error_1014448e0;
undefined *PTR____maskrune_1014448e8;
undefined *PTR____memcpy_chk_1014448f0;
undefined *PTR____powisf2_1014448f8;
undefined *PTR____sincos_stret_101444900;
undefined *PTR____sincosf_stret_101444908;
undefined *PTR____sprintf_chk_101444910;
undefined *PTR____stack_chk_fail_101444918;
undefined *PTR____strcpy_chk_101444920;
undefined *PTR____tolower_101444928;
undefined *PTR____toupper_101444930;
undefined *PTR___dyld_register_func_for_add_image_101444938;
undefined *PTR__abort_101444940;
undefined *PTR__accept_101444948;
undefined *PTR__access_101444950;
undefined *PTR__acosf_101444958;
undefined *PTR__alarm_101444960;
undefined *PTR__arc4random_101444968;
undefined *PTR__arc4random_uniform_101444970;
undefined *PTR__asinf_101444978;
undefined *PTR__asprintf_101444980;
undefined *PTR__atan2f_101444988;
undefined *PTR__atanf_101444990;
undefined *PTR__atof_101444998;
undefined *PTR__basename_1014449a8;
undefined *PTR__bind_1014449b0;
undefined *PTR__bzero_1014449b8;
undefined *PTR__calloc_1014449c0;
undefined *PTR__class_addMethod_1014449c8;
undefined *PTR__class_addProperty_1014449d0;
undefined *PTR__class_addProtocol_1014449d8;
undefined *PTR__class_getInstanceMethod_1014449e0;
undefined *PTR__class_getInstanceVariable_1014449e8;
undefined *PTR__class_getSuperclass_1014449f0;
undefined *PTR__class_isMetaClass_1014449f8;
undefined *PTR__class_replaceMethod_101444a00;
undefined *PTR__clock_101444a08;
undefined *PTR__close_101444a10;
undefined *PTR__closedir_101444a18;
undefined *PTR__connect_101444a20;
undefined *PTR__cos_101444a28;
undefined *PTR__cosf_101444a30;
undefined *PTR__dispatch_after_101444a38;
undefined *PTR__dispatch_async_101444a40;
undefined *PTR__dispatch_data_create_101444a48;
undefined *PTR__dispatch_get_current_queue_101444a50;
undefined *PTR__dispatch_get_global_queue_101444a58;
undefined *PTR__dispatch_get_specific_101444a60;
undefined *PTR__dispatch_once_101444a68;
undefined *PTR__dispatch_queue_create_101444a70;
undefined *PTR__dispatch_queue_set_specific_101444a78;
undefined *PTR__dispatch_resume_101444a80;
undefined *PTR__dispatch_semaphore_create_101444a88;
undefined *PTR__dispatch_semaphore_signal_101444a90;
undefined *PTR__dispatch_semaphore_wait_101444a98;
undefined *PTR__dispatch_source_cancel_101444aa0;
undefined *PTR__dispatch_source_create_101444aa8;
undefined *PTR__dispatch_source_set_event_handler_101444ab0;
undefined *PTR__dispatch_source_set_timer_101444ab8;
undefined *PTR__dispatch_suspend_101444ac0;
undefined *PTR__dispatch_sync_101444ac8;
undefined *PTR__dispatch_time_101444ad0;
undefined *PTR__dispatch_walltime_101444ad8;
undefined *PTR__dlsym_101444ae0;
undefined *PTR__drand48_101444ae8;
undefined *PTR__dup2_101444af0;
undefined *PTR__execl_101444af8;
undefined *PTR__exit_101444b00;
undefined *PTR__exp_101444b08;
undefined *PTR__exp2_101444b10;
undefined *PTR__exp2f_101444b18;
undefined *PTR__expf_101444b20;
undefined *PTR__fcntl_101444b30;
undefined *PTR__feof_101444b38;
undefined *PTR__ferror_101444b40;
undefined *PTR__fflush_101444b48;
undefined *PTR__fileno_101444b58;
undefined *PTR__fminl_101444b60;
undefined *PTR__fmod_101444b68;
undefined *PTR__fmodf_101444b70;
undefined *PTR__fork_101444b80;
undefined *PTR__fprintf_101444b88;
undefined *PTR__fputc_101444b90;
undefined *PTR__fputs_101444b98;
undefined *PTR__fread_101444ba0;
undefined *PTR__freeaddrinfo_101444bb0;
undefined *PTR__freeifaddrs_101444bb8;
undefined *PTR__frexp_101444bc0;
undefined *PTR__fseek_101444bc8;
undefined *PTR__fstat_101444bd0;
undefined *PTR__ftell_101444bd8;
undefined *PTR__fwrite_101444be0;
undefined *PTR__gai_strerror_101444be8;
undefined *PTR__getaddrinfo_101444bf0;
undefined *PTR__getenv_101444bf8;
undefined *PTR__geteuid_101444c00;
undefined *PTR__gethostname_101444c08;
undefined *PTR__getifaddrs_101444c10;
undefined *PTR__getpeername_101444c18;
undefined *PTR__getpwuid_r_101444c28;
undefined *PTR__getsockname_101444c30;
undefined *PTR__getsockopt_101444c38;
undefined *PTR__gettimeofday_101444c40;
undefined *PTR__getxattr_101444c48;
undefined *PTR__gmtime_r_101444c50;
undefined *PTR__hash_create_101444c58;
undefined *PTR__hash_search_101444c60;
undefined *PTR__host_page_size_101444c68;
undefined *PTR__host_statistics_101444c70;
undefined *PTR__if_nametoindex_101444c78;
undefined *PTR__inet_ntop_101444c80;
undefined *PTR__inet_pton_101444c88;
undefined *PTR__kill_101444c90;
undefined *PTR__ldexp_101444c98;
undefined *PTR__ldexpf_101444ca0;
undefined *PTR__listen_101444ca8;
undefined *PTR__localtime_101444cb0;
undefined *PTR__localtime_r_101444cb8;
undefined *PTR__log_101444cc0;
undefined *PTR__log10f_101444cc8;
undefined *PTR__logf_101444cd0;
undefined *PTR__longjmp_101444cd8;
undefined *PTR__lseek_101444ce0;
undefined *PTR__lstat_101444ce8;
undefined *PTR__mach_absolute_time_101444cf0;
undefined *PTR__mach_host_self_101444cf8;
undefined *PTR__mach_timebase_info_101444d00;
undefined *PTR__malloc_101444d08;
undefined *PTR__memchr_101444d10;
undefined *PTR__memcmp_101444d18;
undefined *PTR__memcpy_101444d20;
undefined *PTR__memmove_101444d28;
undefined *PTR__memset_101444d30;
undefined *PTR__memset_pattern16_101444d38;
undefined *PTR__method_setImplementation_101444d40;
undefined *PTR__mktime_101444d48;
undefined *PTR__mmap_101444d50;
undefined *PTR__munmap_101444d58;
undefined *PTR__nan_101444d60;
undefined *PTR__nanosleep_101444d68;
undefined *PTR__objc_alloc_101444d70;
undefined *PTR__objc_autorelease_101444d78;
undefined *PTR__objc_autoreleasePoolPop_101444d80;
undefined *PTR__objc_autoreleasePoolPush_101444d88;
undefined *PTR__objc_autoreleaseReturnValue_101444d90;
undefined *PTR__objc_begin_catch_101444d98;
undefined *PTR__objc_constructInstance_101444da0;
undefined *PTR__objc_copyWeak_101444da8;
undefined *PTR__objc_destroyWeak_101444db0;
undefined *PTR__objc_end_catch_101444db8;
undefined *PTR__objc_enumerationMutation_101444dc0;
undefined *PTR__objc_getClass_101444dc8;
undefined *PTR__objc_getMetaClass_101444dd0;
undefined *PTR__objc_getProperty_101444dd8;
undefined *PTR__objc_getProtocol_101444de0;
undefined *PTR__objc_getRequiredClass_101444de8;
undefined *PTR__objc_initWeak_101444df0;
undefined *PTR__objc_initializeClassPair_101444df8;
undefined *PTR__objc_loadWeakRetained_101444e00;
undefined *PTR__objc_lookUpClass_101444e08;
undefined *PTR__objc_moveWeak_101444e10;
undefined *PTR__objc_msgSend_101444e18;
undefined *PTR__objc_msgSendSuper2_101444e20;
undefined *PTR__objc_registerClassPair_101444e28;
undefined *PTR__objc_release_101444e30;
undefined *PTR__objc_retain_101444e38;
undefined *PTR__objc_retainAutorelease_101444e40;
undefined *PTR__objc_retainAutoreleaseReturnValue_101444e48;
undefined *PTR__objc_retainAutoreleasedReturnValue_101444e50;
undefined *PTR__objc_retainBlock_101444e58;
undefined *PTR__objc_setProperty_atomic_101444e60;
undefined *PTR__objc_setProperty_nonatomic_101444e68;
undefined *PTR__objc_setProperty_nonatomic_copy_101444e70;
undefined *PTR__objc_storeStrong_101444e78;
undefined *PTR__objc_storeWeak_101444e80;
undefined *PTR__objc_sync_enter_101444e88;
undefined *PTR__objc_sync_exit_101444e90;
undefined *PTR__object_getClass_101444e98;
undefined *PTR__object_getIvar_101444ea0;
undefined *PTR__open_101444ea8;
undefined *PTR__opendir_101444eb0;
undefined *PTR__poll_101444eb8;
undefined *PTR__pow_101444ec0;
undefined *PTR__powf_101444ec8;
undefined *PTR__printf_101444ed0;
undefined *PTR__property_copyAttributeList_101444ed8;
undefined *PTR__protocol_getMethodDescription_101444ee0;
undefined *PTR__pthread_attr_destroy_101444ee8;
undefined *PTR__pthread_attr_getschedpolicy_101444ef0;
undefined *PTR__pthread_attr_init_101444ef8;
undefined *PTR__pthread_attr_setdetachstate_101444f00;
undefined *PTR__pthread_attr_setschedparam_101444f08;
undefined *PTR__pthread_attr_setschedpolicy_101444f10;
undefined *PTR__pthread_attr_setstacksize_101444f18;
undefined *PTR__pthread_cond_destroy_101444f20;
undefined *PTR__pthread_cond_init_101444f28;
undefined *PTR__pthread_cond_signal_101444f30;
undefined *PTR__pthread_cond_wait_101444f38;
undefined *PTR__pthread_create_101444f40;
undefined *PTR__pthread_equal_101444f48;
undefined *PTR__pthread_getspecific_101444f50;
undefined *PTR__pthread_join_101444f58;
undefined *PTR__pthread_key_create_101444f60;
undefined *PTR__pthread_key_delete_101444f68;
undefined *PTR__pthread_mutex_init_101444f78;
undefined *PTR__pthread_mutex_trylock_101444f88;
undefined *PTR__pthread_mutexattr_init_101444f98;
undefined *PTR__pthread_mutexattr_settype_101444fa0;
undefined *PTR__pthread_self_101444fa8;
undefined *PTR__pthread_setname_np_101444fb0;
undefined *PTR__pthread_setschedparam_101444fb8;
undefined *PTR__pthread_setspecific_101444fc0;
undefined *PTR__qsort_101444fc8;
undefined *PTR__rand_101444fd0;
undefined *PTR__read_101444fd8;
undefined *PTR__readdir_101444fe0;
undefined *PTR__realloc_101444fe8;
undefined *PTR__recv_101444ff0;
undefined *PTR__recvfrom_101444ff8;
undefined *PTR__remove_101445000;
undefined *PTR__removexattr_101445008;
undefined *PTR__rename_101445010;
undefined *PTR__sel_getUid_101445018;
undefined *PTR__select_101445020;
undefined *PTR__sem_close_101445028;
undefined *PTR__sem_open_101445030;
undefined *PTR__sem_post_101445038;
undefined *PTR__sem_trywait_101445040;
undefined *PTR__sem_unlink_101445048;
undefined *PTR__sem_wait_101445050;
undefined *PTR__semaphore_create_101445058;
undefined *PTR__semaphore_destroy_101445060;
undefined *PTR__semaphore_signal_101445068;
undefined *PTR__semaphore_wait_101445070;
undefined *PTR__send_101445078;
undefined *PTR__sendto_101445080;
undefined *PTR__setenv_101445088;
undefined *PTR__setjmp_101445090;
undefined *PTR__setsockopt_101445098;
undefined *PTR__shutdown_1014450a0;
undefined *PTR__sigaction_1014450a8;
undefined *PTR__siglongjmp_1014450b0;
undefined *PTR__signal_1014450b8;
undefined *PTR__sigsetjmp_1014450c0;
undefined *PTR__sin_1014450c8;
undefined *PTR__sinf_1014450d0;
undefined *PTR__snprintf_1014450d8;
undefined *PTR__socket_1014450e0;
undefined *PTR__socketpair_1014450e8;
undefined *PTR__sprintf_1014450f0;
undefined *PTR__sqlite3_bind_blob_1014450f8;
undefined *PTR__sqlite3_bind_double_101445100;
undefined *PTR__sqlite3_bind_int_101445108;
undefined *PTR__sqlite3_bind_int64_101445110;
undefined *PTR__sqlite3_bind_null_101445118;
undefined *PTR__sqlite3_bind_parameter_count_101445120;
undefined *PTR__sqlite3_bind_parameter_index_101445128;
undefined *PTR__sqlite3_bind_text_101445130;
undefined *PTR__sqlite3_busy_handler_101445138;
undefined *PTR__sqlite3_changes_101445140;
undefined *PTR__sqlite3_close_101445148;
undefined *PTR__sqlite3_column_blob_101445150;
undefined *PTR__sqlite3_column_bytes_101445158;
undefined *PTR__sqlite3_column_count_101445160;
undefined *PTR__sqlite3_column_double_101445168;
undefined *PTR__sqlite3_column_int_101445170;
undefined *PTR__sqlite3_column_int64_101445178;
undefined *PTR__sqlite3_column_name_101445180;
undefined *PTR__sqlite3_column_text_101445188;
undefined *PTR__sqlite3_column_type_101445190;
undefined *PTR__sqlite3_create_function_101445198;
undefined *PTR__sqlite3_data_count_1014451a0;
undefined *PTR__sqlite3_errcode_1014451a8;
undefined *PTR__sqlite3_errmsg_1014451b0;
undefined *PTR__sqlite3_exec_1014451b8;
undefined *PTR__sqlite3_finalize_1014451c0;
undefined *PTR__sqlite3_free_1014451c8;
undefined *PTR__sqlite3_last_insert_rowid_1014451d0;
undefined *PTR__sqlite3_libversion_1014451d8;
undefined *PTR__sqlite3_next_stmt_1014451e0;
undefined *PTR__sqlite3_open_1014451e8;
undefined *PTR__sqlite3_open_v2_1014451f0;
undefined *PTR__sqlite3_prepare_v2_1014451f8;
undefined *PTR__sqlite3_reset_101445200;
undefined *PTR__sqlite3_sleep_101445208;
undefined *PTR__sqlite3_step_101445210;
undefined *PTR__sqlite3_threadsafe_101445218;
undefined *PTR__sqlite3_user_data_101445220;
undefined *PTR__srand_101445228;
undefined *PTR__srand48_101445230;
undefined *PTR__sscanf_101445238;
undefined *PTR__stat_101445240;
undefined *PTR__strerror_101445268;
undefined *PTR__strerror_r_101445270;
undefined *PTR__strftime_101445278;
undefined *PTR__strlen_101445280;
undefined *PTR__strncasecmp_101445288;
undefined *PTR__strncmp_101445290;
undefined *PTR__strncpy_101445298;
undefined *PTR__strpbrk_1014452a0;
undefined *PTR__strrchr_1014452a8;
undefined *PTR__strtod_1014452b8;
undefined *PTR__strtok_r_1014452c8;
undefined *PTR__strtol_1014452d0;
undefined *PTR__strtoll_1014452d8;
undefined *PTR__strtoul_1014452e0;
undefined *PTR__sysconf_1014452e8;
undefined *PTR__sysctl_1014452f0;
undefined *PTR__sysctlbyname_1014452f8;
undefined *PTR__tanf_101445300;
undefined *PTR__task_info_101445308;
undefined *PTR__time_101445310;
undefined *PTR__tzset_101445318;
undefined *PTR__uname_101445320;
undefined *PTR__unlink_101445328;
undefined *PTR__unsetenv_101445330;
undefined *PTR__usleep_101445338;
undefined *PTR__vfprintf_101445340;
undefined *PTR__vsnprintf_101445348;
undefined *PTR__vsprintf_101445350;
undefined *PTR__vsscanf_101445358;
undefined *PTR__waitpid_101445360;
undefined *PTR__write_101445368;

/* Function Stack Size: 0x10 bytes */

void ADJSdkClickHandler::sendNextSdkClick(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_101830cf0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJSdkClickHandler::teardown(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf_ADJSdkClickHandlerteardown);
  _objc_release(uVar1);
  packageQueue(param_1,(SEL)"packageQueue");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    packageQueue(param_1,(SEL)"packageQueue");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"removeAllObjects");
    _objc_release(uVar1);
  }
  setInternalQueue_(param_1,(SEL)"setInternalQueue:",0);
  setLogger_(param_1,(SEL)"setLogger:",0);
  setBackoffStrategy_(param_1,(SEL)"setBackoffStrategy:",0);
  setPackageQueue_(param_1,(SEL)"setPackageQueue:",0);
  setActivityHandler_(param_1,(SEL)"setActivityHandler:",0);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::sendNextSdkClickI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  dispatch_time_t dVar10;
  double dVar11;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(uVar1,"paused");
  if ((uVar2 & 1) == 0) {
    _objc_msgSend(uVar1,"packageQueue");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = _objc_msgSend(uVar3,"count");
    _objc_release(uVar3);
    if (lVar4 != 0) {
      packageQueue(param_1,(SEL)"packageQueue");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"objectAtIndex:",0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      packageQueue(param_1,(SEL)"packageQueue");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"removeObjectAtIndex:",0);
      _objc_release(uVar3);
      uVar3 = _objc_msgSend(&objc::class_t::ADJActivityPackage,"class");
      uVar2 = _objc_msgSend(uVar5,"isKindOfClass:",uVar3);
      if ((uVar2 & 1) == 0) {
        _objc_msgSend(uVar1,"logger");
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar3,"error:",&cf_Failedtoreadsdk_clickpackage);
        _objc_release(uVar3);
        _objc_msgSend(uVar1,"sendNextSdkClick");
      }
      else {
        _objc_msgSend(&objc::class_t::ADJAdjustFactory,"baseUrl");
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar1,"basePath");
        lVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) {
          _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar3);
          uVar9 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_msgSend(uVar1,"basePath");
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar8);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        local_b0 = PTR___NSConcreteStackBlock_101444138;
        local_a8 = 0xc2000000;
        uStack_a4 = 0;
        local_a0 = FUN_101130238;
        local_98 = &DAT_101830d40;
        uVar9 = _objc_retain(uVar9);
        local_90 = uVar9;
        local_78 = lVar4;
        uVar7 = _objc_retain(uVar5);
        local_88 = uVar7;
        local_80 = _objc_retain(uVar1);
        lVar4 = _objc_retainBlock(&local_b0);
        lVar6 = _objc_msgSend(uVar7,"retries");
        if (lVar6 < 1) {
          (**(code **)(lVar4 + 0x10))(lVar4);
        }
        else {
          backoffStrategy(param_1,(SEL)"backoffStrategy");
          uVar7 = _objc_retainAutoreleasedReturnValue();
          dVar11 = (double)_objc_msgSend(&objc::class_t::ADJUtil,"waitingTime:backoffStrategy:",
                                         lVar6,uVar7);
          _objc_release(uVar7);
          _objc_msgSend(dVar11,&objc::class_t::ADJUtil,"secondsNumberFormat:");
          uVar7 = _objc_retainAutoreleasedReturnValue();
          logger(param_1,(SEL)"logger");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,"verbose:",&cf_Waitingfor__secondsbeforeretryingsdk_clickforthe_dtime)
          ;
          _objc_release(uVar8);
          dVar10 = _dispatch_time(0,(long)(dVar11 * 1000000000.0));
          internalQueue(param_1,(SEL)"internalQueue");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar10,uVar8,lVar4);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        _objc_release(lVar4);
        _objc_release(local_80);
        _objc_release(local_88);
        _objc_release(local_90);
        _objc_release(uVar3);
        _objc_release(uVar9);
      }
      _objc_release(uVar5);
    }
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSdkClickHandler::internalQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::setInternalQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSdkClickHandler::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSdkClickHandler::backoffStrategy(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backoffStrategy);
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::setBackoffStrategy_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_backoffStrategy,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJSdkClickHandler::paused(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_paused);
}




/* Function Stack Size: 0x14 bytes */

void ADJSdkClickHandler::setPaused_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_paused) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSdkClickHandler::packageQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_packageQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::setPackageQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_packageQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSdkClickHandler::activityHandler(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_activityHandler);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::setActivityHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_activityHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSdkClickHandler::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJSdkClickHandler::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJSdkClickHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_destroyWeak(param_1 + (long)_activityHandler);
  _objc_storeStrong(param_1 + (long)_packageQueue,0);
  _objc_storeStrong(param_1 + (long)_backoffStrategy,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_internalQueue,0);
  return;
}

