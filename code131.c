#include <stdio.h>

int main(){
    enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
    const char *names[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    for(int d=SUNDAY; d<=SATURDAY; d++){
        printf("%s = %d\n", names[d], d);
    }
    return 0;
}
