#include <stdio.h>

int main() {

    int fib1, fib2, fib3;

    fib1 = 0;
    fib2 = 1;

    printf("%i\n", fib1);
    printf("%i\n", fib2);

    for (int i = 2; i < 15; ++i){
        fib3 = fib1 + fib2;
        printf("%i\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}
