#include <stdio.h>
#include <limits.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    if(k>n){ printf("0\n"); return 0; }
    long long sum=0;
    for(int i=0;i<k;i++) sum+=a[i];
    long long best=sum;
    for(int i=k;i<n;i++){
        sum += a[i] - a[i-k];
        if(sum>best) best=sum;
    }
    printf("%lld\n", best);
    return 0;
}
