//
// Created by Yevhen Voitiuk on 1/27/2020.
//

#ifndef BITCPY_CHALLENGE_BITCPY_H
#define BITCPY_CHALLENGE_BITCPY_H

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define BITS_IN_BYTES 8

// Implementing memcpy() functionality, but we specify the number of bits to copy instead
void *bitcpy(void *, void const *, size_t);

#endif //BITCPY_CHALLENGE_BITCPY_H
