#define _GNU_SOURCE

#include <jni.h>
#include <android/log.h>
#include <dlfcn.h>
#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#define TAG "vg_loader"
#define LOGI(fmt, ...) __android_log_print(ANDROID_LOG_INFO, TAG, fmt, ##__VA_ARGS__)
#define LOGE(fmt, ...) __android_log_print(ANDROID_LOG_ERROR, TAG, fmt, ##__VA_ARGS__)

#define REAL_GAME_LIB "libGameKindred_real.so"
#define HOOK_LIB "libvg_unlock.so"

#ifndef VG_ENABLE_VISUAL_TOAST
#define VG_ENABLE_VISUAL_TOAST 1
#endif

#define VISUAL_TOAST_TEXT "VG injected build active"

typedef jint (*jni_onload_fn)(JavaVM *vm, void *reserved);
typedef void (*jni_onunload_fn)(JavaVM *vm, void *reserved);

static void *g_real_handle = NULL;
static jni_onunload_fn g_real_onunload = NULL;

#define VG_JNI_SYMBOL(symbol) void *ptr_##symbol = NULL;
#include "vg_gamekindred_jni_symbols.inc"
#undef VG_JNI_SYMBOL

static int build_neighbor_path(char *out, size_t out_size, const char *current_path, const char *replacement) {
    const char *slash = strrchr(current_path, '/');
    size_t dir_len = 0;

    if (!slash) {
        return 0;
    }

    dir_len = (size_t)(slash - current_path) + 1;
    if (dir_len + strlen(replacement) + 1 > out_size) {
        return 0;
    }

    memcpy(out, current_path, dir_len);
    strcpy(out + dir_len, replacement);
    return 1;
}

static void *load_neighbor_library(const char *current_path, const char *replacement, int flags) {
    char full_path[PATH_MAX] = {0};
    void *handle = NULL;

    if (current_path && build_neighbor_path(full_path, sizeof(full_path), current_path, replacement)) {
        handle = dlopen(full_path, flags);
        if (handle) {
            LOGI("loaded %s via %s", replacement, full_path);
            return handle;
        }
        LOGE("dlopen failed for %s: %s", full_path, dlerror());
    }

    handle = dlopen(replacement, flags);
    if (handle) {
        LOGI("loaded %s via fallback search", replacement);
        return handle;
    }

    LOGE("dlopen failed for %s: %s", replacement, dlerror());
    return NULL;
}

static const char *current_library_path(void) {
    Dl_info info;

    memset(&info, 0, sizeof(info));
    if (dladdr((void *)&JNI_OnLoad, &info) == 0 || !info.dli_fname) {
        return NULL;
    }

    return info.dli_fname;
}

void vg_loader_missing_jni_symbol(void) {
    LOGE("JNI trampoline invoked before symbol resolution");
    __builtin_trap();
}

static int jni_clear_exception(JNIEnv *env, const char *where) {
    if (!(*env)->ExceptionCheck(env)) {
        return 0;
    }

    LOGE("JNI exception while %s", where);
    (*env)->ExceptionClear(env);
    return 1;
}

static int get_jni_env(JavaVM *vm, JNIEnv **env_out, int *did_attach) {
    jint status = (*vm)->GetEnv(vm, (void **)env_out, JNI_VERSION_1_6);

    *did_attach = 0;
    if (status == JNI_OK) {
        return 1;
    }

    if (status != JNI_EDETACHED) {
        LOGE("GetEnv failed: %d", status);
        return 0;
    }

    if ((*vm)->AttachCurrentThread(vm, env_out, NULL) != JNI_OK) {
        LOGE("AttachCurrentThread failed");
        return 0;
    }

    *did_attach = 1;
    return 1;
}

