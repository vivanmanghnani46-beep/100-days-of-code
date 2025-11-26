#include <stdio.h>

int main(){
    enum Light { RED, YELLOW, GREEN };
    enum Light l;
    int x;
    if(scanf("%d",&x)!=1) return 0;
    if(x==0) l = RED;
    else if(x==1) l = YELLOW;
    else l = GREEN;
    switch(l){
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
    }
    return 0;
}
