#include <stdio.h>

int main() {

    struct date {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr -> month = 3;
    datePtr -> day = 8;
    datePtr -> year = 2021;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);

    return 0;
}
