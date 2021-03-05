#include <stdio.h>

double absoluteValue (double x)
{
    if (x < 0)
        x = -x;
    return x;
}

double squareRoot (double x)
{
    double  epsilon = 0.0001;
    double  guess = 1.0;

    while ( absoluteValue( guess * guess - x) >= epsilon){
        guess = ( x / guess + guess ) / 2.0;
        //printf("%i\n", guess);
    }

    return guess;
}

void quadratic ( int a, int b, int c )
{
    double disc = ( b * b ) - ( 4 * a * c );

    if ( disc < 0){
        printf("x1 and x2 are imaginary numbers.\n");
        return;
    }
    else
        disc = squareRoot(disc);

    double x1 = ( ((-1) * b) + disc ) / (2 * a);
    double x2 = ( ((-1) * b) - disc ) / (2 * a);

    printf("x1 = %.2f\tx2 = %.2f\n", x1, x2);
}

int main() {

    int a, b, c;

    printf("Enter a value for a: ");
    scanf("%i", &a);
    printf("Enter a value for b: ");
    scanf("%i", &b);
    printf("Enter a value for c: ");
    scanf("%i", &c);

    quadratic(a, b, c);

    return 0;
}
