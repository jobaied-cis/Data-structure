#include <stdio.h>

int main() {
    int A[100], n, i, j, pos;

    // Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Input the position to delete (1-based index)
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check if position is valid
    if(pos >= n) {
        printf("Deletion not possible. Invalid position.\n");
    } else {
        // Shift elements left
        for(i = pos; i < n; i++) {
            A[i - 1] = A[i];
        }
        n--; // Reduce size

        // Print the updated array
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }

    return 0;
}

