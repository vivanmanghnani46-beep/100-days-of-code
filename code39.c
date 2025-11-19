#include <stdio.h>

int main() {
    int n, digit, product = 1, foundOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            foundOdd = 1;
        }
        n = n / 10;
    }

    if (foundOdd == 0)
        product = 0;

    printf("Product of odd digits = %d", product);
    return 0;
}
