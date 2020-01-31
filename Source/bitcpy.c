//
// Created by Yevhen Voitiuk on 1/27/2020.
//

#include "bitcpy.h"

void *bitcpy(void *destination, void const *source, size_t bits) {

    // Cast to char (1 byte per char), for the ease of implementing the copying
    char *dest = (char *)destination;
    char *src = (char *)source;

    // Potential issue: Can't reliably check if specified number of bits to copy exceed the original source capacity
    if (bits <= 0)
    {
        printf("Number of bits to copy can't be less or equal to zero\n\n");
        return destination;
    }

    // Calculate the number of full bytes to copy, and the remainder of bits (if any)
    size_t bytesToCopy = bits / BITS_IN_BYTES;
    size_t bitsToCopy = bits % BITS_IN_BYTES;
    int position;

    //Specify a mask of all set bits for bit transferring
    uint8_t mask = 0xff;

    // Copy the complete bytes first
    for (position = 0; position < bytesToCopy; ++position) {
        dest[position] = src[position];
    }
    // Check to see if there are remainder bits to copy over
    if (bitsToCopy != 0) {
        uint8_t value = src[position];
        mask = mask << bitsToCopy; // Right-most bits will be 0 after shifting
        mask = ~mask; // Reverse the mask, only the number of bits to copy will be preserved
        dest[position] = (char)(value & mask);
    }
    return destination;
}