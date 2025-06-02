#include<stdio.h>

int main()
{
    int num1;
    float num2;

    //Take Integer input from user
    printf("Enter an integer number:");
    scanf("%d", &num1);

    //Take Float input from user
    printf("Enter a float number:");
    scanf("%f", &num2);

    //Now calculate two number
    float sum = num1 + num2;

    //Now print out the sum
    printf("the sum of the numbers is %f\n", sum);

    return 0;
}
