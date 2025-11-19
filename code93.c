#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int f1[26] = {0}, f2[26] = {0}, i;

    gets(s1);
    gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
        if (s1[i] >= 'a' && s1[i] <= 'z')
            f1[s1[i]-'a']++;

    for (i = 0; s2[i] != '\0'; i++)
        if (s2[i] >= 'a' && s2[i] <= 'z')
            f2[s2[i]-'a']++;

    for (i = 0; i < 26; i++)
        if (f1[i] != f2[i]) {
            printf("Not anagrams");
            return 0;
        }

    printf("Anagrams");
    return 0;
}
