#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number, reversed;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by working with the absolute value
    int temp = number < 0 ? -number : number;

    reversed = reverseNumber(temp);

    if (temp == reversed) {
        printf("%d is a palindrome.\n", number);
    } else {
        if (number < 0)
            reversed = -reversed;
        printf("%d is not a palindrome.\n", number);
        printf("Reversed number: %d\n", reversed);
    }

    return 0;
}
