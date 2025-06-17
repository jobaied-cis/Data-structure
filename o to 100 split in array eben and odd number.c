#include <stdio.h>

int main() {
    int A[101], Even[101], Odd[101];
    int i, e = 0, o = 0;

    // Step 1: Fill array A with values from 0 to 100
    for (i = 0; i <= 100; i++) {
        A[i] = i;
    }

    // Step 2: Split into Even and Odd
    for (i = 0; i <= 100; i++) {
        if (A[i] % 2 == 0) {
            Even[e] = A[i];
            e++;
        } else {
            Odd[o] = A[i];
            o++;
        }
    }

    // Step 3: Print Even numbers
    printf("Even numbers from 0 to 100:\n");
    for (i = 0; i < e; i++) {
        printf("%d ", Even[i]);
    }

    // Step 4: Print Odd numbers
    printf("\nOdd numbers from 0 to 100:\n");
    for (i = 0; i < o; i++) {
        printf("%d ", Odd[i]);
    }

    printf("\n");
    return 0;
}

