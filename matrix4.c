#include<stdio.h>
int isPrime(int num);
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
            
            while(isPrime(matrixA[i][j]))
            {
                printf("Enter Prime Number's only, Reenter value at %d %d",i,j);
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

int isPrime(int num)
{
    int count = 0;
    for(int i=2; i<num; i++)
    {
        if(num % i == 0)
        ++count;
    }
    if(count == 0)
      return 0;
    else
       return 1;
}