static void show_visual_toast(JavaVM *vm, const char *message) {
#if VG_ENABLE_VISUAL_TOAST
    JNIEnv *env = NULL;
    int did_attach = 0;
    jclass activity_thread_cls = NULL;
    jclass toast_cls = NULL;
    jmethodID current_application = NULL;
    jmethodID make_text = NULL;
    jmethodID show = NULL;
    jfieldID length_long = NULL;
    jobject application = NULL;
    jobject toast = NULL;
    jstring jmessage = NULL;
    jint toast_duration = 0;

    if (!get_jni_env(vm, &env, &did_attach)) {
        return;
    }

    activity_thread_cls = (*env)->FindClass(env, "android/app/ActivityThread");
    if (!activity_thread_cls || jni_clear_exception(env, "finding ActivityThread")) {
        goto cleanup;
    }

    current_application = (*env)->GetStaticMethodID(
        env,
        activity_thread_cls,
        "currentApplication",
        "()Landroid/app/Application;");
    if (!current_application || jni_clear_exception(env, "resolving currentApplication")) {
        goto cleanup;
    }

    application = (*env)->CallStaticObjectMethod(env, activity_thread_cls, current_application);
    if (jni_clear_exception(env, "calling currentApplication") || !application) {
        LOGI("visual toast skipped: currentApplication unavailable");
        goto cleanup;
    }

    toast_cls = (*env)->FindClass(env, "android/widget/Toast");
    if (!toast_cls || jni_clear_exception(env, "finding Toast")) {
        goto cleanup;
    }

    length_long = (*env)->GetStaticFieldID(env, toast_cls, "LENGTH_LONG", "I");
    if (!length_long || jni_clear_exception(env, "resolving Toast.LENGTH_LONG")) {
        goto cleanup;
    }
    toast_duration = (*env)->GetStaticIntField(env, toast_cls, length_long);

    make_text = (*env)->GetStaticMethodID(
        env,
        toast_cls,
        "makeText",
        "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;");
    if (!make_text || jni_clear_exception(env, "resolving Toast.makeText")) {
        goto cleanup;
    }

    show = (*env)->GetMethodID(env, toast_cls, "show", "()V");
    if (!show || jni_clear_exception(env, "resolving Toast.show")) {
        goto cleanup;
    }

    jmessage = (*env)->NewStringUTF(env, message);
    if (!jmessage || jni_clear_exception(env, "creating toast message")) {
        goto cleanup;
    }

    toast = (*env)->CallStaticObjectMethod(env, toast_cls, make_text, application, jmessage, toast_duration);
    if (jni_clear_exception(env, "calling Toast.makeText") || !toast) {
        goto cleanup;
    }

    (*env)->CallVoidMethod(env, toast, show);
    if (jni_clear_exception(env, "calling Toast.show")) {
        goto cleanup;
    }

    LOGI("visual toast shown");

cleanup:
    if (toast) {
        (*env)->DeleteLocalRef(env, toast);
    }
    if (jmessage) {
        (*env)->DeleteLocalRef(env, jmessage);
    }
    if (application) {
        (*env)->DeleteLocalRef(env, application);
    }
    if (toast_cls) {
        (*env)->DeleteLocalRef(env, toast_cls);
    }
    if (activity_thread_cls) {
        (*env)->DeleteLocalRef(env, activity_thread_cls);
    }
    if (did_attach) {
        (*vm)->DetachCurrentThread(vm);
    }
#else
    (void)vm;
    (void)message;
#endif
}

static void resolve_named_jni_exports(void) {
#define VG_JNI_SYMBOL(symbol) \
    do { \
        dlerror(); \
        ptr_##symbol = dlsym(g_real_handle, #symbol); \
        if (!ptr_##symbol) { \
            LOGE("missing real JNI export %s: %s", #symbol, dlerror()); \
        } \
    } while (0);
#include "vg_gamekindred_jni_symbols.inc"
#undef VG_JNI_SYMBOL
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    const char *self_path = current_library_path();
    jni_onload_fn real_onload = NULL;
    jint version = JNI_ERR;

    LOGI("loader shim active (%s)", self_path ? self_path : "path unknown");

    g_real_handle = load_neighbor_library(self_path, REAL_GAME_LIB, RTLD_NOW | RTLD_GLOBAL);
    if (!g_real_handle) {
        return JNI_ERR;
    }

    if (!load_neighbor_library(self_path, HOOK_LIB, RTLD_NOW | RTLD_GLOBAL)) {
        LOGE("continuing without %s", HOOK_LIB);
    }

    resolve_named_jni_exports();

    real_onload = (jni_onload_fn)dlsym(g_real_handle, "JNI_OnLoad");
    if (!real_onload) {
        LOGE("real JNI_OnLoad missing: %s", dlerror());
        return JNI_ERR;
    }

    g_real_onunload = (jni_onunload_fn)dlsym(g_real_handle, "JNI_OnUnload");
    version = real_onload(vm, reserved);
    LOGI("real JNI_OnLoad returned 0x%x", version);
    if (version != JNI_ERR) {
        show_visual_toast(vm, VISUAL_TOAST_TEXT);
    }
    return version;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved) {
    if (g_real_onunload) {
        g_real_onunload(vm, reserved);
    }

    if (g_real_handle) {
        dlclose(g_real_handle);
        g_real_handle = NULL;
    }
}