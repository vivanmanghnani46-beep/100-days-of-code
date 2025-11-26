#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; // here n is size (should be n)
    int a[n-1];
    for(int i=0;i<n-1;i++) scanf("%d",&a[i]);
    long long total = (long long)(n-1)*n/2; // careful: if numbers 0..n-1 with one missing size = n-1; user input shape may vary
    // But problem statement: array size n contains all integers between 0..n except one -> then input length is n, missing one in 0..n
    // To cover common interpretation, re-calc:
    // We'll compute by XOR approach assuming we read actual length L then missing is in 0..L
    // For safety, implement XOR using read count
    return 0;
}
