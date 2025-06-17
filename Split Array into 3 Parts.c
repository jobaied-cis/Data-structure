#include <stdio.h>

int main() {
    int A[100], Negative[100], ZeroToHundred[100], AboveHundred[100];
    int N, i, n = 0, z = 0, a = 0;

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

    // Step 4: Split array into 3 categories
    for (i = 0; i < N; i++) {
        if (A[i] < 0) {
            Negative[n++] = A[i];
        } else if (A[i] <= 100) {
            ZeroToHundred[z++] = A[i];
        } else {
            AboveHundred[a++] = A[i];
        }
    }

    // Step 5: Print Negative numbers
    printf("\nNegative numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", Negative[i]);
    }

    // Step 6: Print 0 to 100 numbers
    printf("\nNumbers from 0 to 100:\n");
    for (i = 0; i < z; i++) {
        printf("%d ", ZeroToHundred[i]);
    }

    // Step 7: Print above 100 numbers
    printf("\nNumbers above 100:\n");
    for (i = 0; i < a; i++) {
        printf("%d ", AboveHundred[i]);
    }

    printf("\n");
    return 0;
}

