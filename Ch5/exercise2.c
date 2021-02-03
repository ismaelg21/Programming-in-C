#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter two integers: ");
    scanf("%i %i", &num1, &num2);

    if ( num1 % num2 == 0)
        printf("%i is evenly divisible by %i.", num1, num2);
    else
        printf("%i is not evenly divisible by %i.", num1, num2);

    return 0;
}
