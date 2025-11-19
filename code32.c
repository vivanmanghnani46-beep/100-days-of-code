#include <stdio.h>

int main() {
    int num, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (rev == num)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
