#include <stdio.h>

int main() {
    char s[100], rev[100];
    int i = 0, j;

    gets(s);

    while (s[i] != '\0') i++;

    for (j = 0; j < i; j++)
        rev[j] = s[i - 1 - j];

    rev[i] = '\0';

    puts(rev);
    return 0;
}
