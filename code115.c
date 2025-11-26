#include <stdio.h>
#include <string.h>

int main(){
    char s[100005], t[100005];
    if(scanf("%s %s", s, t)!=2) return 0;
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++) cnt[s[i]-'a']++;
    for(int i=0;i<strlen(t);i++) cnt[t[i]-'a']--;
    for(int i=0;i<26;i++) if(cnt[i]!=0){ printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}
