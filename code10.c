#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, seconds
    hours = totalSeconds / 3600;               // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;      // remaining minutes
    seconds = totalSeconds % 60;               // remaining seconds

    // Output result
    printf("%d seconds = %02d:%02d:%02d\n", totalSeconds, hours, minutes, seconds);

    return 0;
}
