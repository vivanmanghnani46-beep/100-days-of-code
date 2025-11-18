#include <stdio.h>

int main() {
    float x, y, sum, difference, product, quotient;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of y: ");
    scanf("%f", &y);

    sum = x + y;
    difference = x - y;
    product = x * y;

    if (y != 0)
        quotient = x / y;
    else {
        printf("Division by zero is not allowed.\n");
        return 0;
    }

    printf("\nSum = %.2f", sum);
    printf("\nDifference = %.2f", difference);
    printf("\nProduct = %.2f", product);
    printf("\nQuotient = %.2f\n", quotient);

    return 0;
}
