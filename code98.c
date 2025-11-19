#include <stdio.h>

int main() {
    char s[100], surname[50];
    int i, lastStart = 0;

    gets(s);

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            lastStart = i + 1;

    printf("%c ", s[0]);

    for (i = 1; i < lastStart - 1; i++)
        if (s[i] == ' ')
            printf("%c ", s[i+1]);

    puts(s + lastStart);

    return 0;
}
