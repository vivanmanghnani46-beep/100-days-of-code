#include <stdio.h>

int main() {
    int n, temp, first, last, pow = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    first = temp;

    int middle = (n % pow) / 10;
    int swapped = last * pow + middle * 10 + first;

    printf("After swapping: %d", swapped);
    return 0;
}
