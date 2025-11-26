#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *in = fopen("input.txt","r");
    if(!in){ perror("fopen input.txt"); return 0; }
    FILE *out = fopen("output.txt","w");
    if(!out){ perror("fopen output.txt"); fclose(in); return 0; }
    int c;
    while((c=fgetc(in))!=EOF){
        if(islower(c)) c = toupper(c);
        fputc(c, out);
    }
    fclose(in); fclose(out);
    printf("Converted and saved to output.txt\n");
    return 0;
}
