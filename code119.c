#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    // We assume values are in range 0..n-1 (common variant). Use visited array.
    int maxv = 0;
    for(int i=0;i<n;i++) if(a[i]>maxv) maxv=a[i];
    int sz = maxv+1;
    char *seen = calloc(sz, sizeof(char));
    int repeated = -1;
    for(int i=0;i<n;i++){
        if(seen[a[i]]){ repeated = a[i]; break; }
        seen[a[i]] = 1;
    }
    free(seen);
    printf("%d\n", repeated);
    return 0;
}
