#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[10005];
    // read line including spaces
    getchar(); // consume newline if any
    if(!fgets(s, sizeof(s), stdin)) return 0;
    int len = strlen(s);
    if(len && s[len-1]=='\n') s[--len]=0;
    int i=0;
    // find first alphabetic char to uppercase
    for(; i<len; i++){
        if(isalpha((unsigned char)s[i])){ s[i] = toupper((unsigned char)s[i]); i++; break; }
    }
    for(; i<len; i++) s[i] = tolower((unsigned char)s[i]);
    printf("%s\n", s);
    return 0;
}
