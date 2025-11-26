#include <stdio.h>

int main(){
    char filename[256];
    if(scanf("%s", filename)!=1) return 0;
    FILE *f = fopen(filename, "r");
    if(!f){ perror("fopen"); return 0; }
    char buf[1024];
    while(fgets(buf, sizeof(buf), f)){
        fputs(buf, stdout);
    }
    fclose(f);
    return 0;
}
