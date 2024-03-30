#include <stdio.h>
#include <stdint.h>
#include <string.h>

// AES S-box and inverse S-box
const uint8_t s_box[256] = {
    // S-box values
};

const uint8_t inv_s_box[256] = {
    // Inverse S-box values
};

// AES round constant
const uint8_t rcon[10] = {
    // Round constants
};

// AES Key Expansion
void keyExpansion(const uint8_t *key, uint8_t *roundKeys) {
    memcpy(roundKeys, key, 16);

    for (int i = 4; i < 44; i++) {
        uint8_t temp[4];
        memcpy(temp, &roundKeys[(i - 1) * 4], 4);

        if (i % 4 == 0) {
            // RotWord and SubWord operations
            uint8_t t = temp[0];
            temp[0] = s_box[temp[1]] ^ rcon[i / 4];
            temp[1] = s_box[temp[2]];
            temp[2] = s_box[temp[3]];
            temp[3] = s_box[t];
        }

        for (int j = 0; j < 4; j++) {
            roundKeys[i * 4 + j] = roundKeys[(i - 4) * 4 + j] ^ temp[j];
        }
    }
}

// AES SubBytes
void subBytes(uint8_t *state) {
    for (int i = 0; i < 16; i++) {
        state[i] = s_box[state[i]];
    }
}

// AES ShiftRows
void shiftRows(uint8_t *state) {
    uint8_t tmp[16];
    memcpy(tmp, state, 16);

    state[0] = tmp[0];
    state[1] = tmp[5];
    state[2] = tmp[10];
    state[3] = tmp[15];

    state[4] = tmp[4];
    state[5] = tmp[9];
    state[6] = tmp[14];
    state[7] = tmp[3];

    state[8] = tmp[8];
    state[9] = tmp[13];
    state[10] = tmp[2];
    state[11] = tmp[7];

    state[12] = tmp[12];
    state[13] = tmp[1];
    state[14] = tmp[6];
    state[15] = tmp[11];
}

// AES MixColumns
void mixColumns(uint8_t *state) {
    // Mix columns operation
}

// AES AddRoundKey
void addRoundKey(uint8_t *state, const uint8_t *roundKey) {
    for (int i = 0; i < 16; i++) {
        state[i] ^= roundKey[i];
    }
}

// AES Encryption
void aesEncrypt(const uint8_t *input, const uint8_t *key, uint8_t *output) {
    uint8_t roundKeys[176];
    keyExpansion(key, roundKeys);
    
    uint8_t state[16];
    memcpy(state, input, 16);

    addRoundKey(state, key);

    for (int round = 1; round < 10; round++) {
        subBytes(state);
        shiftRows(state);
        mixColumns(state);
        addRoundKey(state, &roundKeys[round * 16]);
    }

    subBytes(state);
    shiftRows(state);
    addRoundKey(state, &roundKeys[10 * 16]);

    memcpy(output, state, 16);
}

// AES Decryption
void aesDecrypt(const uint8_t *input, const uint8_t *key, uint8_t *output) {
    uint8_t roundKeys[176];
    keyExpansion(key, roundKeys);

    uint8_t state[16];
    memcpy(state, input, 16);

    addRoundKey(state, &roundKeys[10 * 16]);

    for (int round = 9; round > 0; round--) {
        shiftRows(state);
        subBytes(state);
        addRoundKey(state, &roundKeys[round * 16]);
        mixColumns(state);
    }

    shiftRows(state);
    subBytes(state);
    addRoundKey(state, key);

    memcpy(output, state, 16);
}

int main() {
    uint8_t plaintext[16] = {
        // Input plaintext
    };

    uint8_t key[16] = {
        // AES encryption key
    };

    uint8_t ciphertext[16];
    uint8_t decrypted[16];

    // Encrypt
    aesEncrypt(plaintext, key, ciphertext);

    // Decrypt
    aesDecrypt(ciphertext, key, decrypted);

    // Print ciphertext
    printf("Ciphertext: ");
    for (int i = 0; i < 16; i++) {
        printf("%02X ", ciphertext[i]);
    }
    printf("\n");

    // Print decrypted text
    printf("Decrypted text: ");
    for (int i = 0; i < 16; i++) {
        printf("%c", decrypted[i]);
    }
    printf("\n");

    return 0;
}
