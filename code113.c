#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p, const void *q){ return (*(int*)p) - (*(int*)q); }

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    if(k<1 || k>n){ printf("-1\n"); return 0; }
    qsort(a,n,sizeof(int),cmp);
    printf("%d\n", a[k-1]);
    return 0;
}
