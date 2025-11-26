#include <stdio.h>
#include <limits.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long max_ending = a[0], max_sofar = a[0];
    for(int i=1;i<n;i++){
        if(max_ending + a[i] < a[i]) max_ending = a[i];
        else max_ending += a[i];
        if(max_ending > max_sofar) max_sofar = max_ending;
    }
    printf("%lld\n", max_sofar);
    return 0;
}
