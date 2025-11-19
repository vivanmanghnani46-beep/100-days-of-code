#include <stdio.h>

int main() {
    char s[100];
    int i = 0, j, flag = 1;

    gets(s);

    while (s[i] != '\0') i++;

    for (j = 0; j < i/2; j++)
        if (s[j] != s[i-j-1])
            flag = 0;

    if (flag) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
