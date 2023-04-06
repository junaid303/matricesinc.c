#include <stdio.h>
int main()
{
    int arr[3] = {0};
    for (int i = 0; i < 3; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*in 8.c arr[3][2]=={{0}} syntax will 
give all the array as 0
and in 10.c arr[3]={0} will give only 
one zeroes 
*/