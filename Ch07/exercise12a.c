#include <stdio.h>

void transposeMatrix(int matrixM[4][5], int matrixN[5][4])
{
    for ( int i = 0; i < 4; i++)
        for ( int j = 0; j < 5; j++)
            matrixN[j][i] = matrixM[i][j];

}

void displayMatrix ( int nRows, int nCols, int matrix[5][4])
{
    int row, column;

    for ( row = 0; row < nRows; ++row ) {
        for (column = 0; column < nCols; ++column)
            printf("%5i", matrix[row][column]);
        printf("\n");
    }
}

int main() {

    int matrixM[4][5] =
            {
                { 0, 1, 2, 3, 4 },
                { 5, 6, 7, 8, 9 },
                { 10, 11, 12, 13, 14 },
                { 15, 16, 17, 18, 19 }
            };

    int matrixN[5][4] =
            {
                    {0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0}
            };

    transposeMatrix(matrixM, matrixN);
    displayMatrix(5, 4, matrixN);

    return 0;
}
