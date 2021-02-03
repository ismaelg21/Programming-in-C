#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter two integers: ");
    scanf("%i %i", &num1, &num2);


    if ( num1 / num2 == 0)
        printf("Can't divide by 0");
    else
        printf("%i / %i = %.3f", num1, num2, (float) num1 / num2);

    return 0;
}
