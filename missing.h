#ifndef crash_missing_h
#define crash_missing_h

extern "C" {
#include <openssl/crypto.h>
}

#if OPENSSL_VERSION_NUMBER > 0x10100000L && !(defined HAVE_LIBRESSL)
#define EVP_MD_CTX_delete EVP_MD_CTX_free
#else
#define EVP_MD_CTX_delete EVP_MD_CTX_destroy
#endif

#endif


