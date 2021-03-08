#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int valueOfN(struct date thisDay)
{
    int f[2] = { thisDay.year, thisDay.month };
    int g = thisDay.month;

    if ( f[1] <= 2 )
        f[0] -= 1;

    if ( g <= 2 )
        g += 13;
    else
        g += 1;

    int N = (1461 * f[0] / 4) + (153 * g / 5) + thisDay.day;

    return N;
}

int main() {

    struct date date;
    int N, dayOfTheWeek;
    char weekDays[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday" };

    printf("Write a date to know its day of the week.\n");
    printf("Date (mm dd yyyy): ");
    scanf("%i%i%i", &date.month, &date.day, &date.year);

    N = valueOfN(date);
    dayOfTheWeek = (N - 621049) % 7;

    printf("On %.2i/%.2i/%.2i, it is %s.", date.month, date.day, date.year, weekDays[dayOfTheWeek]);

    return 0;
}
