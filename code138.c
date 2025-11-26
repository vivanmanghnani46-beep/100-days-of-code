#include <stdio.h>

enum Color { RED=1, GREEN, BLUE };

int main() {
    enum Color c;
    for(c = RED; c <= BLUE; c++)
        printf("Value = %d\n", c);
    return 0;
}
