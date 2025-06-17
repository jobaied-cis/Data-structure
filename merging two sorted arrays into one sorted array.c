#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int m, n, i, j, k = 0;

    // Input first sorted array
    printf("Enter number of elements in A: ");
    scanf("%d", &m);
    printf("Enter elements of A (sorted):\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    // Input second sorted array
    printf("Enter number of elements in B: ");
    scanf("%d", &n);
    printf("Enter elements of B (sorted):\n");
    for (j = 0; j < n; j++) {
        scanf("%d", &B[j]);
    }

    // Reset indexes
    i = 0;
    j = 0;

    // Merge A[] and B[] using FOR loop logic
    for (; i < m && j < n; ) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining of A[]
    for (; i < m; i++) {
        C[k++] = A[i];
    }

    // Copy remaining of B[]
    for (; j < n; j++) {
        C[k++] = B[j];
    }

    // Output merged sorted array
    printf("Merged Sorted Array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
