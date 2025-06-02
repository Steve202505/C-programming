/*3. Write a C program that takes your age and gender and then tells if you're eligible for marriage or not.
 If you're male, then you'll be eligible for marriage if your age is 21 or more. If you're female, the eligible age for marriage is 18 or above.*/
 #include<stdio.h>
 int main()
 {
     int age;
     char gender;
     printf("Are you Male or Female?(M for male, F for female):");
     scanf("%c", &gender);
     printf("Enter your age:");
     scanf("%d", &age);
     if((gender == 'M' || gender == 'm') && (age >= 21))
     {
         printf("You are Eligible for marriage.\n");
     }
     else if((gender == 'F' || gender == 'f') && (age >= 18))
     {
         printf("You are Eligible for marriage.\n");
     }
     else
     {
         printf("You are not Eligible for marriage.\n");
     }
     return 0;
 }
