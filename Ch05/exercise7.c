#include <stdio.h>
#include <stdbool.h>

int main() {

    int p, d;
    bool isPrime;

    for ( p = 2; p <= 50; ++p)
    {
        if ( p % 2 || p == 2)
            isPrime = true;
        else
            isPrime = false;

        for (d = 2; isPrime && d < p; ++d)
            if (p % d == 0)
                isPrime = false;

            if (isPrime != false){
                printf("%i ", p);
            }
    }

    printf("\n");
    return 0;
}
