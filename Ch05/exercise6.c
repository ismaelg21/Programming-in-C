#include <stdio.h>

int main() {

    int number, expression, temp, reverse = 0;

    printf("Enter an integer: ");
    scanf("%i", &number);

    do {
        temp = number % 10;
        reverse = (reverse * 10) + temp;
        number /= 10;
    }
    while (number != 0);

    do {
        expression = reverse % 10;

        switch (expression){
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                printf("zero ");
                break;
        }

        reverse /= 10;
    }
    while ( reverse != 0 );

    return 0;
}
