#include <stdio.h>

int main(){
    int m,n; if(scanf("%d %d",&m,&n)!=2) return 0;
    int a[m], b[n];
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    int i=0,j=0;
    int first = 1;
    while(i<m && j<n){
        if(!first) printf(" ");
        if(a[i] <= b[j]) { printf("%d", a[i++]); }
        else { printf("%d", b[j++]); }
        first = 0;
    }
    while(i<m){ if(!first) printf(" "); printf("%d", a[i++]); first=0;}
    while(j<n){ if(!first) printf(" "); printf("%d", b[j++]); first=0;}
    printf("\n");
    return 0;
}
