#include <stdio.h>

void transposeMatrix(int nRows, int nCols, int matrixM[nRows][nCols], int matrixN[nCols][nRows])
{
    for ( int row = 0; row < nRows; row++)
        for ( int col = 0; col < nCols; col++)
            matrixN[col][row] = matrixM[row][col];

}

void displayMatrix ( int nRows, int nCols, int matrix[nRows][nCols])
{
    for ( int row = 0; row < nRows; row++ ) {
        for (int col = 0; col < nCols; col++)
            printf("%5i", matrix[row][col]);
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

    int matrixN[5][4];

    transposeMatrix(4, 5, matrixM, matrixN);
    displayMatrix(5, 4, matrixN);

    return 0;
}
