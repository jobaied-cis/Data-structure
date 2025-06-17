
#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int n1, n2, i, k = 0;

    // Input size and elements of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    // Input size and elements of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    // Merge first array into C
    for (i = 0; i < n1; i++) {
        C[k] = A[i];
        k++;
    }

    // Merge second array into C
    for (i = 0; i < n2; i++) {
        C[k] = B[i];
        k++;
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
