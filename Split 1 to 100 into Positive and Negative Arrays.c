#include <stdio.h>

int main() {
    int A[100], Positive[100], Negative[100];
    int i, p = 0, n = 0;

    // Step 1: Fill array A with values from 1 to 100
    for (i = 0; i < 100; i++) {
        A[i] = i + 1;
    }

    // Step 2: Split into Positive and Negative
    for (i = 0; i < 100; i++) {
        if (A[i] >= 0) {
            Positive[p] = A[i];
            p++;
        } else {
            Negative[n] = A[i];
            n++;
        }
    }

    // Step 3: Print Positive numbers
    printf("Positive numbers from 1 to 100:\n");
    for (i = 0; i < p; i++) {
        printf("%d ", Positive[i]);
    }

    // Step 4: Print Negative numbers
    printf("\nNegative numbers (none expected):\n");
    if (n == 0) {
        printf("None\n");
    } else {
        for (i = 0; i < n; i++) {
            printf("%d ", Negative[i]);
        }
    }

    printf("\n");
    return 0;
}

