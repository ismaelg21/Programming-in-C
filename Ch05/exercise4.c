#include <stdio.h>

int main() {

    float number, accumulator;
    char operator;

    printf("Begin Calculations\n");

    do{
        scanf("%f %c", &number, &operator);

        switch (operator) {
            case '+':
                printf("Add by %g\n", number);
                accumulator += number;
                printf("= %.6f\tContents of Accumulator\n", accumulator);
                break;
            case '-':
                printf("Subtract by %g\n", number);
                accumulator -= number;
                printf("= %.6f\tContents of Accumulator\n", accumulator);
                break;
            case '*':
                printf("Multiply by %g\n", number);
                accumulator *= number;
                printf("= %.6f\tContents of Accumulator\n", accumulator);
                break;
            case '/':
                if( number == 0){
                    printf("Can't divide by 0\n");
                    printf("= %.6f\tContents of Accumulator\n", accumulator);
                }
                else{
                    printf("Divide by %g\n", number);
                    accumulator /= number;
                    printf("= %.6f\tContents of Accumulator\n", accumulator);
                }
                break;
            case 'S':
                printf("Set Accumulator to %g\n", number);
                accumulator = number;
                printf("= %.6f\tContents of Accumulator\n", accumulator);
                break;
            case 'E':
                printf("End of program\n");
                printf("= %.6f\tContents of Accumulator\n", accumulator);
                break;
            default:
                printf("Enter an appropriate operator\n");
                break;
        }

    }
    while( operator != 'E');

    printf("End of Calculations.");

    return 0;
}
