#include <stdio.h>

int main() {
    char s1[100], s2[100], temp[200];
    int i, j, len1 = 0, len2 = 0;

    gets(s1);
    gets(s2);

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < len1; i++)
        temp[i] = s1[i];
    for (j = 0; j < len1; j++)
        temp[i++] = s1[j];
    temp[i] = '\0';

    int k = 0;
    for (i = 0; temp[i] != '\0'; i++) {
        if (temp[i] == s2[k]) {
            k++;
            if (k == len2) {
                printf("Rotation");
                return 0;
            }
        } else k = 0;
    }

    printf("Not rotation");
    return 0;
}
