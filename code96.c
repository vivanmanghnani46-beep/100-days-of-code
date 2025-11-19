#include <stdio.h>

int main() {
    char s[200], out[200];
    int i = 0, j = 0, start = 0;

    gets(s);

    while (1) {
        if (s[i] == ' ' || s[i] == '\0') {
            int k;
            for (k = i - 1; k >= start; k--)
                out[j++] = s[k];
            if (s[i] == ' ') out[j++] = ' ';
            start = i + 1;
        }
        if (s[i] == '\0') break;
        i++;
    }

    out[j] = '\0';
    puts(out);
    return 0;
}
