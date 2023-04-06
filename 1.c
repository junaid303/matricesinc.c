#include<stdio.h>
int main()
{
    int A,B,sum = 0;
    printf("enter a value : ");
    scanf("%d",&A);
    printf("enter b value : ");
    scanf("%d",&B);
    printf("Step 1 : \n\t %d \t \t%d \n ", A,B);
    while(A != 1)
    {
        if(A % 2 == 1)
        {
            sum += B;
        }
        printf("\n \t %d \t\t %d \n",A,B);
        A = A /2; 
        B = B * 2;
        
    }
    sum += B;
    printf("\n \t %d \t\t %d \n",A,B);
    printf("\n The Output is : %d\n", sum);
    return 0;
}
/*	Take 2 Integer Inputs
						Input A : 13
						Input B : 11

						Output : A x B = 143

Step 1 : Write down the two numbers next to each others

								13			           11

Step 2 : Divide the left number by two(2) and round it off if the value has .5
					and at the same time double (x2) the right hand side number

							 13                    11
                			  6			           22

Step 3 : continue the steps till the left side number reaches 1
	                  	13                11
                	    6			      22
                        3                 44
                        1                 88

Stop the process when the left side number reaches 1.

Step 4 : Strike off the rows wherever the left side number is an even number. 
Step 5 : Count all the numbers in the right hand side. 11 + 44 + 88 = 143
*/
                


