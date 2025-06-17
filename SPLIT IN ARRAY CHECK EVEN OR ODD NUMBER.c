//Split Array into Odd and Even Arrays

#include <stdio.h>

int main() {
    int A[100], Even[100], Odd[100];
    int N, i, e = 0, o = 0;

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

    // Step 4: Split into Odd and Even
    for (i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            Even[e] = A[i];
            e++;
        } else {
            Odd[o] = A[i];
            o++;
        }
    }

    // Step 5: Print Even numbers
    printf("\nEven numbers:\n");
    for (i = 0; i < e; i++) {
        printf("%d ", Even[i]);
    }

    // Step 6: Print Odd numbers
    printf("\nOdd numbers:\n");
    for (i = 0; i < o; i++) {
        printf("%d ", Odd[i]);
    }

    printf("\n");
    return 0;
}

