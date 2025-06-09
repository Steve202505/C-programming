#include<stdio.h>
#include<float.h>
int main()
{
    char opearators;
    double a, b, reserbe;

    //User input for operators
    printf("Choose any Operator('+','-','*','/'):");
    scanf("%c", &opearators);

    //User input for two number
    printf("Enter a number:");
    scanf("%lf", &a);
    //this is another number
    printf("Enter another number:");
    scanf("%lf", &b);

    if (opearators == '+')
    {
        /* code */
        reserbe = a + b ;
    }
    else if (opearators == '-')
    {
        /* code */
        reserbe = a - b ;
    }
    else if (opearators == '*')
    {
        /* code */
        reserbe = a * b ;
    }
    else if (opearators == '/')
    {
        /* code */
        reserbe = a / b ;
    }
    else
    {
        printf("Error! The operator is not correct.");
        reserbe = -DBL_MAX;
    }
    if (reserbe != -DBL_MAX)
    {
        /* code */
        printf("Result is: %.2lf", reserbe);
    }
    
    return 0;

}