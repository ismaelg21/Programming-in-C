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

    struct date startDate, endDate;
    int N1, N2;

    printf("Write two dates to calculate for the number of elapsed days in between.\n");
    printf("Start date (mm dd yyyy): ");
    scanf("%i%i%i", &startDate.month, &startDate.day, &startDate.year);
    printf("End date (mm dd yyyy): ");
    scanf("%i%i%i", &endDate.month, &endDate.day, &endDate.year);

    N1 = valueOfN(startDate);
    N2 = valueOfN(endDate);

    printf("The number of elapsed days is %i.", N2 - N1);

    return 0;
}
