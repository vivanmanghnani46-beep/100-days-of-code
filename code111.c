#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    int dq[n], head=0, tail=0;
    for(int i=0;i<n;i++){
        if(head<tail && dq[head] <= i-k) head++;
        if(a[i]<0) dq[tail++]=i;
        if(i>=k-1){
            if(i>k-1) printf(" ");
            if(head<tail) printf("%d", a[dq[head]]);
            else printf("0");
        }
    }
    printf("\n");
    return 0;
}
