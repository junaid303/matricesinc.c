#include <stdio.h>
int main()
{
    int matrixA[3][3] = {{2, -5, 3}, {0, 7, -2}, {-1, 4, 1}}; // Group of rows
    int matrixB[3][3] = {{2, 0, -1}, {-5, 7, 4}, {3, -2, 1}}; // Group of columns

    printf("Matrix A : \n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", matrixA[i][j]);
        }

        printf("\n");
    }
    printf("\nMatrix B : \n");
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrixB[j][i]);
        }
        printf("\n");
    }
    return 0;
}
/*matrix is represented as group of rows in programming*/