// OUtput 0 0 0 0 0 0
#include<stdio.h>
int main()
{
   
    int arr[8][8]={{0}};
    printf("enter the values of arr[1]:\n");
    for(int j =0;j<8;j++)
    {
        printf("arr[5][%d]=",j);
        scanf("%d",&arr[5][j]);
    }
    printf("\nThe Matrix is : \n");
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    
    return 0;
}