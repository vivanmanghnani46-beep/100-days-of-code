#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int cand = 0, cnt = 0;
    for(int i=0;i<n;i++){
        if(cnt==0){ cand = a[i]; cnt = 1; }
        else if(a[i]==cand) cnt++;
        else cnt--;
    }
    int occ = 0;
    for(int i=0;i<n;i++) if(a[i]==cand) occ++;
    if(occ > n/2) printf("%d\n", cand);
    else printf("-1\n");
    return 0;
}
