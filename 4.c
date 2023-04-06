#include <stdio.h>
int main()
{
    int matrixA[4][3] = {{1, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 1}}; // Group of rows
    int matrixB[3][4] = {{1, 0, 1, 0}, {1, 0, 1, 0}, {0, 1, 1, 1}};   // Group of columns

    printf("Matrix B : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", matrixA[i][j]);
        }

        printf("\n");
    }
    printf("Matrix B : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", matrixB[i][j]);
        }
        printf("\n");
    }
    return 0;
}