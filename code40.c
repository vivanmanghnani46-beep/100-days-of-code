#include <stdio.h>

int main() {
    int n, digit, rev = 0, ones = 0;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    // First pass: reverse the number
    int temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    // Second pass: compute 1's complement
    while (rev > 0) {
        digit = rev % 10;
        if (digit == 1)
            ones = ones * 10 + 0;
        else
            ones = ones * 10 + 1;

        rev /= 10;
    }

    printf("1's Complement = %d", ones);

    return 0;
}
