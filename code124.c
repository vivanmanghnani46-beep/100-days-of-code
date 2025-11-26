#include <stdio.h>

int main(){
    char src[256], dst[256];
    if(scanf("%s %s", src, dst)!=2) return 0;
    FILE *f1 = fopen(src, "r");
    if(!f1){ perror("fopen src"); return 0; }
    FILE *f2 = fopen(dst, "w");
    if(!f2){ perror("fopen dst"); fclose(f1); return 0; }
    int c;
    while((c=fgetc(f1))!=EOF) fputc(c,f2);
    fclose(f1); fclose(f2);
    printf("Copied.\n");
    return 0;
}
