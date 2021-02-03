#include <stdio.h>
#include <stdbool.h>

int main() {

    int number, right_digit;
    bool neg;

    printf("Enter your number.\n");
    scanf("%i", &number);

    if ( number < 0 ){
        number *= -1;
        neg = true;
    }
    else
        neg = false;

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;
    }
    while (number != 0);

    if (neg)
        printf("-");

    return 0;
}
