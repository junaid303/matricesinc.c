#include<stdio.h>
int main()
{
    int arr[3][3][2] ={0};
    printf("{\n");
    for(int i = 0; i<3;i++)
    {
        printf("\t{ ");
        for(int j =0;j<3;j++)
        {
            printf("{ ");
            for(int k = 0;k<2;k++)
            {
                printf("%d ",arr[i][j][k]);
            }
            printf("}");
        }
        printf("}");
        printf("\n");
    }
    printf("}\n");

    return 0;
}