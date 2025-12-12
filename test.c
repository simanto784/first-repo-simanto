#include <stdio.h>
#include "mul.h"

int main() {
    int passed = 1;

    if (multiply(2, 3) != 6) passed = 0;
    if (multiply(-2, 3) != -6) passed = 0;
    if (multiply(0, 100) != 0) passed = 0;

    if (passed)
        printf("All tests passed!\n");
    else
        printf("Test failed!\n");

    return passed ? 0 : 1;
}
