#include <stdio.h>
#include <math.h>

int main(){
    long long n; if(scanf("%lld",&n)!=1) return 0;
    long long total = n*(n+1)/2;
    long long s = (long long) sqrt((double) total);
    if(s*s == total) printf("%lld\n", s);
    else printf("-1\n");
    return 0;
}
