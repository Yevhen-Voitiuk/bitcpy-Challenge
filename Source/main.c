//
// Created by Yevhen Voitiuk on 1/27/2020.
//

#include "../Include/bitcpy.h"

int main() {
    char destTest[] = "##########!!!";
    char srcTest[] = "Testing%%";
    size_t bits = 9 * 8 - 5;

    printf("Before bitcpy:\nDestination: %s\nSource: %s\n\n", destTest, srcTest);


    bitcpy(destTest, srcTest, bits);
    printf("After bitcpy:\nDestination: %s\nSource: %s\n\n", destTest, srcTest);
    return 0;
}