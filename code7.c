#include <stdio.h>

int main() {
    int a, b;

    // Input numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swap without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display result
    printf("\nAfter Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
