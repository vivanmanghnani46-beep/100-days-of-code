#include <stdio.h>

int main(){
    FILE *f = fopen("numbers.txt", "r");
    if(!f){ perror("fopen numbers.txt"); return 0; }
    long long sum=0;
    long long cnt=0;
    int x;
    while(fscanf(f, "%d", &x)==1){
        sum += x; cnt++;
    }
    fclose(f);
    if(cnt==0) printf("Sum: 0\nAverage: 0\n");
    else printf("Sum: %lld\nAverage: %.6f\n", sum, (double)sum/cnt);
    return 0;
}
