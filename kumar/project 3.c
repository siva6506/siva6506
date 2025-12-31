#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume prime until proven otherwise

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Check even or odd
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Prime check (only for numbers greater than 1)
    if (num <= 1) {
        printf("The number is not prime.\n");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // found a divisor
                break;
            }
        }
        if (isPrime) {
            printf("The number is prime.\n");
        } else {
            printf("The number is not prime.\n");
        }
    }

    return 0;
}
