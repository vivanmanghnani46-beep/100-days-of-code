#include <stdio.h>
#include <ctype.h>

int main(){
    char filename[256];
    if(scanf("%s", filename)!=1) return 0;
    FILE *f = fopen(filename, "r");
    if(!f){ perror("fopen"); return 0; }
    long long chars=0, words=0, lines=0;
    int in_word=0;
    int c;
    while((c = fgetc(f)) != EOF){
        chars++;
        if(c=='\n') lines++;
        if(!isspace(c) && !in_word){ in_word = 1; words++; }
        else if(isspace(c)) in_word = 0;
    }
    fclose(f);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", chars, words, lines);
    return 0;
}
