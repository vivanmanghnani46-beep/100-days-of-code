#include <stdio.h>

int main() {
    int a, b, temp;

    // Input numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Display the result
    printf("\nAfter Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
