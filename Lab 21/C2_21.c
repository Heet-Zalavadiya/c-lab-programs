#include <stdio.h>

// Define structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    // Define two example time values
    struct Time t1 = {5, 30, 45};  // 5 hours, 30 minutes, 45 seconds
    struct Time t2 = {4, 45, 30}; 
        struct Time result;

    // Add seconds
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.hours = t1.hours + t2.hours + (result.minutes / 60);

    // Normalize the time
    result.seconds %= 60;  // Seconds should be less than 60
    result.minutes %= 60;  // Minutes should be less than 60
    result.hours %= 24;    // Hours should be less than 24 (for 24-hour format)

    // Print the total time
    printf("Total Time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
