#include <stdio.h>

int main() {
    char s[200], longest[50], current[50];
    int i=0, j=0, maxLen=0, curLen=0;

    gets(s);

    while (1) {
        if (s[i] != ' ' && s[i] != '\0') {
            current[j++] = s[i];
            curLen++;
        } else {
            current[j] = '\0';
            if (curLen > maxLen) {
                maxLen = curLen;
                int k;
                for (k = 0; k <= curLen; k++)
                    longest[k] = current[k];
            }
            j = 0;
            curLen = 0;
        }
        if (s[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s", longest);
    return 0;
}
