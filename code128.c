#include <stdio.h>
#include <ctype.h>

int is_vowel(char c){
    c = tolower((unsigned char)c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main(){
    char filename[256];
    if(scanf("%s", filename)!=1) return 0;
    FILE *f = fopen(filename, "r");
    if(!f){ perror("fopen"); return 0; }
    long long vowels=0, consonants=0;
    int c;
    while((c=fgetc(f))!=EOF){
        if(isalpha(c)){
            if(is_vowel(c)) vowels++;
            else consonants++;
        }
    }
    fclose(f);
    printf("Vowels: %lld\nConsonants: %lld\n", vowels, consonants);
    return 0;
}
