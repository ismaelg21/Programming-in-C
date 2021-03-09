#include <stdio.h>

int main() {

    struct date{
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 3;
    today.day = 7;
    today.year = 2021;

    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;
}
