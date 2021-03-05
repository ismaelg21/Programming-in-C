#include <stdio.h>

long int x_to_the_n( int x, int n ){

    long int num = x;

    if ( n == 0 )
        return 1;
    else if ( n == 1 )
        return x;

    for ( int i = 1; i < n; i++){
        num *= x;
    }
    return num;
}

int main() {

    int x = 5, n = 5;

    printf("%li", x_to_the_n(x, n) );

    return 0;
}
