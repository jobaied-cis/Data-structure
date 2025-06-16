#include <stdio.h>

int main() {
    int A[100], n, pos, v, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements (1-based index for user, stored from A[1])
    printf("Enter the elements:\n");
    for(i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }

    // Input position and value
    printf("Enter position to update (1 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &v);

    // Check position
    if(pos > n) {
        printf("Update not possible! Position out of range.\n");
    } else {
        A[pos] = v;
        printf("Updated array:\n");
        for(i = 1; i <= n; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }

    return 0;
}

