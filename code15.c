#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Alphabet\n", ch);
    }
    // Check lowercase alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Alphabet\n", ch);
    }
    // Check digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    }
    // Otherwise, special character
    else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;
}
