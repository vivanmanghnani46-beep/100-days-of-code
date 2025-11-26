#include <stdio.h>

enum Status { SUCCESS=1, FAILURE=0, TIMEOUT=2 };

int main() {
    enum Status s = TIMEOUT;

    switch(s) {
        case SUCCESS: printf("Operation Successful\n"); break;
        case FAILURE: printf("Operation Failed\n"); break;
        case TIMEOUT: printf("Operation Timed Out\n"); break;
    }
    return 0;
}
