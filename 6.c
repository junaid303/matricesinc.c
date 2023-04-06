#include<stdio.h>
int main()
{
    int rows, cols;
    printf("Enter Row Size , Col Size : ");
    scanf("%d %d",&rows, &cols);

    int matrixA[rows][cols];
    for(int i = 0; i<rows;i++)
    {
        for(int j = 0; j<cols;j++)
        {
            printf("Enter Value at %d %d :",i,j);
            scanf("%d",&matrixA[i][j]);

            while (matrixA[i][j] !=1 && matrixA[i][j] !=0)
            {
                printf("Enter Either 0 or 1 only. Enter value at %d :",i,j);
                scanf("%d",&matrixA[i][j]);
            }

        }
    }

    
    
}