#include <stdio.h>
#include <stdbool.h>

bool prime(int x)
{
    int count = 0, i = 1, j;

    if ( x == 1 )
        return false;
    else if ( x == 2)
        return true;

    while ( i <= x ){
        j = i;

        while ( i * j <= x ){
            printf("%i * %i = %i\n", i, j, i*j);
            if ( (i * j) == x)
                count++;
            j++;
        }
        i++;
    }

    if ( count > 1)
        return false;
    else
        return true;
}

int main() {

    int x;
    bool isPrime;

    printf("Write a number to see if it is a prime number: ");
    scanf("%i", &x);

    isPrime = prime(x);

    if (isPrime)
        printf("\n%i is a prime number.", x);
    else
        printf("\n%i is not a prime number.", x);

    return 0;
}
