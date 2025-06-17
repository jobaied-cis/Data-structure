#include <stdio.h>

int main() {
    int A[100], Positive[100], Negative[100];
    int N, i, p = 0, n = 0;

    // Step 1: Input number of elements
    printf("Enter number of elements (N): ");
    scanf("%d", &N);

    // Step 2: Check if N is zero
    if (N == 0) {
        printf("Split is not possible. Array size is 0.\n");
        return 0;
    }

    // Step 3: Input array elements
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Step 4: Split into Positive and Negative
    for (i = 0; i < N; i++) {
        if (A[i] >= 0) {
            Positive[p] = A[i];
            p++;
        } else {
            Negative[n] = A[i];
            n++;
        }
    }

    // Step 5: Print Positive numbers
    printf("\nPositive numbers:\n");
    for (i = 0; i < p; i++) {
        printf("%d ", Positive[i]);
    }

    // Step 6: Print Negative numbers
    printf("\nNegative numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", Negative[i]);
    }

    printf("\n");
    return 0;
}

