#include <stdio.h>

int main() {
    char s[100];
    int freq[26] = {0}, i;

    gets(s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (freq[s[i]-'a'] == 1) {
                printf("%c", s[i]);
                return 0;
            }
            freq[s[i]-'a']++;
        }
    }

    printf("No repeating lowercase alphabet");
    return 0;
}
