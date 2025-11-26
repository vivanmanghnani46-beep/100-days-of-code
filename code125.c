#include <stdio.h>
#include <string.h>

int main(){
    char filename[256];
    if(scanf("%s", filename)!=1) return 0;
    getchar(); // consume newline
    char line[1024];
    if(!fgets(line, sizeof(line), stdin)) return 0;
    if(line[strlen(line)-1]=='\n') line[strlen(line)-1]=0;
    FILE *f = fopen(filename, "a");
    if(!f){ perror("fopen"); return 0; }
    fprintf(f, "%s\n", line);
    fclose(f);
    printf("Appended.\n");
    return 0;
}
