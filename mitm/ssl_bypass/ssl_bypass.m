/*
 * ssl_bypass — fishhook-based SSL bypass for Vainglory MITM.
 *
 * Strategy: hook SSLSetSessionOption to force kSSLSessionOptionBreakOnServerAuth,
 * which makes Secure Transport delegate cert validation to the app instead of
 * doing it internally. Then hook SecTrustEvaluate to always succeed.
 */

#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import <objc/runtime.h>
#include "fishhook.h"

// MARK: - Original function pointers

static OSStatus (*orig_SecTrustEvaluate)(SecTrustRef trust, SecTrustResultType *result);
static Boolean (*orig_SecTrustEvaluateWithError)(SecTrustRef trust, CFErrorRef *error);
static OSStatus (*orig_SSLSetPeerDomainName)(SSLContextRef ctx, const char *name, size_t len);
static OSStatus (*orig_SSLHandshake)(SSLContextRef ctx);
static OSStatus (*orig_SSLSetSessionOption)(SSLContextRef ctx, int option, Boolean value);
static OSStatus (*orig_SSLCreateContext)(void *alloc, int protocolSide, int connectionType);
static SecPolicyRef (*orig_SecPolicyCreateSSL)(Boolean server, CFStringRef hostname);
static OSStatus (*orig_SecTrustSetAnchorCertificates)(SecTrustRef trust, CFArrayRef anchors);

// kSSLSessionOptionBreakOnServerAuth = 0
enum { kBreakOnServerAuth = 0 };

// MARK: - Hooks

static OSStatus hook_SecTrustEvaluate(SecTrustRef trust, SecTrustResultType *result) {
    if (result) *result = kSecTrustResultProceed;
    NSLog(@"[ssl_bypass] SecTrustEvaluate -> Proceed");
    return errSecSuccess;
}

static Boolean hook_SecTrustEvaluateWithError(SecTrustRef trust, CFErrorRef *error) {
    if (error) *error = NULL;
    NSLog(@"[ssl_bypass] SecTrustEvaluateWithError -> true");
    return true;
}

static OSStatus hook_SSLSetPeerDomainName(SSLContextRef ctx, const char *name, size_t len) {
    NSLog(@"[ssl_bypass] SSLSetPeerDomainName('%.*s') -> skipped", (int)len, name);
    return errSecSuccess;
}

static OSStatus hook_SSLSetSessionOption(SSLContextRef ctx, int option, Boolean value) {
    NSLog(@"[ssl_bypass] SSLSetSessionOption(opt=%d, val=%d)", option, value);
    // Always enable BreakOnServerAuth so Secure Transport doesn't validate certs internally
    OSStatus rc = orig_SSLSetSessionOption(ctx, option, value);
    if (option != kBreakOnServerAuth) {
        OSStatus rc2 = orig_SSLSetSessionOption(ctx, kBreakOnServerAuth, true);
        NSLog(@"[ssl_bypass] forced kSSLSessionOptionBreakOnServerAuth=true (rc=%d)", (int)rc2);
    }
    return rc;
}

static OSStatus hook_SSLHandshake(SSLContextRef ctx) {
    OSStatus result = orig_SSLHandshake(ctx);
    if (result == -9841) {
        // errSSLPeerAuthCompleted — Secure Transport is asking us to verify the peer
        // This is expected when BreakOnServerAuth is enabled
        NSLog(@"[ssl_bypass] SSLHandshake -> PeerAuthCompleted, evaluating trust...");

        // Get the peer trust and auto-accept it
        SecTrustRef trust = NULL;
        SSLCopyPeerTrust(ctx, &trust);
        if (trust) {
            SecTrustResultType trustResult;
            // This calls OUR hooked SecTrustEvaluate which always succeeds
            SecTrustEvaluate(trust, &trustResult);
            CFRelease(trust);
        }

        // Continue the handshake
        result = orig_SSLHandshake(ctx);
        NSLog(@"[ssl_bypass] SSLHandshake continued: %d", (int)result);
    } else if (result != errSecSuccess && result != -9805 /* wouldBlock */) {
        NSLog(@"[ssl_bypass] SSLHandshake error: %d", (int)result);
    }
    return result;
}

static SecPolicyRef hook_SecPolicyCreateSSL(Boolean server, CFStringRef hostname) {
    NSLog(@"[ssl_bypass] SecPolicyCreateSSL -> no hostname check");
    return orig_SecPolicyCreateSSL(server, NULL);
}

static OSStatus hook_SecTrustSetAnchorCertificates(SecTrustRef trust, CFArrayRef anchors) {
    // Skip setting custom anchors — lets our system-trusted mitmproxy CA work
    NSLog(@"[ssl_bypass] SecTrustSetAnchorCertificates -> skipped");
    return errSecSuccess;
}

// MARK: - Blowfish key capture via CC_MD5_Final + CCCrypt hooks

#include <CommonCrypto/CommonCryptor.h>
#include <CommonCrypto/CommonDigest.h>
#include <mach-o/dyld.h>

// The key derivation does: MD5(64_byte_constant + data) -> 16-byte key -> BF_Init
// We hook CC_MD5_Final to capture every MD5 output (the key is one of them)
// and CCCrypt to catch any CommonCrypto-based encryption

