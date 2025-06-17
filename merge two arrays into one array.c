
#include <stdio.h>

int main() {
    int B[100], C[100], A[200];
    int m, p, n, i, j;

    // Input size and elements of B[]
    printf("Enter number of elements in B: ");
    scanf("%d", &m);
    printf("Enter elements of B:\n");
    for (j = 0; j < m; j++) {
        scanf("%d", &B[j]);
    }

    // Input size and elements of C[]
    printf("Enter number of elements in C: ");
    scanf("%d", &p);
    printf("Enter elements of C:\n");
    for (i = 0; i < p; i++) {
        scanf("%d", &C[i]);
    }

    // Step 1: Copy B[] to A[]
    for (j = 0; j < m; j++) {
        A[j] = B[j];
    }

    // Step 2: Copy C[] to A[] starting after B[]
    for (i = 0; i < p; i++) {
        A[j] = C[i];
        j++;
    }

    // Final Step: Calculate total elements
    n = m + p;

    // Print merged array
    printf("Merged array A:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
