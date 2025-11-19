#include <stdio.h>

int main() {
    char d[3], m[3], y[5];
    char str[20];
    char *month = "Apr";

    gets(str);

    d[0] = str[0]; d[1] = str[1]; d[2]='\0';
    y[0] = str[6]; y[1] = str[7]; y[2] = str[8]; y[3] = str[9]; y[4]='\0';

    printf("%s-%s-%s", d, month, y);

    return 0;
}
