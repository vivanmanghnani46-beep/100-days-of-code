#include <stdio.h>

int main(){
    int n;
    if(scanf("%d", &n)!=1) return 0;
    getchar();
    FILE *f = fopen("students.txt","w");
    if(!f){ perror("fopen"); return 0; }
    for(int i=0;i<n;i++){
        char name[100];
        int roll, marks;
        fgets(name, sizeof(name), stdin);
        if(name[strlen(name)-1]=='\n') name[strlen(name)-1]=0;
        scanf("%d %d", &roll, &marks);
        getchar();
        fprintf(f, "%s,%d,%d\n", name, roll, marks);
    }
    fclose(f);
    // Now read and display
    f = fopen("students.txt","r");
    if(!f){ perror("fopen"); return 0; }
    char line[256];
    while(fgets(line, sizeof(line), f)){
        printf("%s", line);
    }
    fclose(f);
    return 0;
}
