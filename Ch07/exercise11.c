#include <stdio.h>

int arraySum( int arr[], int sizeArr)
{
    int sum = 0;

    for ( int i = 0; i < sizeArr; i++)
        sum += arr[i];

    return sum;
}

int main() {

    int arr[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    int sizeArr = sizeof (arr) / sizeof (arr[0]);

    int sum = arraySum(arr, sizeArr);

    printf("The sum of the array is %i", sum);

    return 0;
}
