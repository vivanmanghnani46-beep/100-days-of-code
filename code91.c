#include <stdio.h>

int main() {
    char s[100], out[100];
    int i, j = 0;

    gets(s);

    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        char x = (ch >= 'A' && ch <= 'Z') ? ch+32 : ch;

        if (!(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'))
            out[j++] = ch;
    }

    out[j] = '\0';
    puts(out);
    return 0;
}
