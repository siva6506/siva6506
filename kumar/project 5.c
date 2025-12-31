#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Declare array with size n (variable length array)
    float arr[n];

    // Read elements into array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];  // accumulate sum while reading
    }

    // Calculate average
    average = sum / n;

    // Find largest and smallest
    float largest = arr[0];
    float smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Output results
    printf("\n--- Array Analysis ---\n");
    printf("Sum      : %.2f\n", sum);
    printf("Average  : %.2f\n", average);
    printf("Largest  : %.2f\n", largest);
    printf("Smallest : %.2f\n", smallest);

    return 0;
}
