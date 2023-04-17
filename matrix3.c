#include<stdio.h>
int isEven(int num);
int main()
{
    
    int row, cols;
    printf("Enter Rows and Columnns : ");
    scanf("%d %d", &row, &cols);

    int matrixA[row][cols];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("Enter Row Value at %d and column at %d ",i, j);
            scanf("%d",&matrixA[row][cols]);
            
            while(isEven(matrixA[i][j]))
            {
                printf("Enter Odd Number's only, Reenter value at %d %d",i,j);
                scanf("%d", &matrixA[i][j]);
            }
        }
    }

    printf("Matrix A :");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int isEven(int num)
{
    if(num % 2 == 0)
      return 1;
    else
       return 0;
}