//1. Write a C program that takes an integer number as input and checks if it is a prime number or not.
#include<stdio.h>
int main()
{
    int number,count = 0;
    printf("Enter an integer number:");
    scanf("%d", &number);
    for(int i = 1; i <= number; i++)
    {
        if(number%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
