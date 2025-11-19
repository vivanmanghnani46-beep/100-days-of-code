#include <stdio.h>

int main() {
    int n, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;          // get binary digit
        rev = rev * 10 + rem; // store reversed binary
        n = n / 2;
    }

    // reverse again to get correct binary
    int bin = 0;
    while (rev > 0) {
        bin = bin * 10 + (rev % 10);
        rev /= 10;
    }

    printf("Binary = %d\n", bin);

    return 0;
}
