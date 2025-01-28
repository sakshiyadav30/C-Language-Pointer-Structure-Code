#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = result.seconds / 60;
    result.seconds %= 60;
    result.minutes += t1.minutes + t2.minutes;
    result.hours = result.minutes / 60;
    result.minutes %= 60;
    result.hours += t1.hours + t2.hours;
    return result;
}
int main() {
    struct Time time1, time2, sum;
    printf("Sakshi Yadav\n");
    printf("Enter the first time (hours, minutes, seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);
    printf("Enter the second time (hours, minutes, seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);
    sum = addTimes(time1, time2);
    printf("Sum of times: %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);
    return 0;
}
