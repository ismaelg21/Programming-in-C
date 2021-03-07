#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

struct time elapsed_time (struct time time1, struct time time2)
{
    struct time elapsedTime;

    if ( time2.second < time1.second ){
        elapsedTime.second = (time2.second - time1.second) + 60;
        if ( time2.minute == 0 ){
            time2.minute -= 1 + 60;
            if ( time2.hour == 0)
                time2.hour -= 1 + 24;
            else
                time2.hour -= 1;
        }
        else
            time2.minute -= 1;
    }
    else
        elapsedTime.second = time2.second - time1.second;

    if ( time2.minute < time1.minute ){
        elapsedTime.minute = (time2.minute - time1.minute) + 60;
        if ( time2.hour == 0)
            time2.hour -= 1 + 24;
        else
            time2.hour -= 1;
    }
    else
        elapsedTime.minute = time2.minute - time1.minute;

    if ( time2.hour < time1.hour )
        elapsedTime.hour = (time2.hour - time1.hour) + 24;
    else
        elapsedTime.hour = time2.hour - time1.hour;

    return elapsedTime;
}

int main() {

    struct time startTime, endTime, elapsedTime;

    printf("Write two times to calculate for the elapsed time in between.\n");
    printf("Start time (hh:mm:ss): ");
    scanf("%i:%i:%i", &startTime.hour, &startTime.minute, &startTime.second);
    printf("End time (hh:mm:ss): ");
    scanf("%i:%i:%i", &endTime.hour, &endTime.minute, &endTime.second);

    elapsedTime = elapsed_time(startTime, endTime);

    printf("The elapsed time is %.2i:%.2i:%.2i.", elapsedTime.hour, elapsedTime.minute, elapsedTime.second);

    return 0;
}
