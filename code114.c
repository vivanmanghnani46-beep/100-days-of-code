#include <stdio.h>
#include <string.h>

int main(){
    char s[100005];
    if(scanf("%s", s)!=1) return 0;
    int last[256]; for(int i=0;i<256;i++) last[i] = -1;
    int l=0, best=0;
    int len = strlen(s);
    for(int i=0;i<len;i++){
        unsigned char c = s[i];
        if(last[c] >= l) l = last[c] + 1;
        last[c] = i;
        if(i-l+1 > best) best = i-l+1;
    }
    printf("%d\n", best);
    return 0;
}
