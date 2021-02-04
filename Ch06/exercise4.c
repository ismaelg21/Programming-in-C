#include <stdio.h>

int main() {

    float sum = 0, arr[10] = { 12.3, 5.4, 3.78, 9.21, 4.20, 99.99, 21, 75.3, 23.864, 3.33 };

    for ( int i = 0; i < 10; i++){
        sum += arr[i];
    }

    printf("The average value of the array is %.2f", sum / 10);

    return 0;
}
