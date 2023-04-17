#include <stdio.h>
int main()
{
    int matrixA[4][3];
    
    printf("Matrix A \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the Row %d cols %d value",i,j);
            scanf("%d",&matrixA[4][3]);
            while(matrixA[i][j]!=0 &&   matrixA[i][j] != 1)
            {
                printf("Enter 0 or 1 only.Enter the Row %d cols %d value ",i, j);
                scanf("%d",&matrixA[i][j]);
            }
        }
        printf("\n");
    }

    printf("Matrix A : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }
    return 0;
}