#include<stdio.h>
int main()
{
    int arr[3][2]={{0}};
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}
/*at line number 4 if you put any value the whole 
matrix will be of that value */