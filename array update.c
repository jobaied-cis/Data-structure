#include <stdio.h>

int main() {
    int A[100], n, pos, v, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Input position and new value
    printf("Enter position to update (0 to %d): ", n-1);
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &v);

    // Check and update
    if(pos >= n) {
        printf("Update not possible! Position out of range.\n");
    } else {
        A[pos] = v;
        printf("Updated array:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }

    return 0;
}