static unsigned char (*orig_CC_MD5_Final)(unsigned char *md, CC_MD5_CTX *c);
static CCCryptorStatus (*orig_CCCrypt)(CCOperation op, CCAlgorithm alg, CCOptions options,
    const void *key, size_t keyLength, const void *iv,
    const void *dataIn, size_t dataInLength,
    void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);

static unsigned char hook_CC_MD5_Final(unsigned char *md, CC_MD5_CTX *c) {
    unsigned char result = orig_CC_MD5_Final(md, c);
    if (md) {
        NSMutableString *hex = [NSMutableString string];
        for (int i = 0; i < CC_MD5_DIGEST_LENGTH; i++)
            [hex appendFormat:@"%02x", md[i]];
        NSLog(@"[ssl_bypass] CC_MD5_Final -> %@", hex);

        // Write every MD5 result to file — one of them is the BF key
        NSString *path = @"/var/mobile/Documents/md5_outputs.txt";
        NSFileHandle *fh = [NSFileHandle fileHandleForWritingAtPath:path];
        if (!fh) {
            [[NSFileManager defaultManager] createFileAtPath:path contents:nil attributes:nil];
            fh = [NSFileHandle fileHandleForWritingAtPath:path];
        }
        [fh seekToEndOfFile];
        [fh writeData:[[hex stringByAppendingString:@"\n"] dataUsingEncoding:NSUTF8StringEncoding]];
        [fh closeFile];
    }
    return result;
}

static CCCryptorStatus hook_CCCrypt(CCOperation op, CCAlgorithm alg, CCOptions options,
    const void *key, size_t keyLength, const void *iv,
    const void *dataIn, size_t dataInLength,
    void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved) {

    NSMutableString *keyHex = [NSMutableString string];
    const uint8_t *kb = (const uint8_t *)key;
    for (size_t i = 0; i < keyLength && i < 64; i++)
        [keyHex appendFormat:@"%02x", kb[i]];

    // alg: 0=AES, 1=DES, 2=3DES, 3=CAST, 4=RC4, 5=RC2, 6=Blowfish
    NSString *algName = @"?";
    switch (alg) {
        case 0: algName = @"AES"; break;
        case 1: algName = @"DES"; break;
        case 6: algName = @"Blowfish"; break;
        default: algName = [NSString stringWithFormat:@"alg_%d", alg]; break;
    }

    NSLog(@"[ssl_bypass] CCCrypt op=%d alg=%@ keyLen=%zu key=%@ dataLen=%zu",
          (int)op, algName, keyLength, keyHex, dataInLength);

    // If it's Blowfish, save the key
    if (alg == 6) {
        NSString *path = @"/var/mobile/Documents/bf_key.txt";
        [keyHex writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:nil];
        NSLog(@"[ssl_bypass] *** BLOWFISH KEY SAVED: %@ ***", keyHex);
    }

    return orig_CCCrypt(op, alg, options, key, keyLength, iv, dataIn, dataInLength, dataOut, dataOutAvailable, dataOutMoved);
}

// MARK: - Constructor

__attribute__((constructor))
static void ssl_bypass_init(void) {
    NSLog(@"[ssl_bypass] loaded v4 — Secure Transport + BF_Init hooks");

    struct rebinding rebindings[] = {
        {"SecTrustEvaluate",              (void *)hook_SecTrustEvaluate,              (void **)&orig_SecTrustEvaluate},
        {"SecTrustEvaluateWithError",     (void *)hook_SecTrustEvaluateWithError,     (void **)&orig_SecTrustEvaluateWithError},
        {"SSLSetPeerDomainName",          (void *)hook_SSLSetPeerDomainName,          (void **)&orig_SSLSetPeerDomainName},
        {"SSLHandshake",                  (void *)hook_SSLHandshake,                  (void **)&orig_SSLHandshake},
        {"SSLSetSessionOption",           (void *)hook_SSLSetSessionOption,           (void **)&orig_SSLSetSessionOption},
        {"SecPolicyCreateSSL",            (void *)hook_SecPolicyCreateSSL,            (void **)&orig_SecPolicyCreateSSL},
        {"SecTrustSetAnchorCertificates", (void *)hook_SecTrustSetAnchorCertificates, (void **)&orig_SecTrustSetAnchorCertificates},
        {"CC_MD5_Final",                  (void *)hook_CC_MD5_Final,                  (void **)&orig_CC_MD5_Final},
        {"CCCrypt",                       (void *)hook_CCCrypt,                       (void **)&orig_CCCrypt},
    };
    int rc = rebind_symbols(rebindings, sizeof(rebindings) / sizeof(rebindings[0]));
    NSLog(@"[ssl_bypass] rebind: %d | SecTrustEval=%p SSLHandshake=%p SSLSetSessionOpt=%p",
          rc, orig_SecTrustEvaluate, orig_SSLHandshake, orig_SSLSetSessionOption);

    // Amplitude swizzle
    Class amp = NSClassFromString(@"Amplitude");
    if (amp) {
        Method m = class_getInstanceMethod(amp, NSSelectorFromString(@"sslPinningEnabled"));
        if (m) method_setImplementation(m, imp_implementationWithBlock(^BOOL(id s){ return NO; }));
    }

    NSLog(@"[ssl_bypass] CC_MD5_Final hook: %p, CCCrypt hook: %p",
          orig_CC_MD5_Final, orig_CCCrypt);
    NSLog(@"[ssl_bypass] init complete — watching for Blowfish key via MD5/CCCrypt");
}
