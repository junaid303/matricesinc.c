#include<stdio.h>
int main()
{
    int matrixA[4][3];
    for(int i = 0; i<4;i++)
    {
        for(int j = 0; j<3;j++)
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
    printf("Matrix A : \n");
    for(int i = 0; i<4; i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;

}
