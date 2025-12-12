#include <stdio.h>
#include "mul.h"

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = multiply(a, b);
    printf("Multiplication = %d\n", result);

    return 0;
}
