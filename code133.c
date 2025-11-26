#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;
    for(m = JAN; m <= DEC; m++) {
        switch(m) {
            case FEB: printf("February = 28 days\n"); break;
            case APR:
            case JUN:
            case SEP:
            case NOV: printf("%dth month = 30 days\n", m); break;
            default:  printf("%dth month = 31 days\n", m);
        }
    }
    return 0;
}
