#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    return x;
}

float squareRoot (float epsilon, float x)
{
    float       guess = 1.0;

    while ( absoluteValue( guess * guess - x) >= epsilon){
        guess = ( x / guess + guess ) / 2.0;
        printf("%f\n", guess);
    }

    return guess;
}

int main() {

    const float epsilon = .0001;

    printf("squareRoot (2.0) = %f\n", squareRoot(epsilon, 2.0));
    printf("squareRoot (144.0) = %f\n", squareRoot(epsilon, 144.0));
    printf("squareRoot (17.5) = %f\n", squareRoot(epsilon, 17.5));

    return 0;
}
