#include<stdio.h>
int main()
{
    int matrixA[3][3] = {{2, -5, 3},{0, 7, -2},{-1, 4, 1}};//GROUP OF ROWS 
    int matrixB[3][3] = {{2, 0, -1},{-5, 7, 4},{3, -2, 1}};//GROUP OF COLUMNS

    printf("Matrix A : \n ");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",matrixA[i][j]);
        }printf("\n");
    }

    printf("Matrix B : \n ");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",matrixB[i][j]);
        }printf("\n");
    }
    return 0;
}