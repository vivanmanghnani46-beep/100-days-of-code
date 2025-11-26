#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    if(k>n){ return 0; }
    int dq[n], head=0, tail=0; // store indices
    for(int i=0;i<n;i++){
        while(head<tail && dq[head] <= i-k) head++;
        while(head<tail && a[dq[tail-1]] <= a[i]) tail--;
        dq[tail++] = i;
        if(i>=k-1){
            if(i>k-1) printf(" ");
            printf("%d", a[dq[head]]);
        }
    }
    printf("\n");
    return 0;
}
