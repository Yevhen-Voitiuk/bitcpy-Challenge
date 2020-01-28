//
// Created by Yevhen Voitiuk on 1/27/2020.
//

#include "../Include/bitcpy.h"

void *bitcpy(void *destination, void const *source, size_t bits) {
    // Cast to char (1 byte), for the ease of copying
    char *dest = (char *)destination;
    char *src = (char *)source;

    // Calculate the number of full bytes to copy, and the remainder of bits (if any)
    int bytesToCopy = bits / BITS_IN_BYTES;
    int bitsToCopy = bits % BITS_IN_BYTES;

    // Implementation of the actual copy will be below...
}