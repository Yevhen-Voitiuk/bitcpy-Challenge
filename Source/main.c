//
// Created by Yevhen Voitiuk on 1/27/2020.
//

#include "../Include/bitcpy.h"
#include <string.h>

int main() {
    char destTest[] = "##########!!!";
    char srcTest[] = "Testing!!";
    size_t bits = 9;

    bitcpy(destTest, srcTest, bits);
    return 0;
}