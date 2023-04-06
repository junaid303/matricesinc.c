#include <stdio.h>
int isEven(int num);
int main()
{
    int rows, cols;
    printf("Enter Row Size , Col Size  : ");
    scanf("%d %d", &rows, &cols);

    int matrixA[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter Value at %d  %d : ", i, j);
            scanf("%d", &matrixA[i][j]);

            while (isEven(matrixA[i][j]))
            {
                printf("Enter Odd Nums only. Re-Enter value at %d  %d :", i, j);
                scanf("%d", &matrixA[i][j]);
            }
        }
    }
    printf("Matrix A : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d  ", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int isEven(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
