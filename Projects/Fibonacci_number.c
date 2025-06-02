//4. Write a C program that takes an integer which indicates the Fibonacci index. Print the whole series up to that index.
#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    //for the Fibonacci index
    printf("Enter the Fibonacci index (non-negative integer): ");
    scanf("%d", &n);

    // Validate input
    if (n < 0) {
        printf("Invalid input! Index must be a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci series up to index %d:\n", n);

    for (i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
