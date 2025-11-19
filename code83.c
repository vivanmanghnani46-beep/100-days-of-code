#include <stdio.h>

int main() {
    char s[100];
    int i, v = 0, c = 0;

    gets(s);

    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char x = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++;
            else c++;
        }
    }

    printf("Vowels=%d Consonants=%d", v, c);
    return 0;
}
