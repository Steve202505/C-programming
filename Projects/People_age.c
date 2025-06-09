#include<stdio.h>
int main()
{
    int age, nextyear;
    char name[30];

    //User name input
    printf("Your name please:");
    scanf("%s", &name);
    //User age input
    printf("Enter your age please:");
    scanf("%d", &age);

    nextyear = age + 1;

    printf("Hi %s! You will turn %d next year.", name, nextyear);


    return 0;
}