//2. Write a C program that takes an integer number as input, and then checks if the number indicates a leap year or not.
#include <stdio.h>

int main() {
    int year;

    // Ask user for the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check:
    // A year is a leap year if it is divisible by 4
    // but not divisible by 100, unless it is also divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


