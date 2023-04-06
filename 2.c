#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int min = 50, max = 100;
    int randomNumber;

    for (int i = 0; i < 200; i++)
    {

        randomNumber = (rand() % (max - min + 1))+ min;
        printf("The Random Number : %d\n", randomNumber);
    }
    return 0;
}
/*here rand is not by default random most people think it is
and if you remove stdlib funtion you will get an error


Here we are making rand forcefully as random by adding std<time.h>
  and adding srand(time(NULL))*/