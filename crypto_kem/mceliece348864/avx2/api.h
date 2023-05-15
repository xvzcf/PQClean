#ifndef PQCLEAN_MCELIECE348864_AVX2_API_H
#define PQCLEAN_MCELIECE348864_AVX2_API_H

#include <stdint.h>

#define PQCLEAN_MCELIECE348864_AVX2_CRYPTO_ALGNAME "Classic McEliece 348864"
#define PQCLEAN_MCELIECE348864_AVX2_CRYPTO_PUBLICKEYBYTES 261120
#define PQCLEAN_MCELIECE348864_AVX2_CRYPTO_SECRETKEYBYTES 6492
#define PQCLEAN_MCELIECE348864_AVX2_CRYPTO_CIPHERTEXTBYTES 96
#define PQCLEAN_MCELIECE348864_AVX2_CRYPTO_BYTES 32


int PQCLEAN_MCELIECE348864_AVX2_crypto_kem_enc(
    uint8_t *c,
    uint8_t *key,
    const uint8_t *pk
);

int PQCLEAN_MCELIECE348864_AVX2_crypto_kem_dec(
    uint8_t *key,
    const uint8_t *c,
    const uint8_t *sk
);

int PQCLEAN_MCELIECE348864_AVX2_crypto_kem_keypair
(
    uint8_t *pk,
    uint8_t *sk
);

#endif
