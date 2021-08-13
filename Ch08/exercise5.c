#include <stdio.h>
#include <stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct dateAndTime {
    struct date sDate;
    struct time sTime;
};

struct date dateUpdate (struct date today) {
    struct date tomorrow;
    int numberOfDays (struct date d);

    if ( today.day != numberOfDays(today) ){
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }

    else if ( today.month == 12 ) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }

    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}

int numberOfDays(struct date d){
    int days;
    bool isLeapYear (struct date d);
    const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31};

    if ( isLeapYear(d) == true)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

bool isLeapYear(struct date d) {
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}

struct time timeUpdate (struct time now) {
    ++now.seconds;

    if (now.seconds == 60 ) {
        now.seconds = 0;
        ++now.minutes;

        if ( now.minutes == 60 ){
            now.minutes = 0;
            ++now.hour;

            if ( now.hour == 24 )
                now.hour = 0;
        }
    }

    return now;
}

struct dateAndTime clockKeeper ( struct dateAndTime event) {

    event.sTime = timeUpdate(event.sTime);

    if ( ( event.sTime.hour && event.sTime.minutes && event.sTime.seconds) == 0  )
        dateUpdate(event.sDate);

    return event;
}

int main() {

    struct dateAndTime now, then;

    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &now.sDate.month, &now.sDate.day, &now.sDate.year);

    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &now.sTime.hour, &now.sTime.minutes, &now.sTime.seconds);

    then = clockKeeper(now);

    printf("It is now %i/%i/%.2i.\n", then.sDate.month, then.sDate.day, then.sDate.year % 100);
    printf("%.2i:%.2i:%.2i\n", then.sTime.hour, then.sTime.minutes, then.sTime.seconds);

    return 0;
}
